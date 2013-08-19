
local MainScene = class("MainScene", function()
    return display.newScene("MainScene")
end)


function MainScene:ctor()
    local layer    = display.newLayer()
    local bgSprite = display.newSprite(MAIN_BG_IMAGE, display.right/2, display.top/2)
    bgSprite:setScaleX(display.right/bgSprite:getContentSize().width)
    bgSprite:setScaleY(display.top/bgSprite:getContentSize().height)
    layer:addChild(bgSprite)
    self:addChild(layer)
    
    local BubbleButton = require("views.BubbleButton")
    
    self.battleButton = BubbleButton.new({
        image = "#f1.png",
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
    
    local liulanghan = ui.newTTFLabelWithShadow({text = "流浪汉",x = 270,y = 350,})
    self:addChild(liulanghan)
    
    MainScene:addArmatureFileInfo(ANIMATION_LIULANGHAN_PLIST)
    local armature0 = Armature:create(ANIMATION_LIULANGHAN)
    armature0:getAnimation():play("stand")
    armature0:setPosition(ccp(300, 250))
    self:addChild(armature0)
    
    
    local liulanghan1 = ui.newTTFLabelWithShadow({text = "流浪汉",x = 370,y = 450,})
    self:addChild(liulanghan1)
    
    local armature1 = Armature:create(ANIMATION_LIULANGHAN)
    armature1:getAnimation():play("stand")
    armature1:setPosition(ccp(400, 350))
    self:addChild(armature1)
    
    
    local liulanghan2 = ui.newTTFLabelWithShadow({text = "流浪汉",x = 570,y = 500,})
    self:addChild(liulanghan2)
    
    local armature2 = Armature:create(ANIMATION_LIULANGHAN)
    armature2:getAnimation():play("stand")
    armature2:setPosition(ccp(600, 400))
    self:addChild(armature2)
    
end



function MainScene:addArmatureFileInfo(_plistName)

    length = string.len(_plistName)

    pngFile = string.sub(_plistName, 1, length-5).."png"

    xmlFile = string.sub(_plistName, 1, length-5).."xml"

    ArmatureDataManager:sharedArmatureDataManager():addArmatureFileInfo(pngFile, _plistName, xmlFile);

end

return MainScene
