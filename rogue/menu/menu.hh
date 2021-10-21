#pragma once
#include "../utils/xor.hh"

static char* pages[4]
{
	xor_a("Aim"),
	xor_a("Visual"),
	xor_a("Misc"),
	xor_a("Loot")
};

enum tab_name : int {
	tab_aim,
	tab_visual,
	tab_misc,
	tab_loot
};

class menu_stuff
{
public:
	inline static float		window_size = 0.f;
	inline static float		f = 0.0f;
	inline static int		counter = 0;
	inline static float		move = 0.f;
	inline static float		move_size = 0.f;
	inline static float		tab = 0.f;
};

inline auto m_menu = new menu_stuff;

class menu
{
public:
	inline static bool is_opened = true;
	inline static bool name = false;
	inline static bool distance = false;
	inline static bool bone = false;
	inline static bool aimbot = false;
	//Color
	inline static float name_color[4] = { 255, 255, 255, 255 };
	inline static float distance_color[4] = { 255, 255, 255, 255 };
	inline static float bone_color[4] = { 255, 255, 255, 255 };

	//aim stuff
	inline static int aim_key = 0;
	inline static float aim_fov = 2.f;
	inline static float aim_smooth = 6.f;
	inline static int current_bone_index = 1;
	inline static const char* bones[2] = { "Head", "Body" };
public:
	menu();
	static void render();
};

inline auto render_menu = new menu;