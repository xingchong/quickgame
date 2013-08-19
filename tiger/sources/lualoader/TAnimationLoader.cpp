/*
** Lua binding: TAnimation
** Generated automatically by tolua++-1.0.92 on Sat Aug 17 23:52:42 2013.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_TAnimation_open (lua_State* tolua_S);

#include "TAnimation.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_TAnimation (lua_State* tolua_S)
{
 TAnimation* self = (TAnimation*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCLayer");
 tolua_usertype(tolua_S,"TAnimation");
}

/* method: new of class  TAnimation */
#ifndef TOLUA_DISABLE_tolua_TAnimation_TAnimation_new00
static int tolua_TAnimation_TAnimation_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TAnimation* tolua_ret = (TAnimation*)  Mtolua_new((TAnimation)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TAnimation");
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

/* method: new_local of class  TAnimation */
#ifndef TOLUA_DISABLE_tolua_TAnimation_TAnimation_new00_local
static int tolua_TAnimation_TAnimation_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TAnimation* tolua_ret = (TAnimation*)  Mtolua_new((TAnimation)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TAnimation");
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

/* method: delete of class  TAnimation */
#ifndef TOLUA_DISABLE_tolua_TAnimation_TAnimation_delete00
static int tolua_TAnimation_TAnimation_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TAnimation* self = (TAnimation*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  TAnimation */
#ifndef TOLUA_DISABLE_tolua_TAnimation_TAnimation_create00
static int tolua_TAnimation_TAnimation_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TAnimation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  string layerName = ((string)  tolua_tocppstring(tolua_S,2,0));
  {
   TAnimation* tolua_ret = (TAnimation*)  TAnimation::create(layerName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TAnimation");
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

/* method: init of class  TAnimation */
#ifndef TOLUA_DISABLE_tolua_TAnimation_TAnimation_init00
static int tolua_TAnimation_TAnimation_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TAnimation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TAnimation* self = (TAnimation*)  tolua_tousertype(tolua_S,1,0);
  string layerName = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(layerName);
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

/* method: addArmatureData of class  TAnimation */
#ifndef TOLUA_DISABLE_tolua_TAnimation_TAnimation_addArmatureData00
static int tolua_TAnimation_TAnimation_addArmatureData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TAnimation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TAnimation* self = (TAnimation*)  tolua_tousertype(tolua_S,1,0);
  string _armatureName = ((string)  tolua_tocppstring(tolua_S,2,0));
  string _plistPath = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addArmatureData'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->addArmatureData(_armatureName,_plistPath);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addArmatureData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createArmature of class  TAnimation */
#ifndef TOLUA_DISABLE_tolua_TAnimation_TAnimation_createArmature00
static int tolua_TAnimation_TAnimation_createArmature00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TAnimation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TAnimation* self = (TAnimation*)  tolua_tousertype(tolua_S,1,0);
  string _armatureName = ((string)  tolua_tocppstring(tolua_S,2,0));
  string _movName = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createArmature'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->createArmature(_armatureName,_movName);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createArmature'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  TAnimation */
#ifndef TOLUA_DISABLE_tolua_TAnimation_TAnimation_update00
static int tolua_TAnimation_TAnimation_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TAnimation* self = (TAnimation*)  tolua_tousertype(tolua_S,1,0);
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(f);
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

/* Open function */
TOLUA_API int tolua_TAnimation_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"TAnimation","TAnimation","CCLayer",tolua_collect_TAnimation);
  #else
  tolua_cclass(tolua_S,"TAnimation","TAnimation","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"TAnimation");
   tolua_function(tolua_S,"new",tolua_TAnimation_TAnimation_new00);
   tolua_function(tolua_S,"new_local",tolua_TAnimation_TAnimation_new00_local);
   tolua_function(tolua_S,".call",tolua_TAnimation_TAnimation_new00_local);
   tolua_function(tolua_S,"delete",tolua_TAnimation_TAnimation_delete00);
   tolua_function(tolua_S,"create",tolua_TAnimation_TAnimation_create00);
   tolua_function(tolua_S,"init",tolua_TAnimation_TAnimation_init00);
   tolua_function(tolua_S,"addArmatureData",tolua_TAnimation_TAnimation_addArmatureData00);
   tolua_function(tolua_S,"createArmature",tolua_TAnimation_TAnimation_createArmature00);
   tolua_function(tolua_S,"update",tolua_TAnimation_TAnimation_update00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_TAnimation (lua_State* tolua_S) {
 return tolua_TAnimation_open(tolua_S);
};
#endif

