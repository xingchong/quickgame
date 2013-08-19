/*
** Lua binding: HttpSever
** Generated automatically by tolua++-1.0.92 on 10/29/12 14:47:58.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"
#include "tolua_fix.h"

/* Exported function */
TOLUA_API int  tolua_HttpSever_open (lua_State* tolua_S);

#include "HttpSever.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_HttpSever (lua_State* tolua_S)
{
 HttpSever* self = (HttpSever*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"HttpSever");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"LUA_FUNCTION");
}

/* method: new of class  HttpSever */
#ifndef TOLUA_DISABLE_tolua_HttpSever_HttpSever_new00
static int tolua_HttpSever_HttpSever_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HttpSever",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   HttpSever* tolua_ret = (HttpSever*)  Mtolua_new((HttpSever)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"HttpSever");
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

/* method: new_local of class  HttpSever */
#ifndef TOLUA_DISABLE_tolua_HttpSever_HttpSever_new00_local
static int tolua_HttpSever_HttpSever_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HttpSever",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   HttpSever* tolua_ret = (HttpSever*)  Mtolua_new((HttpSever)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"HttpSever");
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

/* method: delete of class  HttpSever */
#ifndef TOLUA_DISABLE_tolua_HttpSever_HttpSever_delete00
static int tolua_HttpSever_HttpSever_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HttpSever",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  HttpSever* self = (HttpSever*)  tolua_tousertype(tolua_S,1,0);
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

/* method: sharedInstance of class  HttpSever */
#ifndef TOLUA_DISABLE_tolua_HttpSever_HttpSever_sharedInstance00
static int tolua_HttpSever_HttpSever_sharedInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HttpSever",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   HttpSever* tolua_ret = (HttpSever*)  HttpSever::sharedInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"HttpSever");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sendHttpRequest of class  HttpSever */
#ifndef TOLUA_DISABLE_tolua_HttpSever_HttpSever_sendHttpRequest00
static int tolua_HttpSever_HttpSever_sendHttpRequest00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HttpSever",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !toluafix_isfunction(tolua_S,3,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  HttpSever* self = (HttpSever*)  tolua_tousertype(tolua_S,1,0);
  string url = ((string)  tolua_tocppstring(tolua_S,2,0));
  int handle = (toluafix_ref_function(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sendHttpRequest'", NULL);
#endif
  {
   self->sendHttpRequest(url,handle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendHttpRequest'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setunZipTrue of class  HttpSever */
#ifndef TOLUA_DISABLE_tolua_HttpSever_HttpSever_setunZipTrue00
static int tolua_HttpSever_HttpSever_setunZipTrue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HttpSever",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  HttpSever* self = (HttpSever*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setunZipTrue'", NULL);
#endif
  {
   self->setunZipTrue(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setunZipTrue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_HttpSever_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"HttpSever","HttpSever","CCObject",tolua_collect_HttpSever);
  #else
  tolua_cclass(tolua_S,"HttpSever","HttpSever","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"HttpSever");
   tolua_function(tolua_S,"new",tolua_HttpSever_HttpSever_new00);
   tolua_function(tolua_S,"new_local",tolua_HttpSever_HttpSever_new00_local);
   tolua_function(tolua_S,".call",tolua_HttpSever_HttpSever_new00_local);
   tolua_function(tolua_S,"delete",tolua_HttpSever_HttpSever_delete00);
   tolua_function(tolua_S,"sharedInstance",tolua_HttpSever_HttpSever_sharedInstance00);
   tolua_function(tolua_S,"sendHttpRequest",tolua_HttpSever_HttpSever_sendHttpRequest00);
   tolua_function(tolua_S,"setunZipTrue",tolua_HttpSever_HttpSever_setunZipTrue00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_HttpSever (lua_State* tolua_S) {
 return tolua_HttpSever_open(tolua_S);
};
#endif

