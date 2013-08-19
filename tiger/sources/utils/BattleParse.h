//
//  BattleParse.h
//  tiger
//
//  Created by xingchong on 8/5/13.
//
//

#ifndef tiger_BattleParse_h
#define tiger_BattleParse_h


#include "cocos2d.h"
#include "tinyxml.h"

USING_NS_CC;

class BattleParse : public CCObject
{
public:
    
    BattleParse();
    
    ~BattleParse();
    
    static BattleParse* create(const char* _xml);
    
    virtual bool init(const char* _xml);
    
    void play();
    
    CCArray* getBattleRound();

private:
    
    TiXmlElement	*m_root;
    CCArray         *m_battleRound;

    
};


#endif
