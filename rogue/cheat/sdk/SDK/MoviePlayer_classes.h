﻿#pragma once

// Name: roguecompany, Version: 425


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MoviePlayer.MoviePlayerSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMoviePlayerSettings : public UObject
{
public:
	bool                                               bWaitForMoviesToComplete;                                  // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMoviesAreSkippable;                                       // 0x0029(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4PVS[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             StartupMovies;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2558);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif