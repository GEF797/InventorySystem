// Copyright G.E.FC 2023

#pragma once


#include "Kismet/BlueprintFunctionLibrary.h"
#include "InventoryBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class  UInventoryBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

	/** Returns all defined Gameplay Attributes for the provided AttributeSet class */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "InventoryBlueprintFunctionLibrary")
		static void GetAllAttributes(TSubclassOf<UAttributeSet> AttributeSetClass, TArray<FGameplayAttribute>& OutAttributes);



};
