local BuildEntity = {}
local KismetStringLibrary = import("KismetStringLibrary")

function BuildEntity:ReceiveBeginPlay()
    self.Super:ReceiveBeginPlay()
    print("BuildEntity BeginPlay")
end

function BuildEntity:ReceiveEndPlay(Reason)
    self.Super:ReceiveEndPlay(Reason)
    print("BuildEntity EndPlay")
end

function BuildEntity:K2_OnGameplayDebugger()
    local infos = {}
    infos[1] = "{white}ActorLocation : {green}"..KismetStringLibrary.Conv_VectorToString(self:K2_GetActorLocation())
    infos[2] = "{white}ActorRotation : {green}"..KismetStringLibrary.Conv_RotatorToString(self:K2_GetActorRotation())
    infos[3] = "{white}ActorRotation : {green}"..KismetStringLibrary.Conv_VectorToString(self:GetActorScale3D())
    return infos
end

return Class(nil, nil, BuildEntity)