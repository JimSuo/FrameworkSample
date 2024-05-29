local BuildEntity = {}

function BuildEntity:BeginPlay()
    print("BuildEntity BeginPlay")
end

function BuildEntity:OnDestroy()
    print("BuildEntity OnDestroy")
end

return Class(nil, nil, BuildEntity)
