#include "pch-il2cpp.h"
#include "_hooks.h"
#include "state.hpp"

GameOptionsData* dGameOptionsData_Deserialize(BinaryReader* reader, MethodInfo* method) {
	auto gameOptions = GameOptionsData_Deserialize(reader, method);

	State.PrevPlayerSpeed = gameOptions->fields.PlayerSpeedMod;
	State.PlayerSpeed = gameOptions->fields.PlayerSpeedMod;
	State.PrevKillDistance = gameOptions->fields.KillDistance;
	State.KillDistance = gameOptions->fields.KillDistance;
	State.PrevTaskBarUpdates = gameOptions->fields.TaskBarUpdates;
	State.TaskBarUpdates = gameOptions->fields.TaskBarUpdates;
	State.mapHostChoice = gameOptions->fields.MapId;
	State.impostors_amount = gameOptions->fields.NumImpostors;

	return gameOptions;
}

GameOptionsData* dGameOptionsData_Deserialize_1(MessageReader* reader, MethodInfo* method) {
	auto gameOptions = GameOptionsData_Deserialize_1(reader, method);

	State.PrevPlayerSpeed = gameOptions->fields.PlayerSpeedMod;
	State.PlayerSpeed = gameOptions->fields.PlayerSpeedMod;
	State.PrevKillDistance = gameOptions->fields.KillDistance;
	State.KillDistance = gameOptions->fields.KillDistance;
	State.PrevTaskBarUpdates = gameOptions->fields.TaskBarUpdates;
	State.TaskBarUpdates = gameOptions->fields.TaskBarUpdates;
	State.mapHostChoice = gameOptions->fields.MapId;
	State.impostors_amount = gameOptions->fields.NumImpostors;

	return gameOptions;
}