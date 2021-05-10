// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDING_ESCAPE_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define BUILDING_ESCAPE_OpenDoor_generated_h

#define Building_Escape_Source_Building_Escape_OpenDoor_h_14_SPARSE_DATA
#define Building_Escape_Source_Building_Escape_OpenDoor_h_14_RPC_WRAPPERS
#define Building_Escape_Source_Building_Escape_OpenDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Building_Escape_Source_Building_Escape_OpenDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Building_Escape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define Building_Escape_Source_Building_Escape_OpenDoor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Building_Escape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define Building_Escape_Source_Building_Escape_OpenDoor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define Building_Escape_Source_Building_Escape_OpenDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define Building_Escape_Source_Building_Escape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetYaw() { return STRUCT_OFFSET(UOpenDoor, TargetYaw); } \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UOpenDoor, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__DoorCloseDelay() { return STRUCT_OFFSET(UOpenDoor, DoorCloseDelay); } \
	FORCEINLINE static uint32 __PPO__DoorOpenSpeed() { return STRUCT_OFFSET(UOpenDoor, DoorOpenSpeed); } \
	FORCEINLINE static uint32 __PPO__DoorCloseSpeed() { return STRUCT_OFFSET(UOpenDoor, DoorCloseSpeed); } \
	FORCEINLINE static uint32 __PPO__MassToOpenDoor() { return STRUCT_OFFSET(UOpenDoor, MassToOpenDoor); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(UOpenDoor, AudioComponent); }


#define Building_Escape_Source_Building_Escape_OpenDoor_h_11_PROLOG
#define Building_Escape_Source_Building_Escape_OpenDoor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Building_Escape_Source_Building_Escape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	Building_Escape_Source_Building_Escape_OpenDoor_h_14_SPARSE_DATA \
	Building_Escape_Source_Building_Escape_OpenDoor_h_14_RPC_WRAPPERS \
	Building_Escape_Source_Building_Escape_OpenDoor_h_14_INCLASS \
	Building_Escape_Source_Building_Escape_OpenDoor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Building_Escape_Source_Building_Escape_OpenDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Building_Escape_Source_Building_Escape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	Building_Escape_Source_Building_Escape_OpenDoor_h_14_SPARSE_DATA \
	Building_Escape_Source_Building_Escape_OpenDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Building_Escape_Source_Building_Escape_OpenDoor_h_14_INCLASS_NO_PURE_DECLS \
	Building_Escape_Source_Building_Escape_OpenDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDING_ESCAPE_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Building_Escape_Source_Building_Escape_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
