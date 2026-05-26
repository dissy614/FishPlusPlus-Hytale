/*
 * Copyright (c) FishPlusPlus.
 * 
 *
 * I dont know what Im doing!  :D
 * --Dissy   2026-05-25
 */

#include "ChatBlock.h"

ChatBlock::ChatBlock() : Feature("Chat Block") {
	this->blockSlash = this->RegisterSetting<ToggleSetting>("Block Slash Cmds", false);
};

void ChatBlock::Initialize() {
	RegisterEvent(this);
	Util::log("Initialized ChatBlock feature");
}
