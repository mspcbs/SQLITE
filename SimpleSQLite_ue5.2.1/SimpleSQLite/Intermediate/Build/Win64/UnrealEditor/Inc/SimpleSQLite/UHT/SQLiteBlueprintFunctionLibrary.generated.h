// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SQLiteBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USQLiteConnector;
struct FShopItem;
#ifdef SIMPLESQLITE_SQLiteBlueprintFunctionLibrary_generated_h
#error "SQLiteBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in SQLiteBlueprintFunctionLibrary.h"
#endif
#define SIMPLESQLITE_SQLiteBlueprintFunctionLibrary_generated_h

#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_SPARSE_DATA
#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestSQLiteConnect); \
	DECLARE_FUNCTION(execCreateSQLiteConnector);


#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestSQLiteConnect); \
	DECLARE_FUNCTION(execCreateSQLiteConnector);


#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_ACCESSORS
#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQLiteBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQLiteBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSQLite"), NO_API) \
	DECLARE_SERIALIZER(USQLiteBlueprintFunctionLibrary)


#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSQLiteBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQLiteBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSQLite"), NO_API) \
	DECLARE_SERIALIZER(USQLiteBlueprintFunctionLibrary)


#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteBlueprintFunctionLibrary(USQLiteBlueprintFunctionLibrary&&); \
	NO_API USQLiteBlueprintFunctionLibrary(const USQLiteBlueprintFunctionLibrary&); \
public: \
	NO_API virtual ~USQLiteBlueprintFunctionLibrary();


#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteBlueprintFunctionLibrary(USQLiteBlueprintFunctionLibrary&&); \
	NO_API USQLiteBlueprintFunctionLibrary(const USQLiteBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteBlueprintFunctionLibrary) \
	NO_API virtual ~USQLiteBlueprintFunctionLibrary();


#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_21_PROLOG
#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_SPARSE_DATA \
	FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_RPC_WRAPPERS \
	FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_ACCESSORS \
	FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_INCLASS \
	FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_SPARSE_DATA \
	FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_ACCESSORS \
	FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLESQLITE_API UClass* StaticClass<class USQLiteBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
