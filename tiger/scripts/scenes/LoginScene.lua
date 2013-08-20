
local LoginScene = class("LoginScene", function()
    return display.newScene("LoginScene")
end)


LoginScene.editBoxUsername = nil

LoginScene.editBoxPassword = nil

LoginScene.httpLabel = nil


function LoginScene:ctor()
    require("utils.CCBReaderLoad")
    ccb["LoginScene"] = {}
    ccb["LoginScene"]["loginButtonClick"] = LoginScene.loginButtonClick
    
    local proxy       = CCBProxy:create()
    local node        = CCBReaderLoad(LOGIN_PANEL_CCBI, proxy, true, "LoginScene")
    node:setPosition(display.right/2 - CONFIG_SCREEN_WIDTH/2, 0)
    self:addChild(node)

    --editbox
    local editbkg = CCScale9Sprite:create();
    local editBoxUsername = CCEditBox:create(CCSizeMake(300,60),editbkg);
    editBoxUsername:setReturnType(kKeyboardReturnTypeDone);
    --editBoxUsername->setFontSize(12);
    editBoxUsername:setText("");
    editBoxUsername:setFontColor(ccc3(0, 255, 0));
    editBoxUsername:setMaxLength(8);
    editBoxUsername:setPosition(ccp(display.right*0.57, display.top*0.55))
    self:addChild(editBoxUsername)
    
    local editbkg1 = CCScale9Sprite:create();
    local editBoxPassword = CCEditBox:create(CCSizeMake(300, 60),editbkg1);
    editBoxPassword:setReturnType(kKeyboardReturnTypeDone);
    editBoxPassword:setInputFlag(kEditBoxInputFlagPassword);
    editBoxPassword:setFontColor(ccc3(0, 255, 0));
    editBoxPassword:setMaxLength(8);
    --editBoxPassword->setFontSize(12);
    editBoxPassword:setText("");
    editBoxPassword:setPosition(ccp(display.right*0.57, display.top*0.43))
    self:addChild(editBoxPassword)
    
    LoginScene.editBoxUsername = editBoxUsername
    LoginScene.editBoxPassword = editBoxPassword
    
    local pUrl = "http://10.22.222.88:6001/config/json.txt"
    LoginScene.httpLabel = ui.newTTFLabel({text = pUrl, x=300, y=10})
    self:addChild(LoginScene.httpLabel)
    
    --animation
    LoginScene:addArmatureFileInfo(ANIMATION_PLAYER0_PLIST)
    local armature0 = Armature:create(ANIMATION_PLAYER0)
    armature0:getAnimation():play("stand")
    armature0:setPosition(ccp(display.right-200, 20))
    self:addChild(armature0)
    
    LoginScene:addArmatureFileInfo(ANIMATION_PLAYER3_PLIST)
    local armature1 = Armature:create(ANIMATION_PLAYER3)
    armature1:getAnimation():play("stand")
    armature1:setPosition(ccp(200, 20))
    self:addChild(armature1)

end


function LoginScene:onEnter()

    print("onEnter in LoginScene.................")

end


function LoginScene.loginButtonClick()

    local userName = LoginScene.editBoxUsername:getText()
    
    local password = LoginScene.editBoxPassword:getText()
    
    print("userName="..userName..", password="..password)
    
    
    local pUrl = "http://10.22.222.88:6001/config/json.txt"
    
    require("utils/HttpUtil")
    
    HttpUtil.requestData(LoginScene.httpCallback, pUrl)
    
    --game.enterMainScene()
end



function LoginScene.httpCallback(dict)

    local name    = dict.name
    
    local request = dict.request
    
    local str     = request:getResponseString()
    
    local state   = request:getState()
    
    print("state="..state..", name="..name..", str="..str)
    
    LoginScene.httpLabel:setString("name="..name..", str="..str)
    
    local enterMainScene = function() game.enterMainScene() end
    
    require("framework.client.scheduler").performWithDelayGlobal(enterMainScene, 2)
    
end





function LoginScene:addArmatureFileInfo(_plistName)

    length = string.len(_plistName)

    pngFile = string.sub(_plistName, 1, length-5).."png"

    xmlFile = string.sub(_plistName, 1, length-5).."xml"

    ArmatureDataManager:sharedArmatureDataManager():addArmatureFileInfo(pngFile, _plistName, xmlFile);

end

return LoginScene
