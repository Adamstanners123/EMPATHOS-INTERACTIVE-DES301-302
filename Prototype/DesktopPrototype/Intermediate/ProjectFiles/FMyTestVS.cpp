

/////////////////////////////////////////
//	VERTEX SHADER
///////////////////////////////////////

//	FGlobalShader subclass - meaning we don't need a material to find it
class FMyTestVS : public FGlobalShader
{
//	Generate exports required for serialization of the shader type, etc
	DECLARE_EXPORTED_SHADER_TYPE(FMyTestVS, Global /*MY_MODULE_API*/);

//	Default constructor
	FMyTestVS() {}

//	Serialization constructor
	FMyTestVS(const ShaderMetaType::CompiledShaderInitializerType& Initializer) : FGlobalShader(Initializer)
	{

	}

//	Decide whether to compute this shader or not
	static bool ShouldCache(EShaderPlatform Platform)
	{
		return true;
	}

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
//	Useful whhen adding a permutation ofa particular shader
		return true;
	}
};


//	Register shader type to UE4's list
IMPLEMENT_SHADER_TYPE(, FMyTestVS, TEXT("/Shaders/MyTest.usf"), TEXT("MainVS"), SF_Vertex);
//	This macro maps the type (FMyTestVS) to .usf file (MyTest) with the shader entry point (MainVS) + the frequency shader stage (SF_Vertex)



///////////////////////////////////////
//	PIXEL SHADER
////////////////////////////////////

//	FGlobalShader subclass
class FMyTestPS : public FGlobalShader
{
	DECLARE_EXPORTED_SHADER_TYPE(FMyTestPS, Global /*MYMODULE_API*/);

	FShaderParameter MyColorParameter;

	FMyTestPS() {}
	FMyTestPS(const ShaderMetaType::CompiledShaderInitializerType& Initializer) : FGlobalShader(Initializer)
	{
		MyColorParameter.Bind(Initializer.ParameterMap, TEXT("MyColor"), SPF_Mandatory);
	}

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment)
	{
		FGlobalShader::ModifyCompilationEnvironment(Platform, OutEnvironment);
//		Add your own defines for the shader code
		OutEnvironment.SetDefine(TEXT("MY_DEFINE"), 1);
	}

	static bool ShouldCache(EShaderPlatform Platform)
	{
//		Could skip compiling for Platform == SP_METAL for example
		return true;
	}

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
//		Useful when adding a permutation of a particular shader
		return true;
	}

//	FShader interface
	virtual bool Serialize(FArchive& Ar) override
};