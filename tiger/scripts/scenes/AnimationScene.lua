
local AnimationScene = class("AnimationScene",function()
    return display.newScene("AnimationScene")
end)

function AnimationScene:ctor()
    self.bg = display.newBackgroundSprite("#MenuSceneBg.png")
    self:addChild(self.bg)

    self.topTitle = ui.newTTFLabelWithShadow({
        text = "do animation...",
        x = display.left + 200,
        y = display.top - 100,
        color = display.COLOR_BLACK,
        size = 60,
    })
    self:addChild(self.topTitle)


    self.adBar = require("views.AdBar").new()
    self:addChild(self.adBar)

    -- create menu
    local BubbleButton = require("views.BubbleButton")
    self.moreGamesButton = BubbleButton.new({
        image = "#b1.png",
        x = display.left + 150,
        y = display.bottom + 300,
        sound = GAME_SFX.tapButton,
        prepare = function()
            self.menu:setEnabled(false)
            self.layer:setKeypadEnabled(false)
        end,
        listener = function()
            --game.enterMoreGamesScene()
        end,
    })

    self.startButton = BubbleButton.new({
        image = "#f1.png",
        x = display.right - 150,
        y = display.bottom + 300,
        sound = GAME_SFX.tapButton,
        prepare = function()
            self.menu:setEnabled(false)
            self.layer:setKeypadEnabled(false)
        end,
        listener = function()
            game.enterMoreGamesScene()
        end,
    })

    self.menu = ui.newMenu({self.moreGamesButton, self.startButton})
    self:addChild(self.menu)

    -- keypad layer, for android
    self.layer = display.newLayer()
    self.layer:addKeypadEventListener(function(event)
        if event == "back" then
            audio.playSound(GAME_SFX.backButton)
            game.exit()
        end
    end)
    self:addChild(self.layer)
end

function AnimationScene:onEnter()
    -- avoid unmeant back
    self:performWithDelay(function()
        self.layer:setKeypadEnabled(true)
    end, 0.5)
    
    local mspAnimation = TSPAnimation:create(ANIMATION_ZHAOYUN, ANIMATION_ZHAOYUN_PLIST)
    mspAnimation:setPosition(display.right/2, display.top/2)
    mspAnimation:setScale(1)
    mspAnimation:play("walk")
    mspAnimation:setTouchBubble(true)
    mspAnimation:addSelfToParent(self)
end

return AnimationScene
