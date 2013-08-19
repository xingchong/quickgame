#include "HttpSever.h"
#include <zlib.h>
#include "Event.h"
#include "EventInvocation.h"
#define segment_size 1000000

HttpSever * HttpSever::_instance=NULL;

HttpSever::HttpSever(void)
{
	
	m_scriptHandler=0;
	unzip=true;
}

HttpSever::~HttpSever(void)
{
}

HttpSever * HttpSever::sharedInstance()
{
	if(_instance == NULL)
	{
		_instance = new HttpSever();
	}
	return _instance;
}
               
void HttpSever::httpRequestCompleted(cocos2d::CCNode *sender, void *data)
{
	CCHttpResponse *response=(CCHttpResponse *)data;
	if(!response)
	{
		return ;
	}
	int stateCode = response->getResponseCode();
	if(!response->isSucceed())
	{
		CCLog("response failed");
		CCLog("error is %s",response->getErrorBuffer());
		return;
	}
	
	std::vector<char>* buffer = response->getResponseData();
	char* charArray = new char[segment_size];

	int length=0;
	std::vector<char> ::iterator ite=buffer->begin();
	while (ite != buffer->end())
	{
		charArray[length]= *ite;
		length++;
		ite++;
	}
	std::string content;
	
	if(unzip)
	{
		char * desArray=new char[segment_size];
		ungzip(charArray,length,desArray);
		content=desArray;
		delete []desArray;
	}
	else
	{
		content=charArray;
	}

	CCString *resultString=CCString::create(content);

	if(m_scriptHandler)
	{
		Event *event=Event::create(Event::HTTPRESPONSE,resultString,"CCString");
		CCScriptEngineManager::sharedManager()->getScriptEngine()->executeFunctionWithCCObject(m_scriptHandler,event,"Event");
	}
	
	delete[] charArray;	
}

void HttpSever::setunZipTrue(bool flag)
{
	unzip = flag;
}

void HttpSever::sendHttpRequest(string url,int callBack)
{
	_instance->m_scriptHandler = callBack;

	CCHttpRequest* request = new CCHttpRequest();
	request->setUrl(url.c_str());
	request->setRequestType(CCHttpRequest::kHttpGet);
	request->setResponseCallback(_instance,callfuncND_selector(HttpSever::httpRequestCompleted));
	CCHttpClient::getInstance()->send(request);

	CC_SAFE_RELEASE_NULL(request);
}


int HttpSever::ungzip(char *source, int len,char *des)
{
	int ret,have;
	int offset=0;
	z_stream d_stream;
	Byte *compr= new Byte[segment_size];
	Byte *uncompr = new Byte[segment_size * 4];
//	Byte compr[segment_size]={0}, uncompr[segment_size*4]={0};
	memcpy(compr,(Byte*)source,len);
	uLong comprLen, uncomprLen;
	comprLen =len;
	uncomprLen = segment_size*4;
	strcpy((char*)uncompr, "garbage");
	d_stream.zalloc = Z_NULL;
	d_stream.zfree = Z_NULL;
	d_stream.opaque = Z_NULL;
	d_stream.next_in = Z_NULL;  

	d_stream.avail_in = 0;
	ret = inflateInit2(&d_stream,47);
	if(ret!=Z_OK)
	{
		printf("inflateInit2 error:%d",ret);
		return ret;
		
	}

	d_stream.next_in=compr;
	d_stream.avail_in=comprLen;
	do
	{
		d_stream.next_out=uncompr;
		d_stream.avail_out=uncomprLen;
		ret = inflate(&d_stream,Z_NO_FLUSH);
		assert(ret != Z_STREAM_ERROR);
		switch (ret)
		{
		case Z_NEED_DICT:
			ret = Z_DATA_ERROR;   
		case Z_DATA_ERROR:
		case Z_MEM_ERROR:
			(void)inflateEnd(&d_stream);
			return ret;
		}
		have=uncomprLen-d_stream.avail_out;
		memcpy(des+offset,uncompr,have);
		offset+=have;
	}while(d_stream.avail_out==0);
	inflateEnd(&d_stream);
	memcpy(des+offset,"\0",1);
	delete []compr;
	delete []uncompr;
	return ret;
}


