// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(RTSTest, Log, All);

// __FUNCTION__ : 함수 이름
// __LINE__ : 몇번째 줄인지
#define ABLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))

//UE_LOG (현재 프로젝트, 인자값으로 받은거(Warning이나 Error 등등...), 띄울 텍스트)
#define ABLOG_S(Verbosity) UE_LOG(RTSTest, Verbosity, TEXT("%s"), *ABLOG_CALLINFO)

#define ABLOG(Verbosity, Format, ...) UE_LOG(RTSTest, Verbosity, TEXT("%s%s"), *ABLOG_CALLINFO, *FString::Printf(Format, ##__VA__ARGS__))