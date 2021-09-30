
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ApplyPostProcessOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampCamera_C::ApplyPostProcessOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.ApplyPostProcessOverride");

	ABP_PF_CampCamera_C_ApplyPostProcessOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.SetCameraPresetNo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CameraPresetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampCamera_C::SetCameraPresetNo(int CameraPresetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.SetCameraPresetNo");

	ABP_PF_CampCamera_C_SetCameraPresetNo_Params params;
	params.CameraPresetIndex = CameraPresetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.StepCameraPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampCamera_C::StepCameraPreset(int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.StepCameraPreset");

	ABP_PF_CampCamera_C_StepCameraPreset_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ActivateCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampCamera_C::ActivateCamera(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.ActivateCamera");

	ABP_PF_CampCamera_C_ActivateCamera_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.UpdateCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampCamera_C::UpdateCamera(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.UpdateCamera");

	ABP_PF_CampCamera_C_UpdateCamera_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.SetLayout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InBaseActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPFCampLayoutData       Layout                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PF_CampCamera_C::SetLayout(class AActor* InBaseActor, const struct FPFCampLayoutData& Layout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.SetLayout");

	ABP_PF_CampCamera_C_SetLayout_Params params;
	params.InBaseActor = InBaseActor;
	params.Layout = Layout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ApplyPostProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampCamera_C::ApplyPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.ApplyPostProcess");

	ABP_PF_CampCamera_C_ApplyPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.�0�0�0�0�0�0�0�0�0�0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampCamera_C::�0�0�0�0�0�0�0�0�0�0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.�0�0�0�0�0�0�0�0�0�0");

	ABP_PF_CampCamera_C_�0�0�0�0�0�0�0�0�0�0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.�0�0�0R�0�fH0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampCamera_C::�0�0�0R�0�fH0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.�0�0�0R�0�fH0");

	ABP_PF_CampCamera_C_�0�0�0R�0�fH0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.�0�0�0�0�0i��_
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampCamera_C::�0�0�0�0�0i��_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.�0�0�0�0�0i��_");

	ABP_PF_CampCamera_C_�0�0�0�0�0i��__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.�0�0�0�0�0�0�0k0�0�0�0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampCamera_C::�0�0�0�0�0�0�0k0�0�0�0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.�0�0�0�0�0�0�0k0�0�0�0");

	ABP_PF_CampCamera_C_�0�0�0�0�0�0�0k0�0�0�0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ApplyPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampCamera_C::ApplyPreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.ApplyPreset");

	ABP_PF_CampCamera_C_ApplyPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.FindCameraPreset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PresetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FScriptCameraData       CameraData                     (Parm, OutParm)

void ABP_PF_CampCamera_C::FindCameraPreset(const struct FString& PresetName, bool* bFound, struct FScriptCameraData* CameraData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.FindCameraPreset");

	ABP_PF_CampCamera_C_FindCameraPreset_Params params;
	params.PresetName = PresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (CameraData != nullptr)
		*CameraData = params.CameraData;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.UserConstructionScript");

	ABP_PF_CampCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.ReceiveTick");

	ABP_PF_CampCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ExecuteUbergraph_BP_PF_CampCamera
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampCamera_C::ExecuteUbergraph_BP_PF_CampCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampCamera.BP_PF_CampCamera_C.ExecuteUbergraph_BP_PF_CampCamera");

	ABP_PF_CampCamera_C_ExecuteUbergraph_BP_PF_CampCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
