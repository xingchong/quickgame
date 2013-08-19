
local BattleScene = class("BattleScene", function()
    return display.newScene("BattleScene")
end)


function BattleScene:ctor()
    local layer    = display.newLayer()
    local topSprite = display.newSprite(BATTLE_TOP_IMAGE, display.right/2, 538)
    local bottomSprite = display.newSprite(BATTLE_BOTTOM_IMAGE, display.right/2, 218)

    local tw = topSprite:getContentSize().width
    local th = topSprite:getContentSize().height
    local bw = bottomSprite:getContentSize().width
    local bh = bottomSprite:getContentSize().height
    topSprite:setScaleX(display.right/tw)
    topSprite:setScaleY(th/(th+bh)*display.top/th)
    bottomSprite:setScaleX(display.right/bw)
    bottomSprite:setScaleY(bh/(th+bh)*display.top/bh)

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


function BattleScene:onEnter()

    local battleParse = BattleParse:create(BATTLE_REPORT_PATH)
    
    local battleRound = battleParse:getBattleRound()
    
    local count = battleRound:count()
    
    print("count="..count)
    

    --local fff1 = display.newSprite("#f2.png", 500, 500)
    --self:addChild(fff1)


    BattleScene:addArmatureFileInfo(ANIMATION_ZHAOYUN_PLIST)
    
    BattleScene:addArmatureFileInfo(ANIMATION_ZHUGELIANG_PLIST)
    
    BattleScene:addArmatureFileInfo(ANIMATION_LIUBEI_PLIST)
    
    BattleScene:addArmatureFileInfo(ANIMATION_GUANYU_PLIST)
    
    BattleScene:addArmatureFileInfo(ANIMATION_ZHANGFEI_PLIST)
    
    BattleScene:addArmatureFileInfo(ANIMATION_LVBU_PLIST)
    
    BattleScene:addArmatureFileInfo(ANIMATION_DIAOCHAN_PLIST)
    
    BattleScene:addArmatureFileInfo(ANIMATION_CHENGONG_PLIST)

    BattleScene:addArmatureFileInfo(ANIMATION_ZOMBIE_PLIST)
    
    BattleScene:addArmatureFileInfo(ANIMATION_ZHOUTAI_PLIST)
    
    
    local armature1 = Armature:create(ANIMATION_LIUBEI)
    local armature2 = Armature:create(ANIMATION_GUANYU)
    local armature3 = Armature:create(ANIMATION_ZHANGFEI)
    local armature4 = Armature:create(ANIMATION_ZHUGELIANG)
    local armature5 = Armature:create(ANIMATION_ZHAOYUN)
    local armature6 = Armature:create(ANIMATION_LVBU)
    local armature7 = Armature:create(ANIMATION_DIAOCHAN)
    local armature8 = Armature:create(ANIMATION_CHENGONG)
    local armature9 = Armature:create(ANIMATION_ZHOUTAI)
    local armature10 = Armature:create(ANIMATION_ZHOUTAI)
    
	
    armature1:getAnimation():play("stand")
    armature2:getAnimation():play("stand")
    armature3:getAnimation():play("stand")
    armature4:getAnimation():play("stand")
    armature5:getAnimation():play("stand")
    armature6:getAnimation():play("stand")
    armature7:getAnimation():play("stand")
    armature8:getAnimation():play("stand")
    armature9:getAnimation():play("stand")
    armature10:getAnimation():play("stand")
	
    armature1:setPosition(ccp(display.right/2+40-160,   display.top/2-130))
    armature2:setPosition(ccp(display.right/2+40-160*2, display.top/2-130+160))
    armature3:setPosition(ccp(display.right/2+40-160*2, display.top/2-130-160))
    armature4:setPosition(ccp(display.right/2+40-160*2, display.top/2-130))
    armature5:setPosition(ccp(display.right/2+40-160*3, display.top/2-130))
    
    armature6:setPosition(ccp(display.right/2-40+160,   display.top/2-130))
    armature7:setPosition(ccp(display.right/2-40+160*3, display.top/2-130))
    armature8:setPosition(ccp(display.right/2-40+160*2, display.top/2-130))
    armature9:setPosition(ccp(display.right/2-40+160*2, display.top/2-130+160))
    armature10:setPosition(ccp(display.right/2-40+160*2, display.top/2-130-160))
	
    self:addChild(armature1)
    self:addChild(armature2)
    self:addChild(armature3)
    self:addChild(armature4)
    self:addChild(armature5)
    self:addChild(armature6)
    self:addChild(armature7)
    self:addChild(armature8)
    self:addChild(armature9)
    self:addChild(armature10)
    
    --armature6:runAction(CCMoveTo:create(2, ccp(display.right/2+160*3, display.top/2-130)))

    
    
end




function BattleScene:addArmatureFileInfo(_plistName)

    length = string.len(_plistName)

    pngFile = string.sub(_plistName, 1, length-5).."png"

    xmlFile = string.sub(_plistName, 1, length-5).."xml"

    ArmatureDataManager:sharedArmatureDataManager():addArmatureFileInfo(pngFile, _plistName, xmlFile);

end



return BattleScene
