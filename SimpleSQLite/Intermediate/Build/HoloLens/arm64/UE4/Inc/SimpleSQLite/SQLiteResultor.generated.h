// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSQLiteColumnInfo;
#ifdef SIMPLESQLITE_SQLiteResultor_generated_h
#error "SQLiteResultor.generated.h already included, missing '#pragma once' in SQLiteResultor.h"
#endif
#define SIMPLESQLITE_SQLiteResultor_generated_h

#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_SPARSE_DATA
#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetColumnInfos); \
	DECLARE_FUNCTION(execGetBigInt); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetRecordCount);


#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetColumnInfos); \
	DECLARE_FUNCTION(execGetBigInt); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetRecordCount);


#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQLiteResultor(); \
	friend struct Z_Construct_UClass_USQLiteResultor_Statics; \
public: \
	DECLARE_CLASS(USQLiteResultor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSQLite"), NO_API) \
	DECLARE_SERIALIZER(USQLiteResultor)


#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSQLiteResultor(); \
	friend struct Z_Construct_UClass_USQLiteResultor_Statics; \
public: \
	DECLARE_CLASS(USQLiteResultor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSQLite"), NO_API) \
	DECLARE_SERIALIZER(USQLiteResultor)


#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteResultor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteResultor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteResultor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteResultor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteResultor(USQLiteResultor&&); \
	NO_API USQLiteResultor(const USQLiteResultor&); \
public:


#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteResultor(USQLiteResultor&&); \
	NO_API USQLiteResultor(const USQLiteResultor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteResultor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteResultor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteResultor)


#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_21_PROLOG
#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_SPARSE_DATA \
	HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_RPC_WRAPPERS \
	HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_INCLASS \
	HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_SPARSE_DATA \
	HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLESQLITE_API UClass* StaticClass<class USQLiteResultor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
