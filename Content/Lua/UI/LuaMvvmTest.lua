local LuaMvvmTest = {}

function LuaMvvmTest:Initialize()
    print("LuaSubWidgetFirst:Initialize")
end

function LuaMvvmTest:K2_OnGameplayDebugger()
    local infos = {
        "MVVMAdd1",
        "MVVMAdd2"
    }
    return infos
end

function LuaMvvmTest:Construct()
    self.Super:Construct()
    print("LuaSubWidgetFirst:Construct")
end

function LuaMvvmTest:Destruct()
    print("LuaSubWidgetFirst:Destruct")
end

function LuaMvvmTest:OnDestroy()
end

return Class(nil, nil, LuaMvvmTest)
