ccb = ccb or {}

function CCBReaderLoad(strFilePath,proxy,bSetOwner,strOwnerName)
    if nil == proxy then
        return
    end

    local ccbReader = proxy:createCCBReader()
    local node      = proxy:readCCBFromFile(strFilePath,ccbReader,bSetOwner)
    local owner     = ccbReader:getOwner()
    local rootName  = "" 
    --owner set in readCCBFromFile is proxy
    if nil ~= owner then
    
        --Callbacks
        local ownerCallbackNames = tolua.cast(ccbReader:getOwnerCallbackNames(),"CCArray")
        local ownerCallbackNodes = tolua.cast(ccbReader:getOwnerCallbackNodes(),"CCArray")
        local i = 1
        for i = 1,ownerCallbackNames:count() do
            local callbackName = tolua.cast(ownerCallbackNames:objectAtIndex(i - 1),"CCString")
            local callbackNode = tolua.cast(ownerCallbackNodes:objectAtIndex(i - 1),"CCNode")
            if "" ~= strOwnerName and nil ~= ccb[strOwnerName] then
            	local cbName = callbackName:getCString()
            	if "function" == type(ccb[strOwnerName][cbName]) then
                	proxy:setCallback(callbackNode,ccb[strOwnerName][cbName])
                else
                	print("WARNING: Cannot found lua function [" .. strOwnerName .. "." .. cbName .. "] for owner selector")
                end
            end
        end

    end
    
    return node
end
