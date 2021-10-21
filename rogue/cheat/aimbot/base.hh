#pragma once
#include "../addresses/addr.hh"
class aimbot_s
{
public:
	inline static float aim_yaw;
	inline static float aim_pitch;
	inline static float aim_smooth;
public:
	static void aimbot();
};

static struct
{
	CG::AActor* target = nullptr;
	CG::FVector location;
	CG::FRotator delta;
	float best = FLT_MAX;
	float smoothness = 1.f;
}aimBest;
