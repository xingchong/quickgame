//
//  BattleParse.cpp
//  tiger
//
//  Created by xingchong on 8/5/13.
//
//

#include "BattleParse.h"


BattleParse::BattleParse()
{
    
}

BattleParse::~BattleParse()
{
    
}

BattleParse* BattleParse::create(const char * _xml)
{ 
    BattleParse *pRet = new BattleParse(); 
    if (pRet && pRet->init(_xml))
    { 
        pRet->autorelease(); 
        return pRet; 
    }
    else
    {
        delete pRet;
        pRet = NULL;
        return NULL;
    }
}

bool BattleParse::init(const char* _xml)
{
//    const char* _xml = "res/battle_report/battle.xml";
    
    const char *fullPath = CCFileUtils::sharedFileUtils()->fullPathForFilename(_xml).c_str();
  
    unsigned long	_size;
    const char *_pFileContent = (char*)CCFileUtils::sharedFileUtils()->getFileData(fullPath , "r", &_size);
    
    TiXmlDocument	_document;
    _document.Parse(_pFileContent, 0, TIXML_ENCODING_UTF8);
    
    m_root = _document.RootElement();
    CCAssert(m_root, "XML error  or  XML is empty.");
    
    TiXmlElement *firstRound = m_root->FirstChildElement();
    int i = 0;
    m_battleRound = CCArray::create();
    while (firstRound)
    {
        i++;
        CCLog("round->Value()...==%d===%s=========", i, firstRound->Value());
        
        std::string roundName = firstRound->Value();
        CCDictionary *moveDic = CCDictionary::create();
        CCArray *targetArray  = CCArray::create();
        
        TiXmlElement *move =  firstRound->FirstChildElement();
        while (move)
        {
            std::string moveValue = move->Value();
            std::string moveText  = move->GetText();
            if (moveValue.compare("me")==0)
            {
                moveDic->setObject(CCString::create(moveText), moveValue);
            }else if (moveValue.compare("target")==0)
            {
                targetArray->addObject(CCString::create(moveText));
            }else if (moveValue.compare("action")==0)
            {
                moveDic->setObject(CCString::create(moveText), moveValue);
            }
            
//            CCLog("move->Value()...------%s------%s---", move->Value(),move->GetText());
            
            move = move->NextSiblingElement();
        }
        moveDic->setObject(targetArray, "target");
        m_battleRound->addObject(moveDic);
        
        firstRound = firstRound->NextSiblingElement();
    }
    
    return true;
}


CCArray* BattleParse::getBattleRound()
{
    return m_battleRound;
}


void BattleParse::play()
{
    CCLog("===%s===", "battle play ...");
    
    TiXmlElement *firstRound = m_root->FirstChildElement();
    int i = 0;
    while (firstRound)
    {
        i++;
        
        CCLog("round->Value()...==%d===%s=========", i, firstRound->Value());
        
        TiXmlElement *move =  firstRound->FirstChildElement();
        while (move)
        {
            CCLog("move->Value()...------%s------%s---", move->Value(),
                  move->GetText());
            move = move->NextSiblingElement();
        }
        
        firstRound = firstRound->NextSiblingElement();
    }

}


