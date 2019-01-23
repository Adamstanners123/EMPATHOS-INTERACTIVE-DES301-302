// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PlaySounds.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaySounds() {}
// Cross Module References
	PROTOTYPEC_API UClass* Z_Construct_UClass_UPlaySounds_NoRegister();
	PROTOTYPEC_API UClass* Z_Construct_UClass_UPlaySounds();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PrototypeC();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void UPlaySounds::StaticRegisterNativesUPlaySounds()
	{
	}
	UClass* Z_Construct_UClass_UPlaySounds_NoRegister()
	{
		return UPlaySounds::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlaySounds()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_PrototypeC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "PlaySounds.h" },
				{ "ModuleRelativePath", "PlaySounds.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recordPlayer_MetaData[] = {
				{ "Category", "PlaySounds" },
				{ "ModuleRelativePath", "PlaySounds.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_recordPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "recordPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPlaySounds, recordPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_recordPlayer_MetaData, ARRAY_COUNT(NewProp_recordPlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereTrigger_MetaData[] = {
				{ "Category", "PlaySounds" },
				{ "ModuleRelativePath", "PlaySounds.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphereTrigger = { UE4CodeGen_Private::EPropertyClass::Object, "sphereTrigger", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPlaySounds, sphereTrigger), Z_Construct_UClass_ATriggerSphere_NoRegister, METADATA_PARAMS(NewProp_sphereTrigger_MetaData, ARRAY_COUNT(NewProp_sphereTrigger_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_propellerAudioComponent_MetaData[] = {
				{ "Category", "PlaySounds" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PlaySounds.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_propellerAudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "propellerAudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(UPlaySounds, propellerAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_propellerAudioComponent_MetaData, ARRAY_COUNT(NewProp_propellerAudioComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_propellerStartupCue_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "PlaySounds.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_propellerStartupCue = { UE4CodeGen_Private::EPropertyClass::Object, "propellerStartupCue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UPlaySounds, propellerStartupCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_propellerStartupCue_MetaData, ARRAY_COUNT(NewProp_propellerStartupCue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_propellerAudioCue_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "PlaySounds.h" },
				{ "ToolTip", "Sound variables" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_propellerAudioCue = { UE4CodeGen_Private::EPropertyClass::Object, "propellerAudioCue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UPlaySounds, propellerAudioCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_propellerAudioCue_MetaData, ARRAY_COUNT(NewProp_propellerAudioCue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_recordPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sphereTrigger,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_propellerAudioComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_propellerStartupCue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_propellerAudioCue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlaySounds>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlaySounds::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlaySounds, 1244075753);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlaySounds(Z_Construct_UClass_UPlaySounds, &UPlaySounds::StaticClass, TEXT("/Script/PrototypeC"), TEXT("UPlaySounds"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaySounds);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
