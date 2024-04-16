// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoPlayerState.h"

void ADemoPlayerState::ClientInitialize(AController* C)
{
	SetOwner(C);
	BP_ClientInitialize();
}