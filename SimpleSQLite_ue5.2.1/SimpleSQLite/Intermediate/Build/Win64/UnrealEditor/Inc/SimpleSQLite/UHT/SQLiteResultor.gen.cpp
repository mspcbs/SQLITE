// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/SQLiteResultor.h"
#include "Public/SQLiteCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLiteResultor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLESQLITE_API UClass* Z_Construct_UClass_USQLiteResultor();
	SIMPLESQLITE_API UClass* Z_Construct_UClass_USQLiteResultor_NoRegister();
	SIMPLESQLITE_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteColumnInfo();
	UPackage* Z_Construct_UPackage__Script_SimpleSQLite();
// End Cross Module References
	DEFINE_FUNCTION(USQLiteResultor::execGetColumnInfos)
	{
		P_GET_TARRAY_REF(FSQLiteColumnInfo,Z_Param_Out_ColumnInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetColumnInfos(Z_Param_Out_ColumnInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteResultor::execGetBigInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Column);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBigInt(Z_Param_rowId,Z_Param_Column,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteResultor::execGetFloat)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Column);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFloat(Z_Param_rowId,Z_Param_Column,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteResultor::execGetInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Column);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInt(Z_Param_rowId,Z_Param_Column,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteResultor::execGetString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Column);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetString(Z_Param_rowId,Z_Param_Column,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteResultor::execGetRecordCount)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RecordCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRecordCount(Z_Param_Out_RecordCount);
		P_NATIVE_END;
	}
	void USQLiteResultor::StaticRegisterNativesUSQLiteResultor()
	{
		UClass* Class = USQLiteResultor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBigInt", &USQLiteResultor::execGetBigInt },
			{ "GetColumnInfos", &USQLiteResultor::execGetColumnInfos },
			{ "GetFloat", &USQLiteResultor::execGetFloat },
			{ "GetInt", &USQLiteResultor::execGetInt },
			{ "GetRecordCount", &USQLiteResultor::execGetRecordCount },
			{ "GetString", &USQLiteResultor::execGetString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics
	{
		struct SQLiteResultor_eventGetBigInt_Parms
		{
			int32 rowId;
			FString Column;
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_rowId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Column;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::NewProp_rowId = { "rowId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetBigInt_Parms, rowId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::NewProp_Column_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetBigInt_Parms, Column), METADATA_PARAMS(Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::NewProp_Column_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetBigInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::NewProp_rowId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::NewProp_Column,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteResultor" },
		{ "Comment", "/**\n\x09 *\x09Returns a int64 associated with the passed in column name for the assigned row.\n\x09 *\x09@param Column Name of column to retrieve data in current row\n\x09 */" },
		{ "DisplayName", "GetBigInt" },
		{ "Keywords", "SQLiteResultor GetBigInt" },
		{ "ModuleRelativePath", "Public/SQLiteResultor.h" },
		{ "ToolTip", "Returns a int64 associated with the passed in column name for the assigned row.\n@param Column Name of column to retrieve data in current row" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteResultor, nullptr, "GetBigInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::SQLiteResultor_eventGetBigInt_Parms), Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteResultor_GetBigInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQLiteResultor_GetBigInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics
	{
		struct SQLiteResultor_eventGetColumnInfos_Parms
		{
			TArray<FSQLiteColumnInfo> ColumnInfos;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColumnInfos_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColumnInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::NewProp_ColumnInfos_Inner = { "ColumnInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSQLiteColumnInfo, METADATA_PARAMS(nullptr, 0) }; // 3428834049
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::NewProp_ColumnInfos = { "ColumnInfos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetColumnInfos_Parms, ColumnInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3428834049
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::NewProp_ColumnInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::NewProp_ColumnInfos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteResultor" },
		{ "Comment", "/**\n\x09 *\x09Returns the set of column infos(Containing: column name, column data type) for this Recordset.\x09This is useful for determining\n\x09 *\x09what you can actually ask the record set for without having to hard code those ahead of time.\n\x09 */" },
		{ "DisplayName", "GetColumnInfos" },
		{ "Keywords", "SQLiteResultor GetColumnInfos" },
		{ "ModuleRelativePath", "Public/SQLiteResultor.h" },
		{ "ToolTip", "Returns the set of column infos(Containing: column name, column data type) for this Recordset.  This is useful for determining\nwhat you can actually ask the record set for without having to hard code those ahead of time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteResultor, nullptr, "GetColumnInfos", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::SQLiteResultor_eventGetColumnInfos_Parms), Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteResultor_GetColumnInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQLiteResultor_GetColumnInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics
	{
		struct SQLiteResultor_eventGetFloat_Parms
		{
			int32 rowId;
			FString Column;
			float Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_rowId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Column;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::NewProp_rowId = { "rowId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetFloat_Parms, rowId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::NewProp_Column_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetFloat_Parms, Column), METADATA_PARAMS(Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::NewProp_Column_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::NewProp_rowId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::NewProp_Column,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteResultor" },
		{ "Comment", "/**\n\x09 *\x09Returns a float associated with the passed in column name for the assigned row.\n\x09 *\x09@param Column Name of column to retrieve data in current row\n\x09 */" },
		{ "DisplayName", "GetFloat" },
		{ "Keywords", "SQLiteResultor GetFloat" },
		{ "ModuleRelativePath", "Public/SQLiteResultor.h" },
		{ "ToolTip", "Returns a float associated with the passed in column name for the assigned row.\n@param Column Name of column to retrieve data in current row" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteResultor, nullptr, "GetFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::SQLiteResultor_eventGetFloat_Parms), Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteResultor_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQLiteResultor_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteResultor_GetInt_Statics
	{
		struct SQLiteResultor_eventGetInt_Parms
		{
			int32 rowId;
			FString Column;
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_rowId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Column;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::NewProp_rowId = { "rowId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetInt_Parms, rowId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::NewProp_Column_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetInt_Parms, Column), METADATA_PARAMS(Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::NewProp_Column_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::NewProp_rowId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::NewProp_Column,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteResultor" },
		{ "Comment", "/**\n\x09 *\x09Returns an integer associated with the passed in column name for the assigned row.\n\x09 *\x09@param Column Name of column to retrieve data in current row\n\x09 */" },
		{ "DisplayName", "GetInt" },
		{ "Keywords", "SQLiteResultor GetInt" },
		{ "ModuleRelativePath", "Public/SQLiteResultor.h" },
		{ "ToolTip", "Returns an integer associated with the passed in column name for the assigned row.\n@param Column Name of column to retrieve data in current row" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteResultor, nullptr, "GetInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::SQLiteResultor_eventGetInt_Parms), Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteResultor_GetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQLiteResultor_GetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics
	{
		struct SQLiteResultor_eventGetRecordCount_Parms
		{
			int32 RecordCount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RecordCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::NewProp_RecordCount = { "RecordCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetRecordCount_Parms, RecordCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::NewProp_RecordCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteResultor" },
		{ "Comment", "/**\n\x09 *   Returns a count of the number of records in the record set\n\x09 */" },
		{ "DisplayName", "GetRecordCount" },
		{ "Keywords", "SQLiteResultor GetRecordCount" },
		{ "ModuleRelativePath", "Public/SQLiteResultor.h" },
		{ "ToolTip", "Returns a count of the number of records in the record set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteResultor, nullptr, "GetRecordCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::SQLiteResultor_eventGetRecordCount_Parms), Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteResultor_GetRecordCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQLiteResultor_GetRecordCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteResultor_GetString_Statics
	{
		struct SQLiteResultor_eventGetString_Parms
		{
			int32 rowId;
			FString Column;
			FString Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_rowId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Column;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQLiteResultor_GetString_Statics::NewProp_rowId = { "rowId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetString_Parms, rowId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteResultor_GetString_Statics::NewProp_Column_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteResultor_GetString_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetString_Parms, Column), METADATA_PARAMS(Z_Construct_UFunction_USQLiteResultor_GetString_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetString_Statics::NewProp_Column_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteResultor_GetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteResultor_eventGetString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteResultor_GetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetString_Statics::NewProp_rowId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetString_Statics::NewProp_Column,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteResultor_GetString_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteResultor_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteResultor" },
		{ "Comment", "/**\n\x09 *\x09Returns a string associated with the passed in column name for the assigned row.\n\x09 *\x09@param Column Name of column to retrieve data in current row\n\x09 */" },
		{ "DisplayName", "GetString" },
		{ "Keywords", "SQLiteResultor GetString" },
		{ "ModuleRelativePath", "Public/SQLiteResultor.h" },
		{ "ToolTip", "Returns a string associated with the passed in column name for the assigned row.\n@param Column Name of column to retrieve data in current row" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteResultor_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteResultor, nullptr, "GetString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQLiteResultor_GetString_Statics::SQLiteResultor_eventGetString_Parms), Z_Construct_UFunction_USQLiteResultor_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteResultor_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteResultor_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteResultor_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQLiteResultor_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQLiteResultor);
	UClass* Z_Construct_UClass_USQLiteResultor_NoRegister()
	{
		return USQLiteResultor::StaticClass();
	}
	struct Z_Construct_UClass_USQLiteResultor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQLiteResultor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSQLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQLiteResultor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQLiteResultor_GetBigInt, "GetBigInt" }, // 3865445552
		{ &Z_Construct_UFunction_USQLiteResultor_GetColumnInfos, "GetColumnInfos" }, // 2284290913
		{ &Z_Construct_UFunction_USQLiteResultor_GetFloat, "GetFloat" }, // 1537212740
		{ &Z_Construct_UFunction_USQLiteResultor_GetInt, "GetInt" }, // 1174586243
		{ &Z_Construct_UFunction_USQLiteResultor_GetRecordCount, "GetRecordCount" }, // 2004631639
		{ &Z_Construct_UFunction_USQLiteResultor_GetString, "GetString" }, // 1956688328
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQLiteResultor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "SimpleSQLite|SQLiteResultor" },
		{ "Comment", "/**\n *\x09ResultSet Manager for SQLite database queries\n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "SQLiteResultor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SQLiteResultor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ResultSet Manager for SQLite database queries" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQLiteResultor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQLiteResultor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQLiteResultor_Statics::ClassParams = {
		&USQLiteResultor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USQLiteResultor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQLiteResultor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQLiteResultor()
	{
		if (!Z_Registration_Info_UClass_USQLiteResultor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQLiteResultor.OuterSingleton, Z_Construct_UClass_USQLiteResultor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQLiteResultor.OuterSingleton;
	}
	template<> SIMPLESQLITE_API UClass* StaticClass<USQLiteResultor>()
	{
		return USQLiteResultor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQLiteResultor);
	USQLiteResultor::~USQLiteResultor() {}
	struct Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQLiteResultor, USQLiteResultor::StaticClass, TEXT("USQLiteResultor"), &Z_Registration_Info_UClass_USQLiteResultor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQLiteResultor), 4074466790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_914403424(TEXT("/Script/SimpleSQLite"),
		Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteResultor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
