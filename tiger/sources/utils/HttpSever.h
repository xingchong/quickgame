//#pragma once
#include "cocos2d.h"
#include "curl/curl.h"
#include "HttpClient.h"
#include "HttpRequest.h"
#include "HttpResponse.h"
#include "EventDispather.h"


using namespace  cocos2d;
using namespace std;
class HttpSever : public CCObject , public EventDispather
{
public:
	HttpSever(void);
	~HttpSever(void);
public:
	static HttpSever *sharedInstance();

	void sendHttpRequest(string url,int callBack);
	void setunZipTrue(bool flag);

private:

	void httpRequestCompleted(cocos2d::CCNode *sender, void *data);

	int ungzip(char *source, int len,char *des);
	static HttpSever *_instance;
	int m_scriptHandler;
	bool unzip;
};

