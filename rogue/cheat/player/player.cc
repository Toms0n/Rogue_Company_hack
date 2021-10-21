#include "base.hh"
#include "../addresses/addr.hh"

typedef CG::FMatrix* (__thiscall* this_get_bone_matrix)(CG::USkinnedMeshComponent* mesh, CG::FMatrix* matrix, int bone_id);
this_get_bone_matrix m_get_bone_matrix;

CG::FMatrix* misc::get_bone_matrix(CG::USkeletalMeshComponent* mesh, CG::FMatrix* matrix, int bone_id)
{
	this_get_bone_matrix m_get_bone_matrix = (this_get_bone_matrix)((DWORD64)addr::bone);
	return m_get_bone_matrix(mesh, matrix, bone_id);
}

void misc::get_bone_location(CG::USkeletalMeshComponent* mesh, CG::FVector* vec, int bone_id)
{
	CG::FMatrix v_matrix;
	CG::FMatrix* v_temp_matrix = plr->get_bone_matrix(mesh, &v_matrix, bone_id);
	*vec = v_matrix.WPlane;
}

bool misc::is_local_player(CG::AActor* actor)
{
	const auto player_controller = addr::m_player->PlayerController;
	if ((player_controller) == nullptr) return 0;
	if (player_controller->AcknowledgedPawn == nullptr) return true;
	return (static_cast<CG::APawn*>(actor) == player_controller->AcknowledgedPawn);
}

float misc::dist_to(CG::FVector first, CG::FVector second)
{
	CG::FVector delta;
	delta.X = first.X - second.X;
	delta.Y = first.Y - second.Y;
	delta.Z = first.Z - second.Z;

	return sqrt(delta.X * delta.X + delta.Y * delta.Y + delta.Z * delta.Z);
}

void misc::bone_line(CG::AMainCharacter_C* pawn, int bone_1, int bone_2, ImColor color)
{
	const auto player_controller = addr::m_player->PlayerController;
	if ((player_controller) == nullptr) return;
	CG::FVector bone_pos_1, bone_pos_2;
	CG::FVector2D out_bone_1, out_bone_2;
	get_bone_location(pawn->Mesh, &bone_pos_1, bone_1);
	get_bone_location(pawn->Mesh, &bone_pos_2, bone_2);
	if (player_controller->ProjectWorldLocationToScreen(bone_pos_1, &out_bone_1, false))
	{
		if (player_controller->ProjectWorldLocationToScreen(bone_pos_2, &out_bone_2, false))
		{
			ImGui::GetForegroundDrawList()->AddLine(ImVec2(out_bone_1.X, out_bone_1.Y), ImVec2(out_bone_2.X, out_bone_2.Y), color, 2);
		}
	}
}

bool misc::is_visible(CG::AActor* actor)
{
	const auto character = static_cast<CG::AMainCharacter_C*>(actor);
	if ((character) == nullptr) return false;
	const auto player_controller = addr::m_player->PlayerController;
	if ((player_controller) == nullptr) return false;
	return player_controller->LineOfSightTo(character, CG::FVector(), false);
}

bool misc::is_dead(CG::AActor* actor)
{
	bool is_dead = false;
	const auto pawn = static_cast<CG::AMainCharacter_C*>(actor);
	if ((pawn) == nullptr) return false;
	if (pawn->Health < 0) is_dead = true;
	return is_dead;
}

bool misc::team(CG::AActor* actor)
{
	bool is_my_team = false;
	const auto team = static_cast<CG::AMainCharacter_C*>(actor);
	if ((team) == nullptr) return false;
	const auto player_controller = addr::m_player->PlayerController;
	if ((player_controller) == nullptr) return false;
	const auto local_pawn = player_controller->Pawn;
	if ((local_pawn) == nullptr) return false;
	const auto local_team = static_cast<CG::AMainCharacter_C*>(local_pawn);
	const auto get_team = team->GetTeamNum();
	const auto my_team = local_team->GetTeamNum();
	if (get_team == my_team) is_my_team = true;
	return is_my_team;
}
