// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(RTSTest, Log, All);

// __FUNCTION__ : �Լ� �̸�
// __LINE__ : ���° ������
#define ABLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))

//UE_LOG (���� ������Ʈ, ���ڰ����� ������(Warning�̳� Error ���...), ��� �ؽ�Ʈ)
#define ABLOG_S(Verbosity) UE_LOG(RTSTest, Verbosity, TEXT("%s"), *ABLOG_CALLINFO)

#define ABLOG(Verbosity, Format, ...) UE_LOG(RTSTest, Verbosity, TEXT("%s%s"), *ABLOG_CALLINFO, *FString::Printf(Format, ##__VA__ARGS__))