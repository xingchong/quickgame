#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "SimpleAudioEngine.h"

#include "SPArmature.h"
#include "sigslot.h"

using namespace sp;


class TSPAnimation : public CCLayer, public sigslot::has_slots<>
{
public:
    TSPAnimation();
    
    ~TSPAnimation();
    
    static TSPAnimation* create(const char *armatureName, const char *plistPath);
    
    virtual bool init(std::string armatureName, std::string plistPath);

    void update(float dt);
    
    virtual void play(const char *movName);
    
    virtual void addSelfToParent(CCNode* parent);
    
    virtual void setPosition(float _x, float _y);
    virtual void setPositionX(float _x);
    virtual void setPositionY(float _y);
    
    virtual void setRotation(float _r);
    
    virtual void setScale(float _scale);
    virtual void setScaleX(float _scaleX);
    virtual void setScaleY(float _scaleY);
    
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);

    virtual void setTouchBubble(bool pTouchBubble);
    virtual bool isTouchBubble();
    
    virtual void onExit();
    
private:
    Armature *armature;
    std::string armatureName;
    std::string plistPath;
    bool m_touchBubble;
    
};

#endif  // __HELLOWORLD_SCENE_H__