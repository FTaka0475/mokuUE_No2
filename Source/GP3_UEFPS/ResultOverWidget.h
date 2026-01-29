// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ResultOverWidget.generated.h"

/**
 * 
 */
UCLASS()
class GP3_UEFPS_API UResultOverWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent, Category = "Finish")
	void SetWinner(const FString& Name);
};
