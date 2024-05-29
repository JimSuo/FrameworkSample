local LuaMvvmTest = {}
local SubsystemBlueprintLibrary = import("SubsystemBlueprintLibrary")
local BuildRuntimeSubsystem = import("BuildRuntimeSubsystem")

function LuaMvvmTest:Initialize()
    print("LuaSubWidgetFirst:Initialize")
end

function LuaMvvmTest:Construct()
    print("LuaSubWidgetFirst:Construct")
    local subsystem = SubsystemBlueprintLibrary.GetGameInstanceSubsystem(self, BuildRuntimeSubsystem)
    subsystem.StartBuild()
end

function LuaMvvmTest:Destruct()
    print("LuaSubWidgetFirst:Destruct")
end

function LuaMvvmTest:OnDestroy()
end

return Class(nil, nil, LuaMvvmTest)
