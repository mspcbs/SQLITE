// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/SQLiteBlueprintFunctionLibrary.h"
#include "Public/SQLiteCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLiteBlueprintFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SIMPLESQLITE_API UClass* Z_Construct_UClass_USQLiteBlueprintFunctionLibrary();
	SIMPLESQLITE_API UClass* Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_NoRegister();
	SIMPLESQLITE_API UClass* Z_Construct_UClass_USQLiteConnector_NoRegister();
	SIMPLESQLITE_API UScriptStruct* Z_Construct_UScriptStruct_FShopItem();
	UPackage* Z_Construct_UPackage__Script_SimpleSQLite();
// End Cross Module References
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execTestSQLiteConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_GET_TARRAY_REF(FShopItem,Z_Param_Out_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::TestSQLiteConnect(Z_Param_path,Z_Param_Out_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execCreateSQLiteConnector)
	{
		P_GET_OBJECT_REF(USQLiteConnector,Z_Param_Out_NewSQLiteConnector);
		P_FINISH;
		P_NATIVE_BEGIN;
		USQLiteBlueprintFunctionLibrary::CreateSQLiteConnector(Z_Param_Out_NewSQLiteConnector);
		P_NATIVE_END;
	}
	void USQLiteBlueprintFunctionLibrary::StaticRegisterNativesUSQLiteBlueprintFunctionLibrary()
	{
		UClass* Class = USQLiteBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSQLiteConnector", &USQLiteBlueprintFunctionLibrary::execCreateSQLiteConnector },
			{ "TestSQLiteConnect", &USQLiteBlueprintFunctionLibrary::execTestSQLiteConnect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventCreateSQLiteConnector_Parms
		{
			USQLiteConnector* NewSQLiteConnector;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSQLiteConnector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::NewProp_NewSQLiteConnector = { "NewSQLiteConnector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventCreateSQLiteConnector_Parms, NewSQLiteConnector), Z_Construct_UClass_USQLiteConnector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::NewProp_NewSQLiteConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteBlueprintFunctionLibrary" },
		{ "DisplayName", "CreateSQLiteConnector" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "CreateSQLiteConnector", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::SQLiteBlueprintFunctionLibrary_eventCreateSQLiteConnector_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventTestSQLiteConnect_Parms
		{
			FString path;
			TArray<FShopItem> Items;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventTestSQLiteConnect_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FShopItem, METADATA_PARAMS(nullptr, 0) }; // 3312154567
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventTestSQLiteConnect_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3312154567
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventTestSQLiteConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventTestSQLiteConnect_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleSQLite|SQLiteBlueprintFunctionLibrary" },
		{ "DisplayName", "TestSQLiteConnect" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "TestSQLiteConnect", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::SQLiteBlueprintFunctionLibrary_eventTestSQLiteConnect_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQLiteBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_NoRegister()
	{
		return USQLiteBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSQLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CreateSQLiteConnector, "CreateSQLiteConnector" }, // 3073809203
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_TestSQLiteConnect, "TestSQLiteConnect" }, // 441009146
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SQLiteBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQLiteBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::ClassParams = {
		&USQLiteBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQLiteBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USQLiteBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQLiteBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQLiteBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> SIMPLESQLITE_API UClass* StaticClass<USQLiteBlueprintFunctionLibrary>()
	{
		return USQLiteBlueprintFunctionLibrary::StaticClass();
	}
	USQLiteBlueprintFunctionLibrary::USQLiteBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQLiteBlueprintFunctionLibrary);
	USQLiteBlueprintFunctionLibrary::~USQLiteBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, USQLiteBlueprintFunctionLibrary::StaticClass, TEXT("USQLiteBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_USQLiteBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQLiteBlueprintFunctionLibrary), 3328457370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_3942421327(TEXT("/Script/SimpleSQLite"),
		Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mspcb_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
