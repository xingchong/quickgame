#include "TSPAnimation.h"
#include "SPArmatureDataManager.h"
#include "SPBatchNodeManager.h"
#include "SPSpriteDisplayData.h"

using namespace cocos2d;

TSPAnimation:: TSPAnimation():
m_touchBubble(true)
{
    this->armatureName = armatureName;
    this->plistPath    = plistPath;
}

TSPAnimation::~TSPAnimation()
{
}

TSPAnimation* TSPAnimation::create(const char *armatureName, const char *plistPath)
{
    TSPAnimation *pRet = new TSPAnimation();
    if (pRet && pRet->init(armatureName, plistPath)) 
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


bool TSPAnimation::init(std::string armatureName, std::string plistPath)
{
    bool bRet = false;
    if (!CCLayer::init())
    {
        return bRet;
    }
    
    this->setTouchEnabled(true);
    
    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, 0, true);
    
    int pos = plistPath.find_last_of(".");
    std::string imagePath      = plistPath.substr(0, pos).append(".png");
    std::string configFilePath = plistPath.substr(0, pos).append(".xml");
    do 
    {
		BatchNodeManager::sharedBatchNodeManager()->initWithLayer(this, armatureName);

        ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo(armatureName.c_str(), "", imagePath.c_str(), plistPath.c_str(), configFilePath.c_str());
        
        armature = Armature::create(armatureName.c_str());

        bRet = true;
    } while (0);

    return bRet;
}

void TSPAnimation::update(float dt)
{
    armature->update(dt);
}

void TSPAnimation::play(const char *movName)
{
    armature->getAnimation()->play(movName);
    scheduleUpdate();
}

void TSPAnimation::addSelfToParent(CCNode *parent)
{
    parent->addChild(this);
}

void TSPAnimation::setPosition(float _x, float _y)
{
    armature->setPosition(_x, _y);
}

void TSPAnimation::setPositionX(float _x)
{
    armature->setPositionX(_x);
}

void TSPAnimation::setPositionY(float _y)
{
    armature->setPositionY(_y);
}

void TSPAnimation::setRotation(float _r)
{
    armature->setRotation(_r);
}

void TSPAnimation::setScale(float _scale)
{
    armature->setScale(_scale);
}

void TSPAnimation::setScaleX(float _scaleX)
{
    armature->setScaleX(_scaleX);
}

void TSPAnimation::setScaleY(float _scaleY)
{
    armature->setScaleY(_scaleY);
}


bool TSPAnimation::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
{
    CCLog("=======%s=====", "TSPAnimation::ccTouchBegan");
    if (m_touchBubble)
    {
        return false;// touchEvent go on
    }else
    {
        return true;// eat touchEvent
    }
    
}

void TSPAnimation::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
}

void TSPAnimation::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
{
}

void TSPAnimation::setTouchBubble(bool pTouchBubble)
{
    this->m_touchBubble = pTouchBubble;
}

bool TSPAnimation::isTouchBubble()
{
    return this->m_touchBubble;
}

void TSPAnimation::onExit()
{
    CCLayer::onExit();
    
    //BatchNodeManager::sharedBatchNodeManager()->removeBatchNodes(armatureName);
    
    //ArmatureDataManager::sharedArmatureDataManager()->removeAll();
}

