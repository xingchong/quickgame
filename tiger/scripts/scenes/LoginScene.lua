
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

    local mspAnimation = TSPAnimation:create(ANIMATION_ZHAOYUN, ANIMATION_ZHAOYUN_PLIST)
    mspAnimation:setPosition(100, 0)
    mspAnimation:setScale(1)
    mspAnimation:play("walk")
    mspAnimation:setTouchBubble(true)
    mspAnimation:addSelfToParent(self)
end


function LoginScene.loginButtonClick()
    print("_______LoginScene.loginButtonClick be call________")
    game.enterMainScene()
end

return LoginScene
