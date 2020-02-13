// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DIRGRAVITY_GravityMovementComponent_generated_h
#error "GravityMovementComponent.generated.h already included, missing '#pragma once' in GravityMovementComponent.h"
#endif
#define DIRGRAVITY_GravityMovementComponent_generated_h

#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGravityDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewGravityDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityDirection(Z_Param_NewGravityDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityDirection) \
	{ \
		P_GET_UBOOL(Z_Param_bAvoidZeroGravity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_bAvoidZeroGravity); \
		P_NATIVE_END; \
	}


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGravityDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewGravityDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityDirection(Z_Param_NewGravityDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityDirection) \
	{ \
		P_GET_UBOOL(Z_Param_bAvoidZeroGravity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_bAvoidZeroGravity); \
		P_NATIVE_END; \
	}


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGravityMovementComponent(); \
	friend struct Z_Construct_UClass_UGravityMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UGravityMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DirGravity"), NO_API) \
	DECLARE_SERIALIZER(UGravityMovementComponent)


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGravityMovementComponent(); \
	friend struct Z_Construct_UClass_UGravityMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UGravityMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DirGravity"), NO_API) \
	DECLARE_SERIALIZER(UGravityMovementComponent)


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGravityMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGravityMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGravityMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGravityMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGravityMovementComponent(UGravityMovementComponent&&); \
	NO_API UGravityMovementComponent(const UGravityMovementComponent&); \
public:


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGravityMovementComponent(UGravityMovementComponent&&); \
	NO_API UGravityMovementComponent(const UGravityMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGravityMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGravityMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGravityMovementComponent)


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bShowDebugLines() { return STRUCT_OFFSET(UGravityMovementComponent, bShowDebugLines); } \
	FORCEINLINE static uint32 __PPO__CustomGravityDirection() { return STRUCT_OFFSET(UGravityMovementComponent, CustomGravityDirection); }


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_10_PROLOG
#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_RPC_WRAPPERS \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_INCLASS \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_INCLASS_NO_PURE_DECLS \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIRGRAVITY_API UClass* StaticClass<class UGravityMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
