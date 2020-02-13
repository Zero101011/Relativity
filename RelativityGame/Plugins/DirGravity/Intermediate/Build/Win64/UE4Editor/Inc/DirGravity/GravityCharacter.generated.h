// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGravityMovementComponent;
#ifdef DIRGRAVITY_GravityCharacter_generated_h
#error "GravityCharacter.generated.h already included, missing '#pragma once' in GravityCharacter.h"
#endif
#define DIRGRAVITY_GravityCharacter_generated_h

#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGravityMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGravityMovementComponent**)Z_Param__Result=P_THIS->GetGravityMovementComponent(); \
		P_NATIVE_END; \
	}


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGravityMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGravityMovementComponent**)Z_Param__Result=P_THIS->GetGravityMovementComponent(); \
		P_NATIVE_END; \
	}


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGravityCharacter(); \
	friend struct Z_Construct_UClass_AGravityCharacter_Statics; \
public: \
	DECLARE_CLASS(AGravityCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DirGravity"), NO_API) \
	DECLARE_SERIALIZER(AGravityCharacter)


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGravityCharacter(); \
	friend struct Z_Construct_UClass_AGravityCharacter_Statics; \
public: \
	DECLARE_CLASS(AGravityCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DirGravity"), NO_API) \
	DECLARE_SERIALIZER(AGravityCharacter)


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGravityCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGravityCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGravityCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGravityCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGravityCharacter(AGravityCharacter&&); \
	NO_API AGravityCharacter(const AGravityCharacter&); \
public:


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGravityCharacter(AGravityCharacter&&); \
	NO_API AGravityCharacter(const AGravityCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGravityCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGravityCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGravityCharacter)


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_12_PROLOG
#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_RPC_WRAPPERS \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_INCLASS \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_INCLASS_NO_PURE_DECLS \
	DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIRGRAVITY_API UClass* StaticClass<class AGravityCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DirectionalGravity_4_22_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
