
require("config")
require("framework.init")
require("framework.client.init")

-- define global module
game = {}

function game.startup()
    CCFileUtils:sharedFileUtils():addSearchPath("res/")
    
    display.addSpriteFramesWithFile(UI_IMAGE_PLIST, UI_IMAGE_PNG)

    game.enterLoginScene()
end

function game.exit()
    CCDirector:sharedDirector():endToLua()
end


function game.enterLoginScene()
    display.replaceScene(require("scenes.LoginScene").new(), "fade", 0.6, display.COLOR_WHITE)
end

function game.enterBattleScene()
    display.replaceScene(require("scenes.BattleScene").new(), "fade", 0.6, display.COLOR_WHITE)
end

function game.enterMainScene()
    display.replaceScene(require("scenes.MainScene").new(), "fade", 0.6, display.COLOR_WHITE)
end


