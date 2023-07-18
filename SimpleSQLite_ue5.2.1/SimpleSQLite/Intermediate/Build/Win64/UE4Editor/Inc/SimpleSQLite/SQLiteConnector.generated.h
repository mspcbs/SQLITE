// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSQLiteReturnInfo;
class USQLiteResultor;
#ifdef SIMPLESQLITE_SQLiteConnector_generated_h
#error "SQLiteConnector.generated.h already included, missing '#pragma once' in SQLiteConnector.h"
#endif
#define SIMPLESQLITE_SQLiteConnector_generated_h

#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_SPARSE_DATA
#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLastErrorInfo); \
	DECLARE_FUNCTION(execExecuteWithRecordSet); \
	DECLARE_FUNCTION(execExecuteNoRecordSet); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen);


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLastErrorInfo); \
	DECLARE_FUNCTION(execExecuteWithRecordSet); \
	DECLARE_FUNCTION(execExecuteNoRecordSet); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen);


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQLiteConnector(); \
	friend struct Z_Construct_UClass_USQLiteConnector_Statics; \
public: \
	DECLARE_CLASS(USQLiteConnector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSQLite"), NO_API) \
	DECLARE_SERIALIZER(USQLiteConnector)


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSQLiteConnector(); \
	friend struct Z_Construct_UClass_USQLiteConnector_Statics; \
public: \
	DECLARE_CLASS(USQLiteConnector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSQLite"), NO_API) \
	DECLARE_SERIALIZER(USQLiteConnector)


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteConnector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteConnector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteConnector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteConnector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteConnector(USQLiteConnector&&); \
	NO_API USQLiteConnector(const USQLiteConnector&); \
public:


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteConnector(USQLiteConnector&&); \
	NO_API USQLiteConnector(const USQLiteConnector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteConnector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteConnector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteConnector)


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_PRIVATE_PROPERTY_OFFSET
#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_16_PROLOG
#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_SPARSE_DATA \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_RPC_WRAPPERS \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_INCLASS \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_SPARSE_DATA \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_INCLASS_NO_PURE_DECLS \
	MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLESQLITE_API UClass* StaticClass<class USQLiteConnector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject4_Plugins_SimpleSQLite_Source_Public_SQLiteConnector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
