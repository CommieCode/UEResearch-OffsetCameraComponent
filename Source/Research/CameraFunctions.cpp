// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraFunctions.h"

void UCameraFunctions::UseAdditiveOffset(UCameraComponent* CameraComponent, bool bUse, const FTransform AdditiveOffset, const float FieldOfView)
{
	if (bUse)
	{
		CameraComponent->ClearAdditiveOffset();
		CameraComponent->AddAdditiveOffset(AdditiveOffset, FieldOfView);
	}
	else
	{
		CameraComponent->ClearAdditiveOffset();
	}
}

void UCameraFunctions::UseAdditiveOffset_OffsetCameraComponent(UOffsetCameraComponent* CameraComponent, bool bUse, const FTransform AdditiveOffset, const float FieldOfView)
{
	if (bUse)
	{
		CameraComponent->SetUseAdditiveOffset(bUse);
		CameraComponent->ClearAdditiveOffset();
		CameraComponent->AddAdditiveOffset(AdditiveOffset, FieldOfView);
	}
	else
	{
		CameraComponent->SetUseAdditiveOffset(bUse);
		CameraComponent->ClearAdditiveOffset();
	}
}
