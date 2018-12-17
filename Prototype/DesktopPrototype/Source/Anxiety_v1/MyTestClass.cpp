// Fill out your copyright notice in the Description page of Project Settings.

#include "MyTestClass.h"

MyTestClass::MyTestClass()
{
}

MyTestClass::~MyTestClass()
{
}


////////////////////////////////////
//	VERTEX SHADER
///////////////////////////////////
//	Register shader type with UE4's list
IMPLEMENT_SHADER_TYPE(, FMyTestVS, TEXT("/Shaders/MyTest.usf"), TEXT("MainVS"), SF_Vertex);



////////////////////////////////////
//	PIXEL SHADER
///////////////////////////////////
//	Register shader type with UE4's list
IMPLEMENT_SHADER_TYPE(, FMyTestPS, TEXT("/Shaders/MyTest.usf"), TEXT("MainPS"), SF_Pixel);




////////////////////////////////////////////////////
//	RENDER THESE SHADERS USING A SIMPLE QUAD
//////////////////////////////////////////////////

void RenderMyTest(FRHICommandList& RHICmdList, ERHIFeatureLevel::Type FeatureLevel, const FLinearColor& Color)
{
//	Get collection of Global Shaders
	auto ShaderMap = GetGlobalShaderMap(FeatureLevel);

//	Get actual shader instances off ShaderMap
	TShaderMapRef<FMyTestVS> MyVS(ShaderMap);
	TShaderMapRef<FMyTestPS> MyPS(ShaderMap);

//	Declare a pipeline state object to hold entire rendering state
	FGraphicsPipelineStateInitializer PSOInitializer;

	PSOInitializer.PrimitiveType = PT_TriangleStrip;

	RENDERCORE_API FVertexDeclarationRHIRef & GetVertexDeclarationFVector4();
	PSOInitializer.BoundShaderState.VertexDeclarationRHI = GetVertexDeclarationFVector4();
	PSOInitializer.BoundShaderState.VertexShaderRHI = MyVS->GetVertexShader();
	PSOInitializer.BoundShaderState.PixelShaderRHI = MyPS->GetPixelShader();
	//PSOInitializer.RasterizerState = TStaticRasterizerState<FM_Solid, CM_None>::RHIGetResourceInfo();
}

float Calculate1DGaussian(float x)
{
	return exp(-0.5 * pow(3.141 * (x), 2));
}
