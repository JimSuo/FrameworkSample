local BuildRuntimeComponent = {}

function BuildRuntimeComponent:BeginPlay()
    print("BuildRuntimeComponent BeginPlay")
end

return Class(nil, nil, BuildRuntimeComponent)
