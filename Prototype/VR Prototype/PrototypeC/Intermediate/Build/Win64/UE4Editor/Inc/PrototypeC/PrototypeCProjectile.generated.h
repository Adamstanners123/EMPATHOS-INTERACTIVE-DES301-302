// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PROTOTYPEC_PrototypeCProjectile_generated_h
#error "PrototypeCProjectile.generated.h already included, missing '#pragma once' in PrototypeCProjectile.h"
#endif
#define PROTOTYPEC_PrototypeCProjectile_generated_h

#define PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrototypeCProjectile(); \
	friend PROTOTYPEC_API class UClass* Z_Construct_UClass_APrototypeCProjectile(); \
public: \
	DECLARE_CLASS(APrototypeCProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PrototypeC"), NO_API) \
	DECLARE_SERIALIZER(APrototypeCProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPrototypeCProjectile(); \
	friend PROTOTYPEC_API class UClass* Z_Construct_UClass_APrototypeCProjectile(); \
public: \
	DECLARE_CLASS(APrototypeCProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PrototypeC"), NO_API) \
	DECLARE_SERIALIZER(APrototypeCProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrototypeCProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrototypeCProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeCProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeCProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypeCProjectile(APrototypeCProjectile&&); \
	NO_API APrototypeCProjectile(const APrototypeCProjectile&); \
public:


#define PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypeCProjectile(APrototypeCProjectile&&); \
	NO_API APrototypeCProjectile(const APrototypeCProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeCProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeCProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrototypeCProjectile)


#define PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APrototypeCProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APrototypeCProjectile, ProjectileMovement); }


#define PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_9_PROLOG
#define PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_RPC_WRAPPERS \
	PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_INCLASS \
	PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_INCLASS_NO_PURE_DECLS \
	PrototypeC_Source_PrototypeC_PrototypeCProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrototypeC_Source_PrototypeC_PrototypeCProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
