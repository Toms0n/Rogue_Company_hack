#pragma once
#define IMGUI_DEFINE_MATH_OPERATORS
#define use(x) using namespace x;
#include "../gui/imgui.h"
#include "../gui/imgui_internal.h"
#include <Windows.h>

#include <map>

struct c_custom {
    auto tab(const char* label, bool selected, ImVec2 size_arg) -> bool;

    auto child(const char* label, ImVec2 size_arg) -> void;
    auto end_child() -> void;

    auto keybind(const char* label, int* k, const ImVec2& size_arg) -> bool;

    auto color(int r, int g, int b, int a = 255) { return ImVec4(r / 255.f, g / 255.f, b / 255.f, a / 255.f); };
};

inline auto custom = new c_custom;