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
#ifdef ANXIETY_V1_Anxiety_v1Projectile_generated_h
#error "Anxiety_v1Projectile.generated.h already included, missing '#pragma once' in Anxiety_v1Projectile.h"
#endif
#define ANXIETY_V1_Anxiety_v1Projectile_generated_h

#define DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_RPC_WRAPPERS \
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


#define DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnxiety_v1Projectile(); \
	friend ANXIETY_V1_API class UClass* Z_Construct_UClass_AAnxiety_v1Projectile(); \
public: \
	DECLARE_CLASS(AAnxiety_v1Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Anxiety_v1"), NO_API) \
	DECLARE_SERIALIZER(AAnxiety_v1Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAnxiety_v1Projectile(); \
	friend ANXIETY_V1_API class UClass* Z_Construct_UClass_AAnxiety_v1Projectile(); \
public: \
	DECLARE_CLASS(AAnxiety_v1Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Anxiety_v1"), NO_API) \
	DECLARE_SERIALIZER(AAnxiety_v1Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnxiety_v1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnxiety_v1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnxiety_v1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnxiety_v1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnxiety_v1Projectile(AAnxiety_v1Projectile&&); \
	NO_API AAnxiety_v1Projectile(const AAnxiety_v1Projectile&); \
public:


#define DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnxiety_v1Projectile(AAnxiety_v1Projectile&&); \
	NO_API AAnxiety_v1Projectile(const AAnxiety_v1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnxiety_v1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnxiety_v1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAnxiety_v1Projectile)


#define DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AAnxiety_v1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAnxiety_v1Projectile, ProjectileMovement); }


#define DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_9_PROLOG
#define DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_RPC_WRAPPERS \
	DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_INCLASS \
	DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_INCLASS_NO_PURE_DECLS \
	DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DesktopPrototype_Source_Anxiety_v1_Anxiety_v1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
