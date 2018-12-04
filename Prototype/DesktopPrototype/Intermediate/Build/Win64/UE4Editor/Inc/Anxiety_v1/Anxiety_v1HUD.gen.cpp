// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Anxiety_v1HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnxiety_v1HUD() {}
// Cross Module References
	ANXIETY_V1_API UClass* Z_Construct_UClass_AAnxiety_v1HUD_NoRegister();
	ANXIETY_V1_API UClass* Z_Construct_UClass_AAnxiety_v1HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Anxiety_v1();
// End Cross Module References
	void AAnxiety_v1HUD::StaticRegisterNativesAAnxiety_v1HUD()
	{
	}
	UClass* Z_Construct_UClass_AAnxiety_v1HUD_NoRegister()
	{
		return AAnxiety_v1HUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AAnxiety_v1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Anxiety_v1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "Anxiety_v1HUD.h" },
				{ "ModuleRelativePath", "Anxiety_v1HUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAnxiety_v1HUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAnxiety_v1HUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
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
	IMPLEMENT_CLASS(AAnxiety_v1HUD, 1510715261);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnxiety_v1HUD(Z_Construct_UClass_AAnxiety_v1HUD, &AAnxiety_v1HUD::StaticClass, TEXT("/Script/Anxiety_v1"), TEXT("AAnxiety_v1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnxiety_v1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
