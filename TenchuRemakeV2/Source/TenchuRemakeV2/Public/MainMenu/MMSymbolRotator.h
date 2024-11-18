// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MMSymbolRotator.generated.h"

class AMMActorSymbol;

UCLASS()
class TENCHUREMAKEV2_API AMMSymbolRotator : public AActor
{
	GENERATED_BODY()
	
public:	
	AMMSymbolRotator();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Symbols")
	TArray<AMMActorSymbol*> Symbols;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "User Config")
	float CenterDistance = -27.f;
};
