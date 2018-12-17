// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RenderCore.h"
#include "ShaderCore.h"
#include "RHI.h"
#include "GlobalShader.h"

/**
 * 
 */
class ANXIETY_V1_API MyTestClass
{
public:
	MyTestClass();
	~MyTestClass();
};

////////////////////////////////////
//	VERTEX SHADER
///////////////////////////////////
class FMyTestVS : public FGlobalShader
{
	DECLARE_EXPORTED_SHADER_TYPE(FMyTestVS, Global, /*MYMODULE_API*/);

	FMyTestVS() {}
	FMyTestVS(const ShaderMetaType::CompiledShaderInitializerType& Initializer) : FGlobalShader(Initializer) {}

	static bool ShouldCache(EShaderPlatform Platform)
	{
		return true;
	}

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
//		Useful when adding a permutation of a particular shader
		return true;
	}
};


////////////////////////////////////
//	PIXEL SHADER
///////////////////////////////////
class FMyTestPS : public FGlobalShader
{
	DECLARE_EXPORTED_SHADER_TYPE(FMyTestPS, Global, /*MYMODULE_API*/);

	FShaderParameter MyColorParameter;

	FMyTestPS() {}
	FMyTestPS(const ShaderMetaType::CompiledShaderInitializerType& Initializer) : FGlobalShader(Initializer)
	{
		MyColorParameter.Bind(Initializer.ParameterMap, TEXT("MyColor"), SPF_Mandatory);
	}

	static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment)
	{
		FGlobalShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);
//		**Add my defines for the shader code here.... ??
		OutEnvironment.SetDefine(TEXT("MY_DEFINE"), 1);
	}

	static bool ShouldCache(EShaderPlatform Platform)
	{
//		Could skip compiling for Platform == SP_METAL for example
		return true;
	}

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
//		Useful for adding a permutation of a particular shape
		return true;
	}

//	FShader interface
	virtual bool Serialize(FArchive& ARC) override
	{
		bool bShaderHasOutdatedParameters = FGlobalShader::Serialize(ARC);
		ARC << MyColorParameter;
		return bShaderHasOutdatedParameters;
	}

	void SetColor(FRHICommandList& RHICmdList, const FLinearColor& Color)
	{
		
		//SetShaderValue(RHICmdList, GetPixelShader(), MyColorParameter, Color);
	}
};