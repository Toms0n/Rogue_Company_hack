#pragma once
#include <Windows.h>
#include "../sdk/SDK.h"

class addr
{
public:
	inline static uintptr_t				base_addr;
	inline static CG::UWorld**			u_world;
	inline static CG::ULevel*			m_level;
	inline static CG::ULocalPlayer*		m_player;
	inline static uintptr_t				bone;
public:
	static void setup_sdk();
};