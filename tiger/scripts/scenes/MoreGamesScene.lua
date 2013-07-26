
local MoreGamesScene = class("MoreGamesScene", function()
    return display.newScene("MoreGamesScene")
end)

function MoreGamesScene:ctor()
    self.bg = display.newBackgroundSprite("#MenuSceneBg.png")
    self:addChild(self.bg)

    self.topTitle = ui.newTTFLabelWithShadow({
        text = "load ccbi...",
        x = display.left + 200,
        y = display.top - 100,
        color = display.COLOR_BLACK,
        size = 60,
    })
    self:addChild(self.topTitle)

    self.adBar = require("views.AdBar").new()
    self:addChild(self.adBar)

    local BubbleButton = require("views.BubbleButton")
    self.leftButton = BubbleButton.new({
        image = "#b1.png",
        x = display.left + 150,
        y = display.bottom + 300,
        sound = GAME_SFX.tapButton,
        prepare = function()
            --self.menu:setEnabled(false)
            --self.layer:setKeypadEnabled(false)
        end,
        listener = function()
            game.enterAnimationScene()
        end,
    })


    self.rightButton = BubbleButton.new({
         image = "#f1.png",
         x = display.right - 150,
         y = display.bottom + 300,
         sound = GAME_SFX.tapButton,
         prepare = function()
            --self.menu:setEnabled(false)
            --self.layer:setKeypadEnabled(false)
         end,
         listener = function()
            game.enterMenuScene()
         end,
    })

    local backButton = ui.newImageMenuItem({
        image = "#BackButton.png",
        imageSelected = "#BackButtonSelected.png",
        x = display.right - 100,
        y = display.bottom + 120,
        sound = GAME_SFX.backButton,
        listener = function()
            game.enterMenuScene()
        end
    })

    local menu = ui.newMenu({self.leftButton, self.rightButton, backButton})
    self:addChild(menu)
    
    
    local proxy       = CCBProxy:create()
    local ccbReader   = proxy:createCCBReader()
    local strFilePath = "ccbi/MainScene.ccbi"
    local node        = proxy:readCCBFromFile(strFilePath,ccbReader,bSetOwner)
    node:setPosition(0,350)
    self:addChild(node)
end

return MoreGamesScene
