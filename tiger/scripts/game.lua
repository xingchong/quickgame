
require("config")
require("framework.init")
require("framework.client.init")

-- define global module
game = {}

function game.startup()
    CCFileUtils:sharedFileUtils():addSearchPath("res/")
    game.enterLoginScene()
end

function game.exit()
    CCDirector:sharedDirector():endToLua()
end


function game.enterLoginScene()
    display.replaceScene(require("scenes.LoginScene").new(), "fade", 0.6, display.COLOR_WHITE)
end
