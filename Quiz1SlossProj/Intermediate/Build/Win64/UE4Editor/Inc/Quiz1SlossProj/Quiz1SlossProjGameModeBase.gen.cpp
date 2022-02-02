// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiz1SlossProj/Quiz1SlossProjGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuiz1SlossProjGameModeBase() {}
// Cross Module References
	QUIZ1SLOSSPROJ_API UClass* Z_Construct_UClass_AQuiz1SlossProjGameModeBase_NoRegister();
	QUIZ1SLOSSPROJ_API UClass* Z_Construct_UClass_AQuiz1SlossProjGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Quiz1SlossProj();
// End Cross Module References
	void AQuiz1SlossProjGameModeBase::StaticRegisterNativesAQuiz1SlossProjGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AQuiz1SlossProjGameModeBase_NoRegister()
	{
		return AQuiz1SlossProjGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AQuiz1SlossProjGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuiz1SlossProjGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Quiz1SlossProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuiz1SlossProjGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Quiz1SlossProjGameModeBase.h" },
		{ "ModuleRelativePath", "Quiz1SlossProjGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuiz1SlossProjGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuiz1SlossProjGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuiz1SlossProjGameModeBase_Statics::ClassParams = {
		&AQuiz1SlossProjGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AQuiz1SlossProjGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuiz1SlossProjGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuiz1SlossProjGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuiz1SlossProjGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuiz1SlossProjGameModeBase, 3357287233);
	template<> QUIZ1SLOSSPROJ_API UClass* StaticClass<AQuiz1SlossProjGameModeBase>()
	{
		return AQuiz1SlossProjGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuiz1SlossProjGameModeBase(Z_Construct_UClass_AQuiz1SlossProjGameModeBase, &AQuiz1SlossProjGameModeBase::StaticClass, TEXT("/Script/Quiz1SlossProj"), TEXT("AQuiz1SlossProjGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuiz1SlossProjGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
