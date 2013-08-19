#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "SimpleAudioEngine.h"

//#include "SPArmature.h"
//#include "sigslot.h"

#include "CSArmature.h"

using namespace cs;

USING_NS_CC;


class TAnimation : public CCLayer
{
    
public:
    TAnimation();
    
    ~TAnimation();
    
    static TAnimation* create(string layerName);
    
    bool init(string layerName);
    
    bool addArmatureData(string _armatureName, string _plistPath);
    
    void *createArmature(string _armatureName, string _movName);
    
    virtual void update(float f);
    
private:
    CCArray *m_armatureList;
    
    
};

#endif  // __HELLOWORLD_SCENE_H__