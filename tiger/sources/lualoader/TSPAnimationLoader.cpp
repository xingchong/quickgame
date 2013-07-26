/*
** Lua binding: TSPAnimation
** Generated automatically by tolua++-1.0.92 on Fri Jul 26 08:18:43 2013.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_TSPAnimation_open (lua_State* tolua_S);

#include "TSPAnimation.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include "SPArmature.h"
#include "sigslot.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_TSPAnimation (lua_State* tolua_S)
{
 TSPAnimation* self = (TSPAnimation*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"TSPAnimation");
 tolua_usertype(tolua_S,"CCLayer");
 tolua_usertype(tolua_S,"CCTouch");
 tolua_usertype(tolua_S,"sigslot::has_slots<>");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"CCEvent");
}

/* method: new of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_new00
static int tolua_TSPAnimation_TSPAnimation_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TSPAnimation* tolua_ret = (TSPAnimation*)  Mtolua_new((TSPAnimation)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TSPAnimation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_new00_local
static int tolua_TSPAnimation_TSPAnimation_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TSPAnimation* tolua_ret = (TSPAnimation*)  Mtolua_new((TSPAnimation)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TSPAnimation");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_delete00
static int tolua_TSPAnimation_TSPAnimation_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_create00
static int tolua_TSPAnimation_TSPAnimation_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* armatureName = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* plistPath = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   TSPAnimation* tolua_ret = (TSPAnimation*)  TSPAnimation::create(armatureName,plistPath);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TSPAnimation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_init00
static int tolua_TSPAnimation_TSPAnimation_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  std::string armatureName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  std::string plistPath = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(armatureName,plistPath);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_update00
static int tolua_TSPAnimation_TSPAnimation_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: play of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_play00
static int tolua_TSPAnimation_TSPAnimation_play00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  const char* movName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'play'", NULL);
#endif
  {
   self->play(movName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'play'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSelfToParent of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_addSelfToParent00
static int tolua_TSPAnimation_TSPAnimation_addSelfToParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  CCNode* parent = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSelfToParent'", NULL);
#endif
  {
   self->addSelfToParent(parent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addSelfToParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_setPosition00
static int tolua_TSPAnimation_TSPAnimation_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  float _x = ((float)  tolua_tonumber(tolua_S,2,0));
  float _y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(_x,_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionX of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_setPositionX00
static int tolua_TSPAnimation_TSPAnimation_setPositionX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  float _x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionX'", NULL);
#endif
  {
   self->setPositionX(_x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionY of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_setPositionY00
static int tolua_TSPAnimation_TSPAnimation_setPositionY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  float _y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionY'", NULL);
#endif
  {
   self->setPositionY(_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotation of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_setRotation00
static int tolua_TSPAnimation_TSPAnimation_setRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  float _r = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotation'", NULL);
#endif
  {
   self->setRotation(_r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_setScale00
static int tolua_TSPAnimation_TSPAnimation_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  float _scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(_scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleX of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_setScaleX00
static int tolua_TSPAnimation_TSPAnimation_setScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  float _scaleX = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleX'", NULL);
#endif
  {
   self->setScaleX(_scaleX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleY of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_setScaleY00
static int tolua_TSPAnimation_TSPAnimation_setScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  float _scaleY = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleY'", NULL);
#endif
  {
   self->setScaleY(_scaleY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_ccTouchBegan00
static int tolua_TSPAnimation_TSPAnimation_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_ccTouchMoved00
static int tolua_TSPAnimation_TSPAnimation_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_ccTouchEnded00
static int tolua_TSPAnimation_TSPAnimation_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchBubble of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_setTouchBubble00
static int tolua_TSPAnimation_TSPAnimation_setTouchBubble00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
  bool pTouchBubble = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchBubble'", NULL);
#endif
  {
   self->setTouchBubble(pTouchBubble);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchBubble'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchBubble of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_isTouchBubble00
static int tolua_TSPAnimation_TSPAnimation_isTouchBubble00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchBubble'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchBubble();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchBubble'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_TSPAnimation_TSPAnimation_onExit00
static int tolua_TSPAnimation_TSPAnimation_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TSPAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __sigslot of class  TSPAnimation */
#ifndef TOLUA_DISABLE_tolua_get_TSPAnimation___sigslot__has_slots____
static int tolua_get_TSPAnimation___sigslot__has_slots____(lua_State* tolua_S)
{
  TSPAnimation* self = (TSPAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__sigslot'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<sigslot::has_slots<>*>(self), "sigslot::has_slots<>");
#else
   tolua_pushusertype(tolua_S,(void*)((sigslot::has_slots<>*)self), "sigslot::has_slots<>");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_TSPAnimation_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"TSPAnimation","TSPAnimation","CCLayer",tolua_collect_TSPAnimation);
  #else
  tolua_cclass(tolua_S,"TSPAnimation","TSPAnimation","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"TSPAnimation");
   tolua_function(tolua_S,"new",tolua_TSPAnimation_TSPAnimation_new00);
   tolua_function(tolua_S,"new_local",tolua_TSPAnimation_TSPAnimation_new00_local);
   tolua_function(tolua_S,".call",tolua_TSPAnimation_TSPAnimation_new00_local);
   tolua_function(tolua_S,"delete",tolua_TSPAnimation_TSPAnimation_delete00);
   tolua_function(tolua_S,"create",tolua_TSPAnimation_TSPAnimation_create00);
   tolua_function(tolua_S,"init",tolua_TSPAnimation_TSPAnimation_init00);
   tolua_function(tolua_S,"update",tolua_TSPAnimation_TSPAnimation_update00);
   tolua_function(tolua_S,"play",tolua_TSPAnimation_TSPAnimation_play00);
   tolua_function(tolua_S,"addSelfToParent",tolua_TSPAnimation_TSPAnimation_addSelfToParent00);
   tolua_function(tolua_S,"setPosition",tolua_TSPAnimation_TSPAnimation_setPosition00);
   tolua_function(tolua_S,"setPositionX",tolua_TSPAnimation_TSPAnimation_setPositionX00);
   tolua_function(tolua_S,"setPositionY",tolua_TSPAnimation_TSPAnimation_setPositionY00);
   tolua_function(tolua_S,"setRotation",tolua_TSPAnimation_TSPAnimation_setRotation00);
   tolua_function(tolua_S,"setScale",tolua_TSPAnimation_TSPAnimation_setScale00);
   tolua_function(tolua_S,"setScaleX",tolua_TSPAnimation_TSPAnimation_setScaleX00);
   tolua_function(tolua_S,"setScaleY",tolua_TSPAnimation_TSPAnimation_setScaleY00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_TSPAnimation_TSPAnimation_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_TSPAnimation_TSPAnimation_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_TSPAnimation_TSPAnimation_ccTouchEnded00);
   tolua_function(tolua_S,"setTouchBubble",tolua_TSPAnimation_TSPAnimation_setTouchBubble00);
   tolua_function(tolua_S,"isTouchBubble",tolua_TSPAnimation_TSPAnimation_isTouchBubble00);
   tolua_function(tolua_S,"onExit",tolua_TSPAnimation_TSPAnimation_onExit00);
   tolua_variable(tolua_S,"__sigslot__has_slots____",tolua_get_TSPAnimation___sigslot__has_slots____,NULL);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_TSPAnimation (lua_State* tolua_S) {
 return tolua_TSPAnimation_open(tolua_S);
};
#endif

