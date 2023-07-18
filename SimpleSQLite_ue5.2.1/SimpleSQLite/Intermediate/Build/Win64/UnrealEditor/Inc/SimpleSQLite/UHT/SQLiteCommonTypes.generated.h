// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SQLiteCommonTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLESQLITE_SQLiteCommonTypes_generated_h
#error "SQLiteCommonTypes.generated.h already included, missing '#pragma once' in SQLiteCommonTypes.h"
#endif
#define SIMPLESQLITE_SQLiteCommonTypes_generated_h

#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics; \
	SIMPLESQLITE_API static class UScriptStruct* StaticStruct();


template<> SIMPLESQLITE_API UScriptStruct* StaticStruct<struct FSQLiteColumnInfo>();

#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics; \
	SIMPLESQLITE_API static class UScriptStruct* StaticStruct();


template<> SIMPLESQLITE_API UScriptStruct* StaticStruct<struct FSQLiteReturnInfo>();

#define FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShopItem_Statics; \
	SIMPLESQLITE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SIMPLESQLITE_API UScriptStruct* StaticStruct<struct FShopItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h


#define FOREACH_ENUM_ESQLITERETURNINFOTYPE(op) \
	op(ESQLiteReturnInfoType::SQLITE_OK) \
	op(ESQLiteReturnInfoType::SQLITE_ERROR) \
	op(ESQLiteReturnInfoType::SQLITE_INTERNAL) \
	op(ESQLiteReturnInfoType::SQLITE_PERM) \
	op(ESQLiteReturnInfoType::SQLITE_ABORT) \
	op(ESQLiteReturnInfoType::SQLITE_BUSY) \
	op(ESQLiteReturnInfoType::SQLITE_LOCKED) \
	op(ESQLiteReturnInfoType::SQLITE_NOMEM) \
	op(ESQLiteReturnInfoType::SQLITE_READONLY) \
	op(ESQLiteReturnInfoType::SQLITE_INTERRUPT) \
	op(ESQLiteReturnInfoType::SQLITE_IOERR) \
	op(ESQLiteReturnInfoType::SQLITE_CORRUPT) \
	op(ESQLiteReturnInfoType::SQLITE_NOTFOUND) \
	op(ESQLiteReturnInfoType::SQLITE_FULL) \
	op(ESQLiteReturnInfoType::SQLITE_CANTOPEN) \
	op(ESQLiteReturnInfoType::SQLITE_PROTOCOL) \
	op(ESQLiteReturnInfoType::SQLITE_EMPTY) \
	op(ESQLiteReturnInfoType::SQLITE_SCHEMA) \
	op(ESQLiteReturnInfoType::SQLITE_TOOBIG) \
	op(ESQLiteReturnInfoType::SQLITE_CONSTRAINT) \
	op(ESQLiteReturnInfoType::SQLITE_MISMATCH) \
	op(ESQLiteReturnInfoType::SQLITE_MISUSE) \
	op(ESQLiteReturnInfoType::SQLITE_NOLFS) \
	op(ESQLiteReturnInfoType::SQLITE_AUTH) \
	op(ESQLiteReturnInfoType::SQLITE_FORMAT) \
	op(ESQLiteReturnInfoType::SQLITE_RANGE) \
	op(ESQLiteReturnInfoType::SQLITE_NOTADB) \
	op(ESQLiteReturnInfoType::SQLITE_NOTICE) \
	op(ESQLiteReturnInfoType::SQLITE_WARNING) \
	op(ESQLiteReturnInfoType::SQLITE_ROW) \
	op(ESQLiteReturnInfoType::SQLITE_DONE) 

enum class ESQLiteReturnInfoType : uint8;
template<> struct TIsUEnumClass<ESQLiteReturnInfoType> { enum { Value = true }; };
template<> SIMPLESQLITE_API UEnum* StaticEnum<ESQLiteReturnInfoType>();

#define FOREACH_ENUM_ESQLITEDATATYPE(op) \
	op(ESQLiteDataType::SQLITE_DT_UNKOWN) \
	op(ESQLiteDataType::SQLITE_DT_FLOAT) \
	op(ESQLiteDataType::SQLITE_DT_INT) \
	op(ESQLiteDataType::SQLITE_DT_STRING) 

enum class ESQLiteDataType : uint8;
template<> struct TIsUEnumClass<ESQLiteDataType> { enum { Value = true }; };
template<> SIMPLESQLITE_API UEnum* StaticEnum<ESQLiteDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
