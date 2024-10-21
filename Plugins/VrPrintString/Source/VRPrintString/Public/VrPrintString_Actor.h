// Copyright 2024 Michel Brito.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VrPrintString_Actor.generated.h"

UCLASS()
class VRPRINTSTRING_API AVrPrintString_Actor : public AActor
{
	GENERATED_BODY()

public:
	AVrPrintString_Actor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VR Print String")
		class UWidgetComponent* WidgetComp;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
