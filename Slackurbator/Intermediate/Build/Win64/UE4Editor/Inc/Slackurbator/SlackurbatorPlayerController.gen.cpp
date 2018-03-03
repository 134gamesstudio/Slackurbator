// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SlackurbatorPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlackurbatorPlayerController() {}
// Cross Module References
	SLACKURBATOR_API UClass* Z_Construct_UClass_ASlackurbatorPlayerController_NoRegister();
	SLACKURBATOR_API UClass* Z_Construct_UClass_ASlackurbatorPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Slackurbator();
// End Cross Module References
	void ASlackurbatorPlayerController::StaticRegisterNativesASlackurbatorPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASlackurbatorPlayerController_NoRegister()
	{
		return ASlackurbatorPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ASlackurbatorPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_Slackurbator,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SlackurbatorPlayerController.h" },
				{ "ModuleRelativePath", "SlackurbatorPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASlackurbatorPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASlackurbatorPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlackurbatorPlayerController, 2394507147);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlackurbatorPlayerController(Z_Construct_UClass_ASlackurbatorPlayerController, &ASlackurbatorPlayerController::StaticClass, TEXT("/Script/Slackurbator"), TEXT("ASlackurbatorPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlackurbatorPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
