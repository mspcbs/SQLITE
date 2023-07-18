// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/SQLiteConnector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLiteConnector() {}
// Cross Module References
	SIMPLESQLITE_API UClass* Z_Construct_UClass_USQLiteConnector_NoRegister();
	SIMPLESQLITE_API UClass* Z_Construct_UClass_USQLiteConnector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleSQLite();
	SIMPLESQLITE_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteReturnInfo();
	SIMPLESQLITE_API UClass* Z_Construct_UClass_USQLiteResultor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USQLiteConnector::execGetLastErrorInfo)
	{
		P_GET_STRUCT_REF(FSQLiteReturnInfo,Z_Param_Out_ReturnInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLastErrorInfo(Z_Param_Out_ReturnInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteConnector::execExecuteWithRecordSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CommandString);
		P_GET_OBJECT_REF(USQLiteResultor,Z_Param_Out_NewSQLiteResultor);
		P_GET_STRUCT_REF(FSQLiteReturnInfo,Z_Param_Out_ReturnInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteWithRecordSet(Z_Param_CommandString,Z_Param_Out_NewSQLiteResultor,Z_Param_Out_ReturnInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteConnector::execExecuteNoRecordSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CommandString);
		P_GET_STRUCT_REF(FSQLiteReturnInfo,Z_Param_Out_ReturnInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteNoRecordSet(Z_Param_CommandString,Z_Param_Out_ReturnInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteConnector::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteConnector::execOpen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DBFilePath);
		P_GET_STRUCT_REF(FSQLiteReturnInfo,Z_Param_Out_ReturnInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Open(Z_Param_DBFilePath,Z_Param_Out_ReturnInfo);
		P_NATIVE_END;
	}
	void USQLiteConnector::StaticRegisterNativesUSQLiteConnector()
	{
		UClass* Class = USQLiteConnector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &USQLiteConnector::execClose },
			{ "ExecuteNoRecordSet", &USQLiteConnector::execExecuteNoRecordSet },
			{ "ExecuteWithRecordSet", &USQLiteConnector::execExecuteWithRecordSet },
			{ "GetLastErrorInfo", &USQLiteConnector::execGetLastErrorInfo },
			{ "Open", &USQLiteConnector::execOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQLiteConnector_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteConnector_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteConnector" },
		{ "Comment", "/** Closes the database handle and unlocks the file */" },
		{ "DisplayName", "Close Database" },
		{ "Keywords", "SQLite Close" },
		{ "ModuleRelativePath", "Public/SQLiteConnector.h" },
		{ "ToolTip", "Closes the database handle and unlocks the file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteConnector_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteConnector, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteConnector_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteConnector_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteConnector_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics
	{
		struct SQLiteConnector_eventExecuteNoRecordSet_Parms
		{
			FString CommandString;
			FSQLiteReturnInfo ReturnInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::NewProp_CommandString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::NewProp_CommandString = { "CommandString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteConnector_eventExecuteNoRecordSet_Parms, CommandString), METADATA_PARAMS(Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::NewProp_CommandString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::NewProp_CommandString_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::NewProp_ReturnInfo = { "ReturnInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteConnector_eventExecuteNoRecordSet_Parms, ReturnInfo), Z_Construct_UScriptStruct_FSQLiteReturnInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::NewProp_CommandString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::NewProp_ReturnInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteConnector" },
		{ "Comment", "/** Execute a command on the database without storing the result set (like insert, update..) */" },
		{ "DisplayName", "Execute(Query Only)" },
		{ "Keywords", "SQLite Execute No RecordSet" },
		{ "ModuleRelativePath", "Public/SQLiteConnector.h" },
		{ "ToolTip", "Execute a command on the database without storing the result set (like insert, update..)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteConnector, nullptr, "ExecuteNoRecordSet", nullptr, nullptr, sizeof(SQLiteConnector_eventExecuteNoRecordSet_Parms), Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics
	{
		struct SQLiteConnector_eventExecuteWithRecordSet_Parms
		{
			FString CommandString;
			USQLiteResultor* NewSQLiteResultor;
			FSQLiteReturnInfo ReturnInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandString;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSQLiteResultor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::NewProp_CommandString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::NewProp_CommandString = { "CommandString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteConnector_eventExecuteWithRecordSet_Parms, CommandString), METADATA_PARAMS(Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::NewProp_CommandString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::NewProp_CommandString_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::NewProp_NewSQLiteResultor = { "NewSQLiteResultor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteConnector_eventExecuteWithRecordSet_Parms, NewSQLiteResultor), Z_Construct_UClass_USQLiteResultor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::NewProp_ReturnInfo = { "ReturnInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteConnector_eventExecuteWithRecordSet_Parms, ReturnInfo), Z_Construct_UScriptStruct_FSQLiteReturnInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::NewProp_CommandString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::NewProp_NewSQLiteResultor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::NewProp_ReturnInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteConnector" },
		{ "Comment", "/** Executes the command string on the currently opened database, returning a SQLiteResultor.*/" },
		{ "DisplayName", "Execute(With RecordSet)" },
		{ "Keywords", "SQLite Execute With RecordSet" },
		{ "ModuleRelativePath", "Public/SQLiteConnector.h" },
		{ "ToolTip", "Executes the command string on the currently opened database, returning a SQLiteResultor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteConnector, nullptr, "ExecuteWithRecordSet", nullptr, nullptr, sizeof(SQLiteConnector_eventExecuteWithRecordSet_Parms), Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics
	{
		struct SQLiteConnector_eventGetLastErrorInfo_Parms
		{
			FSQLiteReturnInfo ReturnInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics::NewProp_ReturnInfo = { "ReturnInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteConnector_eventGetLastErrorInfo_Parms, ReturnInfo), Z_Construct_UScriptStruct_FSQLiteReturnInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics::NewProp_ReturnInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteConnector" },
		{ "Comment", "/** SQLiteConnector gets last error info.*/" },
		{ "DisplayName", "GetLastErrorInfo" },
		{ "Keywords", "SQLite GetLastErrorInfo" },
		{ "ModuleRelativePath", "Public/SQLiteConnector.h" },
		{ "ToolTip", "SQLiteConnector gets last error info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteConnector, nullptr, "GetLastErrorInfo", nullptr, nullptr, sizeof(SQLiteConnector_eventGetLastErrorInfo_Parms), Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteConnector_Open_Statics
	{
		struct SQLiteConnector_eventOpen_Parms
		{
			FString DBFilePath;
			FSQLiteReturnInfo ReturnInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DBFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DBFilePath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteConnector_Open_Statics::NewProp_DBFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteConnector_Open_Statics::NewProp_DBFilePath = { "DBFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteConnector_eventOpen_Parms, DBFilePath), METADATA_PARAMS(Z_Construct_UFunction_USQLiteConnector_Open_Statics::NewProp_DBFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_Open_Statics::NewProp_DBFilePath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteConnector_Open_Statics::NewProp_ReturnInfo = { "ReturnInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteConnector_eventOpen_Parms, ReturnInfo), Z_Construct_UScriptStruct_FSQLiteReturnInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteConnector_Open_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteConnector_Open_Statics::NewProp_DBFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteConnector_Open_Statics::NewProp_ReturnInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteConnector_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteConnector" },
		{ "Comment", "/**\n\x09 *\x09Open a SQLite file(The root path is under 'Content' of your project)\n\x09 *\x09@param\x09""ConnectionString\x09Path to the file that should be opened\n\x09 */" },
		{ "DisplayName", "Open Database" },
		{ "Keywords", "SQLite Open" },
		{ "ModuleRelativePath", "Public/SQLiteConnector.h" },
		{ "ToolTip", "Open a SQLite file(The root path is under 'Content' of your project)\n@param  ConnectionString        Path to the file that should be opened" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteConnector_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteConnector, nullptr, "Open", nullptr, nullptr, sizeof(SQLiteConnector_eventOpen_Parms), Z_Construct_UFunction_USQLiteConnector_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteConnector_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteConnector_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteConnector_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteConnector_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USQLiteConnector_NoRegister()
	{
		return USQLiteConnector::StaticClass();
	}
	struct Z_Construct_UClass_USQLiteConnector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQLiteConnector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSQLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQLiteConnector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQLiteConnector_Close, "Close" }, // 1620553560
		{ &Z_Construct_UFunction_USQLiteConnector_ExecuteNoRecordSet, "ExecuteNoRecordSet" }, // 3461644869
		{ &Z_Construct_UFunction_USQLiteConnector_ExecuteWithRecordSet, "ExecuteWithRecordSet" }, // 1725734992
		{ &Z_Construct_UFunction_USQLiteConnector_GetLastErrorInfo, "GetLastErrorInfo" }, // 4134450603
		{ &Z_Construct_UFunction_USQLiteConnector_Open, "Open" }, // 53005907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQLiteConnector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "SimpleSQLite|SQLiteConnector" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "SQLiteConnector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SQLiteConnector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQLiteConnector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQLiteConnector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USQLiteConnector_Statics::ClassParams = {
		&USQLiteConnector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USQLiteConnector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQLiteConnector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQLiteConnector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USQLiteConnector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQLiteConnector, 3626293650);
	template<> SIMPLESQLITE_API UClass* StaticClass<USQLiteConnector>()
	{
		return USQLiteConnector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQLiteConnector(Z_Construct_UClass_USQLiteConnector, &USQLiteConnector::StaticClass, TEXT("/Script/SimpleSQLite"), TEXT("USQLiteConnector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQLiteConnector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
