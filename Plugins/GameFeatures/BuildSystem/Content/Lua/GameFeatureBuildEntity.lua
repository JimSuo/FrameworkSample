local GameFeatureBuildEntity = {}
local SubsystemBlueprintLibrary = import("SubsystemBlueprintLibrary")
local BuildRuntimeSubsystem = import("BuildRuntimeSubsystem")
local TestStaticMeshComponent = import("TestStaticMeshComponent")

function GameFeatureBuildEntity:ReceiveBeginPlay()
    print("GameFeatureBuildEntity ReceiveBeginPlay succeed!!!")
    local buildSubsystem = SubsystemBlueprintLibrary.GetWorldSubsystem(self, BuildRuntimeSubsystem)
    buildSubsystem:StartBuild()
    self:LuaCallTest()
    self:LuaCallCppFuncTest()
end

function GameFeatureBuildEntity:LuaCallTest()
    self.Super:LuaCallTest()
    print("Call from lua")
end

function Lua_TestFunc()
    print("Call from Lua_TestFunc")
end

return Class(nil, nil, GameFeatureBuildEntity)