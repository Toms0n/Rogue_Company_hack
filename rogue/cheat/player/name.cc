#include "base.hh"
#include "../../utils/xor.hh"
#include "../../menu/menu.hh"

void player::name()
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
            const auto actor_state = pawn->PlayerState;
            if ((actor_state) == nullptr) continue;
            const wchar_t* actor_name = actor_state->PlayerNamePrivate.cw_str();
            _bstr_t b(actor_name);
            const char* c = b;
            CG::FVector root_bone;
            misc::get_bone_location(pawn->Mesh, &root_bone, 0);
            if(player_controller->ProjectWorldLocationToScreen(root_bone, &screen, false))
            {
                ImVec2 calc_size = ImGui::CalcTextSize(c, nullptr, false);
                const float* name_color = menu::name_color;
                ImGui::GetForegroundDrawList()->AddText(ImVec2(screen.X - calc_size.x / 2 - 1, screen.Y), ImColor{ name_color[0], name_color[1], name_color[2], name_color[3] }, c);
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
            const auto actor_state = pawn->PlayerState;
            if ((actor_state) == nullptr) continue;
            const wchar_t* actor_name = actor_state->PlayerNamePrivate.cw_str();
            _bstr_t b(actor_name);
            const char* c = b;
            CG::FVector root_bone;
            misc::get_bone_location(pawn->Mesh, &root_bone, 0);
            if (player_controller->ProjectWorldLocationToScreen(root_bone, &screen, false))
            {
                //CALCULATION TEXT SIZE
                ImVec2 calc_size = ImGui::CalcTextSize(c, nullptr, false);
                const float* name_color = menu::name_color;
                ImGui::GetForegroundDrawList()->AddText(ImVec2(screen.X - calc_size.x / 2 - 1, screen.Y), ImColor{ name_color[0], name_color[1], name_color[2], name_color[3] }, c);
            }
        }
    }
}
