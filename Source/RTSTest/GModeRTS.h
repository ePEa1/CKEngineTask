// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GModeRTS.generated.h"

/**
 * 
 */
UCLASS()
class RTSTEST_API AGModeRTS : public AGameModeBase
{
	GENERATED_BODY()

	AGModeRTS();

public:
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
