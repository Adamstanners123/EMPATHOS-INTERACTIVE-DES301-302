// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anxiety_v1/Anxiety_v1GameMode.h"
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
	struct Z_Construct_UClass_AAnxiety_v1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnxiety_v1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Anxiety_v1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnxiety_v1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Anxiety_v1GameMode.h" },
		{ "ModuleRelativePath", "Anxiety_v1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnxiety_v1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnxiety_v1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAnxiety_v1GameMode_Statics::ClassParams = {
		&AAnxiety_v1GameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAnxiety_v1GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAnxiety_v1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnxiety_v1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAnxiety_v1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnxiety_v1GameMode, 1734996536);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnxiety_v1GameMode(Z_Construct_UClass_AAnxiety_v1GameMode, &AAnxiety_v1GameMode::StaticClass, TEXT("/Script/Anxiety_v1"), TEXT("AAnxiety_v1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnxiety_v1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
