local BuildRuntimeComponent = {}

function BuildRuntimeComponent:ReceiveBeginPlay()
    print("BuildRuntimeComponent BeginPlay")
end

return Class(nil, nil, BuildRuntimeComponent)
