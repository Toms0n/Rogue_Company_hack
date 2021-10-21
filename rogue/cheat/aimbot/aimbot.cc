#include "base.hh"
#include "../../utils/xor.hh"
#include "../../cheat/player/base.hh"
#include "../../menu/menu.hh"

void aimbot_s::aimbot()
{
    //GET ADDRESES FROM SDK
    addr::setup_sdk();
    //UWORLD CHECK
    if ((*addr::u_world) == nullptr) return;
    //PERSISTENT LEVEL
    addr::m_level = (*addr::u_world)->PersistentLevel;
    //LOCAL PLAYER
    addr::m_player = (*addr::u_world)->OwningGameInstance->LocalPlayers[0];
    if ((addr::m_player) == nullptr) return;
    //PLAYER CONTROLLER
    auto* player_controller = addr::m_player->PlayerController;
    if ((player_controller) == nullptr) return;
    //ACKNOWLEDGED PAWN
    const auto acknowledged_pawn = player_controller->AcknowledgedPawn;
    if ((acknowledged_pawn) == nullptr) return;
    //ROOT_COMPONENT
    auto* root_component = acknowledged_pawn->RootComponent;
    if ((root_component) == nullptr) return;
    //OUTPUT SCREEN
    CG::FVector2D screen;
    //GET AACTOR LIST
    CG::TArray<CG::AActor*> AActors = addr::m_level->AActors;
    //LOOP through all objects on map
    for (auto i = 0; i < AActors.Num(); i++) {
        CG::AActor* actor = AActors[i];
        if ((actor) == nullptr) continue;
        //get actor root component
        const auto actor_root_component = actor->RootComponent;
        if ((actor_root_component) == nullptr) continue;
        //get pawn of current class 
        const auto pawn = static_cast<CG::AMainCharacter_C*>(actor);
        if ((pawn) == nullptr) continue;
        //check for player
        if (strstr(actor->Name.GetName().c_str(), xor_a("DefaultPVPBotCharacter_C")))
        {
            //check if local player
            if (misc::is_local_player(actor)) continue;
            //check health
            if (misc::is_dead(actor)) continue;
            //check team
            if (misc::team(actor)) continue;
            //root bone
            CG::FVector head_bone, chest_bone;
            //get root bone
            misc::get_bone_location(pawn->Mesh, &head_bone, 110);
            misc::get_bone_location(pawn->Mesh, &chest_bone, 34);

            CG::FVector head = head_bone;
            CG::FVector chest = chest_bone;

            auto const camera = player_controller->PlayerCameraManager;
            const auto cameraLoc = camera->CameraCachePrivate.POV.Location;
            const auto cameraRot = camera->CameraCachePrivate.POV.Rotation;

            const auto g_math = reinterpret_cast<CG::UKismetMathLibrary*>(CG::UGameplayStatics::StaticClass());
            CG::FRotator rotation_delta;
            if (menu::current_bone_index == 0) {
	            float dist = misc::dist_to(root_component->RelativeLocation, head);
                rotation_delta = g_math->STATIC_NormalizedDeltaRotator(g_math->STATIC_FindLookAtRotation(cameraLoc, head), cameraRot);
            }
            else {
                float dist = misc::dist_to(root_component->RelativeLocation, chest);
                rotation_delta = g_math->STATIC_NormalizedDeltaRotator(g_math->STATIC_FindLookAtRotation(cameraLoc, chest), cameraRot);
            }

            const float abs_yaw = abs(rotation_delta.Yaw);
            const float abs_pitch = abs(rotation_delta.Pitch);
            if (abs_yaw > aimbot_s::aim_yaw || abs_pitch > aimbot_s::aim_pitch) { continue; }
            const float sum = abs_yaw + abs_pitch;
            if (sum < aimBest.best)
            {
                aimBest.target = actor;
                if (menu::current_bone_index == 0) {
                    aimBest.location = head;
                }
                else {
                    aimBest.location = chest;
                }
                aimBest.delta = rotation_delta;
                aimBest.best = sum;
                aimBest.smoothness = menu::aim_smooth;
            }

            if (player_controller->ProjectWorldLocationToScreen(aimBest.location, &screen, false)){
                auto col = ImGui::GetColorU32(IM_COL32(0, 200, 0, 255));
                ImGui::GetBackgroundDrawList()->AddLine({ ImGui::GetIO().DisplaySize.x * 0.5f , ImGui::GetIO().DisplaySize.y * 0.5f }, { screen.X, screen.Y }, col);
                ImGui::GetBackgroundDrawList()->AddCircle({ screen.X, screen.Y }, 3.f, col);
            }

            if (GetAsyncKeyState(menu::aim_key)){
                aimBest.delta = g_math->STATIC_NormalizedDeltaRotator(g_math->STATIC_FindLookAtRotation(cameraLoc, aimBest.location), cameraRot);
                const auto smoothness = 1.f / aimBest.smoothness;
                player_controller->AddYawInput(aimBest.delta.Yaw * smoothness);
                player_controller->AddPitchInput(aimBest.delta.Pitch * -smoothness);
            }

        }

        if (strstr(actor->Name.GetName().c_str(), xor_a("MainCharacter_C")))
        {
            //check if local player
            if (misc::is_local_player(actor)) continue;
            //check health
            if (misc::is_dead(actor)) continue;
            //check team
            if (misc::team(actor)) continue;
            //root bone
            CG::FVector root_bone;
            //get root bone
            misc::get_bone_location(pawn->Mesh, &root_bone, 0);
        }
    }
}
