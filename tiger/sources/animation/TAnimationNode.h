//
//  TAnimationNode.h
//  tiger
//
//  Created by xingchong on 8/14/13.
//
//

#ifndef tiger_TAnimationNode_h
#define tiger_TAnimationNode_h

#include "cocos2d.h"
#include "SPArmature.h"

USING_NS_CC;

using namespace sp;

class TAnimationNode : public CCNode {
    
public:
    
    TAnimationNode();
    
    virtual ~TAnimationNode();
    
    virtual bool init();

    static TAnimationNode *create();

    virtual void update(float delta);
    
    Armature *getArmature();
    
    void setArmature(Armature *armature);

private:

    Armature *armature;

};



#endif
