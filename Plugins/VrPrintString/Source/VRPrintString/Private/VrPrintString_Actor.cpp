// Copyright 2024 Michel Brito.

#include "VrPrintString_Actor.h"
#include "Components/WidgetComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

AVrPrintString_Actor::AVrPrintString_Actor()
{
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FClassFinder<UUserWidget> VrPrintWidgetClass(TEXT("/VrPrintString/Widgets/W_PrintsHUD"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MatHUD(TEXT("/VrPrintString/Materials/M_HUD"));
	
	WidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComp"));
	WidgetComp->SetupAttachment(RootComponent);
	WidgetComp->SetDrawSize(FVector2D(800.f, 800.f));
	WidgetComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	WidgetComp->TranslucencySortPriority = 100;

	if (VrPrintWidgetClass.Succeeded())
		WidgetComp->SetWidgetClass(VrPrintWidgetClass.Class);
	if (MatHUD.Succeeded())
		WidgetComp->SetMaterial(0, MatHUD.Object);

}

void AVrPrintString_Actor::BeginPlay()
{
	Super::BeginPlay();
}

void AVrPrintString_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

