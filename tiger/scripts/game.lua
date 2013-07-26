
require("config")
require("framework.init")
require("framework.client.init")

-- define global module
game = {}

function game.startup()
    CCFileUtils:sharedFileUtils():addSearchPath("res/")
    display.addSpriteFramesWithFile(GAME_TEXTURE_PLIST, GAME_TEXTURE_PNG)
    display.addSpriteFramesWithFile(BASE_UI_TEXTURE_PLIST, BASE_UI_TEXTURE_PNG)

    -- preload all sounds
    for k, v in pairs(GAME_SFX) do
        audio.preloadSound(v)
    end

    game.enterMenuScene()
end

function game.exit()
    CCDirector:sharedDirector():endToLua()
end

function game.enterMenuScene()
    display.replaceScene(require("scenes.MenuScene").new(), "fade", 0.6, display.COLOR_WHITE)
end

function game.enterMoreGamesScene()
    display.replaceScene(require("scenes.MoreGamesScene").new(), "fade", 0.6, display.COLOR_WHITE)
end

function game.enterChooseLevelScene()
    display.replaceScene(require("scenes.ChooseLevelScene").new(), "fade", 0.6, display.COLOR_WHITE)
end

function game.playLevel(levelIndex)
    local PlayLevelScene = require("scenes.PlayLevelScene")
    display.replaceScene(PlayLevelScene.new(levelIndex), "fade", 0.6, display.COLOR_WHITE)
end

function game.enterAnimationScene()
    local AnimationScene = require("scenes.AnimationScene")
    display.replaceScene(AnimationScene.new(), "fade", 0.6, display.COLOR_WHITE)
end
