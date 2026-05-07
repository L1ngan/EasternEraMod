// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LPlayerCtrl.h"

ALPlayerCtrl::ALPlayerCtrl(const FObjectInitializer& Initer):Super(Initer)
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	bEnableMouseOverEvents = false;
	bEnableTouchOverEvents = false;
	HitResultTraceDistance = 40000.f;
	bAutoManageActiveCameraTarget = true;
}
