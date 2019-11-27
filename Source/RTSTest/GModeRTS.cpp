// Fill out your copyright notice in the Description page of Project Settings.


#include "GModeRTS.h"
#include "Observer.h"

AGModeRTS::AGModeRTS()
{
	DefaultPawnClass = AObserver::StaticClass();
}

void AGModeRTS::PostLogin(APlayerController * NewPlayer)
{
	Super::PostLogin(NewPlayer);
}

