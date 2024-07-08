// Copyright Subbi GameWorks


#include "UI/HUD/AuraHUD.h"

#include "UI/Widet/AuraUserWidget.h"

void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	Widget->AddToViewport();
}
