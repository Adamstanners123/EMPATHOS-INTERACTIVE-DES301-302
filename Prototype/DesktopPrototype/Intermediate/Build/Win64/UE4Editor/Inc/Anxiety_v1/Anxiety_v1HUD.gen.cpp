// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anxiety_v1/Anxiety_v1HUD.h"
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
	struct Z_Construct_UClass_AAnxiety_v1HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnxiety_v1HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Anxiety_v1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnxiety_v1HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Anxiety_v1HUD.h" },
		{ "ModuleRelativePath", "Anxiety_v1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnxiety_v1HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnxiety_v1HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAnxiety_v1HUD_Statics::ClassParams = {
		&AAnxiety_v1HUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAnxiety_v1HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAnxiety_v1HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnxiety_v1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAnxiety_v1HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnxiety_v1HUD, 3744619501);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnxiety_v1HUD(Z_Construct_UClass_AAnxiety_v1HUD, &AAnxiety_v1HUD::StaticClass, TEXT("/Script/Anxiety_v1"), TEXT("AAnxiety_v1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnxiety_v1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
