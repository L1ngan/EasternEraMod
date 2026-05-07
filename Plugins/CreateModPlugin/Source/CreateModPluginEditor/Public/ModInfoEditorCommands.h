#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "EditorStyleSet.h"

class FModInfoEditorCommands : public TCommands<FModInfoEditorCommands>
{
public:
	FModInfoEditorCommands()
		: TCommands<FModInfoEditorCommands>(
			TEXT("ModInfoEditor"),
			NSLOCTEXT("Contexts", "ModInfoEditor", "Mod Info Editor"),
			NAME_None,
			FAppStyle::GetAppStyleSetName()
		)
	{}

	virtual void RegisterCommands() override;

	TSharedPtr<FUICommandInfo> OpenModInfoEditor;
	TSharedPtr<FUICommandInfo> CreateMod;
	TSharedPtr<FUICommandInfo> PackageMod;
};

