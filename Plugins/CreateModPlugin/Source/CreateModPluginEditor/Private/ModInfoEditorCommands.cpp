#include "ModInfoEditorCommands.h"

#define LOCTEXT_NAMESPACE "ModInfoEditorCommands"

void FModInfoEditorCommands::RegisterCommands()
{
	UI_COMMAND(OpenModInfoEditor, "Mod Info Editor", "Open the Mod Info Editor window", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(CreateMod, "Create Mod", "Create a new mod with all necessary files and assets", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(PackageMod, "Package Mod", "Package a mod into a pak file", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE

