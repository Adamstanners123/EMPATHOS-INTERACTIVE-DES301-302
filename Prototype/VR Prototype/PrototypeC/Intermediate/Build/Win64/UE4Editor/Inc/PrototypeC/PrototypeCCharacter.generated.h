// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPEC_PrototypeCCharacter_generated_h
#error "PrototypeCCharacter.generated.h already included, missing '#pragma once' in PrototypeCCharacter.h"
#endif
#define PROTOTYPEC_PrototypeCCharacter_generated_h

#define PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_RPC_WRAPPERS
#define PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrototypeCCharacter(); \
	friend PROTOTYPEC_API class UClass* Z_Construct_UClass_APrototypeCCharacter(); \
public: \
	DECLARE_CLASS(APrototypeCCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PrototypeC"), NO_API) \
	DECLARE_SERIALIZER(APrototypeCCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPrototypeCCharacter(); \
	friend PROTOTYPEC_API class UClass* Z_Construct_UClass_APrototypeCCharacter(); \
public: \
	DECLARE_CLASS(APrototypeCCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PrototypeC"), NO_API) \
	DECLARE_SERIALIZER(APrototypeCCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrototypeCCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrototypeCCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeCCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypeCCharacter(APrototypeCCharacter&&); \
	NO_API APrototypeCCharacter(const APrototypeCCharacter&); \
public:


#define PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypeCCharacter(APrototypeCCharacter&&); \
	NO_API APrototypeCCharacter(const APrototypeCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrototypeCCharacter)


#define PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(APrototypeCCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(APrototypeCCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(APrototypeCCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(APrototypeCCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(APrototypeCCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(APrototypeCCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(APrototypeCCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(APrototypeCCharacter, L_MotionController); }


#define PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_11_PROLOG
#define PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_RPC_WRAPPERS \
	PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_INCLASS \
	PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_INCLASS_NO_PURE_DECLS \
	PrototypeC_Source_PrototypeC_PrototypeCCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrototypeC_Source_PrototypeC_PrototypeCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
