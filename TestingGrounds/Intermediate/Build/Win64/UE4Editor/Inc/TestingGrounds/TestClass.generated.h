// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTINGGROUNDS_TestClass_generated_h
#error "TestClass.generated.h already included, missing '#pragma once' in TestClass.h"
#endif
#define TESTINGGROUNDS_TestClass_generated_h

#define TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_RPC_WRAPPERS
#define TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesATestClass(); \
	friend TESTINGGROUNDS_API class UClass* Z_Construct_UClass_ATestClass(); \
	public: \
	DECLARE_CLASS(ATestClass, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestingGrounds"), NO_API) \
	DECLARE_SERIALIZER(ATestClass) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesATestClass(); \
	friend TESTINGGROUNDS_API class UClass* Z_Construct_UClass_ATestClass(); \
	public: \
	DECLARE_CLASS(ATestClass, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestingGrounds"), NO_API) \
	DECLARE_SERIALIZER(ATestClass) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestClass(ATestClass&&); \
	NO_API ATestClass(const ATestClass&); \
public:


#define TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestClass(ATestClass&&); \
	NO_API ATestClass(const ATestClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestClass)


#define TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_PRIVATE_PROPERTY_OFFSET
#define TestingGrounds_Source_TestingGrounds_Public_TestClass_h_8_PROLOG
#define TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_PRIVATE_PROPERTY_OFFSET \
	TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_RPC_WRAPPERS \
	TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_INCLASS \
	TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_PRIVATE_PROPERTY_OFFSET \
	TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_INCLASS_NO_PURE_DECLS \
	TestingGrounds_Source_TestingGrounds_Public_TestClass_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestingGrounds_Source_TestingGrounds_Public_TestClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
