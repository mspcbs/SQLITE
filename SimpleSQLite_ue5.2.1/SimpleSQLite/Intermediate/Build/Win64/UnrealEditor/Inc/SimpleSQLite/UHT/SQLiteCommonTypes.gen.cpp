// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/SQLiteCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLiteCommonTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SIMPLESQLITE_API UEnum* Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType();
	SIMPLESQLITE_API UEnum* Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType();
	SIMPLESQLITE_API UScriptStruct* Z_Construct_UScriptStruct_FShopItem();
	SIMPLESQLITE_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteColumnInfo();
	SIMPLESQLITE_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteReturnInfo();
	UPackage* Z_Construct_UPackage__Script_SimpleSQLite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESQLiteReturnInfoType;
	static UEnum* ESQLiteReturnInfoType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESQLiteReturnInfoType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESQLiteReturnInfoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType, (UObject*)Z_Construct_UPackage__Script_SimpleSQLite(), TEXT("ESQLiteReturnInfoType"));
		}
		return Z_Registration_Info_UEnum_ESQLiteReturnInfoType.OuterSingleton;
	}
	template<> SIMPLESQLITE_API UEnum* StaticEnum<ESQLiteReturnInfoType>()
	{
		return ESQLiteReturnInfoType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Statics::Enumerators[] = {
		{ "ESQLiteReturnInfoType::SQLITE_OK", (int64)ESQLiteReturnInfoType::SQLITE_OK },
		{ "ESQLiteReturnInfoType::SQLITE_ERROR", (int64)ESQLiteReturnInfoType::SQLITE_ERROR },
		{ "ESQLiteReturnInfoType::SQLITE_INTERNAL", (int64)ESQLiteReturnInfoType::SQLITE_INTERNAL },
		{ "ESQLiteReturnInfoType::SQLITE_PERM", (int64)ESQLiteReturnInfoType::SQLITE_PERM },
		{ "ESQLiteReturnInfoType::SQLITE_ABORT", (int64)ESQLiteReturnInfoType::SQLITE_ABORT },
		{ "ESQLiteReturnInfoType::SQLITE_BUSY", (int64)ESQLiteReturnInfoType::SQLITE_BUSY },
		{ "ESQLiteReturnInfoType::SQLITE_LOCKED", (int64)ESQLiteReturnInfoType::SQLITE_LOCKED },
		{ "ESQLiteReturnInfoType::SQLITE_NOMEM", (int64)ESQLiteReturnInfoType::SQLITE_NOMEM },
		{ "ESQLiteReturnInfoType::SQLITE_READONLY", (int64)ESQLiteReturnInfoType::SQLITE_READONLY },
		{ "ESQLiteReturnInfoType::SQLITE_INTERRUPT", (int64)ESQLiteReturnInfoType::SQLITE_INTERRUPT },
		{ "ESQLiteReturnInfoType::SQLITE_IOERR", (int64)ESQLiteReturnInfoType::SQLITE_IOERR },
		{ "ESQLiteReturnInfoType::SQLITE_CORRUPT", (int64)ESQLiteReturnInfoType::SQLITE_CORRUPT },
		{ "ESQLiteReturnInfoType::SQLITE_NOTFOUND", (int64)ESQLiteReturnInfoType::SQLITE_NOTFOUND },
		{ "ESQLiteReturnInfoType::SQLITE_FULL", (int64)ESQLiteReturnInfoType::SQLITE_FULL },
		{ "ESQLiteReturnInfoType::SQLITE_CANTOPEN", (int64)ESQLiteReturnInfoType::SQLITE_CANTOPEN },
		{ "ESQLiteReturnInfoType::SQLITE_PROTOCOL", (int64)ESQLiteReturnInfoType::SQLITE_PROTOCOL },
		{ "ESQLiteReturnInfoType::SQLITE_EMPTY", (int64)ESQLiteReturnInfoType::SQLITE_EMPTY },
		{ "ESQLiteReturnInfoType::SQLITE_SCHEMA", (int64)ESQLiteReturnInfoType::SQLITE_SCHEMA },
		{ "ESQLiteReturnInfoType::SQLITE_TOOBIG", (int64)ESQLiteReturnInfoType::SQLITE_TOOBIG },
		{ "ESQLiteReturnInfoType::SQLITE_CONSTRAINT", (int64)ESQLiteReturnInfoType::SQLITE_CONSTRAINT },
		{ "ESQLiteReturnInfoType::SQLITE_MISMATCH", (int64)ESQLiteReturnInfoType::SQLITE_MISMATCH },
		{ "ESQLiteReturnInfoType::SQLITE_MISUSE", (int64)ESQLiteReturnInfoType::SQLITE_MISUSE },
		{ "ESQLiteReturnInfoType::SQLITE_NOLFS", (int64)ESQLiteReturnInfoType::SQLITE_NOLFS },
		{ "ESQLiteReturnInfoType::SQLITE_AUTH", (int64)ESQLiteReturnInfoType::SQLITE_AUTH },
		{ "ESQLiteReturnInfoType::SQLITE_FORMAT", (int64)ESQLiteReturnInfoType::SQLITE_FORMAT },
		{ "ESQLiteReturnInfoType::SQLITE_RANGE", (int64)ESQLiteReturnInfoType::SQLITE_RANGE },
		{ "ESQLiteReturnInfoType::SQLITE_NOTADB", (int64)ESQLiteReturnInfoType::SQLITE_NOTADB },
		{ "ESQLiteReturnInfoType::SQLITE_NOTICE", (int64)ESQLiteReturnInfoType::SQLITE_NOTICE },
		{ "ESQLiteReturnInfoType::SQLITE_WARNING", (int64)ESQLiteReturnInfoType::SQLITE_WARNING },
		{ "ESQLiteReturnInfoType::SQLITE_ROW", (int64)ESQLiteReturnInfoType::SQLITE_ROW },
		{ "ESQLiteReturnInfoType::SQLITE_DONE", (int64)ESQLiteReturnInfoType::SQLITE_DONE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
		{ "SQLITE_ABORT.Comment", "/**\x09""Callback routine requested an abort */" },
		{ "SQLITE_ABORT.DisplayName", "SQLITE_ABORT" },
		{ "SQLITE_ABORT.Name", "ESQLiteReturnInfoType::SQLITE_ABORT" },
		{ "SQLITE_ABORT.ToolTip", "Callback routine requested an abort" },
		{ "SQLITE_AUTH.Comment", "/**\x09""Authorization denied */" },
		{ "SQLITE_AUTH.DisplayName", "SQLITE_AUTH" },
		{ "SQLITE_AUTH.Name", "ESQLiteReturnInfoType::SQLITE_AUTH" },
		{ "SQLITE_AUTH.ToolTip", "Authorization denied" },
		{ "SQLITE_BUSY.Comment", "/**\x09The database file is locked */" },
		{ "SQLITE_BUSY.DisplayName", "SQLITE_BUSY" },
		{ "SQLITE_BUSY.Name", "ESQLiteReturnInfoType::SQLITE_BUSY" },
		{ "SQLITE_BUSY.ToolTip", "The database file is locked" },
		{ "SQLITE_CANTOPEN.Comment", "/**\x09Unable to open the database file */" },
		{ "SQLITE_CANTOPEN.DisplayName", "SQLITE_CANTOPEN" },
		{ "SQLITE_CANTOPEN.Name", "ESQLiteReturnInfoType::SQLITE_CANTOPEN" },
		{ "SQLITE_CANTOPEN.ToolTip", "Unable to open the database file" },
		{ "SQLITE_CONSTRAINT.Comment", "/**\x09""Abort due to constraint violation */" },
		{ "SQLITE_CONSTRAINT.DisplayName", "SQLITE_CONSTRAINT" },
		{ "SQLITE_CONSTRAINT.Name", "ESQLiteReturnInfoType::SQLITE_CONSTRAINT" },
		{ "SQLITE_CONSTRAINT.ToolTip", "Abort due to constraint violation" },
		{ "SQLITE_CORRUPT.Comment", "/**\x09The database disk image is malformed */" },
		{ "SQLITE_CORRUPT.DisplayName", "SQLITE_CORRUPT" },
		{ "SQLITE_CORRUPT.Name", "ESQLiteReturnInfoType::SQLITE_CORRUPT" },
		{ "SQLITE_CORRUPT.ToolTip", "The database disk image is malformed" },
		{ "SQLITE_DONE.Comment", "/**\x09sqlite3_step() has finished executing */" },
		{ "SQLITE_DONE.DisplayName", "SQLITE_DONE" },
		{ "SQLITE_DONE.Name", "ESQLiteReturnInfoType::SQLITE_DONE" },
		{ "SQLITE_DONE.ToolTip", "sqlite3_step() has finished executing" },
		{ "SQLITE_EMPTY.Comment", "/**\x09""Database is empty */" },
		{ "SQLITE_EMPTY.DisplayName", "SQLITE_EMPTY" },
		{ "SQLITE_EMPTY.Name", "ESQLiteReturnInfoType::SQLITE_EMPTY" },
		{ "SQLITE_EMPTY.ToolTip", "Database is empty" },
		{ "SQLITE_ERROR.Comment", "/**\x09SQL error or missing database */" },
		{ "SQLITE_ERROR.DisplayName", "SQLITE_ERROR" },
		{ "SQLITE_ERROR.Name", "ESQLiteReturnInfoType::SQLITE_ERROR" },
		{ "SQLITE_ERROR.ToolTip", "SQL error or missing database" },
		{ "SQLITE_FORMAT.Comment", "/**\x09""Auxiliary database format error */" },
		{ "SQLITE_FORMAT.DisplayName", "SQLITE_FORMAT" },
		{ "SQLITE_FORMAT.Name", "ESQLiteReturnInfoType::SQLITE_FORMAT" },
		{ "SQLITE_FORMAT.ToolTip", "Auxiliary database format error" },
		{ "SQLITE_FULL.Comment", "/**\x09Insertion failed because database is full */" },
		{ "SQLITE_FULL.DisplayName", "SQLITE_FULL" },
		{ "SQLITE_FULL.Name", "ESQLiteReturnInfoType::SQLITE_FULL" },
		{ "SQLITE_FULL.ToolTip", "Insertion failed because database is full" },
		{ "SQLITE_INTERNAL.Comment", "/**\x09Internal logic error in SQLite */" },
		{ "SQLITE_INTERNAL.DisplayName", "SQLITE_INTERNAL" },
		{ "SQLITE_INTERNAL.Name", "ESQLiteReturnInfoType::SQLITE_INTERNAL" },
		{ "SQLITE_INTERNAL.ToolTip", "Internal logic error in SQLite" },
		{ "SQLITE_INTERRUPT.Comment", "/**\x09Operation terminated by sqlite3_interrupt() */" },
		{ "SQLITE_INTERRUPT.DisplayName", "SQLITE_INTERRUPT" },
		{ "SQLITE_INTERRUPT.Name", "ESQLiteReturnInfoType::SQLITE_INTERRUPT" },
		{ "SQLITE_INTERRUPT.ToolTip", "Operation terminated by sqlite3_interrupt()" },
		{ "SQLITE_IOERR.Comment", "/**\x09Some kind of disk I/O error occurred */" },
		{ "SQLITE_IOERR.DisplayName", "SQLITE_IOERR" },
		{ "SQLITE_IOERR.Name", "ESQLiteReturnInfoType::SQLITE_IOERR" },
		{ "SQLITE_IOERR.ToolTip", "Some kind of disk I/O error occurred" },
		{ "SQLITE_LOCKED.Comment", "/**\x09""A table in the database is locked */" },
		{ "SQLITE_LOCKED.DisplayName", "SQLITE_LOCKED" },
		{ "SQLITE_LOCKED.Name", "ESQLiteReturnInfoType::SQLITE_LOCKED" },
		{ "SQLITE_LOCKED.ToolTip", "A table in the database is locked" },
		{ "SQLITE_MISMATCH.Comment", "/**\x09""Data type mismatch */" },
		{ "SQLITE_MISMATCH.DisplayName", "SQLITE_MISMATCH" },
		{ "SQLITE_MISMATCH.Name", "ESQLiteReturnInfoType::SQLITE_MISMATCH" },
		{ "SQLITE_MISMATCH.ToolTip", "Data type mismatch" },
		{ "SQLITE_MISUSE.Comment", "/**\x09Library used incorrectly */" },
		{ "SQLITE_MISUSE.DisplayName", "SQLITE_MISUSE" },
		{ "SQLITE_MISUSE.Name", "ESQLiteReturnInfoType::SQLITE_MISUSE" },
		{ "SQLITE_MISUSE.ToolTip", "Library used incorrectly" },
		{ "SQLITE_NOLFS.Comment", "/**\x09Uses OS features not supported on host */" },
		{ "SQLITE_NOLFS.DisplayName", "SQLITE_NOLFS" },
		{ "SQLITE_NOLFS.Name", "ESQLiteReturnInfoType::SQLITE_NOLFS" },
		{ "SQLITE_NOLFS.ToolTip", "Uses OS features not supported on host" },
		{ "SQLITE_NOMEM.Comment", "/**\x09""A malloc() failed */" },
		{ "SQLITE_NOMEM.DisplayName", "SQLITE_NOMEM" },
		{ "SQLITE_NOMEM.Name", "ESQLiteReturnInfoType::SQLITE_NOMEM" },
		{ "SQLITE_NOMEM.ToolTip", "A malloc() failed" },
		{ "SQLITE_NOTADB.Comment", "/**\x09""File opened that is not a database file */" },
		{ "SQLITE_NOTADB.DisplayName", "SQLITE_NOTADB" },
		{ "SQLITE_NOTADB.Name", "ESQLiteReturnInfoType::SQLITE_NOTADB" },
		{ "SQLITE_NOTADB.ToolTip", "File opened that is not a database file" },
		{ "SQLITE_NOTFOUND.Comment", "/**\x09Unknown opcode in sqlite3_file_control() */" },
		{ "SQLITE_NOTFOUND.DisplayName", "SQLITE_NOTFOUND" },
		{ "SQLITE_NOTFOUND.Name", "ESQLiteReturnInfoType::SQLITE_NOTFOUND" },
		{ "SQLITE_NOTFOUND.ToolTip", "Unknown opcode in sqlite3_file_control()" },
		{ "SQLITE_NOTICE.Comment", "/**\x09Notifications from sqlite3_log() */" },
		{ "SQLITE_NOTICE.DisplayName", "SQLITE_NOTICE" },
		{ "SQLITE_NOTICE.Name", "ESQLiteReturnInfoType::SQLITE_NOTICE" },
		{ "SQLITE_NOTICE.ToolTip", "Notifications from sqlite3_log()" },
		{ "SQLITE_OK.Comment", "/**\x09Successful result */" },
		{ "SQLITE_OK.DisplayName", "SQLITE_OK" },
		{ "SQLITE_OK.Name", "ESQLiteReturnInfoType::SQLITE_OK" },
		{ "SQLITE_OK.ToolTip", "Successful result" },
		{ "SQLITE_PERM.Comment", "/**\x09""Access permission denied */" },
		{ "SQLITE_PERM.DisplayName", "SQLITE_PERM" },
		{ "SQLITE_PERM.Name", "ESQLiteReturnInfoType::SQLITE_PERM" },
		{ "SQLITE_PERM.ToolTip", "Access permission denied" },
		{ "SQLITE_PROTOCOL.Comment", "/**\x09""Database lock protocol error */" },
		{ "SQLITE_PROTOCOL.DisplayName", "SQLITE_PROTOCOL" },
		{ "SQLITE_PROTOCOL.Name", "ESQLiteReturnInfoType::SQLITE_PROTOCOL" },
		{ "SQLITE_PROTOCOL.ToolTip", "Database lock protocol error" },
		{ "SQLITE_RANGE.Comment", "/**\x09""2nd parameter to sqlite3_bind out of range */" },
		{ "SQLITE_RANGE.DisplayName", "SQLITE_RANGE" },
		{ "SQLITE_RANGE.Name", "ESQLiteReturnInfoType::SQLITE_RANGE" },
		{ "SQLITE_RANGE.ToolTip", "2nd parameter to sqlite3_bind out of range" },
		{ "SQLITE_READONLY.Comment", "/**\x09""Attempt to write a readonly database */" },
		{ "SQLITE_READONLY.DisplayName", "SQLITE_READONLY" },
		{ "SQLITE_READONLY.Name", "ESQLiteReturnInfoType::SQLITE_READONLY" },
		{ "SQLITE_READONLY.ToolTip", "Attempt to write a readonly database" },
		{ "SQLITE_ROW.Comment", "/**\x09sqlite3_step() has another row ready */" },
		{ "SQLITE_ROW.DisplayName", "SQLITE_ROW" },
		{ "SQLITE_ROW.Name", "ESQLiteReturnInfoType::SQLITE_ROW" },
		{ "SQLITE_ROW.ToolTip", "sqlite3_step() has another row ready" },
		{ "SQLITE_SCHEMA.Comment", "/**\x09The database schema changed */" },
		{ "SQLITE_SCHEMA.DisplayName", "SQLITE_SCHEMA" },
		{ "SQLITE_SCHEMA.Name", "ESQLiteReturnInfoType::SQLITE_SCHEMA" },
		{ "SQLITE_SCHEMA.ToolTip", "The database schema changed" },
		{ "SQLITE_TOOBIG.Comment", "/**\x09String or BLOB exceeds size limit */" },
		{ "SQLITE_TOOBIG.DisplayName", "SQLITE_TOOBIG" },
		{ "SQLITE_TOOBIG.Name", "ESQLiteReturnInfoType::SQLITE_TOOBIG" },
		{ "SQLITE_TOOBIG.ToolTip", "String or BLOB exceeds size limit" },
		{ "SQLITE_WARNING.Comment", "/**\x09Warnings from sqlite3_log() */" },
		{ "SQLITE_WARNING.DisplayName", "SQLITE_WARNING" },
		{ "SQLITE_WARNING.Name", "ESQLiteReturnInfoType::SQLITE_WARNING" },
		{ "SQLITE_WARNING.ToolTip", "Warnings from sqlite3_log()" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleSQLite,
		nullptr,
		"ESQLiteReturnInfoType",
		"ESQLiteReturnInfoType",
		Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType()
	{
		if (!Z_Registration_Info_UEnum_ESQLiteReturnInfoType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESQLiteReturnInfoType.InnerSingleton, Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESQLiteReturnInfoType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESQLiteDataType;
	static UEnum* ESQLiteDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESQLiteDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESQLiteDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType, (UObject*)Z_Construct_UPackage__Script_SimpleSQLite(), TEXT("ESQLiteDataType"));
		}
		return Z_Registration_Info_UEnum_ESQLiteDataType.OuterSingleton;
	}
	template<> SIMPLESQLITE_API UEnum* StaticEnum<ESQLiteDataType>()
	{
		return ESQLiteDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Statics::Enumerators[] = {
		{ "ESQLiteDataType::SQLITE_DT_UNKOWN", (int64)ESQLiteDataType::SQLITE_DT_UNKOWN },
		{ "ESQLiteDataType::SQLITE_DT_FLOAT", (int64)ESQLiteDataType::SQLITE_DT_FLOAT },
		{ "ESQLiteDataType::SQLITE_DT_INT", (int64)ESQLiteDataType::SQLITE_DT_INT },
		{ "ESQLiteDataType::SQLITE_DT_STRING", (int64)ESQLiteDataType::SQLITE_DT_STRING },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Type of SQLite Database data.\n */" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
		{ "SQLITE_DT_FLOAT.Comment", "/**\x09SQLite Data Type:float */" },
		{ "SQLITE_DT_FLOAT.DisplayName", "FLOAT" },
		{ "SQLITE_DT_FLOAT.Name", "ESQLiteDataType::SQLITE_DT_FLOAT" },
		{ "SQLITE_DT_FLOAT.ToolTip", "SQLite Data Type:float" },
		{ "SQLITE_DT_INT.Comment", "/**\x09SQLite Data Type:int */" },
		{ "SQLITE_DT_INT.DisplayName", "INT" },
		{ "SQLITE_DT_INT.Name", "ESQLiteDataType::SQLITE_DT_INT" },
		{ "SQLITE_DT_INT.ToolTip", "SQLite Data Type:int" },
		{ "SQLITE_DT_STRING.Comment", "/**\x09SQLite Data Type:string */" },
		{ "SQLITE_DT_STRING.DisplayName", "STRING" },
		{ "SQLITE_DT_STRING.Name", "ESQLiteDataType::SQLITE_DT_STRING" },
		{ "SQLITE_DT_STRING.ToolTip", "SQLite Data Type:string" },
		{ "SQLITE_DT_UNKOWN.Comment", "/**\x09SQLite Data Type:Unkown */" },
		{ "SQLITE_DT_UNKOWN.DisplayName", "UNKOWN" },
		{ "SQLITE_DT_UNKOWN.Name", "ESQLiteDataType::SQLITE_DT_UNKOWN" },
		{ "SQLITE_DT_UNKOWN.ToolTip", "SQLite Data Type:Unkown" },
		{ "ToolTip", "Type of SQLite Database data." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleSQLite,
		nullptr,
		"ESQLiteDataType",
		"ESQLiteDataType",
		Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType()
	{
		if (!Z_Registration_Info_UEnum_ESQLiteDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESQLiteDataType.InnerSingleton, Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESQLiteDataType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SQLiteColumnInfo;
class UScriptStruct* FSQLiteColumnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SQLiteColumnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SQLiteColumnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteColumnInfo, (UObject*)Z_Construct_UPackage__Script_SimpleSQLite(), TEXT("SQLiteColumnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SQLiteColumnInfo.OuterSingleton;
}
template<> SIMPLESQLITE_API UScriptStruct* StaticStruct<FSQLiteColumnInfo>()
{
	return FSQLiteColumnInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This struct holds info relating to a column.  Specifically, we need to get back\n* certain meta info from a RecordSet so we can \"Get\" data from it.\n*/" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "This struct holds info relating to a column.  Specifically, we need to get back\ncertain meta info from a RecordSet so we can \"Get\" data from it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteColumnInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteColumnInfo" },
		{ "Comment", "/** The name of the column **/" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
		{ "ToolTip", "The name of the column *" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSQLiteColumnInfo, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_ColumnName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteColumnInfo" },
		{ "Comment", "/** This is the type of data in this column.  (e.g. so you can do GetFloat or GetInt on the column **/" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
		{ "ToolTip", "This is the type of data in this column.  (e.g. so you can do GetFloat or GetInt on the column *" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSQLiteColumnInfo, DataType), Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType_MetaData)) }; // 1964017328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_ColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSQLite,
		nullptr,
		&NewStructOps,
		"SQLiteColumnInfo",
		sizeof(FSQLiteColumnInfo),
		alignof(FSQLiteColumnInfo),
		Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteColumnInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SQLiteColumnInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SQLiteColumnInfo.InnerSingleton, Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SQLiteColumnInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SQLiteReturnInfo;
class UScriptStruct* FSQLiteReturnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SQLiteReturnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SQLiteReturnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteReturnInfo, (UObject*)Z_Construct_UPackage__Script_SimpleSQLite(), TEXT("SQLiteReturnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SQLiteReturnInfo.OuterSingleton;
}
template<> SIMPLESQLITE_API UScriptStruct* StaticStruct<FSQLiteReturnInfo>()
{
	return FSQLiteReturnInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnInfoType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnInfoType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnInfoType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteReturnInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteReturnInfo" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType = { "ReturnInfoType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSQLiteReturnInfo, ReturnInfoType), Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType_MetaData)) }; // 2817636783
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteReturnInfo" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSQLiteReturnInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSQLite,
		nullptr,
		&NewStructOps,
		"SQLiteReturnInfo",
		sizeof(FSQLiteReturnInfo),
		alignof(FSQLiteReturnInfo),
		Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteReturnInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SQLiteReturnInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SQLiteReturnInfo.InnerSingleton, Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SQLiteReturnInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FShopItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FShopItem cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShopItem;
class UScriptStruct* FShopItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShopItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShopItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopItem, (UObject*)Z_Construct_UPackage__Script_SimpleSQLite(), TEXT("ShopItem"));
	}
	return Z_Registration_Info_UScriptStruct_ShopItem.OuterSingleton;
}
template<> SIMPLESQLITE_API UScriptStruct* StaticStruct<FShopItem>()
{
	return FShopItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShopItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Price;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteReturnInfo" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShopItem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteReturnInfo" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShopItem, Icon), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Price_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteReturnInfo" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShopItem, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Price_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Price,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSQLite,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ShopItem",
		sizeof(FShopItem),
		alignof(FShopItem),
		Z_Construct_UScriptStruct_FShopItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShopItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShopItem()
	{
		if (!Z_Registration_Info_UScriptStruct_ShopItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShopItem.InnerSingleton, Z_Construct_UScriptStruct_FShopItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShopItem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_Statics::EnumInfo[] = {
		{ ESQLiteReturnInfoType_StaticEnum, TEXT("ESQLiteReturnInfoType"), &Z_Registration_Info_UEnum_ESQLiteReturnInfoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2817636783U) },
		{ ESQLiteDataType_StaticEnum, TEXT("ESQLiteDataType"), &Z_Registration_Info_UEnum_ESQLiteDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1964017328U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_Statics::ScriptStructInfo[] = {
		{ FSQLiteColumnInfo::StaticStruct, Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewStructOps, TEXT("SQLiteColumnInfo"), &Z_Registration_Info_UScriptStruct_SQLiteColumnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSQLiteColumnInfo), 3428834049U) },
		{ FSQLiteReturnInfo::StaticStruct, Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewStructOps, TEXT("SQLiteReturnInfo"), &Z_Registration_Info_UScriptStruct_SQLiteReturnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSQLiteReturnInfo), 621660009U) },
		{ FShopItem::StaticStruct, Z_Construct_UScriptStruct_FShopItem_Statics::NewStructOps, TEXT("ShopItem"), &Z_Registration_Info_UScriptStruct_ShopItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShopItem), 3312154567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_1867408065(TEXT("/Script/SimpleSQLite"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteCommonTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
