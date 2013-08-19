//
//  TAnimationNode.cpp
//  tiger
//
//  Created by xingchong on 8/14/13.
//
//

#include "TAnimationNode.h"

TAnimationNode::TAnimationNode()
{
    
}

TAnimationNode::~TAnimationNode()
{
    
}

TAnimationNode *TAnimationNode::create()
{
    TAnimationNode *pRet = new TAnimationNode();
    if (pRet && pRet->init()) 
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

bool TAnimationNode::init()
{
    return true;
}

void TAnimationNode::update(float delta)
{
    CCNode::update(delta);
    
    this->armature->update(delta);
}

void TAnimationNode::setArmature(sp::Armature *armature)
{
    this->armature = armature;
}

Armature *TAnimationNode::getArmature()
{
    return this->armature;
}


