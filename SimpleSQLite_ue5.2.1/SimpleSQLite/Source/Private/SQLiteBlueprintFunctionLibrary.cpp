

#include "SQLiteBlueprintFunctionLibrary.h"
#include "Misc/Paths.h"
#include "Misc/MessageDialog.h"
#include "HAL/PlatformProcess.h"
#include "HAL/FileManager.h"
#include "Misc/App.h"

#define LOCTEXT_NAMESPACE "SQLiteBlueprintFunctionLibrary"
DEFINE_LOG_CATEGORY(Log_SQLiteBlueprintFunctionLibrary);

void USQLiteBlueprintFunctionLibrary::CreateSQLiteConnector(USQLiteConnector*& NewSQLiteConnector)
{
	NewSQLiteConnector = NewObject<USQLiteConnector>();
}
FString USQLiteBlueprintFunctionLibrary::GetDBFullPath(FString path)
{
#if PLATFORM_WINDOWS
	FString relativePath = FPaths::ProjectContentDir().Append(path);
	path = FPaths::ConvertRelativePathToFull(relativePath);
#else
	// Android or iOS
	FString fullPath = FPaths::ProjectPersistentDownloadDir() + "/" + path;
	if (!FPaths::FileExists(fullPath))
	{
		FString sourcePath = FPaths::ProjectContentDir().Append(path);
		if (!FPaths::FileExists(sourcePath))
		{
			UE_LOG(Log_SQLiteBlueprintFunctionLibrary, Error, TEXT("Source file '%s' not found."), *sourcePath);
			return FString();
}

		IFileManager& FileManager = IFileManager::Get();
		bool bCopySuccess = FileManager.Copy(*fullPath, *sourcePath);
		if (!bCopySuccess)
		{
			UE_LOG(Log_SQLiteBlueprintFunctionLibrary, Error, TEXT("Failed to copy file '%s' to '%s'."), *sourcePath, *fullPath);
			return FString();
		}
	}
	path = fullPath;
#endif

	return path;
}


bool USQLiteBlueprintFunctionLibrary::TestSQLiteConnect(FString path, TArray<FShopItem>& Items)
{
	path = GetDBFullPath(path);

	FSQLiteDatabaseConnection db;
	if (!db.Open(*path, nullptr, nullptr))
	{
		return false;
	}

	FString query = FString::Printf(TEXT("SELECT Name,Texture,Price FROM ShopItems"));

	FSQLiteResultSet* outRecords = nullptr;
	if (!db.Execute(*query, outRecords))
	{
		delete outRecords;
		db.Close();
		return false;
	}

	int count = outRecords->GetRecordCount();
	if (count == 0)
	{
		delete outRecords;
		db.Close();
		return false;
	}

	int result = -1;
	for (FSQLiteResultSet::TIterator i(outRecords); i; ++i)
	{
		FShopItem& newItem = Items.AddDefaulted_GetRef();
		for (FDatabaseColumnInfo column : i->GetColumnNames())
		{
			if (column.ColumnName == TEXT("Name"))
			{
				newItem.Name = FText::FromString(i->GetString(*column.ColumnName));

			}
			else if (column.ColumnName == TEXT("Icon"))
			{
				newItem.Icon = FText::FromString(i->GetString(*column.ColumnName));
			}
			else if (column.ColumnName == TEXT("Price"))
			{
				newItem.Price = i->GetFloat(*column.ColumnName);
			}
		}
	}
	delete outRecords;
	db.Close();

	return true;
}


#undef LOCTEXT_NAMESPACE
