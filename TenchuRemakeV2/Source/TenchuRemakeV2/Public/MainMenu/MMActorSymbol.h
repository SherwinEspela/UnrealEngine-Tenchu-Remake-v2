// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MMActorSymbol.generated.h"

UCLASS()
class TENCHUREMAKEV2_API AMMActorSymbol : public AActor
{
	GENERATED_BODY()
	
public:	
	AMMActorSymbol();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "User Config")
	float CenterDistance = -27.f;

};
