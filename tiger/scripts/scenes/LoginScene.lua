
local LoginScene = class("LoginScene", function()
    return display.newScene("LoginScene")
end)

function LoginScene:ctor()
    local proxy       = CCBProxy:create()
    local ccbReader   = proxy:createCCBReader()
    local strFilePath = "ccbi/login_scene.ccbi"
    local node        = proxy:readCCBFromFile(strFilePath,ccbReader,bSetOwner)
    node:setPosition(0,350)
    self:addChild(node)
    
    local mspAnimation = TSPAnimation:create(ANIMATION_ZHAOYUN, ANIMATION_ZHAOYUN_PLIST)
    mspAnimation:setPosition(display.right/2, display.top/2)
    mspAnimation:setScale(1)
    mspAnimation:play("walk")
    mspAnimation:setTouchBubble(true)
    mspAnimation:addSelfToParent(self)
end

return LoginScene
