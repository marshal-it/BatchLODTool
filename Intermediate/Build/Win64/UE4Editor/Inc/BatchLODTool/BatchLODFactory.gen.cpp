// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BatchLODFactory.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatchLODFactory() {}
// Cross Module References
	BATCHLODTOOL_API UClass* Z_Construct_UClass_UBatchLODFactory_NoRegister();
	BATCHLODTOOL_API UClass* Z_Construct_UClass_UBatchLODFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_BatchLODTool();
// End Cross Module References
	void UBatchLODFactory::StaticRegisterNativesUBatchLODFactory()
	{
	}
	UClass* Z_Construct_UClass_UBatchLODFactory_NoRegister()
	{
		return UBatchLODFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UBatchLODFactory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UFactory();
			Z_Construct_UPackage__Script_BatchLODTool();
			OuterClass = UBatchLODFactory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UBatchLODFactory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatchLODFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BatchLODFactory.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBatchLODFactory, 2311199510);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBatchLODFactory(Z_Construct_UClass_UBatchLODFactory, &UBatchLODFactory::StaticClass, TEXT("/Script/BatchLODTool"), TEXT("UBatchLODFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBatchLODFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
