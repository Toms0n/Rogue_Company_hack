#include "custom.hh"

const char* const KeyNames[] = {
"Unknown",
"mouse 1",
"mouse 2",
"cancel",
"mouse wheel",
"mouse 3",
"mouse 4",
"Unknown",
"back",
"tab",
"Unknown",
"Unknown",
"clear",
"return",
"Unknown",
"Unknown",
"shift",
"control",
"menu",
"pause",
"caps lock",
"kana",
"Unknown",
"junja",
"final",
"kanji",
"Unknown",
"escape",
"convert",
"nonconvert",
"accept",
"modechange",
"space",
"page up",
"page down",
"end",
"home",
"left arrow",
"up arrow",
"right arrow",
"down arrow",
"select",
"print",
"execute",
"print screen",
"insert",
"delete",
"help",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"A",
"B",
"C",
"D",
"E",
"F",
"G",
"H",
"I",
"J",
"K",
"L",
"M",
"N",
"O",
"P",
"Q",
"R",
"S",
"T",
"U",
"V",
"W",
"X",
"Y",
"Z",
"left win",
"right win",
"apps",
"Unknown",
"slee[",
"num 0",
"num 1",
"num 2",
"num 3",
"num 4",
"num 5",
"num 6",
"num 7",
"num 8",
"num 9",
"multiply",
"add",
"separator",
"subtract",
"decimal",
"divide",
"F1",
"F2",
"F3",
"F4",
"F5",
"F6",
"F7",
"F8",
"F9",
"F10",
"F11",
"F12",
"F13",
"F14",
"F15",
"F16",
"F17",
"F18",
"F19",
"F20",
"F21",
"F22",
"F23",
"F24",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"numlock",
"scroll",
"OEM NEC EQUAL",
"OEM FJ MASSHOU",
"VK OEM FJ TOUROKU",
"VK OEM FJ LOYA",
"VK OEM FJ ROYA",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"left shift",
"right shift",
"left control",
"right control",
"left menu",
"right menu"
};

std::map<ImGuiID, float> tab_alpha;
auto c_custom::tab(const char* label, bool selected, ImVec2 size_arg) -> bool {
    use(ImGui);

    ImGuiWindow* window = GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    const ImGuiID id = window->GetID(label);
    const ImVec2 label_size = CalcTextSize(label, NULL, true);
    ImGuiButtonFlags flags{};

    ImVec2 pos = window->DC.CursorPos;
    if ((flags & ImGuiButtonFlags_AlignTextBaseLine) && style.FramePadding.y < window->DC.CurrLineTextBaseOffset) // Try to vertically align buttons that are smaller/have no padding so that text baseline matches (bit hacky, since it shouldn't be a flag)
        pos.y += window->DC.CurrLineTextBaseOffset - style.FramePadding.y;
    ImVec2 size = CalcItemSize(size_arg, label_size.x + style.FramePadding.x * 2.0f, label_size.y + style.FramePadding.y * 2.0f);

    const ImRect bb(pos, pos + size);
    ItemSize(size, style.FramePadding.y);
    if (!ItemAdd(bb, id))
        return false;

    if (g.LastItemData.InFlags & ImGuiItemFlags_ButtonRepeat)
        flags |= ImGuiButtonFlags_Repeat;

    bool hovered, held;
    bool pressed = ButtonBehavior(bb, id, &hovered, &held, flags);
    float* alpha = &tab_alpha[id];

    if (*alpha >= GetStyle().Alpha) {
        *alpha = GetStyle().Alpha;
    }

    if (*alpha <= 0.f) {
        *alpha = 0.f;
    }

    if (selected) {
        if (*alpha <= GetStyle().Alpha) {
            *alpha += ImGui::GetIO().DeltaTime * 4;
        }

    }
    else {
        if (*alpha > 0.f) {
            *alpha -= ImGui::GetIO().DeltaTime * 4;
        }
    }

    // Render

    window->DrawList->AddRectFilled(bb.Min, bb.Max, GetColorU32(ImVec4(35 / 255.f, 35 / 255.f, 35 / 255.f, *alpha)));
    //window->DrawList->AddRectFilled(bb.Min + ImVec2(0, 4), bb.Max - ImVec2(173, 4), GetColorU32(ImVec4(116 / 255.f, 60 / 255.f, 200 / 255.f, *alpha)), 4.f, ImDrawCornerFlags_Right);

    window->DrawList->AddText(bb.Min + ImVec2(15, 6), IM_COL32(255, 255, 255, 180), label);
    window->DrawList->AddText(bb.Min + ImVec2(15, 6), GetColorU32(ImVec4(1.f, 1.f, 1.f, *alpha)), label);


    return pressed;
}

auto c_custom::child(const char* label, ImVec2 size_arg) -> void {
    ImGui::PushStyleColor(ImGuiCol_ChildBg, this->color(1, 1, 1, 255));
    ImGui::PushStyleColor(ImGuiCol_Border, this->color(255, 0, 0, 255));
    ImGui::BeginChild(label, size_arg, true, ImGuiWindowFlags_NoScrollbar);
    auto p = ImGui::GetWindowPos();
    auto draw = ImGui::GetForegroundDrawList();
    /*draw*/
    draw->AddRectFilled(p, p + ImVec2(size_arg.x, 20), IM_COL32(1, 1, 1, 255), 0.F);
    /*text*/
    draw->AddText(p + ImVec2(10, 1), IM_COL32(255, 255, 255, 255), label);


    ImGui::SetCursorPos(ImVec2(8, 30));
    ImGui::BeginGroup();
}

auto c_custom::end_child() -> void {
    ImGui::EndGroup();
    ImGui::EndChild();
    ImGui::PopStyleColor(2);
}

std::map<ImGuiID, float> keybind_alpha;
auto c_custom::keybind(const char* label, int* k, const ImVec2& size_arg) -> bool {
    use(ImGui);

    ImGuiWindow* window = ImGui::GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    ImGuiIO& io = g.IO;
    const ImGuiStyle& style = g.Style;

    const ImGuiID id = window->GetID(label);
    const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);
    ImVec2 size = ImGui::CalcItemSize(size_arg, ImGui::CalcItemWidth(), label_size.y + style.FramePadding.y * 2.0f);
    const ImRect frame_bb(window->DC.CursorPos + ImVec2(label_size.x + style.ItemInnerSpacing.x, 0.0f), window->DC.CursorPos + size);
    const ImRect total_bb(window->DC.CursorPos, frame_bb.Max);

    ImGui::ItemSize(total_bb, style.FramePadding.y);
    if (!ImGui::ItemAdd(total_bb, id))
        return false;

    const bool hovered = ImGui::ItemHoverable(frame_bb, id);


    const bool focus_requested = (g.LastItemData.StatusFlags & ImGuiItemStatusFlags_Focused);
    const bool focus_requested_by_code = focus_requested && (window->FocusIdxAllCounter == window->FocusIdxAllRequestCurrent);
    const bool focus_requested_by_tab = focus_requested && !focus_requested_by_code;


    if (hovered) {
        ImGui::SetHoveredID(id);
        g.MouseCursor = ImGuiMouseCursor_TextInput;
    }

    const bool user_clicked = hovered && io.MouseClicked[0];

    if (focus_requested || user_clicked) {
        if (g.ActiveId != id) {
            // Start edition
            memset(io.MouseDown, 0, sizeof(io.MouseDown));
            memset(io.KeysDown, 0, sizeof(io.KeysDown));
            *k = 0;
        }
        ImGui::SetActiveID(id, window);
        ImGui::FocusWindow(window);
    }
    else if (io.MouseClicked[0]) {
        // Release focus when we click outside
        if (g.ActiveId == id)
            ImGui::ClearActiveID();
    }
    float* alpha = &tab_alpha[id];

    if (*alpha >= GetStyle().Alpha) {
        *alpha = GetStyle().Alpha;
    }

    if (*alpha <= 0.f) {
        *alpha = 0.f;
    }

    if (g.ActiveId == id) {
        if (*alpha <= GetStyle().Alpha) {
            *alpha += ImGui::GetIO().DeltaTime * 4;
        }

    }
    else {
        if (*alpha > 0.f) {
            *alpha -= ImGui::GetIO().DeltaTime * 4;
        }
    }

    bool value_changed = false;
    int key = *k;
    auto color_bg = IM_COL32(45, 45, 45, 255);
    auto color_text = IM_COL32(255, 255, 255, 255);
    ImU32 color_outline = GetColorU32(ImVec4(1.f, 1.f, 1.f, 0.f));
    if (g.ActiveId == id) {
        color_outline = GetColorU32(ImVec4(255 / 255.f, 1 / 255.f, 1 / 255.f, *alpha));
        for (auto i = 0; i < 5; i++) {
            if (io.MouseDown[i]) {
                switch (i) {
                case 0:
                    key = VK_LBUTTON;
                    break;
                case 1:
                    key = VK_RBUTTON;
                    break;
                case 2:
                    key = VK_MBUTTON;
                    break;
                case 3:
                    key = VK_XBUTTON1;
                    break;
                case 4:
                    key = VK_XBUTTON2;
                    break;
                }
                value_changed = true;
                ImGui::ClearActiveID();
            }
        }
        if (!value_changed) {
            for (auto i = VK_BACK; i <= VK_RMENU; i++) {
                if (io.KeysDown[i]) {
                    key = i;
                    value_changed = true;
                    ImGui::ClearActiveID();
                }
            }
        }

        if (IsKeyPressedMap(ImGuiKey_Escape)) {
            *k = 0;
            ImGui::ClearActiveID();
        }
        else {
            *k = key;
        }
    }

    // Render
    // Select which buffer we are going to display. When ImGuiInputTextFlags_NoLiveEdit is Set 'buf' might still be the old value. We Set buf to NULL to prevent accidental usage from now on.

    char buf_display[64] = "None";


    if (*k != 0 && g.ActiveId != id) {
        color_outline = IM_COL32(255, 0, 0, 255);
        strcpy_s(buf_display, KeyNames[*k]);
    }
    else if (g.ActiveId == id) {
        strcpy_s(buf_display, "press a key");
    }

    ImGui::RenderFrame(frame_bb.Min, frame_bb.Max, color_bg, true, 4.f);
    window->DrawList->AddRect(frame_bb.Min, frame_bb.Max, GetColorU32(ImVec4(1.f, 1.f, 1.f, 100 / 255.f)), 4.f);
    window->DrawList->AddRect(frame_bb.Min, frame_bb.Max, color_outline, 4.f);

    const ImRect clip_rect(frame_bb.Min.x, frame_bb.Min.y, frame_bb.Min.x + size.x, frame_bb.Min.y + size.y); // Not using frame_bb.Max because we have adjusted size
    ImVec2 render_pos = frame_bb.Min + style.FramePadding;

    ImGui::RenderTextClipped(frame_bb.Min + style.FramePadding, frame_bb.Max - style.FramePadding, buf_display, NULL, NULL, style.ButtonTextAlign, &clip_rect);
    if (label_size.x > 0)
        ImGui::RenderText(ImVec2(total_bb.Min.x, frame_bb.Min.y + style.FramePadding.y + 1), label);

    return value_changed;
}