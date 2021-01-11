// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPA_UE4/PPA_UE4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPA_UE4GameModeBase() {}
// Cross Module References
	PPA_UE4_API UClass* Z_Construct_UClass_APPA_UE4GameModeBase_NoRegister();
	PPA_UE4_API UClass* Z_Construct_UClass_APPA_UE4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PPA_UE4();
// End Cross Module References
	void APPA_UE4GameModeBase::StaticRegisterNativesAPPA_UE4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APPA_UE4GameModeBase_NoRegister()
	{
		return APPA_UE4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APPA_UE4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APPA_UE4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PPA_UE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPA_UE4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PPA_UE4GameModeBase.h" },
		{ "ModuleRelativePath", "PPA_UE4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APPA_UE4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPA_UE4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APPA_UE4GameModeBase_Statics::ClassParams = {
		&APPA_UE4GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APPA_UE4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APPA_UE4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APPA_UE4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APPA_UE4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APPA_UE4GameModeBase, 2365666668);
	template<> PPA_UE4_API UClass* StaticClass<APPA_UE4GameModeBase>()
	{
		return APPA_UE4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APPA_UE4GameModeBase(Z_Construct_UClass_APPA_UE4GameModeBase, &APPA_UE4GameModeBase::StaticClass, TEXT("/Script/PPA_UE4"), TEXT("APPA_UE4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APPA_UE4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
