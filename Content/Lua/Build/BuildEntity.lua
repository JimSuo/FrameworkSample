local BuildEntity = {}

function BuildEntity:ReceiveBeginPlay()
    self.Super:ReceiveBeginPlay()
    print("BuildEntity BeginPlay")
end

function BuildEntity:ReceiveEndPlay(Reason)
    self.Super:ReceiveEndPlay(Reason)
    print("BuildEntity EndPlay")
end

return Class(nil, nil, BuildEntity)
