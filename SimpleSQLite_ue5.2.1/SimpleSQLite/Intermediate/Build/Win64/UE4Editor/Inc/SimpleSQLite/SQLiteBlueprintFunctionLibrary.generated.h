// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FShopItem;
class USQLiteConnector;
#ifdef SIMPLESQLITE_SQLiteBlueprintFunctionLibrary_generated_h
#error "SQLiteBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in SQLiteBlueprintFunctionLibrary.h"
#endif
#define SIMPLESQLITE_SQLiteBlueprintFunctionLibrary_generated_h

#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_SPARSE_DATA
#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestSQLiteConnect); \
	DECLARE_FUNCTION(execCreateSQLiteConnector);


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestSQLiteConnect); \
	DECLARE_FUNCTION(execCreateSQLiteConnector);


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQLiteBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQLiteBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSQLite"), NO_API) \
	DECLARE_SERIALIZER(USQLiteBlueprintFunctionLibrary)


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSQLiteBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQLiteBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSQLite"), NO_API) \
	DECLARE_SERIALIZER(USQLiteBlueprintFunctionLibrary)


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteBlueprintFunctionLibrary(USQLiteBlueprintFunctionLibrary&&); \
	NO_API USQLiteBlueprintFunctionLibrary(const USQLiteBlueprintFunctionLibrary&); \
public:


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteBlueprintFunctionLibrary(USQLiteBlueprintFunctionLibrary&&); \
	NO_API USQLiteBlueprintFunctionLibrary(const USQLiteBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteBlueprintFunctionLibrary)


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_PRIVATE_PROPERTY_OFFSET
#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_21_PROLOG
#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_SPARSE_DATA \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_RPC_WRAPPERS \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_INCLASS \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_SPARSE_DATA \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLESQLITE_API UClass* StaticClass<class USQLiteBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
