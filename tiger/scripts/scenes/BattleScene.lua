
local BattleScene = class("BattleScene", function()
    return display.newScene("BattleScene")
end)


function BattleScene:ctor()
    local layer    = display.newLayer()
    local topSprite = display.newSprite(BATTLE_TOP_IMAGE, display.right/2, 525)
    local bottomSprite = display.newSprite(BATTLE_BOTTOM_IMAGE, display.right/2, 225)
    layer:addChild(topSprite)
    layer:addChild(bottomSprite)
    self:addChild(layer)
    
    local BubbleButton = require("views.BubbleButton")
    
    self.backButton = BubbleButton.new({
        image = "#b1.png",
        x = display.right - 150,
        y = display.bottom + 100,
        sound = GAME_SOUND.tapButton,
        prepare = function()
            self.menu:setEnabled(false)
            --self.layer:setKeypadEnabled(false)
        end,
        listener = function()
            game.enterMainScene()
        end,
    })

    
    self.menu = ui.newMenu({self.backButton})
    
    self:addChild(self.menu)
end


return BattleScene
