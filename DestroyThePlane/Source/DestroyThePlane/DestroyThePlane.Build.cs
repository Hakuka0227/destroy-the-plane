// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DestroyThePlane : ModuleRules
{
	public DestroyThePlane(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"DestroyThePlane",
			"DestroyThePlane/Variant_Platforming",
			"DestroyThePlane/Variant_Platforming/Animation",
			"DestroyThePlane/Variant_Combat",
			"DestroyThePlane/Variant_Combat/AI",
			"DestroyThePlane/Variant_Combat/Animation",
			"DestroyThePlane/Variant_Combat/Gameplay",
			"DestroyThePlane/Variant_Combat/Interfaces",
			"DestroyThePlane/Variant_Combat/UI",
			"DestroyThePlane/Variant_SideScrolling",
			"DestroyThePlane/Variant_SideScrolling/AI",
			"DestroyThePlane/Variant_SideScrolling/Gameplay",
			"DestroyThePlane/Variant_SideScrolling/Interfaces",
			"DestroyThePlane/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
