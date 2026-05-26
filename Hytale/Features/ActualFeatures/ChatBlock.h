/*
 * Copyright (c) FishPlusPlus.
 */

#pragma once
#include "Features/Feature.h"
#include "Features/Settings/ToggleSetting.h"

class ChatBlock : public Feature {
public:
	ChatBlock();
	bool CanExecute() override { return Util::IsInGame(); }
	void Initialize() override;
private:
	ToggleSetting* blockSlash;
};
