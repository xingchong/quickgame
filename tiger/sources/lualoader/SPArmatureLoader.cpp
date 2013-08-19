/*
** Lua binding: SPArmature
** Generated automatically by tolua++-1.0.92 on Thu Aug 15 14:31:55 2013.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_SPArmature_open (lua_State* tolua_S);

#include "SPArmature.h"
#include "SPBatchNode.h"
#include "SPAnimation.h"
#include "SPBoneData.h"
#include "SPDisplayData.h"
#include "SPArmatureData.h"
#include "SPBone.h"
#include "cocos2d.h"
#include "sigslot.h"

using namespace sp;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Armature (lua_State* tolua_S)
{
 Armature* self = (Armature*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CCRect (lua_State* tolua_S)
{
 CCRect* self = (CCRect*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"CCRect");
 tolua_usertype(tolua_S,"Armature");
 tolua_usertype(tolua_S,"sigslot::has_slots<>");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"CCDictionary");
 tolua_usertype(tolua_S,"Bone");
}

/* method: create of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_create00
static int tolua_SPArmature_Armature_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Armature* tolua_ret = (Armature*)  Armature::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
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

/* method: create of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_create01
static int tolua_SPArmature_Armature_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* _name = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Armature* tolua_ret = (Armature*)  Armature::create(_name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
  }
 }
 return 1;
tolua_lerror:
 return tolua_SPArmature_Armature_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_new00
static int tolua_SPArmature_Armature_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Armature* tolua_ret = (Armature*)  Mtolua_new((Armature)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
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

/* method: new_local of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_new00_local
static int tolua_SPArmature_Armature_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Armature* tolua_ret = (Armature*)  Mtolua_new((Armature)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
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

/* method: delete of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_delete00
static int tolua_SPArmature_Armature_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: init of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_init00
static int tolua_SPArmature_Armature_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
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

/* method: init of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_init01
static int tolua_SPArmature_Armature_init01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  const char* _name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(_name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_SPArmature_Armature_init00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_addBone00
static int tolua_SPArmature_Armature_addBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Bone",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Bone* _bone = ((Bone*)  tolua_tousertype(tolua_S,2,0));
  const char* _parentName = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBone'", NULL);
#endif
  {
   self->addBone(_bone,_parentName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_getBone00
static int tolua_SPArmature_Armature_getBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  const char* _name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBone'", NULL);
#endif
  {
   Bone* tolua_ret = (Bone*)  self->getBone(_name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Bone");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: changeBoneParent of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_changeBoneParent00
static int tolua_SPArmature_Armature_changeBoneParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Bone",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Bone* _bone = ((Bone*)  tolua_tousertype(tolua_S,2,0));
  const char* _parentName = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'changeBoneParent'", NULL);
#endif
  {
   self->changeBoneParent(_bone,_parentName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'changeBoneParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_removeBone00
static int tolua_SPArmature_Armature_removeBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Bone",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Bone* _bone = ((Bone*)  tolua_tousertype(tolua_S,2,0));
  bool _cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBone'", NULL);
#endif
  {
   self->removeBone(_bone,_cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZOrder of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_setZOrder00
static int tolua_SPArmature_Armature_setZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  int _zOrder = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZOrder'", NULL);
#endif
  {
   self->setZOrder(_zOrder);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getZOrder of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_getZOrder00
static int tolua_SPArmature_Armature_getZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getZOrder'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getZOrder();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoneDic of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_getBoneDic00
static int tolua_SPArmature_Armature_getBoneDic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoneDic'", NULL);
#endif
  {
   CCDictionary* tolua_ret = (CCDictionary*)  self->getBoneDic();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoneDic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_setPosition00
static int tolua_SPArmature_Armature_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setPositionX of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_setPositionX00
static int tolua_SPArmature_Armature_setPositionX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setPositionY of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_setPositionY00
static int tolua_SPArmature_Armature_setPositionY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setRotation of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_setRotation00
static int tolua_SPArmature_Armature_setRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setScale of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_setScale00
static int tolua_SPArmature_Armature_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setScaleX of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_setScaleX00
static int tolua_SPArmature_Armature_setScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setScaleY of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_setScaleY00
static int tolua_SPArmature_Armature_setScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getBoundingBox of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_getBoundingBox00
static int tolua_SPArmature_Armature_getBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoundingBox'", NULL);
#endif
  {
   CCRect tolua_ret = (CCRect)  self->getBoundingBox();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCRect));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoneAtPoint of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_getBoneAtPoint00
static int tolua_SPArmature_Armature_getBoneAtPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  float _x = ((float)  tolua_tonumber(tolua_S,2,0));
  float _y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoneAtPoint'", NULL);
#endif
  {
   Bone* tolua_ret = (Bone*)  self->getBoneAtPoint(_x,_y);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Bone");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoneAtPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onMovementEvent of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_onMovementEvent00
static int tolua_SPArmature_Armature_onMovementEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  const char* _eventType = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* _movementID = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onMovementEvent'", NULL);
#endif
  {
   self->onMovementEvent(_eventType,_movementID);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onMovementEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_update00
static int tolua_SPArmature_Armature_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: editName of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_editName00
static int tolua_SPArmature_Armature_editName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  const char* _name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'editName'", NULL);
#endif
  {
   self->editName(_name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'editName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEditBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_addEditBone00
static int tolua_SPArmature_Armature_addEditBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Bone",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Bone* _bone = ((Bone*)  tolua_tousertype(tolua_S,2,0));
  const char* _parentName = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEditBone'", NULL);
#endif
  {
   self->addEditBone(_bone,_parentName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEditBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeEditBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_removeEditBone00
static int tolua_SPArmature_Armature_removeEditBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Bone",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Bone* _bone = ((Bone*)  tolua_tousertype(tolua_S,2,0));
  bool _cleanUp = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeEditBone'", NULL);
#endif
  {
   self->removeEditBone(_bone,_cleanUp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeEditBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: changeEditBoneParent of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_changeEditBoneParent00
static int tolua_SPArmature_Armature_changeEditBoneParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Bone",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Bone* _bone = ((Bone*)  tolua_tousertype(tolua_S,2,0));
  const char* _parentName = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'changeEditBoneParent'", NULL);
#endif
  {
   self->changeEditBoneParent(_bone,_parentName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'changeEditBoneParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: saveJsonToFile of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_saveJsonToFile00
static int tolua_SPArmature_Armature_saveJsonToFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  const char* _fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'saveJsonToFile'", NULL);
#endif
  {
   self->saveJsonToFile(_fileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'saveJsonToFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplayRenderNode of class  Armature */
#ifndef TOLUA_DISABLE_tolua_SPArmature_Armature_getDisplayRenderNode00
static int tolua_SPArmature_Armature_getDisplayRenderNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayRenderNode'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getDisplayRenderNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayRenderNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __sigslot of class  Armature */
#ifndef TOLUA_DISABLE_tolua_get_Armature___sigslot__has_slots____
static int tolua_get_Armature___sigslot__has_slots____(lua_State* tolua_S)
{
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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
TOLUA_API int tolua_SPArmature_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Armature","Armature","CCObject",tolua_collect_Armature);
  #else
  tolua_cclass(tolua_S,"Armature","Armature","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Armature");
   tolua_function(tolua_S,"create",tolua_SPArmature_Armature_create00);
   tolua_function(tolua_S,"create",tolua_SPArmature_Armature_create01);
   tolua_function(tolua_S,"new",tolua_SPArmature_Armature_new00);
   tolua_function(tolua_S,"new_local",tolua_SPArmature_Armature_new00_local);
   tolua_function(tolua_S,".call",tolua_SPArmature_Armature_new00_local);
   tolua_function(tolua_S,"delete",tolua_SPArmature_Armature_delete00);
   tolua_function(tolua_S,"init",tolua_SPArmature_Armature_init00);
   tolua_function(tolua_S,"init",tolua_SPArmature_Armature_init01);
   tolua_function(tolua_S,"addBone",tolua_SPArmature_Armature_addBone00);
   tolua_function(tolua_S,"getBone",tolua_SPArmature_Armature_getBone00);
   tolua_function(tolua_S,"changeBoneParent",tolua_SPArmature_Armature_changeBoneParent00);
   tolua_function(tolua_S,"removeBone",tolua_SPArmature_Armature_removeBone00);
   tolua_function(tolua_S,"setZOrder",tolua_SPArmature_Armature_setZOrder00);
   tolua_function(tolua_S,"getZOrder",tolua_SPArmature_Armature_getZOrder00);
   tolua_function(tolua_S,"getBoneDic",tolua_SPArmature_Armature_getBoneDic00);
   tolua_function(tolua_S,"setPosition",tolua_SPArmature_Armature_setPosition00);
   tolua_function(tolua_S,"setPositionX",tolua_SPArmature_Armature_setPositionX00);
   tolua_function(tolua_S,"setPositionY",tolua_SPArmature_Armature_setPositionY00);
   tolua_function(tolua_S,"setRotation",tolua_SPArmature_Armature_setRotation00);
   tolua_function(tolua_S,"setScale",tolua_SPArmature_Armature_setScale00);
   tolua_function(tolua_S,"setScaleX",tolua_SPArmature_Armature_setScaleX00);
   tolua_function(tolua_S,"setScaleY",tolua_SPArmature_Armature_setScaleY00);
   tolua_function(tolua_S,"getBoundingBox",tolua_SPArmature_Armature_getBoundingBox00);
   tolua_function(tolua_S,"getBoneAtPoint",tolua_SPArmature_Armature_getBoneAtPoint00);
   tolua_function(tolua_S,"onMovementEvent",tolua_SPArmature_Armature_onMovementEvent00);
   tolua_function(tolua_S,"update",tolua_SPArmature_Armature_update00);
   tolua_function(tolua_S,"editName",tolua_SPArmature_Armature_editName00);
   tolua_function(tolua_S,"addEditBone",tolua_SPArmature_Armature_addEditBone00);
   tolua_function(tolua_S,"removeEditBone",tolua_SPArmature_Armature_removeEditBone00);
   tolua_function(tolua_S,"changeEditBoneParent",tolua_SPArmature_Armature_changeEditBoneParent00);
   tolua_function(tolua_S,"saveJsonToFile",tolua_SPArmature_Armature_saveJsonToFile00);
   tolua_function(tolua_S,"getDisplayRenderNode",tolua_SPArmature_Armature_getDisplayRenderNode00);
   tolua_variable(tolua_S,"__sigslot__has_slots____",tolua_get_Armature___sigslot__has_slots____,NULL);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_SPArmature (lua_State* tolua_S) {
 return tolua_SPArmature_open(tolua_S);
};
#endif

