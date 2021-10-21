#pragma once
#include <comdef.h>
#include "../../gui/imgui.h"
#include "../../cheat/addresses/addr.hh"
class player
{
public:
	static void bone();
	static void name();
	static void distance();
};

class misc
{
public:
	static bool is_local_player(CG::AActor* actor);
	static void get_bone_location(CG::USkeletalMeshComponent* mesh, CG::FVector* vec, int bone_id);
	CG::FMatrix* get_bone_matrix(CG::USkeletalMeshComponent* mesh, CG::FMatrix* matrix, int bone_id);
	static float dist_to(CG::FVector first, CG::FVector second);
	static void __fastcall bone_line(CG::AMainCharacter_C* pawn, int bone_1, int bone_2, ImColor color);
	static bool is_visible(CG::AActor* actor);
	static bool is_dead(CG::AActor* actor);
	static bool team(CG::AActor* actor);
};

inline auto plr = new misc;

class Skeleton {
public:
	static void __fastcall DrawLeftLeg(CG::AMainCharacter_C* pawn, ImColor color)
	{
		misc::bone_line(pawn, 2, 21, color);
		misc::bone_line(pawn, 21, 19, color);
		misc::bone_line(pawn, 19, 18, color);
	}

	static void __fastcall DrawRightLeg(CG::AMainCharacter_C* pawn, ImColor color)
	{
		misc::bone_line(pawn, 2, 12, color);
		misc::bone_line(pawn, 12, 5, color);
	}

	static void __fastcall DrawRightArm(CG::AMainCharacter_C* pawn, ImColor color)
	{
		misc::bone_line(pawn, 108, 101, color);
		misc::bone_line(pawn, 101, 102, color);
		misc::bone_line(pawn, 102, 94, color);
	}

	static void __fastcall DrawLeftArm(CG::AMainCharacter_C* pawn, ImColor color)
	{
		misc::bone_line(pawn, 108, 70, color);
		misc::bone_line(pawn, 70, 64, color);
		misc::bone_line(pawn, 64, 53, color);
	}
	static void __fastcall DrawHead(CG::AMainCharacter_C* pawn, ImColor color)
	{
		misc::bone_line(pawn, 2, 32, color);
		misc::bone_line(pawn, 32, 33, color);
		misc::bone_line(pawn, 33, 34, color);
		misc::bone_line(pawn, 34, 35, color);
		misc::bone_line(pawn, 35, 36, color);
		misc::bone_line(pawn, 36, 110, color);
	}
	static void __fastcall DrawSkeleton(CG::AMainCharacter_C* pawn, ImColor color) {
		DrawLeftLeg(pawn, color);
		DrawRightLeg(pawn, color);
		DrawLeftArm(pawn, color);
		DrawRightArm(pawn, color);
		DrawHead(pawn, color);
	}
};