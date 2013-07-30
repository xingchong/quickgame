
local LoginScene = class("LoginScene", function()
    return display.newScene("LoginScene")
end)

function LoginScene:ctor()
    local proxy       = CCBProxy:create()
    local ccbReader   = proxy:createCCBReader()
    local strFilePath = LOGIN_PANEL_CCBI
    local node        = proxy:readCCBFromFile(strFilePath,ccbReader,bSetOwner)
    --node:setAnchorPoint(CCPoint:new(0.5, 0.5))
    node:setPosition(display.right/2 - CONFIG_SCREEN_WIDTH/2, 0)
    self:addChild(node)
    
    local mspAnimation = TSPAnimation:create(ANIMATION_ZHAOYUN, ANIMATION_ZHAOYUN_PLIST)
    --mspAnimation:setPosition(display.right/2, display.top/2)
    mspAnimation:setPosition(100, 0)
    mspAnimation:setScale(1)
    mspAnimation:play("walk")
    mspAnimation:setTouchBubble(true)
    mspAnimation:addSelfToParent(self)
end

return LoginScene
