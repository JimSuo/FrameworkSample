local BuildRuntimeSubsystem = {}

function BuildRuntimeSubsystem:OnInitialize()
    print("BuildRuntimeSubsystem:initialize")
end

function BuildRuntimeSubsystem:OnDeinitialize()
    print("BuildRuntimeSubsystem:deinitialize")
end

return Class(nil, nil, BuildRuntimeSubsystem)
