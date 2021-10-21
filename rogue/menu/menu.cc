#include "menu.hh"
#include "font_def.hh"
#include <algorithm>
#include "../custom/custom.hh"

auto page = 0;

menu::menu() = default;

void menu::render() {
	constexpr ImGuiWindowFlags menu_flags = ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollWithMouse;
	constexpr ImGuiColorEditFlags col_edit_flags = ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoInputs |
		ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_Uint8;
	if (is_opened) {
		if (m_menu->window_size < 1.f)
			m_menu->window_size += 0.1f * (60 / ImGui::GetIO().Framerate);
	}
	else {
		if (m_menu->window_size > 0.f)
			m_menu->window_size -= 0.1f * (60 / ImGui::GetIO().Framerate);
	}

	m_menu->window_size = std::clamp(m_menu->window_size, 0.f, 1.f);

	ImGui::SetNextWindowSize(ImVec2(570 * m_menu->window_size, 380 * m_menu->window_size));

	if (is_opened) {
		ImGui::Begin(xor_a("##hyperbone"), nullptr, menu_flags); {
			const auto window_pos = ImGui::GetWindowPos();
			const auto draw = ImGui::GetWindowDrawList();
			if (m_menu->move < 1.f)
				m_menu->move += 0.1;
			draw->AddRectFilled(window_pos, window_pos + ImVec2(570, 380), IM_COL32(1, 1, 1, 220), 12); //right background frame
			draw->AddRectFilledMultiColor(window_pos + ImVec2(182, 0), window_pos + ImVec2(8, 370),
				IM_COL32(1, 1, 1, 255), IM_COL32(1, 1, 1, 255),
				IM_COL32(1, 1, 1, 255), IM_COL32(1, 1, 1, 255));
			draw->AddRectFilled(window_pos, window_pos + ImVec2(180, 380), IM_COL32(1, 1, 1, 255));
			draw->AddText(custom_font->logo_font, 24.f, window_pos + ImVec2(30, 15), IM_COL32(255, 255, 255, 255), xor_a("HYPERBONE"));
			ImGui::SetCursorPos(ImVec2(0, 70));
			ImGui::BeginGroup(); {
				ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(8.f, 0.f));
				if (custom->tab(xor_a("Aim"), page == 0, ImVec2(180, 30)))
					page = 0, m_menu->move = 0, m_menu->move_size = 0.f;
				if (custom->tab(xor_a("Visual"), page == 1, ImVec2(180, 30)))
					page = 1, m_menu->move = 0, m_menu->move_size = 0.33f;
				if (custom->tab(xor_a("Misc"), page == 2, ImVec2(180, 30)))
					page = 2, m_menu->move = 0, m_menu->move_size = 0.66f;
				if (custom->tab(xor_a("Loot"), page == 3, ImVec2(180, 30)))
					page = 3, m_menu->move = 0, m_menu->move_size = 0.999f;
				ImGui::PopStyleVar();
			}
			ImGui::EndGroup();
			const auto size = ImLerp(m_menu->tab, m_menu->move_size, m_menu->move);
			if (m_menu->move >= 1.f)
				m_menu->tab = m_menu->move_size;

			draw->AddRectFilled(ImVec2(window_pos.x, window_pos.y + 100 + 90 * size),
				ImVec2(window_pos.x + 8.5f, window_pos.y + 70 + 90 * size),
				IM_COL32(255, 0, 0, 255));
			ImGui::SetCursorPos(ImVec2(180, 0));
			ImGui::BeginChild(xor_a("##hello"), ImVec2(386 * m_menu->window_size, 378 * m_menu->window_size));
			{
				ImGui::SetColorEditOptions(col_edit_flags);
				switch (page) {
				case tab_aim: {
					ImGui::SetCursorPos(ImVec2(10, 15));
					custom->child(xor_a("Aim"), ImVec2(365 * m_menu->window_size, 350 * m_menu->window_size));
					{
						ImGui::Checkbox(xor_a("Aim Enable"), &aimbot);
						custom->keybind(xor_a("AIM KEY"), &aim_key, ImVec2(180, 25));
						ImGui::SliderFloat(xor_a("AIMBOT FOV"), &aim_fov, 0.f, 15.f);
						ImGui::SliderFloat(xor_a("AIM SMOOTH"), &aim_smooth, 2.f, 30.f);
						ImGui::Combo(xor_a("TARGER"), &current_bone_index, bones, IM_ARRAYSIZE(bones));
					}
					custom->end_child();
					break;
				}
				case tab_visual: {
					ImGui::SetCursorPos(ImVec2(10, 15));
					custom->child(xor_a("Visual"), ImVec2(365 * m_menu->window_size, 350 * m_menu->window_size));
					{
						ImGui::Checkbox(xor_a("Name"), &name);
						ImGui::SameLine(150, 40);
						ImGui::ColorEdit4(xor_a("##col_name"), name_color);
						ImGui::Checkbox(xor_a("Distance"), &distance);
						ImGui::SameLine(150, 40);
						ImGui::ColorEdit4(xor_a("##col_distance"), distance_color);
						ImGui::Checkbox(xor_a("Bone"), &bone);
						ImGui::SameLine(150, 40);
						ImGui::ColorEdit4(xor_a("##col_bone"), bone_color);
					}
					custom->end_child();
					break;
				}
				case tab_misc: {
					ImGui::SetCursorPos(ImVec2(10, 15));
					custom->child(xor_a("Misc"), ImVec2(365 * m_menu->window_size, 350 * m_menu->window_size));
					{
					}
					custom->end_child();
					break;
				}
				case tab_loot:
				{
					ImGui::SetCursorPos(ImVec2(10, 15));
					custom->child(xor_a("Loot"), ImVec2(365 * m_menu->window_size, 350 * m_menu->window_size));
					{

					}
					custom->end_child();
					break;
				}
				default:
					break;
				}
				ImGui::EndChild();
			}
			ImGui::End();
		}
	}
}