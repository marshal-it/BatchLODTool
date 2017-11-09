// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BatchLODSetting.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatchLODSetting() {}
// Cross Module References
	BATCHLODTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FLODSetting();
	UPackage* Z_Construct_UPackage__Script_BatchLODTool();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshFeatureImportance();
	BATCHLODTOOL_API UClass* Z_Construct_UClass_UBatchLODSetting_NoRegister();
	BATCHLODTOOL_API UClass* Z_Construct_UClass_UBatchLODSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FLODSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BATCHLODTOOL_API uint32 Get_Z_Construct_UScriptStruct_FLODSetting_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODSetting, Z_Construct_UPackage__Script_BatchLODTool(), TEXT("LODSetting"), sizeof(FLODSetting), Get_Z_Construct_UScriptStruct_FLODSetting_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLODSetting(FLODSetting::StaticStruct, TEXT("/Script/BatchLODTool"), TEXT("LODSetting"), false, nullptr, nullptr);
static struct FScriptStruct_BatchLODTool_StaticRegisterNativesFLODSetting
{
	FScriptStruct_BatchLODTool_StaticRegisterNativesFLODSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LODSetting")),new UScriptStruct::TCppStructOps<FLODSetting>);
	}
} ScriptStruct_BatchLODTool_StaticRegisterNativesFLODSetting;
	UScriptStruct* Z_Construct_UScriptStruct_FLODSetting()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_BatchLODTool();
		extern uint32 Get_Z_Construct_UScriptStruct_FLODSetting_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LODSetting"), sizeof(FLODSetting), Get_Z_Construct_UScriptStruct_FLODSetting_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LODSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLODSetting>, EStructFlags(0x00000001));
			UProperty* NewProp_ScreenSize = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ScreenSize"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ScreenSize, FLODSetting), 0x0010000000000001);
			UProperty* NewProp_ShadingImportance = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ShadingImportance"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ShadingImportance, FLODSetting), 0x0010000000000001, Z_Construct_UEnum_Engine_EMeshFeatureImportance());
			UProperty* NewProp_TextureImportance = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TextureImportance"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(TextureImportance, FLODSetting), 0x0010000000000001, Z_Construct_UEnum_Engine_EMeshFeatureImportance());
			UProperty* NewProp_PercentTriangles = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PercentTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PercentTriangles, FLODSetting), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/BatchLODSetting.h"));
			MetaData->SetValue(NewProp_ScreenSize, TEXT("Category"), TEXT("ReductionSettings"));
			MetaData->SetValue(NewProp_ScreenSize, TEXT("ModuleRelativePath"), TEXT("Public/BatchLODSetting.h"));
			MetaData->SetValue(NewProp_ScreenSize, TEXT("ToolTip"), TEXT("ScreenSize to display this LOD.\nThe screen size is based around the projected diameter of the bounding\nsphere of the model. i.e. 0.5 means half the screen's maximum dimension."));
			MetaData->SetValue(NewProp_ShadingImportance, TEXT("Category"), TEXT("ReductionSettings"));
			MetaData->SetValue(NewProp_ShadingImportance, TEXT("ModuleRelativePath"), TEXT("Public/BatchLODSetting.h"));
			MetaData->SetValue(NewProp_ShadingImportance, TEXT("ToolTip"), TEXT("Higher values try to preserve normals better."));
			MetaData->SetValue(NewProp_TextureImportance, TEXT("Category"), TEXT("ReductionSettings"));
			MetaData->SetValue(NewProp_TextureImportance, TEXT("ModuleRelativePath"), TEXT("Public/BatchLODSetting.h"));
			MetaData->SetValue(NewProp_TextureImportance, TEXT("ToolTip"), TEXT("Higher values reduce texture stretching."));
			MetaData->SetValue(NewProp_PercentTriangles, TEXT("Category"), TEXT("ReductionSettings"));
			MetaData->SetValue(NewProp_PercentTriangles, TEXT("ModuleRelativePath"), TEXT("Public/BatchLODSetting.h"));
			MetaData->SetValue(NewProp_PercentTriangles, TEXT("ToolTip"), TEXT("Percentage of triangles to keep. 1.0 = no reduction, 0.0 = no triangles."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLODSetting_CRC() { return 1863841590U; }
	void UBatchLODSetting::StaticRegisterNativesUBatchLODSetting()
	{
	}
	UClass* Z_Construct_UClass_UBatchLODSetting_NoRegister()
	{
		return UBatchLODSetting::StaticClass();
	}
	UClass* Z_Construct_UClass_UBatchLODSetting()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_BatchLODTool();
			OuterClass = UBatchLODSetting::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100086u;


				UProperty* NewProp_ReductionSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReductionSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReductionSettings, UBatchLODSetting), 0x0010000000004001);
				UProperty* NewProp_ReductionSettings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReductionSettings, TEXT("ReductionSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FLODSetting());
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UBatchLODSetting> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("DisplayName"), TEXT("BatchLOD"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatchLODSetting.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BatchLODSetting.h"));
				MetaData->SetValue(NewProp_ReductionSettings, TEXT("Category"), TEXT("LOD-Percent%1 - %100"));
				MetaData->SetValue(NewProp_ReductionSettings, TEXT("ModuleRelativePath"), TEXT("Public/BatchLODSetting.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBatchLODSetting, 3005381511);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBatchLODSetting(Z_Construct_UClass_UBatchLODSetting, &UBatchLODSetting::StaticClass, TEXT("/Script/BatchLODTool"), TEXT("UBatchLODSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBatchLODSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
