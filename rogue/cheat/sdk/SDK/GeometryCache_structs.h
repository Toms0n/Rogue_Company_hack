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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCache.TrackRenderData
// 0x0070
struct FTrackRenderData
{
	unsigned char                                      UnknownData_2G4C[0x70];                                    // 0x0000(0x0070) MISSED OFFSET (PADDING)

};

// ScriptStruct GeometryCache.GeometryCacheMeshData
// 0x00A8
struct FGeometryCacheMeshData
{
	unsigned char                                      UnknownData_B9HV[0xA8];                                    // 0x0000(0x00A8) MISSED OFFSET (PADDING)

};

// ScriptStruct GeometryCache.GeometryCacheVertexInfo
// 0x0008
struct FGeometryCacheVertexInfo
{
	unsigned char                                      UnknownData_A7TM[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// 0x000C
struct FGeometryCacheMeshBatchInfo
{
	unsigned char                                      UnknownData_PDAT[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
