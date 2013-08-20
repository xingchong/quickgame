

HttpUtil = {}

function HttpUtil.requestData(pCallback, pUrl)

    local request = CCHTTPRequest:createWithUrlLua(pCallback, pUrl)
    
    request:start()
end


function HttpUtil.test()

    print("test..............")

end

--[[
function HttpUtil.requestXmlData(url)
	local httpServer = HttpSever:sharedInstance()
	httpServer:setunZipTrue(false)
	httpServer:sendHttpRequest(url, receiveXmlData)
end

function HttpUtil.receiveXmlData(message)
	local receiveMessage = tolua.cast(message,"CCString"):getCString()
	local xmlParser = XmlParser:create()
	xmlParser:parseXmlStr(receiveMessage)
	local areaRoot = xmlParser:getRoot()
	local num = areaRoot:getChilds():count()

	local childs = areaRoot:getChilds()
	local num    = childs:count()
	for i=1, num do
		local area        = tolua.cast(childs:objectAtIndex(i-1), "XmlElement")
		local attibuteDic = area:getAttibuteDic()
		local name        = tolua.cast(attibuteDic:objectForKey("name"), "CCString"):getCString()
        local url         = tolua.cast(attibuteDic:objectForKey("url"), "CCString"):getCString()
        print("\nname="..name..", url="..url)
	end
end




function HttpUtil.requestJsonData(url)
	local httpServer = HttpSever:sharedInstance()
	httpServer:setunZipTrue(false)
	httpServer:sendHttpRequest(url, receiveJsonData)
end

function HttpUtil.receiveJsonData(message)
	local receiveMessage = tolua.cast(message,"CCString"):getCString()
	print("\njson="..receiveMessage)
    local t = json(receiveMessage)
    print("\n==============")
    for k,v in pairs(t) do  
        print(tostring(k).."="..tostring(v))
    end 
end

 
function HttpUtil.json(json)
    local j=string.gsub(json,'\"([^\"]-)\":','%1=')
    local j=string.gsub(j,'%b\[\]','')
    local j='t='..j
    loadstring(j)()
    return t
end

]]--




