#include "TAnimation.h"
//#include "SPArmatureDataManager.h"
//#include "SPBatchNodeManager.h"
//#include "SPSpriteDisplayData.h"
//#include "CSArmature.h"
#include "CSArmatureDataManager.h"

using namespace cocos2d;

TAnimation:: TAnimation()
{
}

TAnimation::~TAnimation()
{
}


TAnimation *TAnimation::create(string _layerName)
{
    TAnimation *pRet = new TAnimation();
    if (pRet && pRet->init(_layerName))
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


bool TAnimation::init(string _layerName)
{    
//    BatchNodeManager::sharedBatchNodeManager()->initWithLayer(this, _layerName);
    
    m_armatureList = CCArray::create();
    
    m_armatureList->retain();
//    
//    
//    this->addArmatureData("zhaoyun", "animation/zhaoyun.plist");
//    //this->addArmatureData("zhugeliang", "animation/zhugeliang.plist");
//    
//    Armature *armature1 = this->createArmature("zhaoyun", "stand");
//    armature1->setPosition(100, 200);
//    
//    Armature *armature2 = this->createArmature("zhaoyun", "walk");
//    armature2->setPosition(100, 400);
//    
////    Armature *armature2 = this->createArmature("zhugeliang", "run");
////    armature2->setPosition(100, 400);
//    
//    scheduleUpdate();
    
    
    
    
    return true;
}



bool TAnimation::addArmatureData(string _armatureName, string _plistPath)
{
    bool bRet = false;
    
    int pos = _plistPath.find_last_of(".");
    std::string imagePath      = _plistPath.substr(0, pos).append(".png");
    std::string configFilePath = _plistPath.substr(0, pos).append(".xml");
    do 
    {
        //ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo(_armatureName.c_str(), "", imagePath.c_str(), _plistPath.c_str(), configFilePath.c_str());
        
        ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo(imagePath.c_str(), _plistPath.c_str(), configFilePath.c_str());

        bRet = true;
    } while (0);

    return bRet;
}


void *TAnimation::createArmature(string _armatureName, string _movName)
{
//    Armature *armature = Armature::create(_armatureName.c_str());
//    
//    armature->getAnimation()->play(_movName.c_str());
//    
//    m_armatureList->addObject(armature);
//    
//    return armature;
    
    Armature *armature = NULL;
    armature = Armature::create(_armatureName.c_str());
	armature->getAnimation()->playByIndex(0);
	armature->setPosition(ccp(100, 200));
	addChild(armature);
    
    return NULL;
}


void TAnimation::update(float f)
{
    CCLayer::update(f);
    
    CCObject *object = NULL;
    
    CCARRAY_FOREACH(m_armatureList, object)
    {
        Armature *armature = (Armature*)object;
        
        armature->update(f);
    }
    
}




