#include "base.hh"
#include "../../utils/xor.hh"
#include "../../menu/menu.hh"

void player::bone()
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
            if(misc::team(actor)) continue;
            const float* bone_color = menu::bone_color;
            Skeleton::DrawSkeleton(pawn, ImColor{ bone_color[0], bone_color[1], bone_color[2], bone_color[3]});
        }

        if (strstr(actor->Name.GetName().c_str(), xor_a("MainCharacter_C")))
        {
            //check if local player
            if (misc::is_local_player(actor)) continue;
            //check health
            if (misc::is_dead(actor)) continue;
            //check team
            if (misc::team(actor)) continue;

            const float* bone_color = menu::bone_color;
            Skeleton::DrawSkeleton(pawn, ImColor{ bone_color[0], bone_color[1], bone_color[2], bone_color[3] });
        }
    }
}
