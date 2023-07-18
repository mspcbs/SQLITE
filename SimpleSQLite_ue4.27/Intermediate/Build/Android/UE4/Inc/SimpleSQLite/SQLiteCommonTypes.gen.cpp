// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/SQLiteCommonTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLiteCommonTypes() {}
// Cross Module References
	SIMPLESQLITE_API UEnum* Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType();
	UPackage* Z_Construct_UPackage__Script_SimpleSQLite();
	SIMPLESQLITE_API UEnum* Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType();
	SIMPLESQLITE_API UScriptStruct* Z_Construct_UScriptStruct_FShopItem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SIMPLESQLITE_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteReturnInfo();
	SIMPLESQLITE_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteColumnInfo();
// End Cross Module References
	static UEnum* ESQLiteDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType, Z_Construct_UPackage__Script_SimpleSQLite(), TEXT("ESQLiteDataType"));
		}
		return Singleton;
	}
	template<> SIMPLESQLITE_API UEnum* StaticEnum<ESQLiteDataType>()
	{
		return ESQLiteDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQLiteDataType(ESQLiteDataType_StaticEnum, TEXT("/Script/SimpleSQLite"), TEXT("ESQLiteDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Hash() { return 2705298456U; }
	UEnum* Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleSQLite();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQLiteDataType"), 0, Get_Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESQLiteDataType::SQLITE_DT_UNKOWN", (int64)ESQLiteDataType::SQLITE_DT_UNKOWN },
				{ "ESQLiteDataType::SQLITE_DT_FLOAT", (int64)ESQLiteDataType::SQLITE_DT_FLOAT },
				{ "ESQLiteDataType::SQLITE_DT_INT", (int64)ESQLiteDataType::SQLITE_DT_INT },
				{ "ESQLiteDataType::SQLITE_DT_STRING", (int64)ESQLiteDataType::SQLITE_DT_STRING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleSQLite,
				nullptr,
				"ESQLiteDataType",
				"ESQLiteDataType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESQLiteReturnInfoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType, Z_Construct_UPackage__Script_SimpleSQLite(), TEXT("ESQLiteReturnInfoType"));
		}
		return Singleton;
	}
	template<> SIMPLESQLITE_API UEnum* StaticEnum<ESQLiteReturnInfoType>()
	{
		return ESQLiteReturnInfoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQLiteReturnInfoType(ESQLiteReturnInfoType_StaticEnum, TEXT("/Script/SimpleSQLite"), TEXT("ESQLiteReturnInfoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Hash() { return 2285347569U; }
	UEnum* Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleSQLite();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQLiteReturnInfoType"), 0, Get_Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleSQLite,
				nullptr,
				"ESQLiteReturnInfoType",
				"ESQLiteReturnInfoType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FShopItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FShopItem cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FShopItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLESQLITE_API uint32 Get_Z_Construct_UScriptStruct_FShopItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopItem, Z_Construct_UPackage__Script_SimpleSQLite(), TEXT("ShopItem"), sizeof(FShopItem), Get_Z_Construct_UScriptStruct_FShopItem_Hash());
	}
	return Singleton;
}
template<> SIMPLESQLITE_API UScriptStruct* StaticStruct<FShopItem>()
{
	return FShopItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShopItem(FShopItem::StaticStruct, TEXT("/Script/SimpleSQLite"), TEXT("ShopItem"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleSQLite_StaticRegisterNativesFShopItem
{
	FScriptStruct_SimpleSQLite_StaticRegisterNativesFShopItem()
	{
		UScriptStruct::DeferCppStructOps<FShopItem>(FName(TEXT("ShopItem")));
	}
} ScriptStruct_SimpleSQLite_StaticRegisterNativesFShopItem;
	struct Z_Construct_UScriptStruct_FShopItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Price;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteReturnInfo" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopItem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteReturnInfo" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopItem, Icon), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Price_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteReturnInfo" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopItem, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Price_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopItem_Statics::NewProp_Price,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopItem_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShopItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleSQLite();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShopItem"), sizeof(FShopItem), Get_Z_Construct_UScriptStruct_FShopItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShopItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShopItem_Hash() { return 3294868400U; }
class UScriptStruct* FSQLiteReturnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLESQLITE_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteReturnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteReturnInfo, Z_Construct_UPackage__Script_SimpleSQLite(), TEXT("SQLiteReturnInfo"), sizeof(FSQLiteReturnInfo), Get_Z_Construct_UScriptStruct_FSQLiteReturnInfo_Hash());
	}
	return Singleton;
}
template<> SIMPLESQLITE_API UScriptStruct* StaticStruct<FSQLiteReturnInfo>()
{
	return FSQLiteReturnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteReturnInfo(FSQLiteReturnInfo::StaticStruct, TEXT("/Script/SimpleSQLite"), TEXT("SQLiteReturnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleSQLite_StaticRegisterNativesFSQLiteReturnInfo
{
	FScriptStruct_SimpleSQLite_StaticRegisterNativesFSQLiteReturnInfo()
	{
		UScriptStruct::DeferCppStructOps<FSQLiteReturnInfo>(FName(TEXT("SQLiteReturnInfo")));
	}
} ScriptStruct_SimpleSQLite_StaticRegisterNativesFSQLiteReturnInfo;
	struct Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnInfoType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnInfoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnInfoType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::Struct_MetaDataParams[] = {
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteReturnInfo" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType = { "ReturnInfoType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteReturnInfo, ReturnInfoType), Z_Construct_UEnum_SimpleSQLite_ESQLiteReturnInfoType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteReturnInfo" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteReturnInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_ReturnInfoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteReturnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleSQLite();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteReturnInfo"), sizeof(FSQLiteReturnInfo), Get_Z_Construct_UScriptStruct_FSQLiteReturnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteReturnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteReturnInfo_Hash() { return 1319493621U; }
class UScriptStruct* FSQLiteColumnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLESQLITE_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteColumnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteColumnInfo, Z_Construct_UPackage__Script_SimpleSQLite(), TEXT("SQLiteColumnInfo"), sizeof(FSQLiteColumnInfo), Get_Z_Construct_UScriptStruct_FSQLiteColumnInfo_Hash());
	}
	return Singleton;
}
template<> SIMPLESQLITE_API UScriptStruct* StaticStruct<FSQLiteColumnInfo>()
{
	return FSQLiteColumnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteColumnInfo(FSQLiteColumnInfo::StaticStruct, TEXT("/Script/SimpleSQLite"), TEXT("SQLiteColumnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleSQLite_StaticRegisterNativesFSQLiteColumnInfo
{
	FScriptStruct_SimpleSQLite_StaticRegisterNativesFSQLiteColumnInfo()
	{
		UScriptStruct::DeferCppStructOps<FSQLiteColumnInfo>(FName(TEXT("SQLiteColumnInfo")));
	}
} ScriptStruct_SimpleSQLite_StaticRegisterNativesFSQLiteColumnInfo;
	struct Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::Struct_MetaDataParams[] = {
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteColumnInfo" },
		{ "Comment", "/** The name of the column **/" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
		{ "ToolTip", "The name of the column *" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteColumnInfo, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_ColumnName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "SimpleSQLite|SQLiteColumnInfo" },
		{ "Comment", "/** This is the type of data in this column.  (e.g. so you can do GetFloat or GetInt on the column **/" },
		{ "ModuleRelativePath", "Public/SQLiteCommonTypes.h" },
		{ "ToolTip", "This is the type of data in this column.  (e.g. so you can do GetFloat or GetInt on the column *" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteColumnInfo, DataType), Z_Construct_UEnum_SimpleSQLite_ESQLiteDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_ColumnName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::NewProp_DataType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteColumnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleSQLite();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteColumnInfo"), sizeof(FSQLiteColumnInfo), Get_Z_Construct_UScriptStruct_FSQLiteColumnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteColumnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteColumnInfo_Hash() { return 1786162741U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
