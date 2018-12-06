// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Anxiety_v1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnxiety_v1GameMode() {}
// Cross Module References
	ANXIETY_V1_API UClass* Z_Construct_UClass_AAnxiety_v1GameMode_NoRegister();
	ANXIETY_V1_API UClass* Z_Construct_UClass_AAnxiety_v1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Anxiety_v1();
// End Cross Module References
	void AAnxiety_v1GameMode::StaticRegisterNativesAAnxiety_v1GameMode()
	{
	}
	UClass* Z_Construct_UClass_AAnxiety_v1GameMode_NoRegister()
	{
		return AAnxiety_v1GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AAnxiety_v1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Anxiety_v1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Anxiety_v1GameMode.h" },
				{ "ModuleRelativePath", "Anxiety_v1GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAnxiety_v1GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAnxiety_v1GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnxiety_v1GameMode, 2250142468);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnxiety_v1GameMode(Z_Construct_UClass_AAnxiety_v1GameMode, &AAnxiety_v1GameMode::StaticClass, TEXT("/Script/Anxiety_v1"), TEXT("AAnxiety_v1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnxiety_v1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
