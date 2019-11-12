// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheWalkingMan/TheWalkingManGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheWalkingManGameMode() {}
// Cross Module References
	THEWALKINGMAN_API UClass* Z_Construct_UClass_ATheWalkingManGameMode_NoRegister();
	THEWALKINGMAN_API UClass* Z_Construct_UClass_ATheWalkingManGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheWalkingMan();
// End Cross Module References
	void ATheWalkingManGameMode::StaticRegisterNativesATheWalkingManGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATheWalkingManGameMode_NoRegister()
	{
		return ATheWalkingManGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATheWalkingManGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheWalkingManGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheWalkingMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheWalkingManGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TheWalkingManGameMode.h" },
		{ "ModuleRelativePath", "TheWalkingManGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheWalkingManGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheWalkingManGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheWalkingManGameMode_Statics::ClassParams = {
		&ATheWalkingManGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATheWalkingManGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATheWalkingManGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheWalkingManGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheWalkingManGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheWalkingManGameMode, 1473468975);
	template<> THEWALKINGMAN_API UClass* StaticClass<ATheWalkingManGameMode>()
	{
		return ATheWalkingManGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheWalkingManGameMode(Z_Construct_UClass_ATheWalkingManGameMode, &ATheWalkingManGameMode::StaticClass, TEXT("/Script/TheWalkingMan"), TEXT("ATheWalkingManGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheWalkingManGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
