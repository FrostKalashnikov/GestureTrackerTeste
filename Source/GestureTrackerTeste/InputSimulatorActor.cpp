// Fill out your copyright notice in the Description page of Project Settings.


#include "InputSimulatorActor.h"

// Sets default values
AInputSimulatorActor::AInputSimulatorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInputSimulatorActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInputSimulatorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInputSimulatorActor::ClickToSimulate(FString FStringKey)
{
	if (OnKeyPressEvent.IsBound())
		OnKeyPressEvent.Broadcast(FStringKey);

#if PLATFORM_WINDOWS
	// Conversão de FString para codigo virtual
	const TCHAR* TcharKey = *FStringKey;
	WORD VirtualKeyCode = VkKeyScan(TcharKey[0]);

	// Configuração de sinal Input
	INPUT input;
	input.type = INPUT_KEYBOARD;
	input.ki.wScan = 0;
	input.ki.time = 0;
	input.ki.dwExtraInfo = 0;
	input.ki.wVk = VirtualKeyCode; // Código da tecla
	input.ki.dwFlags = 0;

	// Pressionar a tecla
	SendInput(1, &input, sizeof(INPUT));

	// Soltar a tecla
	input.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &input, sizeof(INPUT));
#endif
}

void AInputSimulatorActor::PressToSimulate(FString FStringKey)
{
	if (OnKeyPressEvent.IsBound())
		OnKeyPressEvent.Broadcast(FStringKey);

#if PLATFORM_WINDOWS
	// Conversão de FString para codigo virtual
	const TCHAR* TcharKey = *FStringKey;
	WORD VirtualKeyCode = VkKeyScan(TcharKey[0]);

	// Configuração de sinal Input
	INPUT input;
	input.type = INPUT_KEYBOARD;
	input.ki.wScan = 0;
	input.ki.time = 0;
	input.ki.dwExtraInfo = 0;
	input.ki.wVk = VirtualKeyCode; // Código da tecla
	input.ki.dwFlags = 0;

	// Pressionar a tecla
	SendInput(1, &input, sizeof(INPUT));
#endif
}

void AInputSimulatorActor::ReleaseToSimulate(FString FStringKey)
{
	if (OnKeyPressEvent.IsBound())
		OnKeyPressEvent.Broadcast(FStringKey);

#if PLATFORM_WINDOWS
	// Conversão de FString para codigo virtual
	const TCHAR* TcharKey = *FStringKey;
	WORD VirtualKeyCode = VkKeyScan(TcharKey[0]);

	// Configuração de sinal Input
	INPUT input;
	input.type = INPUT_KEYBOARD;
	input.ki.wScan = 0;
	input.ki.time = 0;
	input.ki.dwExtraInfo = 0;
	input.ki.wVk = VirtualKeyCode; // Código da tecla
	input.ki.dwFlags = 0;

	// Soltar a tecla
	input.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &input, sizeof(INPUT));
#endif
}

