// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "DemoPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORYSYSTEMDEMO_API ADemoPlayerState : public APlayerState
{
	GENERATED_BODY()


public:
	virtual void ClientInitialize(class AController* C) override;
	
	UFUNCTION(BlueprintImplementableEvent)
	void BP_ClientInitialize();
};
