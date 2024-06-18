local GameplayDebuggerTestWidget = {}

function GameplayDebuggerTestWidget:K2_OnGameplayDebugger()
    local infos = {}
    infos[1] = "{blue}WidgetInfo"
    infos[2] = "{white}WidgetInfo : {green}"..self.TestValue
    return infos
end

return Class(nil, nil, GameplayDebuggerTestWidget)