
local LoginScene = class("LoginScene", function()
    return display.newScene("LoginScene")
end)

function LoginScene:ctor()
    require("utils.CCBReaderLoad")
    ccb["LoginScene"] = {}
    ccb["LoginScene"]["loginButtonClick"] = LoginScene.loginButtonClick
    
    local proxy       = CCBProxy:create()
    local node        = CCBReaderLoad(LOGIN_PANEL_CCBI, proxy, true, "LoginScene")
    node:setPosition(display.right/2 - CONFIG_SCREEN_WIDTH/2, 0)
    self:addChild(node)

    --local mspAnimation = TSPAnimation:create(ANIMATION_ZHAOYUN, ANIMATION_ZHAOYUN_PLIST)
    --mspAnimation:setPosition(100, 0)
    --mspAnimation:setScale(1)
    --mspAnimation:play("walk")
    --mspAnimation:setTouchBubble(true)
    --mspAnimation:addSelfToParent(self)
    
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


function LoginScene.loginButtonClick()
    print("_______LoginScene.loginButtonClick be call________")
    game.enterMainScene()
end

function LoginScene.onEnter()

end



function LoginScene:addArmatureFileInfo(_plistName)

    length = string.len(_plistName)

    pngFile = string.sub(_plistName, 1, length-5).."png"

    xmlFile = string.sub(_plistName, 1, length-5).."xml"

    ArmatureDataManager:sharedArmatureDataManager():addArmatureFileInfo(pngFile, _plistName, xmlFile);

end

return LoginScene
