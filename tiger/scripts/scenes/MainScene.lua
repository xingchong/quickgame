
local MainScene = class("MainScene", function()
    return display.newScene("MainScene")
end)


function MainScene:ctor()
    local layer    = display.newLayer()
    local bgSprite = display.newSprite(MAIN_BG_IMAGE, display.right/2, display.top/2)
    layer:addChild(bgSprite)
    self:addChild(layer)
    
    local BubbleButton = require("views.BubbleButton")
    
    self.battleButton = BubbleButton.new({
        image = "#btn-play-normal.png",
        x = display.right - 150,
        y = display.bottom + 200,
        sound = GAME_SOUND.tapButton,
        prepare = function()
            self.menu:setEnabled(false)
            --self.layer:setKeypadEnabled(false)
        end,
        listener = function()
            game.enterBattleScene()
        end,
    })
    
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
            game.enterLoginScene()
        end,
    })

    
    self.menu = ui.newMenu({self.battleButton, self.backButton})
    
    self:addChild(self.menu)
    
end


return MainScene
