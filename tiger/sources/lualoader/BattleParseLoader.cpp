/*
** Lua binding: BattleParse
** Generated automatically by tolua++-1.0.92 on Thu Aug  8 19:36:51 2013.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_BattleParse_open (lua_State* tolua_S);

#include "BattleParse.h"
#include "cocos2d.h"
#include "tinyxml.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_BattleParse (lua_State* tolua_S)
{
 BattleParse* self = (BattleParse*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"BattleParse");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"CCArray");
}

/* method: new of class  BattleParse */
#ifndef TOLUA_DISABLE_tolua_BattleParse_BattleParse_new00
static int tolua_BattleParse_BattleParse_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"BattleParse",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   BattleParse* tolua_ret = (BattleParse*)  Mtolua_new((BattleParse)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"BattleParse");
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

/* method: new_local of class  BattleParse */
#ifndef TOLUA_DISABLE_tolua_BattleParse_BattleParse_new00_local
static int tolua_BattleParse_BattleParse_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"BattleParse",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   BattleParse* tolua_ret = (BattleParse*)  Mtolua_new((BattleParse)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"BattleParse");
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

/* method: delete of class  BattleParse */
#ifndef TOLUA_DISABLE_tolua_BattleParse_BattleParse_delete00
static int tolua_BattleParse_BattleParse_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"BattleParse",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  BattleParse* self = (BattleParse*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  BattleParse */
#ifndef TOLUA_DISABLE_tolua_BattleParse_BattleParse_create00
static int tolua_BattleParse_BattleParse_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"BattleParse",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* _xml = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   BattleParse* tolua_ret = (BattleParse*)  BattleParse::create(_xml);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"BattleParse");
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

/* method: init of class  BattleParse */
#ifndef TOLUA_DISABLE_tolua_BattleParse_BattleParse_init00
static int tolua_BattleParse_BattleParse_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"BattleParse",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  BattleParse* self = (BattleParse*)  tolua_tousertype(tolua_S,1,0);
  const char* _xml = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(_xml);
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

/* method: play of class  BattleParse */
#ifndef TOLUA_DISABLE_tolua_BattleParse_BattleParse_play00
static int tolua_BattleParse_BattleParse_play00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"BattleParse",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  BattleParse* self = (BattleParse*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'play'", NULL);
#endif
  {
   self->play();
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

/* method: getBattleRound of class  BattleParse */
#ifndef TOLUA_DISABLE_tolua_BattleParse_BattleParse_getBattleRound00
static int tolua_BattleParse_BattleParse_getBattleRound00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"BattleParse",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  BattleParse* self = (BattleParse*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBattleRound'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getBattleRound();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBattleRound'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_BattleParse_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"BattleParse","BattleParse","CCObject",tolua_collect_BattleParse);
  #else
  tolua_cclass(tolua_S,"BattleParse","BattleParse","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"BattleParse");
   tolua_function(tolua_S,"new",tolua_BattleParse_BattleParse_new00);
   tolua_function(tolua_S,"new_local",tolua_BattleParse_BattleParse_new00_local);
   tolua_function(tolua_S,".call",tolua_BattleParse_BattleParse_new00_local);
   tolua_function(tolua_S,"delete",tolua_BattleParse_BattleParse_delete00);
   tolua_function(tolua_S,"create",tolua_BattleParse_BattleParse_create00);
   tolua_function(tolua_S,"init",tolua_BattleParse_BattleParse_init00);
   tolua_function(tolua_S,"play",tolua_BattleParse_BattleParse_play00);
   tolua_function(tolua_S,"getBattleRound",tolua_BattleParse_BattleParse_getBattleRound00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_BattleParse (lua_State* tolua_S) {
 return tolua_BattleParse_open(tolua_S);
};
#endif

