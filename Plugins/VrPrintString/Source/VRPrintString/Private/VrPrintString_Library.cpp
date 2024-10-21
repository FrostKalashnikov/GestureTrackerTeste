// Copyright 2024 Michel Brito.

#include "VRPrintString/Public/VrPrintString_Library.h"
#include "Kismet/GameplayStatics.h"
#include "VrPrintString_Settings.h"
#include "VrPrintString_Actor.h"
#include "VrPrintString_Interface.h"
#include "Blueprint/UserWidget.h"
#include "Components/WidgetComponent.h"
#include "UObject/ConstructorHelpers.h"

void UVrPrintString_Library::VR_Print_String(const UObject* WorldContextObject, const FString& InString, float Duration, FLinearColor Color,
                                             const FName Key, bool bShowKeyInPrint, bool bPrintToLog)
{
	const UVrPrintString_Settings* Settings = GetMutableDefault<UVrPrintString_Settings>();

	AVrPrintString_Actor* VrPrintActor = Cast<AVrPrintString_Actor>(UGameplayStatics::GetActorOfClass(WorldContextObject, AVrPrintString_Actor::StaticClass()));
	UUserWidget* PrintWidget;
	if (VrPrintActor == nullptr)
	{
		const APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(WorldContextObject, 0);
		APawn* Pawn = UGameplayStatics::GetPlayerPawn(WorldContextObject, 0);
		VrPrintActor = Cast<AVrPrintString_Actor>(GWorld->SpawnActor(AVrPrintString_Actor::StaticClass()));
		VrPrintActor->AttachToComponent(CameraManager->GetTransformComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		VrPrintActor->SetActorRelativeLocation(FVector(100.f, 0.f, 0.f));
		VrPrintActor->SetActorRelativeRotation(FRotator(0.f, 180.f, 0.f));
		VrPrintActor->SetActorScale3D(FVector(0.1f, 0.1f, 0.1f));
		
		PrintWidget = VrPrintActor->WidgetComp->GetWidget();
		IVrPrintString_Interface::Execute_SetupHUD(PrintWidget, Settings->HUD_Size, Settings->FontInfo);
	}
	
	PrintWidget = VrPrintActor->WidgetComp->GetWidget();
	IVrPrintString_Interface::Execute_AddOrUpdateMessageOnVR(PrintWidget, InString, Duration, Color, Key, bShowKeyInPrint);

	if (bPrintToLog)
	{
		FString LogPrefix = "VR Print String: ";
		if(bShowKeyInPrint)
			LogPrefix += Key.ToString() + " : ";
		FString LogText = LogPrefix + InString;
 		UE_LOG(LogBlueprintUserMessages, Log, TEXT("%s"), *LogText);
	}
}

void UVrPrintString_Library::Clear_All_VR_Prints(const UObject* WorldContextObject)
{
	const AVrPrintString_Actor* VrPrintActor = Cast<AVrPrintString_Actor>(UGameplayStatics::GetActorOfClass(WorldContextObject, AVrPrintString_Actor::StaticClass()));
	if (VrPrintActor && VrPrintActor->WidgetComp->GetWidget())
	{
		IVrPrintString_Interface::Execute_ClearAllMessagesOnVR(VrPrintActor->WidgetComp->GetWidget());
	}
}

void UVrPrintString_Library::VR_Print_String_DevOnly(const UObject* WorldContextObject, const FString& InString, float Duration, FLinearColor Color, const FName Key, bool bShowKeyInPrint, bool bPrintToLog)
{
	const UVrPrintString_Settings* Settings = GetMutableDefault<UVrPrintString_Settings>();

	AVrPrintString_Actor* VrPrintActor = Cast<AVrPrintString_Actor>(UGameplayStatics::GetActorOfClass(WorldContextObject, AVrPrintString_Actor::StaticClass()));
	UUserWidget* PrintWidget;
	if (VrPrintActor == nullptr)
	{
		const APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(WorldContextObject, 0);
		APawn* Pawn = UGameplayStatics::GetPlayerPawn(WorldContextObject, 0);
		VrPrintActor = Cast<AVrPrintString_Actor>(GWorld->SpawnActor(AVrPrintString_Actor::StaticClass()));
		VrPrintActor->AttachToComponent(CameraManager->GetTransformComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		VrPrintActor->SetActorRelativeLocation(FVector(100.f, 0.f, 0.f));
		VrPrintActor->SetActorRelativeRotation(FRotator(0.f, 180.f, 0.f));
		VrPrintActor->SetActorScale3D(FVector(0.1f, 0.1f, 0.1f));

		PrintWidget = VrPrintActor->WidgetComp->GetWidget();
		IVrPrintString_Interface::Execute_SetupHUD(PrintWidget, Settings->HUD_Size, Settings->FontInfo);
	}

	PrintWidget = VrPrintActor->WidgetComp->GetWidget();
	IVrPrintString_Interface::Execute_AddOrUpdateMessageOnVR(PrintWidget, InString, Duration, Color, Key, bShowKeyInPrint);

	if (bPrintToLog)
	{
		FString LogPrefix = "VR Print String: ";
		if (bShowKeyInPrint)
			LogPrefix += Key.ToString() + " : ";
		FString LogText = LogPrefix + InString;
		UE_LOG(LogBlueprintUserMessages, Log, TEXT("%s"), *LogText);
	}
}

void UVrPrintString_Library::Remove_VR_Print_By_Key(const UObject* WorldContextObject, const FName Key)
{
	const AVrPrintString_Actor* VrPrintActor = Cast<AVrPrintString_Actor>(UGameplayStatics::GetActorOfClass(WorldContextObject, AVrPrintString_Actor::StaticClass()));
	if (VrPrintActor && VrPrintActor->WidgetComp->GetWidget())
	{
		IVrPrintString_Interface::Execute_RemoveMessageByKey(VrPrintActor->WidgetComp->GetWidget(), Key);
	}
}


