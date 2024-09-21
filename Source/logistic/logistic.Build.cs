// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class logistic : ModuleRules
{
	public logistic(ReadOnlyTargetRules Target) : base(Target)
	{
        PublicDefinitions.Add("PLATFORM_WINDOWS_INCREASE_LINKER_HEAP_SIZE=1");

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore",
            "AIModule",        // ��������� ������ AI
            "NavigationSystem" // ��������� ������ ���������
		});

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
