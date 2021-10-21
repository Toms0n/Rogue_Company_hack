#pragma once
#include "../utils/xor.hh"
#include "../gui/imgui.h"

class font_init
{
public:
	ImFont* basic_font;
	ImFont* logo_font;
public:
	void basic() { ImGuiIO& io = ImGui::GetIO(); basic_font = io.Fonts->AddFontFromFileTTF(xor_a("C:\\WINDOWS\\FONTS\\segoeui.ttf"), 16, nullptr, io.Fonts->GetGlyphRangesCyrillic()); }
	void logo() { ImGuiIO& io = ImGui::GetIO(); logo_font = io.Fonts->AddFontFromFileTTF(xor_a("C:\\WINDOWS\\FONTS\\segoeui.ttf"), 24, nullptr, io.Fonts->GetGlyphRangesCyrillic()); }
};

inline auto custom_font = new font_init;