
local BattleScene = class("BattleScene", function()
    return display.newScene("BattleScene")
end)


BattleScene.armature1 = nil
BattleScene.armature2 = nil
BattleScene.armature3 = nil
BattleScene.armature4 = nil
BattleScene.armature5 = nil
BattleScene.armature6 = nil
BattleScene.armature7 = nil
BattleScene.armature8 = nil
BattleScene.armature9 = nil
BattleScene.armature10 = nil


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
    
    BattleScene:addArmatureFileInfo(ANIMATION_SKILL_1_PLIST)
    
    
    local armature1 = Armature:create(ANIMATION_LIUBEI)
    local armature2 = Armature:create(ANIMATION_GUANYU)
    local armature3 = Armature:create(ANIMATION_ZHUGELIANG)
    local armature4 = Armature:create(ANIMATION_ZHANGFEI)
    local armature5 = Armature:create(ANIMATION_ZHAOYUN)
    local armature6 = Armature:create(ANIMATION_LVBU)
    local armature7 = Armature:create(ANIMATION_ZHOUTAI)
    local armature8 = Armature:create(ANIMATION_CHENGONG)
    local armature9 = Armature:create(ANIMATION_ZHOUTAI)
    local armature10 = Armature:create(ANIMATION_DIAOCHAN)
    local skill_1 = Armature:create(ANIMATION_SKILL_1)
    
	
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
    skill_1:getAnimation():play("fight")
	
    armature1:setPosition(BATTLE_POS_1)
    armature2:setPosition(BATTLE_POS_2)
    armature3:setPosition(BATTLE_POS_3)
    armature4:setPosition(BATTLE_POS_4)
    armature5:setPosition(BATTLE_POS_5)
    
    armature6:setPosition(BATTLE_POS_6)
    armature7:setPosition(BATTLE_POS_7)
    armature8:setPosition(BATTLE_POS_8)
    armature9:setPosition(BATTLE_POS_9)
    armature10:setPosition(BATTLE_POS_10)
    skill_1:setPosition(0,0)
	
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
    self:addChild(skill_1)
    
    skill_1:setVisible(false)
    
    BattleScene.armature1 = armature1
    BattleScene.armature2 = armature2
    BattleScene.armature3 = armature3
    BattleScene.armature4 = armature4
    BattleScene.armature5 = armature5
    BattleScene.armature6 = armature6
    BattleScene.armature7 = armature7
    BattleScene.armature8 = armature8
    BattleScene.armature9 = armature9
    BattleScene.armature10 = armature10
    BattleScene.skill_1 = skill_1

    local listener1 = function() BattleScene.attack(armature1, armature6) end
    local listener2 = function() BattleScene.attack(armature2, armature6) end
    local listener3 = function() BattleScene.bigSkill(armature3) end
    local listener4 = function() BattleScene.attack(armature4, armature6) end
    local listener5 = function() BattleScene.attack(armature5, armature6) end
    local listener6 = function() BattleScene.attack(armature6, armature1) end
    local listener7 = function() BattleScene.attack(armature7, armature1) end
    local listener8 = function() BattleScene.attack(armature8, armature1) end
    local listener9 = function() BattleScene.attack(armature9, armature1) end
    local listener10 = function() BattleScene.bigSkill(armature10) end

    
    require("framework.client.scheduler").performWithDelayGlobal(listener1, 1)
    require("framework.client.scheduler").performWithDelayGlobal(listener2, 3)
    require("framework.client.scheduler").performWithDelayGlobal(listener3, 5)
    require("framework.client.scheduler").performWithDelayGlobal(listener4, 7)
    require("framework.client.scheduler").performWithDelayGlobal(listener5, 9)
    require("framework.client.scheduler").performWithDelayGlobal(listener6, 11)
    require("framework.client.scheduler").performWithDelayGlobal(listener7, 13)
    require("framework.client.scheduler").performWithDelayGlobal(listener8, 15)
    require("framework.client.scheduler").performWithDelayGlobal(listener9, 17)
    require("framework.client.scheduler").performWithDelayGlobal(listener10, 19)
end


function BattleScene.bigSkill(target)
    local pos   = ccp(target:getPositionX(), target:getPositionY())
    local posX = target:getPositionX()
    local skill  = function() target:getAnimation():play("skill") end
    local beaten = function()
                        BattleScene.armature6:getAnimation():play("beaten")
                        BattleScene.armature7:getAnimation():play("beaten")
                        BattleScene.armature8:getAnimation():play("beaten")
                        BattleScene.armature9:getAnimation():play("beaten")
                        BattleScene.armature10:getAnimation():play("beaten")
                        target:getAnimation():play("stand")
                        BattleScene.skill_1:setVisible(true)
                        BattleScene.skill_1:setPosition(BATTLE_POS_8)
                        BattleScene.skill_1:setScale(5)
                    end
    local stand = function()
                        BattleScene.armature6:getAnimation():play("stand")
                        BattleScene.armature7:getAnimation():play("stand")
                        BattleScene.armature8:getAnimation():play("stand")
                        BattleScene.armature9:getAnimation():play("stand")
                        BattleScene.armature10:getAnimation():play("stand")
                        BattleScene.skill_1:setVisible(false)
                    end
    if posX > display.right/2 then
        beaten = function()
                    BattleScene.armature1:getAnimation():play("beaten")
                    BattleScene.armature2:getAnimation():play("beaten")
                    BattleScene.armature3:getAnimation():play("beaten")
                    BattleScene.armature4:getAnimation():play("beaten")
                    BattleScene.armature5:getAnimation():play("beaten")
                    target:getAnimation():play("stand")
                    BattleScene.skill_1:setVisible(true)
                    BattleScene.skill_1:setPosition(BATTLE_POS_3)
                    BattleScene.skill_1:setScale(5)
                 end
        stand = function()
                    BattleScene.armature1:getAnimation():play("stand")
                    BattleScene.armature2:getAnimation():play("stand")
                    BattleScene.armature3:getAnimation():play("stand")
                    BattleScene.armature4:getAnimation():play("stand")
                    BattleScene.armature5:getAnimation():play("stand")
                    BattleScene.skill_1:setVisible(false)
                end
    end
    
    local actionArray = CCArray:create()
    actionArray:addObject(CCCallFunc:create(skill))
    actionArray:addObject(CCMoveTo:create(1, pos))
    actionArray:addObject(CCCallFunc:create(beaten))
    actionArray:addObject(CCMoveTo:create(1, pos))
    actionArray:addObject(CCCallFunc:create(stand))
    
    local seq = CCSequence:create(actionArray)
    target:runAction(seq)
    
end



function BattleScene.attack(target1, target2)
    local pos1   = ccp(target1:getPositionX(), target1:getPositionY())
    local pos2   = ccp(target2:getPositionX(), target2:getPositionY())
    local stand1  = function() target1:getAnimation():play("stand") end
    local stand2  = function() 
                        target2:getAnimation():play("stand")
                        target1:getAnimation():play("walk") 
                    end
    local walk   = function() target1:getAnimation():play("walk") end
    local attack  = function() 
                        target1:getAnimation():play("attack")
                        target2:getAnimation():play("beaten") 
                     end
    
    local actionArray = CCArray:create()
    actionArray:addObject(CCCallFunc:create(walk))
    actionArray:addObject(CCMoveTo:create(0.8, pos2))
    actionArray:addObject(CCCallFunc:create(attack))
    actionArray:addObject(CCMoveTo:create(0.4, pos2))
    actionArray:addObject(CCCallFunc:create(stand2))
    actionArray:addObject(CCMoveTo:create(0.8, pos1))
    actionArray:addObject(CCCallFunc:create(stand1))
    
    local seq = CCSequence:create(actionArray)
    target1:runAction(seq)
end


function BattleScene:update(f)

    print("==========="..f)
end


function BattleScene:addArmatureFileInfo(_plistName)
    length = string.len(_plistName)
    pngFile = string.sub(_plistName, 1, length-5).."png"
    xmlFile = string.sub(_plistName, 1, length-5).."xml"
    ArmatureDataManager:sharedArmatureDataManager():addArmatureFileInfo(pngFile, _plistName, xmlFile);
end



return BattleScene
