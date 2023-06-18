// List of D2Common.dll exports (base address 6fd40000)
// For each of the other .DLLs, here are the number of imports of the current module exports:
// (Note that this is not the number of uses/references, just the number of times the current module is listed in the import table)
// |- D2Client.dll     : 622
// |- D2Game.dll       : 712
// |- D2Server.dll     :   5


/// @ordinal 10000
/// @name DRLG_GetLevelTypeFromLevelId
/// @address 6fd75260
/// Imported by ['D2Client.dll']
int __stdcall DRLG_GetLevelTypeFromLevelId(int nLevelId);

/// @ordinal 10001
/// @name DRLG_GetActNoFromLevelId
/// @address 6fd75300
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall DRLG_GetActNoFromLevelId(int nLevelId);

/// @ordinal 10002
/// @name DRLG_GetLOSDrawFromLevelId
/// @address 6fd75350
/// Imported by ['D2Client.dll']
int __stdcall DRLG_GetLOSDrawFromLevelId(int nLevelId);

/// @ordinal 10003
/// @name DRLGACTIVATE_Update
/// @address 6fd73f20
/// Imported by ['D2Client.dll']
void __stdcall DRLGACTIVATE_Update(D2DrlgStrc *pDrlg);

/// @ordinal 10004
/// @name DRLG_GetSaveMonstersFromLevelId
/// @address 6fd75330
/// Imported by ['D2Game.dll']
int __stdcall DRLG_GetSaveMonstersFromLevelId(int nLevelId);

/// @ordinal 10005
/// @name DRLG_GetLevel
/// @address 6fd749a0
/// Not imported by any .dll
D2DrlgLevelStrc *__stdcall DRLG_GetLevel(D2DrlgStrc *pDrlg, int nLevelId);

/// @ordinal 10006
/// @name DRLG_InitLevel
/// @address 6fd74c10
/// Not imported by any .dll
void __stdcall DRLG_InitLevel(D2DrlgLevelStrc *pLevel);

/// @ordinal 10007
/// @name DUNGEON_GetRoomExFromRoom
/// @address 6fd8d0c0
/// Imported by ['D2Client.dll']
D2RoomExStrc *__fastcall DUNGEON_GetRoomExFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10008
/// @name DRLGPRESET_GetLevelPrestIdFromRoomEx
/// @address 6fd881a0
/// Not imported by any .dll
int __thiscall DRLGPRESET_GetLevelPrestIdFromRoomEx(D2DrlgStrc *this);

/// @ordinal 10009
/// @name DRLGPRESET_GetPickedLevelPrestFilePathFromRoomEx
/// @address 6fd881b0
/// Not imported by any .dll
char *__fastcall DRLGPRESET_GetPickedLevelPrestFilePathFromRoomEx(D2RoomExStrc *pRoomEx);

/// @ordinal 10010
/// @name DATATBLS_GetLevelDefRecord
/// @address 6fd60d90
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2LevelDefBin *__fastcall DATATBLS_GetLevelDefRecord(int nLevelId);

/// @ordinal 10011
/// @name DATATBLS_GetAutomapCellId
/// @address 6fd62d30
/// Imported by ['D2Client.dll']
int __fastcall DATATBLS_GetAutomapCellId(int dwAutomapLevelType, int dwAutomapTileType, int nStyle, signed int nSequence);

/// @ordinal 10012
/// @name DRLG_FreeDrlg
/// @address 6fd743b0
/// Not imported by any .dll
void __fastcall DRLG_FreeDrlg(D2DrlgStrc *pDrlg);

/// @ordinal 10013
/// @name DRLG_AllocLevel
/// @address 6fd748d0
/// Not imported by any .dll
D2DrlgLevelStrc *__fastcall DRLG_AllocLevel(D2DrlgStrc *pDrlg, int nLevelId);

/// @ordinal 10014
/// @name DRLG_AllocDrlg
/// @address 6fd74120
/// Not imported by any .dll
/// @guessedtype int __stdcall(int a3, int nInitSeed, int nLevelId, int nFlags, int pGame, char nDifficulty, int a9, int a10)

/// @ordinal 10015
/// @name DRLGACTIVATE_GetRoomsAllocationStats
/// @address 6fd73ef0
/// Not imported by any .dll
void __fastcall DRLGACTIVATE_GetRoomsAllocationStats(int *a1, int *a2, int *a3, int *a4);

/// @ordinal 10016
/// @name D2Common_10018_Return0
/// @address 6fd412b0
/// Not imported by any .dll
int __stdcall D2Common_10018_Return0();

/// @ordinal 10017
/// @name DRLGROOMTILE_GetNumberOfShadowsFromRoom
/// @address 6fd8a1b0
/// Not imported by any .dll
int __fastcall DRLGROOMTILE_GetNumberOfShadowsFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10018
/// @name Return0
/// @address 6fd412b0
/// Not imported by any .dll
int __stdcall Return0();

/// @ordinal 10019
/// @name D2Common_11296_Return
/// @address 6fda5250
/// Not imported by any .dll
void __stdcall D2Common_11296_Return(D2UnitStrc *pUnit);

/// @ordinal 10020
/// @name DRLGPRESET_CreateCopyOfMapAI
/// @address 6fd86480
/// Imported by ['D2Game.dll']
D2MapAIStrc *__fastcall DRLGPRESET_CreateCopyOfMapAI(void *pMemPool, D2MapAIStrc *pMapAI);

/// @ordinal 10021
/// @name DRLGPRESET_ChangeMapAI
/// @address 6fd864f0
/// Imported by ['D2Game.dll']
int __fastcall DRLGPRESET_ChangeMapAI(int *a1, int *a2);

/// @ordinal 10022
/// @name DRLGPRESET_FreeMapAI
/// @address 6fd86500
/// Imported by ['D2Game.dll']
/// @guessedtype int __fastcall(void *pMemPool, void *pFree)

/// @ordinal 10023
/// @name DATATBLS_GetLevelTypesTxtRecord
/// @address 6fd61460
/// Not imported by any .dll
D2LvlTypesTxt *__stdcall DATATBLS_GetLevelTypesTxtRecord(int nLevelType);

/// @ordinal 10024
/// @name DATATBLS_GetLvlPrestTxtRecord
/// @address 6fd61b50
/// Not imported by any .dll
D2LvlPrestTxt *__stdcall DATATBLS_GetLvlPrestTxtRecord(int nLvlPrestId);

/// @ordinal 10025
/// @name DUNGEON_GetWarpCoordinatesFromRoom
/// @address 6fd8d1e0
/// Imported by ['D2Game.dll']
int *__stdcall DUNGEON_GetWarpCoordinatesFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10026
/// @name DUNGEON_ToggleRoomTilesEnableFlag
/// @address 6fd8b9e0
/// Not imported by any .dll
void __stdcall DUNGEON_ToggleRoomTilesEnableFlag(D2RoomStrc *pRoom, BOOL bEnabled);

/// @ordinal 10027
/// @name DUNGEON_GetWarpTileFromRoomAndSourceLevelId
/// @address 6fd8ba20
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall DUNGEON_GetWarpTileFromRoomAndSourceLevelId(D2RoomStrc *pRoom, int nSourceLevel, D2LvlWarpTxt **ppLvlWarpTxtRecord);

/// @ordinal 10028
/// @name DUNGEON_GetLvlWarpTxtRecordFromRoomAndUnit
/// @address 6fd8bab0
/// Imported by ['D2Client.dll']
D2LvlWarpTxt *__stdcall DUNGEON_GetLvlWarpTxtRecordFromRoomAndUnit(D2RoomStrc *pRoom, D2UnitStrc *pUnit);

/// @ordinal 10029
/// @name DUNGEON_GetFirstUnitInRoom
/// @address 6fd8c4a0
/// Imported by ['D2Client.dll']
D2UnitStrc *__stdcall DUNGEON_GetFirstUnitInRoom(D2RoomStrc *pRoom);

/// @ordinal 10030
/// @name DUNGEON_GetFloorTilesFromRoom
/// @address 6fd8baf0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall DUNGEON_GetFloorTilesFromRoom(D2RoomStrc *pRoom, int *pFloorCount);

/// @ordinal 10031
/// @name DUNGEON_GetWallTilesFromRoom
/// @address 6fd8bb20
/// Imported by ['D2Client.dll']
void *__stdcall DUNGEON_GetWallTilesFromRoom(D2RoomStrc *pRoom, int *pWallCount);

/// @ordinal 10032
/// @name DUNGEON_GetRoofTilesFromRoom
/// @address 6fd8bb60
/// Imported by ['D2Client.dll']
void *__stdcall DUNGEON_GetRoofTilesFromRoom(D2RoomStrc *pRoom, int *pRoofCount);

/// @ordinal 10033
/// @name DUNGEON_GetTileDataFromAct
/// @address 6fd8bba0
/// Imported by ['D2Client.dll']
D2DrlgTileDataStrc *__stdcall DUNGEON_GetTileDataFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10034
/// @name DUNGEON_GetRoomCoordinates
/// @address 6fd8bbb0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall DUNGEON_GetRoomCoordinates(D2RoomStrc *pRoom, D2RoomCoordStrc *pCoord);

/// @ordinal 10035
/// @name DUNGEON_GetAdjacentRoomsListFromRoom
/// @address 6fd8bc10
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall DUNGEON_GetAdjacentRoomsListFromRoom(D2RoomStrc *pRoom, D2RoomStrc ***pppRoom, DWORD *pNumRooms);

/// @ordinal 10036
/// @name DUNGEON_GetAlliedCountFromRoom
/// @address 6fd8c4f0
/// Not imported by any .dll
int __stdcall DUNGEON_GetAlliedCountFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10037
/// @name DUNGEON_GetTownLevelIdFromAct
/// @address 6fd8d4f0
/// Imported by ['D2Game.dll']
int __stdcall DUNGEON_GetTownLevelIdFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10038
/// @name DUNGEON_AllocAct
/// @address 6fd8b8a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(char nActNo, int nInitSeed, int bClient, int pGame, int nDifficulty, int pMemPool, int nTownLevelId, int a9, int a10)

/// @ordinal 10039
/// @name DUNGEON_FreeAct
/// @address 6fd8b950
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall DUNGEON_FreeAct(D2DrlgActStrc *pAct);

/// @ordinal 10040
/// @name DUNGEON_DoRoomsTouchOrOverlap
/// @address 6fd8bd90
/// Not imported by any .dll
bool __stdcall DUNGEON_DoRoomsTouchOrOverlap(D2RoomStrc *ptFirst, D2RoomStrc *ptSecond);

/// @ordinal 10041
/// @name DUNGEON_FindRoomBySubtileCoordinates
/// @address 6fd8c240
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2RoomStrc *__stdcall DUNGEON_FindRoomBySubtileCoordinates(D2DrlgActStrc *pAct, int nX, int nY);

/// @ordinal 10042
/// @name sgptDataTables
/// @address 6fdd6a20
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int *

/// @ordinal 10043
/// @name DUNGEON_AreTileCoordinatesInsideRoom
/// @address 6fd8be30
/// Not imported by any .dll
bool __stdcall DUNGEON_AreTileCoordinatesInsideRoom(D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10044
/// @name DUNGEON_CheckLOSDraw
/// @address 6fd8d040
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall DUNGEON_CheckLOSDraw(D2RoomStrc *pRoom);

/// @ordinal 10045
/// @name DUNGEON_FindActSpawnLocationEx
/// @address 6fd8c340
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall DUNGEON_FindActSpawnLocationEx(D2DrlgActStrc *pAct, int nLevelId, int a3, int *a4, int a5, int nUnitSize);

/// @ordinal 10046
/// @name DUNGEON_FindActSpawnLocation
/// @address 6fd8c2f0
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall DUNGEON_FindActSpawnLocation(D2DrlgActStrc *pAct, int nLevelId, int a3, int *a4, int *a5);

/// @ordinal 10047
/// @name DUNGEON_GetHoradricStaffTombLevelId
/// @address 6fd8d520
/// Imported by ['D2Game.dll']
int __stdcall DUNGEON_GetHoradricStaffTombLevelId(D2DrlgActStrc *pAct);

/// @ordinal 10048
/// @name DUNGEON_CheckRoomsOverlapping_BROKEN
/// @address 6fd8be90
/// Not imported by any .dll
int __stdcall DUNGEON_CheckRoomsOverlapping_BROKEN(D2RoomStrc *pRoom, int nUnused);

/// @ordinal 10049
/// @name DUNGEON_CallRoomCallback
/// @address 6fd8bff0
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_CallRoomCallback(D2RoomStrc *pRoom, FARPROC pfnRoomCallback, void *a3);

/// @ordinal 10050
/// @name DUNGEON_GetAdjacentRoomByTileCoordinates
/// @address 6fd8bf50
/// Not imported by any .dll
D2RoomStrc *__stdcall DUNGEON_GetAdjacentRoomByTileCoordinates(D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10051
/// @name DUNGEON_FindRoomByTileCoordinates
/// @address 6fd8bf00
/// Not imported by any .dll
int __stdcall DUNGEON_FindRoomByTileCoordinates(int a1, int nX, int nY);

/// @ordinal 10052
/// @name 
/// @address 6fd8c080
/// Imported by ['D2Client.dll']
void __stdcall(D2RoomStrc *pRoom, RECT *pRect);

/// @ordinal 10053
/// @name DUNGEON_GetSubtileRect
/// @address 6fd8c170
/// Not imported by any .dll
void __stdcall DUNGEON_GetSubtileRect(D2RoomStrc *pRoom, RECT *pRect);

/// @ordinal 10054
/// @name DUNGEON_GetRGB_IntensityFromRoom
/// @address 6fd8c210
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_GetRGB_IntensityFromRoom(D2RoomStrc *pRoom, BYTE *pIntensity, BYTE *pRed, BYTE *pGreen, BYTE *pBlue);

/// @ordinal 10055
/// @name DUNGEON_GetPresetUnitsFromRoom
/// @address 6fd8c5c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2PresetUnitStrc *__stdcall DUNGEON_GetPresetUnitsFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10056
/// @name DUNGEON_GetRoomFromAct
/// @address 6fd8c770
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2RoomStrc *__stdcall DUNGEON_GetRoomFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10057
/// @name DUNGEON_GetLevelIdFromRoom
/// @address 6fd8c7a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall DUNGEON_GetLevelIdFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10058
/// @name DUNGEON_GetWarpDestinationLevel
/// @address 6fd8c7c0
/// Imported by ['D2Client.dll']
int __stdcall DUNGEON_GetWarpDestinationLevel(D2RoomStrc *pRoom, int nClassId);

/// @ordinal 10059
/// @name DUNGEON_GetLevelIdFromPopulatedRoom
/// @address 6fd8c7e0
/// Imported by ['D2Game.dll']
int __stdcall DUNGEON_GetLevelIdFromPopulatedRoom(D2RoomStrc *pRoom);

/// @ordinal 10060
/// @name DUNGEON_HasWaypoint
/// @address 6fd8c800
/// Imported by ['D2Game.dll']
BOOL __stdcall DUNGEON_HasWaypoint(D2RoomStrc *pRoom);

/// @ordinal 10061
/// @name DUNGEON_GetPickedLevelPrestFilePathFromRoom
/// @address 6fd8c840
/// Not imported by any .dll
void *__stdcall DUNGEON_GetPickedLevelPrestFilePathFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10062
/// @name DUNGEON_ChangeClientRoom
/// @address 6fd8c700
/// Imported by ['D2Game.dll']
void __stdcall DUNGEON_ChangeClientRoom(D2RoomStrc *pRoom1, D2RoomStrc *pRoom2);

/// @ordinal 10063
/// @name DUNGEON_SetClientIsInSight
/// @address 6fd8c660
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_SetClientIsInSight(D2DrlgActStrc *pAct, int nLevelId, int nX, int nY, D2RoomStrc *pRoom);

/// @ordinal 10064
/// @name DUNGEON_UnsetClientIsInSight
/// @address 6fd8c6b0
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_UnsetClientIsInSight(D2DrlgActStrc *pAct, int nLevelId, int nX, int nY, D2RoomStrc *pRoom);

/// @ordinal 10065
/// @name DUNGEON_StreamRoomAtCoords
/// @address 6fd8c730
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall DUNGEON_StreamRoomAtCoords(D2DrlgActStrc *pAct, int nX, int nY);

/// @ordinal 10066
/// @name DUNGEON_AllocDrlgDelete
/// @address 6fd8c860
/// Imported by ['D2Game.dll']
void __stdcall DUNGEON_AllocDrlgDelete(D2RoomStrc *pRoom, int nUnitType, int nUnitId);

/// @ordinal 10067
/// @name DUNGEON_FreeDrlgDelete
/// @address 6fd8c8b0
/// Imported by ['D2Game.dll']
void __stdcall DUNGEON_FreeDrlgDelete(D2RoomStrc *pRoom);

/// @ordinal 10068
/// @name DUNGEON_GetDrlgDeleteFromRoom
/// @address 6fd8c910
/// Imported by ['D2Game.dll']
D2DrlgDeleteStrc *__stdcall DUNGEON_GetDrlgDeleteFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10069
/// @name DUNGEON_GetARoomInClientSight
/// @address 6fd8c940
/// Not imported by any .dll
int __stdcall DUNGEON_GetARoomInClientSight(D2DrlgActStrc *pAct);

/// @ordinal 10070
/// @name DUNGEON_GetARoomInSightButWithoutClient
/// @address 6fd8c980
/// Not imported by any .dll
int __stdcall DUNGEON_GetARoomInSightButWithoutClient(D2DrlgActStrc *pAct, D2RoomStrc *pRoom);

/// @ordinal 10071
/// @name DUNGEON_TestRoomCanUnTile
/// @address 6fd8c9e0
/// Imported by ['D2Game.dll']
signed int __stdcall DUNGEON_TestRoomCanUnTile(D2DrlgActStrc *pAct, D2RoomStrc *pRoom);

/// @ordinal 10072
/// @name DUNGEON_GetRoomStatusFlags
/// @address 6fd8ca60
/// Not imported by any .dll
bool __stdcall DUNGEON_GetRoomStatusFlags(D2RoomStrc *pRoom);

/// @ordinal 10073
/// @name 
/// @address 6fd8ca80
/// Imported by ['D2Game.dll']
signed int __stdcall(D2RoomStrc *pRoom);

/// @ordinal 10074
/// @name 
/// @address 6fd8cae0
/// Imported by ['D2Game.dll']
DWORD __stdcall(D2RoomStrc *pRoom);

/// @ordinal 10075
/// @name 
/// @address 6fd8cb10
/// Imported by ['D2Game.dll']
void __stdcall(D2RoomStrc *pRoom, BOOL bSet);

/// @ordinal 10076
/// @name DUNGEON_RemoveRoomFromAct
/// @address 6fd8cf10
/// Imported by ['D2Game.dll']
int __stdcall DUNGEON_RemoveRoomFromAct(D2DrlgActStrc *pAct, D2RoomStrc *pRoom);

/// @ordinal 10077
/// @name 
/// @address 6fd8d000
/// Imported by ['D2Game.dll']
void __stdcall(D2RoomStrc *pRoom1, D2RoomStrc *pRoom2);

/// @ordinal 10078
/// @name DUNGEON_UpdateAndFreeInactiveRooms
/// @address 6fd8d030
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall DUNGEON_UpdateAndFreeInactiveRooms(D2DrlgActStrc *pAct);

/// @ordinal 10079
/// @name DUNGEON_AddClientToRoom
/// @address 6fd8cb60
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pRoom, int pClient)

/// @ordinal 10080
/// @name DUNGEON_RemoveClientFromRoom
/// @address 6fd8cd10
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pRoom, int pClient)

/// @ordinal 10081
/// @name GetTileCountFromRoom
/// @address 6fd8cdf0
/// Imported by ['D2Game.dll']
int __stdcall GetTileCountFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10082
/// @name DUNGEON_IsRoomInTown
/// @address 6fd8d0e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall DUNGEON_IsRoomInTown(D2RoomStrc *pRoom);

/// @ordinal 10083
/// @name Return0
/// @address 6fd8d100
/// Imported by ['D2Client.dll']
int __stdcall Return0(D2RoomStrc *pRoom);

/// @ordinal 10084
/// @name 
/// @address 6fd8d130
/// Not imported by any .dll
int __stdcall(D2RoomStrc *pRoom);

/// @ordinal 10085
/// @name DUNGEON_GetTownLevelIdFromActNo
/// @address 6fd8d140
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall DUNGEON_GetTownLevelIdFromActNo(int nAct);

/// @ordinal 10086
/// @name DUNGEON_IsTownLevelId
/// @address 6fd8d0d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall DUNGEON_IsTownLevelId(int nLevelId);

/// @ordinal 10087
/// @name 
/// @address 6fd8d180
/// Imported by ['D2Game.dll']
int __stdcall(D2RoomStrc *pRoom);

/// @ordinal 10088
/// @name DUNGEON_GetDrlgFromAct
/// @address 6fd8d090
/// Imported by ['D2Client.dll']
D2DrlgStrc *__stdcall DUNGEON_GetDrlgFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10089
/// @name D2Common_10472_STATLIST_GetOwnerGUID
/// @address 6fd912d0
/// Imported by ['D2Client.dll']
DWORD __stdcall D2Common_10472_STATLIST_GetOwnerGUID(D2StatListStrc *pStatList);

/// @ordinal 10090
/// @name DUNGEON_GetNumberOfPopulatedRoomsInLevel
/// @address 6fd8d1c0
/// Imported by ['D2Game.dll']
int __stdcall DUNGEON_GetNumberOfPopulatedRoomsInLevel(D2DrlgActStrc *pAct, int nLevelId);

/// @ordinal 10091
/// @name DUNGEON_UpdateWarpRoomSelect
/// @address 6fd8d220
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_UpdateWarpRoomSelect(D2RoomStrc *pRoom, int nLevelId);

/// @ordinal 10092
/// @name DUNGEON_UpdateWarpRoomDeselect
/// @address 6fd8d260
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_UpdateWarpRoomDeselect(D2RoomStrc *pRoom, int nLevelId);

/// @ordinal 10093
/// @name DUNGEON_UpdatePops
/// @address 6fd8d2a0
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_UpdatePops(D2RoomStrc *pRoom, int nX, int nY, int a4);

/// @ordinal 10094
/// @name DUNGEON_GetTombStoneTileCoords
/// @address 6fd8d2e0
/// Not imported by any .dll
int *__stdcall DUNGEON_GetTombStoneTileCoords(D2RoomStrc *pRoom, int *a2, int *a3);

/// @ordinal 10095
/// @name 
/// @address 6fd8d300
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall(D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10096
/// @name 
/// @address 6fd8d3a0
/// Imported by ['D2Game.dll']
int __stdcall(D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10097
/// @name DUNGEON_GetRoomCoordList
/// @address 6fd8d3c0
/// Imported by ['D2Game.dll']
int __stdcall DUNGEON_GetRoomCoordList(D2RoomStrc *pRoom);

/// @ordinal 10098
/// @name DUNGEON_GetPortalLevelArrayFromPortalFlags
/// @address 6fd8d3d0
/// Not imported by any .dll
void *__stdcall DUNGEON_GetPortalLevelArrayFromPortalFlags(void *pMemPool, int a2, void *a3, int *a4);

/// @ordinal 10099
/// @name DUNGEON_GetPortalFlagFromLevelId
/// @address 6fd8d4b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall DUNGEON_GetPortalFlagFromLevelId(int nPortalId);

/// @ordinal 10100
/// @name DUNGEON_IncreaseAlliedCountOfRoom
/// @address 6fd8c4e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall DUNGEON_IncreaseAlliedCountOfRoom(D2RoomStrc *pRoom);

/// @ordinal 10101
/// @name DUNGEON_DecreaseAlliedCountOfRoom
/// @address 6fd8c510
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall DUNGEON_DecreaseAlliedCountOfRoom(D2RoomStrc *pRoom);

/// @ordinal 10102
/// @name DUNGEON_ToggleHasPortalFlag
/// @address 6fd8d540
/// Imported by ['D2Game.dll']
void __stdcall DUNGEON_ToggleHasPortalFlag(D2RoomStrc *pRoom, int nFrame);

/// @ordinal 10103
/// @name DUNGEON_SetActCallbackFunc
/// @address 6fd8d5c0
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_SetActCallbackFunc(D2DrlgActStrc *pAct, void *pFunc);

/// @ordinal 10104
/// @name DUNGEON_AnimateTiles
/// @address 6fd8d560
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_AnimateTiles(D2RoomStrc *pRoom);

/// @ordinal 10105
/// @name DUNGEON_InitRoomTileAnimation
/// @address 6fd8d580
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_InitRoomTileAnimation(D2DrlgActStrc *pAct, D2RoomStrc *pRoom1, D2RoomStrc *pRoom2);

/// @ordinal 10106
/// @name DUNGEON_SaveKilledUnitGUID
/// @address 6fd8d600
/// Imported by ['D2Game.dll']
void __stdcall DUNGEON_SaveKilledUnitGUID(D2RoomStrc *pRoom, int nUnitGUID);

/// @ordinal 10107
/// @name DUNGEON_ClientToGameTileCoords
/// @address 6fd8d690
/// Not imported by any .dll
void __stdcall DUNGEON_ClientToGameTileCoords(int *pX, int *pY);

/// @ordinal 10108
/// @name DUNGEON_ClientToGameSubtileCoords
/// @address 6fd8d870
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_ClientToGameSubtileCoords(int *pX, int *pY);

/// @ordinal 10109
/// @name DUNGEON_ClientToGameCoords
/// @address 6fd8d8a0
/// Not imported by any .dll
void __stdcall DUNGEON_ClientToGameCoords(int *pX, int *pY);

/// @ordinal 10110
/// @name DUNGEON_GameTileToClientCoords
/// @address 6fd8d6e0
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_GameTileToClientCoords(int *pX, int *pY);

/// @ordinal 10111
/// @name DUNGEON_GameSubtileToClientCoords
/// @address 6fd8d630
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_GameSubtileToClientCoords(int *pX, int *pY);

/// @ordinal 10112
/// @name DUNGEON_GameToClientCoords
/// @address 6fd8d660
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_GameToClientCoords(int *pX, int *pY);

/// @ordinal 10113
/// @name DUNGEON_GameTileToSubtileCoords
/// @address 6fd8d8c0
/// Imported by ['D2Game.dll']
void __stdcall DUNGEON_GameTileToSubtileCoords(int *pX, int *pY);

/// @ordinal 10114
/// @name DUNGEON_ClientTileDrawPositionToGameCoords
/// @address 6fd8d710
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_ClientTileDrawPositionToGameCoords(int nX, int nY, int *pX, int *pY);

/// @ordinal 10115
/// @name DUNGEON_GameToClientTileDrawPositionCoords
/// @address 6fd8d790
/// Not imported by any .dll
void __stdcall DUNGEON_GameToClientTileDrawPositionCoords(int nX, int nY, int *pX, int *pY);

/// @ordinal 10116
/// @name DUNGEON_ClientSubileDrawPositionToGameCoords
/// @address 6fd8d7d0
/// Not imported by any .dll
void __stdcall DUNGEON_ClientSubileDrawPositionToGameCoords(int nX, int nY, int *pX, int *pY);

/// @ordinal 10117
/// @name DUNGEON_GameToClientSubtileDrawPositionCoords
/// @address 6fd8d830
/// Not imported by any .dll
void __stdcall DUNGEON_GameToClientSubtileDrawPositionCoords(int nX, int nY, int *pX, int *pY);

/// @ordinal 10118
/// @name COLLISION_CheckMask
/// @address 6fd41650
/// Imported by ['D2Client.dll', 'D2Game.dll']
uint16_t __stdcall COLLISION_CheckMask(D2RoomStrc *pRoom, int nX, int nY, uint16_t nMask);

/// @ordinal 10119
/// @name COLLISION_CheckMaskWithSize
/// @address 6fd43080
/// Imported by ['D2Client.dll', 'D2Game.dll']
__int16 __stdcall COLLISION_CheckMaskWithSize(D2RoomStrc *pRoom, int nX, int nY, int nUnitSize, int nCollisionType);

/// @ordinal 10120
/// @name COLLISION_CheckMaskWithSizeXY
/// @address 6fd418c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall COLLISION_CheckMaskWithSizeXY(D2RoomStrc *pRoom, int nX, int nY, signed int nSizeX, signed int nSizeY, uint16_t nFlag);

/// @ordinal 10121
/// @name COLLISION_CheckMaskWithPattern
/// @address 6fd41de0
/// Imported by ['D2Client.dll', 'D2Game.dll']
__int16 __stdcall COLLISION_CheckMaskWithPattern(D2RoomStrc *pRoom, int nX, int nY, int nCollisionPattern, int nCollisionType);

/// @ordinal 10122
/// @name COLLISION_CheckAnyCollisionWithPattern
/// @address 6fd42740
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall COLLISION_CheckAnyCollisionWithPattern(D2RoomStrc *pRoom, int nX, int nY, int nCollisionPattern, uint16_t nMask);

/// @ordinal 10123
/// @name COLLISION_ResetMask
/// @address 6fd417f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall COLLISION_ResetMask(D2RoomStrc *pNumRooms, int nX, int nY, __int16 nCollisionType);

/// @ordinal 10124
/// @name COLLISION_ResetMaskWithSize
/// @address 6fd439d0
/// Imported by ['D2Game.dll']
void __stdcall COLLISION_ResetMaskWithSize(D2RoomStrc *pRoom, int nX, int nY, int nUnitSize, int nCollisionType);

/// @ordinal 10125
/// @name COLLISION_ResetMaskWithSizeXY
/// @address 6fd44140
/// Not imported by any .dll
void __stdcall COLLISION_ResetMaskWithSizeXY(D2RoomStrc *pRoom, int nX, int nY, unsigned int nSizeX, unsigned int nSizeY, uint16_t nMask);

/// @ordinal 10126
/// @name COLLISION_ResetMaskWithPattern
/// @address 6fd43e60
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall COLLISION_ResetMaskWithPattern(D2RoomStrc *pRoom, int nX, int nY, int nCollisionPattern, uint16_t nMask);

/// @ordinal 10127
/// @name COLLISION_SetMask
/// @address 6fd41720
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall COLLISION_SetMask(D2RoomStrc *pRoom, int nX, int nY, __int16 nCollisionType);

/// @ordinal 10128
/// @name COLLISION_SetMaskWithSize
/// @address 6fd432a0
/// Imported by ['D2Game.dll']
void __stdcall COLLISION_SetMaskWithSize(D2RoomStrc *pRoom, int nX, int nY, int nUnitSize, int nCollisionType);

/// @ordinal 10129
/// @name COLLISION_SetMaskWithSizeXY
/// @address 6fd443e0
/// Not imported by any .dll
void __stdcall COLLISION_SetMaskWithSizeXY(D2RoomStrc *pRoom, int nX, int nY, unsigned int nSizeX, unsigned int nSizeY, int nCollisionType);

/// @ordinal 10130
/// @name COLLISION_SetMaskWithPattern
/// @address 6fd436f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall COLLISION_SetMaskWithPattern(D2RoomStrc *pRoom, int nX, int nY, int nCollisionPattern, int nCollisionType);

/// @ordinal 10131
/// @name COLLISION_TryMoveUnitCollisionMask
/// @address 6fd44660
/// Not imported by any .dll
uint16_t __fastcall COLLISION_TryMoveUnitCollisionMask(D2RoomStrc *pRoom, int nX1, int nY1, int nX2, int nY2, int nUnitSize, uint16_t nResetCollisionMask, uint16_t nMask);

/// @ordinal 10132
/// @name COLLISION_TryTeleportUnitCollisionMask
/// @address 6fd44950
/// Not imported by any .dll
__int16 __fastcall COLLISION_TryTeleportUnitCollisionMask(D2RoomStrc *pRoom, int nX1, int nY1, int nX2, int nY2, int nCollisionPattern, int nCollisionType, int nMask);

/// @ordinal 10133
/// @name COLLISION_SetUnitCollisionMask
/// @address 6fd451d0
/// Not imported by any .dll
void __fastcall COLLISION_SetUnitCollisionMask(D2RoomStrc *pRoom1, int nX1, int nY1, D2RoomStrc *pRoom2, int nX2, int nY2, int nCollisionPattern, int nCollisionType);

/// @ordinal 10134
/// @name COLLISION_GetFreeCoordinates
/// @address 6fd46280
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2RoomStrc *__stdcall COLLISION_GetFreeCoordinates(D2RoomStrc *pRoom, D2CoordStrc *pCoord, int nUnitSize, int a4, int a5);

/// @ordinal 10135
/// @name COLLISION_GetFreeCoordinatesWithMaxDistance
/// @address 6fd459d0
/// Imported by ['D2Client.dll']
D2RoomStrc *__stdcall COLLISION_GetFreeCoordinatesWithMaxDistance(D2RoomStrc *pRoom, D2CoordStrc *pCoord, int a3, int a4, int a5, int a6);

/// @ordinal 10136
/// @name 
/// @address 6fd46310
/// Imported by ['D2Game.dll']
void __fastcall(D2RoomStrc *pRoom, int edx0, int a3, int nCollisionType, D2RoomStrc **a5);

/// @ordinal 10137
/// @name COLLISION_GetFreeCoordinatesEx
/// @address 6fd462b0
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall COLLISION_GetFreeCoordinatesEx(D2RoomStrc *pRoom, D2CoordStrc *pCoord, int nUnitSize, int a4, int a5);

/// @ordinal 10138
/// @name COLLISION_GetFreeCoordinatesWithField
/// @address 6fd462e0
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall COLLISION_GetFreeCoordinatesWithField(D2RoomStrc *pRoom, D2CoordStrc *pCoord1, D2CoordStrc *pCoord2, int nUnitSize, int a5, int a6, BOOL a7);

/// @ordinal 10139
/// @name D2Common_10916_SEED_Return
/// @address 6fda5260
/// Not imported by any .dll
void __stdcall D2Common_10916_SEED_Return();

/// @ordinal 10140
/// @name D2Common_10916_SEED_Return
/// @address 6fda5260
/// Not imported by any .dll
void __stdcall D2Common_10916_SEED_Return();

/// @ordinal 10141
/// @name PATH_GetClientCoordsVelocity
/// @address 6fda82a0
/// Imported by ['D2Client.dll']
void __stdcall PATH_GetClientCoordsVelocity(D2UnitStrc *pUnit, int *pX, int *pY);

/// @ordinal 10142
/// @name 
/// @address 6fda8600
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall(D2DynamicPathStrc *pDynamicPath, D2UnitStrc *pUnit, int a3);

/// @ordinal 10143
/// @name PATH_SetUnitDeadCollision
/// @address 6fda9870
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetUnitDeadCollision(D2UnitStrc *pUnit, int bForceUnitSize3x3);

/// @ordinal 10144
/// @name PATH_SetUnitAliveCollision
/// @address 6fda98f0
/// Imported by ['D2Client.dll']
void __stdcall PATH_SetUnitAliveCollision(D2UnitStrc *pUnit, int bDoNothing);

/// @ordinal 10145
/// @name PATH_SetUnusedFlag_0x00004
/// @address 6fda9f00
/// Not imported by any .dll
void __stdcall PATH_SetUnusedFlag_0x00004(D2DynamicPathStrc *pDynamicPath, BOOL bSet);

/// @ordinal 10146
/// @name PATH_SetVelocity
/// @address 6fda9a70
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetVelocity(D2DynamicPathStrc *pDynamicPath, int nVelocity, char *szFile, int nLine);

/// @ordinal 10147
/// @name PATH_GetVelocity
/// @address 6fda9ab0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PATH_GetVelocity(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10148
/// @name PATH_SetMaxVelocity
/// @address 6fda9ac0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetMaxVelocity(D2DynamicPathStrc *pDynamicPath, int a2);

/// @ordinal 10149
/// @name PATH_GetMaxVelocity
/// @address 6fda9ae0
/// Not imported by any .dll
int __stdcall PATH_GetMaxVelocity(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10150
/// @name PATH_SetAcceleration
/// @address 6fda9af0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetAcceleration(D2DynamicPathStrc *pDynamicPath, int a2);

/// @ordinal 10151
/// @name PATH_GetAcceleration
/// @address 6fda9b10
/// Not imported by any .dll
int __stdcall PATH_GetAcceleration(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10152
/// @name PATH_AllocDynamicPath
/// @address 6fda9480
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_AllocDynamicPath(void *pMemPool, D2RoomStrc *pRoom, int nX, int nY, D2UnitStrc *pUnit, DWORD a6);

/// @ordinal 10153
/// @name 
/// @address 6fda9b20
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10154
/// @name PATH_GetNumberOfPathPoints
/// @address 6fda9b80
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PATH_GetNumberOfPathPoints(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10155
/// @name 
/// @address 6fda9bc0
/// Not imported by any .dll
int __stdcall(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10156
/// @name PATH_FreeDynamicPath
/// @address 6fda9190
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_FreeDynamicPath(void *pMempool, D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10157
/// @name PATH_GetPathPoints
/// @address 6fda9bd0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PATH_GetPathPoints(D2DynamicPathStrc *pDynamicPath, D2PathPointStrc **ppPathPoints);

/// @ordinal 10158
/// @name PATH_GetDirection
/// @address 6fda9bf0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall PATH_GetDirection(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10159
/// @name PATH_GetNewDirection
/// @address 6fda9c10
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall PATH_GetNewDirection(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10160
/// @name PathUpdateDirection
/// @address 6fda9c20
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PathUpdateDirection(D2DynamicPathStrc *pPath, BYTE nDirection);

/// @ordinal 10161
/// @name PATH_SetDirection
/// @address 6fda9c90
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetDirection(D2DynamicPathStrc *pDynamicPath, BYTE nDirection);

/// @ordinal 10162
/// @name PATH_GetXPosition
/// @address 6fda9cb0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PATH_GetXPosition(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10163
/// @name PATH_GetYPosition
/// @address 6fda9cf0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PATH_GetYPosition(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10164
/// @name PATH_GetClientCoordX
/// @address 6fda9db0
/// Not imported by any .dll
int __stdcall PATH_GetClientCoordX(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10165
/// @name D2Common_10897_CHAT_GetUsedFromHoverMsg
/// @address 6fdc3ce0
/// Not imported by any .dll
DWORD __stdcall D2Common_10897_CHAT_GetUsedFromHoverMsg(D2DynamicPathStrc *pPath);

/// @ordinal 10166
/// @name D2Common_11265_STATLIST_GetSkillId
/// @address 6fdb9c10
/// Not imported by any .dll
D2RoomStrc *__stdcall D2Common_11265_STATLIST_GetSkillId(D2DynamicPathStrc *pPath);

/// @ordinal 10167
/// @name D2Common_11264_STATLIST_SetSkillId
/// @address 6fda9e60
/// Not imported by any .dll
void __stdcall D2Common_11264_STATLIST_SetSkillId(D2DynamicPathStrc *pDynamicPath, D2RoomStrc *pRoom);

/// @ordinal 10168
/// @name D2Common_11267_STATLIST_GetSkillLevel
/// @address 6fda9e70
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2RoomStrc *__stdcall D2Common_11267_STATLIST_GetSkillLevel(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10169
/// @name PATH_ClearNextRoom
/// @address 6fda9e80
/// Imported by ['D2Game.dll']
void __stdcall PATH_ClearNextRoom(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10170
/// @name PathSetTargetPos
/// @address 6fda9e90
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PathSetTargetPos(D2DynamicPathStrc *pDynamicPath, int nX, int nY);

/// @ordinal 10171
/// @name PATH_GetTargetTypeAndGUID
/// @address 6fda9f60
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_GetTargetTypeAndGUID(D2DynamicPathStrc *pDynamicPath, int *pTargetType, int *pTargetGUID);

/// @ordinal 10172
/// @name PATH_IsCurrentRoomInvalid
/// @address 6fda9ec0
/// Not imported by any .dll
BOOL __stdcall PATH_IsCurrentRoomInvalid(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10173
/// @name PATH_SetCurrentRoomInvalid
/// @address 6fda9ed0
/// Imported by ['D2Game.dll']
void __stdcall PATH_SetCurrentRoomInvalid(D2DynamicPathStrc *pDynamicPath, BOOL bSet);

/// @ordinal 10174
/// @name PATH_GetUnusedFlag_0x00004
/// @address 6fda9f30
/// Not imported by any .dll
BOOL __stdcall PATH_GetUnusedFlag_0x00004(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10175
/// @name PathGetFirstPointX
/// @address 6fda9de0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall PathGetFirstPointX(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10176
/// @name PathGetFirstPointY
/// @address 6fda9df0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PathGetFirstPointY(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10177
/// @name PATH_GetLastPointX
/// @address 6fda9e20
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall PATH_GetLastPointX(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10178
/// @name PATH_GetLastPointY
/// @address 6fda9e40
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall PATH_GetLastPointY(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10179
/// @name PATH_SetTargetUnit
/// @address 6fda9f40
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetTargetUnit(D2DynamicPathStrc *pDynamicPath, D2UnitStrc *pUnit);

/// @ordinal 10180
/// @name PATH_GetTargetUnit
/// @address 6fda9fa0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall PATH_GetTargetUnit(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10181
/// @name PATH_GetCollisionType
/// @address 6fda9fc0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PATH_GetCollisionType(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10182
/// @name PATH_SetCollisionType
/// @address 6fda9fe0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetCollisionType(D2DynamicPathStrc *pDynamicPath, int nCollisionType);

/// @ordinal 10183
/// @name 
/// @address 6fdaa0c0
/// Imported by ['D2Game.dll']
int __stdcall(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10184
/// @name 
/// @address 6fdaa0d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall(D2DynamicPathStrc *pDynamicPath, int a2);

/// @ordinal 10185
/// @name PATH_SetType
/// @address 6fdaa0e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetType(D2DynamicPathStrc *pDynamicPath, int nPathType);

/// @ordinal 10186
/// @name PATH_ResetToPreviousType
/// @address 6fdaa1e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_ResetToPreviousType(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10187
/// @name PATH_GetType
/// @address 6fdaa240
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PATH_GetType(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10188
/// @name PATH_SetNewDistance
/// @address 6fdaa280
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetNewDistance(D2DynamicPathStrc *pDynamicPath, BYTE nNewDistance);

/// @ordinal 10189
/// @name PATH_GetMaxDistance
/// @address 6fdaa2b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall PATH_GetMaxDistance(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10190
/// @name _10190_PATH_SetDistance
/// @address 6fdaa250
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall _10190_PATH_SetDistance(D2DynamicPathStrc *pDynamicPath, BYTE nDistance);

/// @ordinal 10191
/// @name _10191_PATH_GetDistance
/// @address 6fdaa270
/// Imported by ['D2Game.dll']
BYTE __stdcall _10191_PATH_GetDistance(D2DynamicPathStrc *pPath);

/// @ordinal 10192
/// @name PathSetIDAMax
/// @address 6fdaa310
/// Not imported by any .dll
void __stdcall PathSetIDAMax(D2DynamicPathStrc *pDynamicPath, int a2);

/// @ordinal 10193
/// @name PATH_AdjustDirection
/// @address 6fda9770
/// Imported by ['D2Client.dll']
void __stdcall PATH_AdjustDirection(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10194
/// @name PATH_GetPrecisionX
/// @address 6fda9d30
/// Not imported by any .dll
int __stdcall PATH_GetPrecisionX(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10195
/// @name PATH_GetPrecisionY
/// @address 6fda9d60
/// Not imported by any .dll
int __stdcall PATH_GetPrecisionY(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10196
/// @name PATH_SetPrecisionX
/// @address 6fda9d90
/// Imported by ['D2Client.dll']
void __stdcall PATH_SetPrecisionX(D2DynamicPathStrc *pDynamicPath, int nPrecisionX);

/// @ordinal 10197
/// @name PATH_SetPrecisionY
/// @address 6fda9da0
/// Imported by ['D2Client.dll']
void __stdcall PATH_SetPrecisionY(D2DynamicPathStrc *pDynamicPath, int nPrecisionY);

/// @ordinal 10198
/// @name PathGetSaveStep
/// @address 6fdaa350
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PathGetSaveStep(D2DynamicPathStrc *pDynamicPath, D2PathPointStrc **ppPathPoints);

/// @ordinal 10199
/// @name PathGetSaveX
/// @address 6fdaa390
/// Not imported by any .dll
DWORD __stdcall PathGetSaveX(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10200
/// @name PathGetSaveY
/// @address 6fdaa3e0
/// Not imported by any .dll
DWORD __stdcall PathGetSaveY(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10201
/// @name 
/// @address 6fdaa2c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
WORD __stdcall(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10202
/// @name 
/// @address 6fdaa300
/// Not imported by any .dll
WORD __stdcall(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10203
/// @name PATH_SetRotateFlag
/// @address 6fdaa430
/// Imported by ['D2Client.dll']
void __stdcall PATH_SetRotateFlag(D2DynamicPathStrc *pDynamicPath, BOOL bReset);

/// @ordinal 10204
/// @name PATH_ClearPoint2
/// @address 6fdaa460
/// Imported by ['D2Game.dll']
void __stdcall PATH_ClearPoint2(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10205
/// @name PATH_SetStepNum
/// @address 6fdaa480
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetStepNum(D2DynamicPathStrc *pDynamicPath, BYTE nSteps);

/// @ordinal 10206
/// @name PATH_GetStepNum
/// @address 6fdaa4b0
/// Imported by ['D2Game.dll']
BYTE __stdcall PATH_GetStepNum(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10207
/// @name 
/// @address 6fdaa4c0
/// Not imported by any .dll
void __stdcall(D2DynamicPathStrc *a1, char a2, char a3);

/// @ordinal 10208
/// @name PathSetPathingFlag
/// @address 6fda9b40
/// Imported by ['D2Client.dll']
void __stdcall PathSetPathingFlag(D2DynamicPathStrc *pDynamicPath, BOOL bSet);

/// @ordinal 10209
/// @name PathCheckPathingFlag
/// @address 6fda9b70
/// Imported by ['D2Client.dll']
BOOL __stdcall PathCheckPathingFlag(D2DynamicPathStrc *pPath);

/// @ordinal 10210
/// @name PATH_GetUnitCollisionPattern
/// @address 6fdaa570
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall PATH_GetUnitCollisionPattern(D2UnitStrc *pDynamicPath);

/// @ordinal 10211
/// @name PATH_SetUnitCollisionPattern
/// @address 6fdaa580
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetUnitCollisionPattern(D2UnitStrc *pUnit, int nCollisionPattern);

/// @ordinal 10212
/// @name PATH_SetMoveFlags
/// @address 6fdaa5a0
/// Imported by ['D2Client.dll']
void __stdcall PATH_SetMoveFlags(D2UnitStrc *pUnit, BOOL bSet);

/// @ordinal 10213
/// @name 
/// @address 6fdaa600
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10214
/// @name 
/// @address 6fda92f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10215
/// @name PATH_ComputeDirection
/// @address 6fdac700
/// Imported by ['D2Game.dll']
int __stdcall PATH_ComputeDirection(int nX1, int nY1, int nX2, int nY2);

/// @ordinal 10216
/// @name 
/// @address 6fda97c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall(D2DynamicPathStrc *pDynamicPath, int nX, int nY, int a4);

/// @ordinal 10217
/// @name PATH_SetDistance
/// @address 6fdaa4e0
/// Imported by ['D2Game.dll']
void __stdcall PATH_SetDistance(D2DynamicPathStrc *pDynamicPath, int nDist);

/// @ordinal 10218
/// @name PATH_GetDistance
/// @address 6fdaa520
/// Not imported by any .dll
int __stdcall PATH_GetDistance(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10219
/// @name PATH_AddToDistance
/// @address 6fdaa530
/// Not imported by any .dll
void __stdcall PATH_AddToDistance(D2DynamicPathStrc *pDynamicPath, int nAddition);

/// @ordinal 10220
/// @name PATH_ComputeSquaredDistance
/// @address 6fdaa6a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PATH_ComputeSquaredDistance(int nX1, int nY1, int nX2, int nY2);

/// @ordinal 10221
/// @name PATH_AddCollisionFootprintForOptionalUnit
/// @address 6fdaa6d0
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10222
/// @name PATH_AddCollisionFootprintForUnit
/// @address 6fda8320
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10223
/// @name PATH_RemoveCollisionFootprintForUnit
/// @address 6fda8450
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall PATH_RemoveCollisionFootprintForUnit(D2UnitStrc *pUnit, int a2);

/// @ordinal 10224
/// @name 
/// @address 6fda9e00
/// Imported by ['D2Game.dll']
int __stdcall(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10225
/// @name 
/// @address 6fda9e10
/// Imported by ['D2Game.dll']
int __stdcall(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10226
/// @name 
/// @address 6fdac9a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall(D2UnitStrc *pUnit, signed int a2);

/// @ordinal 10227
/// @name 
/// @address 6fdad530
/// Not imported by any .dll
signed int __stdcall(D2UnitStrc *pUnit);

/// @ordinal 10228
/// @name 
/// @address 6fda9850
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall(D2UnitStrc *pUnit);

/// @ordinal 10229
/// @name 
/// @address 6fdad590
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall(D2DynamicPathStrc *pDynamicPath, D2UnitStrc *pUnit, D2RoomStrc *a3, DWORD a4, DWORD a5);

/// @ordinal 10230
/// @name 
/// @address 6fdadf00
/// Imported by ['D2Client.dll']
BOOL __stdcall(D2DynamicPathStrc *pDynamicPath, int a2, D2RoomStrc *a3, unsigned int a4, __int16 a5);

/// @ordinal 10231
/// @name 
/// @address 6fdadc20
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall(D2DynamicPathStrc *a1, D2UnitStrc *a2, D2RoomStrc *pRooms, int nX, int nY);

/// @ordinal 10232
/// @name 
/// @address 6fdadf50
/// Not imported by any .dll
signed int __stdcall(D2DynamicPathStrc *pDynamicPath, D2UnitStrc *pUnit, D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10233
/// @name 
/// @address 6fdae290
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10234
/// @name 
/// @address 6fdae500
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10235
/// @name PATH_UpdateRiderPath
/// @address 6fdae520
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_UpdateRiderPath(D2UnitStrc *pRiderUnit, D2UnitStrc *pHorseUnit);

/// @ordinal 10236
/// @name 
/// @address 6fdac8f0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int a2, int)

/// @ordinal 10237
/// @name 
/// @address 6fdaa6f0
/// Not imported by any .dll
void *__stdcall(D2UnitStrc *pUnit);

/// @ordinal 10238
/// @name D2Common_10916_SEED_Return
/// @address 6fda5260
/// Not imported by any .dll
void __stdcall D2Common_10916_SEED_Return();

/// @ordinal 10239
/// @name D2Common_11079_Return0
/// @address 6fd9fb40
/// Not imported by any .dll
int __stdcall D2Common_11079_Return0(int arg, int a2);

/// @ordinal 10240
/// @name INVENTORY_AllocInventory
/// @address 6fd8e4c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2InventoryStrc *__stdcall INVENTORY_AllocInventory(void *pMemPool, D2UnitStrc *pOwner);

/// @ordinal 10241
/// @name INVENTORY_FreeInventory
/// @address 6fd8e520
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall INVENTORY_FreeInventory(D2InventoryStrc *pInventory);

/// @ordinal 10242
/// @name INVENTORY_PlaceItemInSocket
/// @address 6fd8e6a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall INVENTORY_PlaceItemInSocket(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int nUnused);

/// @ordinal 10243
/// @name INVENTORY_RemoveItemFromInventory
/// @address 6fd8e660
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_RemoveItemFromInventory(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10244
/// @name INVENTORY_CompareWithItemsParentInventory
/// @address 6fd8e620
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall INVENTORY_CompareWithItemsParentInventory(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10245
/// @name INVENTORY_GetFreePosition
/// @address 6fd8e7e0
/// Imported by ['D2Client.dll']
BOOL __stdcall INVENTORY_GetFreePosition(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int nInventoryRecordId, int *pFreeX, int *pFreeY, BYTE nPage);

/// @ordinal 10246
/// @name INVENTORY_PlaceItemAtFreePosition
/// @address 6fd8f1e0
/// Imported by ['D2Game.dll']
signed int __stdcall INVENTORY_PlaceItemAtFreePosition(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int a3, int a4, int a5, char *szFile, int nLine);

/// @ordinal 10247
/// @name INVENTORY_CanItemBePlaced
/// @address 6fd8f600
/// Imported by ['D2Client.dll']
BOOL __stdcall INVENTORY_CanItemBePlaced(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int nXPos, int nYPos, int nInventoryRecordId, D2UnitStrc **ppExchangeItem, unsigned int *pHoveredItems, BYTE nPage);

/// @ordinal 10248
/// @name INVENTORY_CanItemsBeExchanged
/// @address 6fd8f780
/// Imported by ['D2Client.dll']
BOOL __stdcall INVENTORY_CanItemsBeExchanged(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int nXPos, int nYPos, int nInventoryRecordId, D2UnitStrc **ppExchangeItem, BYTE nPage, BOOL bCheckIfCube);

/// @ordinal 10249
/// @name INVENTORY_PlaceItemAtInventoryPage
/// @address 6fd8f930
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall INVENTORY_PlaceItemAtInventoryPage(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int nXPos, int nYPos, int nInventoryRecordId, BOOL bUnused, BYTE nPage);

/// @ordinal 10250
/// @name INVENTORY_Return
/// @address 6fd8f970
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall INVENTORY_Return(char *szFile, int nLine, D2InventoryStrc *pInventory, int nX, int nY, int nInventoryRecordId, int a7, int nPage);

/// @ordinal 10251
/// @name D2Common_11296_Return
/// @address 6fda5250
/// Imported by ['D2Client.dll']
void __stdcall D2Common_11296_Return(D2UnitStrc *pUnit);

/// @ordinal 10252
/// @name INVENTORY_GetItemFromInventoryPage
/// @address 6fd8f980
/// Imported by ['D2Client.dll']
D2UnitStrc *__stdcall INVENTORY_GetItemFromInventoryPage(D2InventoryStrc *pInventory, int nX, int nY, int *pX, int *pY, int nInventoryRecordId, BYTE nPage);

/// @ordinal 10253
/// @name INVENTORY_PlaceItemInBodyLoc
/// @address 6fd8fab0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall INVENTORY_PlaceItemInBodyLoc(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int nBodyLoc);

/// @ordinal 10254
/// @name D2Common_11077_Return
/// @address 6fda6400
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_11077_Return(int arg, int a2);

/// @ordinal 10255
/// @name INVENTORY_GetSecondWieldingWeapon
/// @address 6fd8fb20
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall INVENTORY_GetSecondWieldingWeapon(D2UnitStrc *pPlayer, D2InventoryStrc *pInventory, D2UnitStrc **ppItem, int nBodyLoc);

/// @ordinal 10256
/// @name INVENTORY_CheckEquipmentForWeaponByClass
/// @address 6fd8fbb0
/// Not imported by any .dll
BOOL __stdcall INVENTORY_CheckEquipmentForWeaponByClass(D2InventoryStrc *pInventory, int nItemType);

/// @ordinal 10257
/// @name INVENTORY_GetItemFromBodyLoc
/// @address 6fd8fae0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_GetItemFromBodyLoc(D2InventoryStrc *pInventory, int nBodyLoc);

/// @ordinal 10258
/// @name INVENTORY_GetLeftHandWeapon
/// @address 6fd8fc60
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall INVENTORY_GetLeftHandWeapon(D2InventoryStrc *pInventory);

/// @ordinal 10259
/// @name INVENTORY_GetCompositItem
/// @address 6fd8fdd0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_GetCompositItem(D2InventoryStrc *pInventory, int nComponent);

/// @ordinal 10260
/// @name INVENTORY_GetBodyLocFromEquippedItem
/// @address 6fd8fe80
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall INVENTORY_GetBodyLocFromEquippedItem(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10261
/// @name INVENTORY_SetCursorItem
/// @address 6fd8ff20
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall INVENTORY_SetCursorItem(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10262
/// @name INVENTORY_GetCursorItem
/// @address 6fd8ff80
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_GetCursorItem(D2InventoryStrc *pInventory);

/// @ordinal 10263
/// @name INVENTORY_FindBackPackItemForStack
/// @address 6fd8ffa0
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_FindBackPackItemForStack(D2InventoryStrc *pInventory, D2UnitStrc *a2, D2UnitStrc *a3);

/// @ordinal 10264
/// @name INVENTORY_FindEquippedItemForStack
/// @address 6fd90080
/// Imported by ['D2Game.dll']
int __stdcall INVENTORY_FindEquippedItemForStack(D2InventoryStrc *pInventory, int a2, int a3);

/// @ordinal 10265
/// @name INVENTORY_FindFillableBook
/// @address 6fd90130
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_FindFillableBook(D2InventoryStrc *pInventory, D2UnitStrc *a2, D2UnitStrc *a3);

/// @ordinal 10266
/// @name INVENTORY_PlaceItemInBeltSlot
/// @address 6fd90230
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall INVENTORY_PlaceItemInBeltSlot(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int nSlot);

/// @ordinal 10267
/// @name D2Common_11077_Return
/// @address 6fda6400
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_11077_Return(int arg, int a2);

/// @ordinal 10268
/// @name INVENTORY_HasSimilarPotionInBelt
/// @address 6fd902b0
/// Not imported by any .dll
BOOL __stdcall INVENTORY_HasSimilarPotionInBelt(D2InventoryStrc *pInventory, D2UnitStrc *pPotion);

/// @ordinal 10269
/// @name INVENTORY_GetFreeBeltSlot
/// @address 6fd90340
/// Imported by ['D2Game.dll']
BOOL __stdcall INVENTORY_GetFreeBeltSlot(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int *pFreeSlotId);

/// @ordinal 10270
/// @name INVENTORY_PlaceItemInFreeBeltSlot
/// @address 6fd904f0
/// Imported by ['D2Game.dll']
BOOL __stdcall INVENTORY_PlaceItemInFreeBeltSlot(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10271
/// @name INVENTORY_GetItemFromBeltSlot
/// @address 6fd90550
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_GetItemFromBeltSlot(D2InventoryStrc *pInventory, int nSlotId);

/// @ordinal 10272
/// @name INVENTORY_GetUseableItemFromBeltSlot
/// @address 6fd90590
/// Imported by ['D2Client.dll']
BOOL __stdcall INVENTORY_GetUseableItemFromBeltSlot(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int nSlotId, D2UnitStrc **ppItem);

/// @ordinal 10273
/// @name INVENTORY_GetEquippedShield
/// @address 6fd90690
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall INVENTORY_GetEquippedShield(D2InventoryStrc *pInventory, D2UnitStrc **ppItem);

/// @ordinal 10274
/// @name INVENTORY_GetEquippedWeapon
/// @address 6fd90760
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall INVENTORY_GetEquippedWeapon(D2InventoryStrc *pInventory, D2UnitStrc **ppItem, int *pBodyLoc, BOOL *pIsLeftHandItem);

/// @ordinal 10275
/// @name INVENTORY_HasBodyArmorEquipped
/// @address 6fd90850
/// Not imported by any .dll
bool __stdcall INVENTORY_HasBodyArmorEquipped(D2InventoryStrc *pInventory);

/// @ordinal 10276
/// @name INVENTORY_IsItemBodyLocFree
/// @address 6fd908a0
/// Imported by ['D2Game.dll']
int __stdcall INVENTORY_IsItemBodyLocFree(D2InventoryStrc *pInventory, int a2, signed int a3, int a4);

/// @ordinal 10277
/// @name INVENTORY_GetFirstItem
/// @address 6fd8e7a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_GetFirstItem(D2InventoryStrc *pInventory);

/// @ordinal 10278
/// @name INVENTORY_GetLastItem
/// @address 6fd8e7c0
/// Not imported by any .dll
D2UnitStrc *__stdcall INVENTORY_GetLastItem(D2InventoryStrc *pInventory);

/// @ordinal 10279
/// @name INVENTORY_RemoveInventoryItems
/// @address 6fd90910
/// Imported by ['D2Client.dll']
void __stdcall INVENTORY_RemoveInventoryItems(D2InventoryStrc *pInventory);

/// @ordinal 10280
/// @name INVENTORY_GetTradeInventory
/// @address 6fd90940
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pInventory)

/// @ordinal 10281
/// @name INVENTORY_FreeTradeInventory
/// @address 6fd90960
/// Imported by ['D2Game.dll']
void __stdcall INVENTORY_FreeTradeInventory(D2InventoryStrc *pInventory);

/// @ordinal 10282
/// @name INVENTORY_CheckForItemInTradeInventory
/// @address 6fd909b0
/// Not imported by any .dll
BOOL __stdcall INVENTORY_CheckForItemInTradeInventory(D2InventoryStrc *pInventory, int nItemId);

/// @ordinal 10283
/// @name INVENTORY_AddItemToTradeInventory
/// @address 6fd909f0
/// Imported by ['D2Game.dll']
void __stdcall INVENTORY_AddItemToTradeInventory(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10284
/// @name INVENTORY_GetItemCount
/// @address 6fd90ac0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall INVENTORY_GetItemCount(D2InventoryStrc *pInventory);

/// @ordinal 10285
/// @name INVENTORY_GetBackPackItemByType
/// @address 6fd90ae0
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_GetBackPackItemByType(D2InventoryStrc *pInventory, int nItemType, D2UnitStrc *a3);

/// @ordinal 10286
/// @name INVENTORY_GetEquippedItemByType
/// @address 6fd90bc0
/// Not imported by any .dll
D2UnitStrc *__stdcall INVENTORY_GetEquippedItemByType(D2InventoryStrc *pInventory, int nItemType, D2UnitStrc *a3);

/// @ordinal 10287
/// @name INVENTORY_GetEquippedItemByCode
/// @address 6fd90c80
/// Not imported by any .dll
D2UnitStrc *__stdcall INVENTORY_GetEquippedItemByCode(D2InventoryStrc *pInventory, int nItemCode, D2UnitStrc *a3);

/// @ordinal 10288
/// @name INVENTORY_GetSetItemEquipCountByFileIndex
/// @address 6fd90e20
/// Not imported by any .dll
/// @guessedtype int __stdcall(int pInventory, int)

/// @ordinal 10289
/// @name INVENTORY_UpdateWeaponGUIDOnInsert
/// @address 6fd90ed0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall INVENTORY_UpdateWeaponGUIDOnInsert(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10290
/// @name INVENTORY_UpdateWeaponGUIDOnRemoval
/// @address 6fd90f80
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall INVENTORY_UpdateWeaponGUIDOnRemoval(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10291
/// @name INVENTORY_GetWieldType
/// @address 6fd91050
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall INVENTORY_GetWieldType(D2UnitStrc *pPlayer, D2InventoryStrc *pInventory);

/// @ordinal 10292
/// @name INVENTORY_SetOwnerId
/// @address 6fd91140
/// Imported by ['D2Game.dll']
void __stdcall INVENTORY_SetOwnerId(D2InventoryStrc *pInventory, DWORD nOwnerId);

/// @ordinal 10293
/// @name INVENTORY_GetOwnerId
/// @address 6fd91160
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall INVENTORY_GetOwnerId(D2InventoryStrc *pInventory);

/// @ordinal 10294
/// @name INVENTORY_CreateCorpseForPlayer
/// @address 6fd91190
/// Imported by ['D2Game.dll']
void __stdcall INVENTORY_CreateCorpseForPlayer(D2InventoryStrc *pInventory, int nUnitId, int a3, int a4);

/// @ordinal 10295
/// @name INVENTORY_FreeCorpse
/// @address 6fd91210
/// Imported by ['D2Game.dll']
BOOL __stdcall INVENTORY_FreeCorpse(D2InventoryStrc *pInventory, int nUnitId, int a3);

/// @ordinal 10296
/// @name INVENTORY_GetFirstCorpse
/// @address 6fd91290
/// Imported by ['D2Game.dll']
D2CorpseStrc *__stdcall INVENTORY_GetFirstCorpse(D2InventoryStrc *pInventory);

/// @ordinal 10297
/// @name INVENTORY_GetCorpseCount
/// @address 6fd912b0
/// Imported by ['D2Game.dll']
DWORD __stdcall INVENTORY_GetCorpseCount(D2InventoryStrc *pInventory);

/// @ordinal 10298
/// @name INVENTORY_GetItemSaveGfxInfo
/// @address 6fd912f0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit, int a2, int pColor)

/// @ordinal 10299
/// @name 
/// @address 6fd91b60
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall(D2UnitStrc *pUnit, int nBodyLoc, D2UnitStrc *pItem, int bDontCheckReqs);

/// @ordinal 10300
/// @name INVENTORY_RemoveAllItems
/// @address 6fd92180
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall INVENTORY_RemoveAllItems(D2InventoryStrc *pInventory);

/// @ordinal 10301
/// @name D2Common_11239_SKILLS_Return0
/// @address 6fdb2e70
/// Not imported by any .dll
int __stdcall D2Common_11239_SKILLS_Return0(int arg);

/// @ordinal 10302
/// @name INVENTORY_CanItemsBeTraded
/// @address 6fd921d0
/// Imported by ['D2Game.dll']
signed int __stdcall INVENTORY_CanItemsBeTraded(void *pInventory, D2UnitStrc *a2, D2UnitStrc *a3, int *a4);

/// @ordinal 10303
/// @name D2Common_11077_Return
/// @address 6fda6400
/// Not imported by any .dll
void __stdcall D2Common_11077_Return(int arg, int a2);

/// @ordinal 10304
/// @name INVENTORY_GetNextItem
/// @address 6fd92080
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_GetNextItem(D2UnitStrc *pPreviousItem);

/// @ordinal 10305
/// @name INVENTORY_UnitIsItem
/// @address 6fd920c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_UnitIsItem(D2UnitStrc *pItem);

/// @ordinal 10306
/// @name INVENTORY_GetItemGUID
/// @address 6fd920e0
/// Imported by ['D2Client.dll']
DWORD __stdcall INVENTORY_GetItemGUID(D2UnitStrc *pItem);

/// @ordinal 10307
/// @name INVENTORY_GetItemNodePage
/// @address 6fd92100
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall INVENTORY_GetItemNodePage(D2UnitStrc *pUnit);

/// @ordinal 10308
/// @name D2Common_11077_Return
/// @address 6fda6400
/// Not imported by any .dll
void __stdcall D2Common_11077_Return(int arg, int a2);

/// @ordinal 10309
/// @name D2Common_11239_SKILLS_Return0
/// @address 6fdb2e70
/// Not imported by any .dll
int __stdcall D2Common_11239_SKILLS_Return0(int arg);

/// @ordinal 10310
/// @name INVENTORY_IsItemInInventory
/// @address 6fd92140
/// Not imported by any .dll
D2UnitStrc *__stdcall INVENTORY_IsItemInInventory(D2InventoryStrc *pParentInventory, D2UnitStrc *pItem);

/// @ordinal 10311
/// @name D2Common_10948_SKILLS_GetFirstSkillFromSkillList
/// @address 6fdafea0
/// Imported by ['D2Game.dll']
D2SkillStrc *__stdcall D2Common_10948_SKILLS_GetFirstSkillFromSkillList(D2SkillListStrc *pSkillList);

/// @ordinal 10312
/// @name INVENTORY_GetItemGUIDFromNode
/// @address 6fd90ab0
/// Imported by ['D2Game.dll']
DWORD __stdcall INVENTORY_GetItemGUIDFromNode(D2CorpseStrc *pCorpse);

/// @ordinal 10313
/// @name D2Common_10472_STATLIST_GetOwnerGUID
/// @address 6fd912d0
/// Imported by ['D2Game.dll']
DWORD __stdcall D2Common_10472_STATLIST_GetOwnerGUID(D2StatListStrc *pStatList);

/// @ordinal 10314
/// @name D2Common_10948_SKILLS_GetFirstSkillFromSkillList
/// @address 6fdafea0
/// Imported by ['D2Game.dll']
D2SkillStrc *__stdcall D2Common_10948_SKILLS_GetFirstSkillFromSkillList(D2SkillListStrc *pSkillList);

/// @ordinal 10315
/// @name D2Common_10975_SKILLS_GetSkillMode
/// @address 6fdb18d0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10975_SKILLS_GetSkillMode(D2SkillStrc *pSkill);

/// @ordinal 10316
/// @name D2Common_10312_INVENTORY_GetItemGUIDFromNode
/// @address 6fd90ab0
/// Imported by ['D2Game.dll']
DWORD __stdcall D2Common_10312_INVENTORY_GetItemGUIDFromNode(D2CorpseStrc *pCorpse);

/// @ordinal 10317
/// @name UNITS_CanSwitchAI
/// @address 6fdc2680
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __fastcall UNITS_CanSwitchAI(int nMonsterId);

/// @ordinal 10318
/// @name UNITS_IsInMovingMode
/// @address 6fdc1b40
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall UNITS_IsInMovingMode(D2UnitStrc *pUnit);

/// @ordinal 10319
/// @name UNITS_IsInMovingModeEx
/// @address 6fdc1c30
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall UNITS_IsInMovingModeEx(D2UnitStrc *pUnit);

/// @ordinal 10320
/// @name UNITS_GetStartSkill
/// @address 6fdbd570
/// Imported by ['D2Client.dll']
D2SkillStrc *__stdcall UNITS_GetStartSkill(D2UnitStrc *pUnit);

/// @ordinal 10321
/// @name UNITS_GetLeftSkill
/// @address 6fdbd5b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillStrc *__stdcall UNITS_GetLeftSkill(D2UnitStrc *pUnit);

/// @ordinal 10322
/// @name UNITS_GetRightSkill
/// @address 6fdbd5f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillStrc *__stdcall UNITS_GetRightSkill(D2UnitStrc *pUnit);

/// @ordinal 10323
/// @name UNITS_GetUsedSkill
/// @address 6fdbd670
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillStrc *__stdcall UNITS_GetUsedSkill(D2UnitStrc *pUnit);

/// @ordinal 10324
/// @name UNITS_SetUsedSkill
/// @address 6fdbd630
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetUsedSkill(D2UnitStrc *pUnit, D2SkillStrc *pUsedSkill);

/// @ordinal 10325
/// @name UNITS_SetAnimData
/// @address 6fdbe4c0
/// Imported by ['D2Game.dll']
void __stdcall UNITS_SetAnimData(D2UnitStrc *pUnit, int nUnitType, int nClassId, int nMode);

/// @ordinal 10327
/// @name UNITS_GetPrecisionX
/// @address 6fdbd780
/// Imported by ['D2Client.dll']
DWORD __stdcall UNITS_GetPrecisionX(D2UnitStrc *pUnit);

/// @ordinal 10328
/// @name UNITS_SetXForStaticUnit
/// @address 6fdbd820
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetXForStaticUnit(D2UnitStrc *pUnit, int nX);

/// @ordinal 10330
/// @name UNITS_GetPrecisionY
/// @address 6fdbd7d0
/// Imported by ['D2Client.dll']
DWORD __stdcall UNITS_GetPrecisionY(D2UnitStrc *pUnit);

/// @ordinal 10331
/// @name UNITS_SetYForStaticUnit
/// @address 6fdbd890
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetYForStaticUnit(D2UnitStrc *pUnit, int nY);

/// @ordinal 10332
/// @name UNITS_GetCoords
/// @address 6fdbdd10
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_GetCoords(D2UnitStrc *pUnit, D2CoordStrc *pCoord);

/// @ordinal 10333
/// @name UNITS_GetClientCoordX
/// @address 6fdbdb10
/// Imported by ['D2Client.dll']
int __stdcall UNITS_GetClientCoordX(D2UnitStrc *pUnit);

/// @ordinal 10334
/// @name UNITS_GetClientCoordY
/// @address 6fdbdb60
/// Imported by ['D2Client.dll']
int __stdcall UNITS_GetClientCoordY(D2UnitStrc *pUnit);

/// @ordinal 10335
/// @name UNITS_GetClientCoords
/// @address 6fdbdda0
/// Imported by ['D2Client.dll']
void __stdcall UNITS_GetClientCoords(D2UnitStrc *pUnit, D2CoordStrc *pTargetCoords);

/// @ordinal 10336
/// @name UNITS_GetUnitSizeX
/// @address 6fdbd900
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetUnitSizeX(D2UnitStrc *pUnit);

/// @ordinal 10337
/// @name UNITS_GetUnitSizeY
/// @address 6fdbda00
/// Imported by ['D2Game.dll']
int __stdcall UNITS_GetUnitSizeY(D2UnitStrc *pUnit);

/// @ordinal 10338
/// @name UNITS_GetCollisionType
/// @address 6fdbde10
/// Not imported by any .dll
DWORD __fastcall UNITS_GetCollisionType(D2UnitStrc *pUnit);

/// @ordinal 10339
/// @name UNITS_GetStashGoldLimit
/// @address 6fdc2630
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall UNITS_GetStashGoldLimit(D2UnitStrc *pUnit);

/// @ordinal 10340
/// @name UNITS_SetTargetX
/// @address 6fdbdc90
/// Not imported by any .dll
void __stdcall UNITS_SetTargetX(D2UnitStrc *pUnit, int nTargetX);

/// @ordinal 10341
/// @name UNITS_SetTargetY
/// @address 6fdbdcd0
/// Not imported by any .dll
void __stdcall UNITS_SetTargetY(D2UnitStrc *pUnit, int nTargetY);

/// @ordinal 10342
/// @name UNITS_GetRoom
/// @address 6fdbe270
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2RoomStrc *__stdcall UNITS_GetRoom(D2UnitStrc *pUnit);

/// @ordinal 10343
/// @name UNITS_ResetRoom
/// @address 6fdbe210
/// Not imported by any .dll
void __stdcall UNITS_ResetRoom(D2UnitStrc *pUnit);

/// @ordinal 10344
/// @name UNITS_SetTargetUnitForDynamicUnit
/// @address 6fdbe2d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetTargetUnitForDynamicUnit(D2UnitStrc *pUnit, D2UnitStrc *pTargetUnit);

/// @ordinal 10345
/// @name UNITS_GetTargetTypeFromDynamicUnit
/// @address 6fdbe330
/// Not imported by any .dll
int __stdcall UNITS_GetTargetTypeFromDynamicUnit(D2UnitStrc *pUnit);

/// @ordinal 10346
/// @name UNITS_GetTargetGUIDFromDynamicUnit
/// @address 6fdbe3a0
/// Not imported by any .dll
int __stdcall UNITS_GetTargetGUIDFromDynamicUnit(D2UnitStrc *pUnit);

/// @ordinal 10347
/// @name UNITS_SetTargetUnitForPlayerOrMonster
/// @address 6fdbe410
/// Not imported by any .dll
void __stdcall UNITS_SetTargetUnitForPlayerOrMonster(D2UnitStrc *pUnit, D2UnitStrc *pTargetUnit);

/// @ordinal 10348
/// @name UNITS_ChangeAnimMode
/// @address 6fdbea60
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall UNITS_ChangeAnimMode(D2UnitStrc *pUnit, int nMode);

/// @ordinal 10349
/// @name UNITS_SetAnimStartFrame
/// @address 6fdbe510
/// Imported by ['D2Client.dll']
void __stdcall UNITS_SetAnimStartFrame(D2UnitStrc *pUnit);

/// @ordinal 10350
/// @name UNITS_InitializeStaticPath
/// @address 6fdbe1a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_InitializeStaticPath(D2UnitStrc *pUnit, D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10351
/// @name UNITS_BlockCollisionPath
/// @address 6fdbe060
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_BlockCollisionPath(D2UnitStrc *pUnit, D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10352
/// @name UNITS_FreeCollisionPath
/// @address 6fdbdec0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_FreeCollisionPath(D2UnitStrc *pUnit);

/// @ordinal 10353
/// @name UNITS_GetNameOffsetFromObject
/// @address 6fdc06c0
/// Imported by ['D2Client.dll']
DWORD __stdcall UNITS_GetNameOffsetFromObject(D2UnitStrc *pUnit);

/// @ordinal 10354
/// @name UNITS_GetRunAndWalkSpeedForPlayer
/// @address 6fdbe470
/// Imported by ['D2Client.dll']
void __stdcall UNITS_GetRunAndWalkSpeedForPlayer(int nUnused, int nCharId, int *pWalkSpeed, int *pRunSpeed);

/// @ordinal 10355
/// @name UNITS_IsCurrentRoomInvalid
/// @address 6fdbead0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall UNITS_IsCurrentRoomInvalid(D2UnitStrc *pUnit);

/// @ordinal 10356
/// @name UNITS_SetCurrentRoomInvalid
/// @address 6fdbeb20
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetCurrentRoomInvalid(D2UnitStrc *pUnit, int a2);

/// @ordinal 10357
/// @name UNITS_RefreshInventory
/// @address 6fdbeb80
/// Imported by ['D2Game.dll']
void __stdcall UNITS_RefreshInventory(D2UnitStrc *pItem, BOOL bSetFlag);

/// @ordinal 10358
/// @name UNITS_GetSkillFromSkillId
/// @address 6fdbfb70
/// Not imported by any .dll
D2SkillStrc *__stdcall UNITS_GetSkillFromSkillId(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 10359
/// @name UNITS_IsSoftMonster
/// @address 6fdc02a0
/// Imported by ['D2Client.dll']
int __stdcall UNITS_IsSoftMonster(D2UnitStrc *pUnit);

/// @ordinal 10360
/// @name UNITS_GetMeleeRange
/// @address 6fdc1120
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetMeleeRange(D2UnitStrc *pUnit);

/// @ordinal 10361
/// @name UNITS_IsInMeleeRange
/// @address 6fdc1a70
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall UNITS_IsInMeleeRange(D2UnitStrc *pUnit1, D2UnitStrc *pUnit2, int a3);

/// @ordinal 10362
/// @name UNITS_TestCollisionWithUnit
/// @address 6fdc14c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall UNITS_TestCollisionWithUnit(D2UnitStrc *hUnit1, D2UnitStrc *hUnit2, int a3);

/// @ordinal 10363
/// @name UNITS_TestCollisionBetweenInteractingUnits
/// @address 6fdc1790
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall UNITS_TestCollisionBetweenInteractingUnits(D2UnitStrc *pUnit, D2UnitStrc *a2, int a3);

/// @ordinal 10364
/// @name UNITS_TestCollisionByCoordinates
/// @address 6fdc1230
/// Imported by ['D2Game.dll']
signed int __stdcall UNITS_TestCollisionByCoordinates(D2UnitStrc *pUnit, int nX, int nY, int nFlags);

/// @ordinal 10365
/// @name UNITS_GetHitClass
/// @address 6fdc1c50
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __fastcall UNITS_GetHitClass(D2UnitStrc *pUnit);

/// @ordinal 10366
/// @name UNITS_GetWeaponClass
/// @address 6fdc1ce0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __fastcall UNITS_GetWeaponClass(D2UnitStrc *pUnit);

/// @ordinal 10367
/// @name UNITS_GetBeltType
/// @address 6fdc01f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetBeltType(D2UnitStrc *pUnit);

/// @ordinal 10368
/// @name UNITS_GetCurrentLifePercentage
/// @address 6fdc0260
/// Imported by ['D2Game.dll']
int __stdcall UNITS_GetCurrentLifePercentage(D2UnitStrc *pUnit);

/// @ordinal 10369
/// @name UNITS_GetAnimOrSeqMode
/// @address 6fdbed10
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetAnimOrSeqMode(D2UnitStrc *pUnit);

/// @ordinal 10370
/// @name UNITS_SetAnimOrSeqMode
/// @address 6fdbed40
/// Not imported by any .dll
void __stdcall UNITS_SetAnimOrSeqMode(D2UnitStrc *pUnit, int nAnimMode);

/// @ordinal 10371
/// @name UNITS_InitializeSequence
/// @address 6fdbed90
/// Imported by ['D2Game.dll']
void __stdcall UNITS_InitializeSequence(D2UnitStrc *pUnit);

/// @ordinal 10372
/// @name UNITS_SetAnimationFrame
/// @address 6fdbee20
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetAnimationFrame(D2UnitStrc *pUnit, int nFrame);

/// @ordinal 10373
/// @name UNITS_StopSequence
/// @address 6fdbee60
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_StopSequence(D2UnitStrc *pUnit);

/// @ordinal 10374
/// @name UNITS_UpdateFrame
/// @address 6fdbeff0
/// Imported by ['D2Client.dll']
void __stdcall UNITS_UpdateFrame(D2UnitStrc *pUnit);

/// @ordinal 10375
/// @name UNITS_SetFrameNonRate
/// @address 6fdbf020
/// Imported by ['D2Client.dll']
void __stdcall UNITS_SetFrameNonRate(D2UnitStrc *pUnit, int nRate, int nFailRate);

/// @ordinal 10376
/// @name UpdateAnimRateAndVelocity
/// @address 6fdbf050
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UpdateAnimRateAndVelocity(D2UnitStrc *pUnit, char *szFile, int nLine);

/// @ordinal 10377
/// @name UNITS_SetAnimationSpeed
/// @address 6fdbf8d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetAnimationSpeed(D2UnitStrc *pUnit, int nSpeed);

/// @ordinal 10378
/// @name UNITS_IsAtEndOfFrameCycle
/// @address 6fdbf910
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_IsAtEndOfFrameCycle(D2UnitStrc *pUnit);

/// @ordinal 10379
/// @name UNITS_GetShiftedFrameMetrics
/// @address 6fdbf970
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_GetShiftedFrameMetrics(D2UnitStrc *pUnit, int *pFrameNo, int *pFrameCount);

/// @ordinal 10380
/// @name UNITS_GetFrameMetrics
/// @address 6fdbf9e0
/// Not imported by any .dll
void __stdcall UNITS_GetFrameMetrics(D2UnitStrc *pUnit, int *pFrame, int *pFrameCount);

/// @ordinal 10381
/// @name UNITS_SetAnimActionFrame
/// @address 6fdbfa40
/// Not imported by any .dll
void __stdcall UNITS_SetAnimActionFrame(D2UnitStrc *pUnit, signed int nFrame);

/// @ordinal 10382
/// @name UNITS_GetEventFrameInfo
/// @address 6fdbfa90
/// Not imported by any .dll
int __stdcall UNITS_GetEventFrameInfo(D2UnitStrc *pUnit, int nFrame);

/// @ordinal 10383
/// @name UNITS_ResetLightMap
/// @address 6fdbecd0
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10384
/// @name UNITROOM_AddUnitToRoom
/// @address 6fdbd100
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITROOM_AddUnitToRoom(D2UnitStrc *pUnit, D2RoomStrc *pRoom);

/// @ordinal 10385
/// @name UNITROOM_RefreshUnit
/// @address 6fdbd120
/// Imported by ['D2Game.dll']
void __stdcall UNITROOM_RefreshUnit(D2UnitStrc *pUnit);

/// @ordinal 10386
/// @name UNITROOM_RemoveUnitFromRoom
/// @address 6fdbd300
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10387
/// @name UNITROOM_RemoveUnitFromUpdateQueue
/// @address 6fdbd400
/// Not imported by any .dll
void __stdcall UNITROOM_RemoveUnitFromUpdateQueue(D2UnitStrc *pUnit);

/// @ordinal 10388
/// @name UNITROOM_SortUnitListByTargetY
/// @address 6fdbd1b0
/// Not imported by any .dll
void __stdcall UNITROOM_SortUnitListByTargetY(D2RoomStrc *pRoom);

/// @ordinal 10389
/// @name UNITROOM_IsUnitInRoom
/// @address 6fdbd4c0
/// Imported by ['D2Client.dll']
BOOL __stdcall UNITROOM_IsUnitInRoom(D2RoomStrc *pRoom, D2UnitStrc *pUnit);

/// @ordinal 10390
/// @name UNITROOM_UpdatePath
/// @address 6fdbd250
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITROOM_UpdatePath(D2UnitStrc *pUnit);

/// @ordinal 10391
/// @name UNITROOM_ClearUpdateQueue
/// @address 6fdbd2b0
/// Imported by ['D2Game.dll']
void __stdcall UNITROOM_ClearUpdateQueue(D2RoomStrc *pRoom);

/// @ordinal 10392
/// @name UNITS_IsDoor
/// @address 6fdbfc10
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall UNITS_IsDoor(D2UnitStrc *pUnit);

/// @ordinal 10393
/// @name UNITS_IsShrine
/// @address 6fdbfc90
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall UNITS_IsShrine(D2UnitStrc *pUnit);

/// @ordinal 10394
/// @name UNITS_GetObjectTxtRecordFromObject
/// @address 6fdbfcb0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2ObjectsTxt *__stdcall UNITS_GetObjectTxtRecordFromObject(D2UnitStrc *pUnit);

/// @ordinal 10395
/// @name UNITS_GetShrineTxtRecordFromObject
/// @address 6fdbfd00
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10396
/// @name UNITS_SetShrineTxtRecordInObjectData
/// @address 6fdbfd50
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pUnit, int pTxt)

/// @ordinal 10397
/// @name UNITS_GetDistanceToOtherUnit
/// @address 6fdc2e40
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetDistanceToOtherUnit(D2UnitStrc *pUnit, D2UnitStrc *pOtherUnit);

/// @ordinal 10398
/// @name UNITS_GetDistanceToCoordinates
/// @address 6fdc2f50
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetDistanceToCoordinates(D2UnitStrc *pUnit, int nX, int nY);

/// @ordinal 10399
/// @name 
/// @address 6fdc2cb0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall(D2UnitStrc *pUnit1, D2UnitStrc *pUnit2);

/// @ordinal 10400
/// @name UNITS_IsInRange
/// @address 6fdc2ff0
/// Imported by ['D2Game.dll']
bool __stdcall UNITS_IsInRange(D2UnitStrc *pUnit, D2CoordStrc *pCoord, int nDistance);

/// @ordinal 10401
/// @name UNITFINDS_InitializeUnitFindData
/// @address 6fdbc990
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pMemPool, int pUnitFindData, int pRoom, int nX, int nY, int nSize, int pfnUnitTest, int pUnitFindArg)

/// @ordinal 10402
/// @name UNITFINDS_FreeUnitFindData
/// @address 6fdbca50
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITFINDS_FreeUnitFindData(D2UnitFindDataStrc *pUnitFindData);

/// @ordinal 10403
/// @name UNITFINDS_FindAllMatchingUnitsInNeighboredRooms
/// @address 6fdbca80
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITFINDS_FindAllMatchingUnitsInNeighboredRooms(D2UnitFindDataStrc *pUnitFindData);

/// @ordinal 10404
/// @name UNITFINDS_TestUnit
/// @address 6fdbcca0
/// Imported by ['D2Game.dll']
int __stdcall UNITFINDS_TestUnit(D2UnitStrc *pUnit, D2UnitFindArgStrc *pUnitFindArg);

/// @ordinal 10405
/// @name UNITFINDS_GetTestedUnitsFromRoom
/// @address 6fdbc7b0
/// Not imported by any .dll
int __stdcall UNITFINDS_GetTestedUnitsFromRoom(D2RoomStrc *pRoom, D2UnitStrc **ppUnits, int (__fastcall *pfnUnitTest)(D2UnitStrc *, void *), void *pUnitTestArg);

/// @ordinal 10406
/// @name 
/// @address 6fdc3090
/// Not imported by any .dll
/// @guessedtype int __stdcall(int pUnit, int, int)

/// @ordinal 10407
/// @name 
/// @address 6fdc33c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pppRoom, int, int, int, int, int)

/// @ordinal 10408
/// @name UNITFINDS_AreUnitsInNeighboredRooms
/// @address 6fdbc680
/// Imported by ['D2Game.dll']
BOOL __stdcall UNITFINDS_AreUnitsInNeighboredRooms(D2UnitStrc *pDestUnit, D2UnitStrc *pSrcUnit);

/// @ordinal 10409
/// @name UNITS_GetInventoryRecordId
/// @address 6fdbebe0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetInventoryRecordId(D2UnitStrc *pUnit, int nPage, BOOL bLoD);

/// @ordinal 10410
/// @name UNITS_HasCollision
/// @address 6fdbfb40
/// Not imported by any .dll
int __stdcall UNITS_HasCollision(D2UnitStrc *pObject);

/// @ordinal 10411
/// @name UNITS_GetAbsoluteXDistance
/// @address 6fdbdbb0
/// Not imported by any .dll
int __stdcall UNITS_GetAbsoluteXDistance(D2UnitStrc *pUnit1, D2UnitStrc *pUnit2);

/// @ordinal 10412
/// @name UNITS_GetAbsoluteYDistance
/// @address 6fdbdc20
/// Not imported by any .dll
int __stdcall UNITS_GetAbsoluteYDistance(D2UnitStrc *pUnit1, D2UnitStrc *pUnit2);

/// @ordinal 10413
/// @name UNITS_UpdateDirectionAndSpeed
/// @address 6fdbfdb0
/// Imported by ['D2Client.dll']
void __stdcall UNITS_UpdateDirectionAndSpeed(D2UnitStrc *pUnit, int nX, int nY);

/// @ordinal 10414
/// @name UNITS_GetNewDirection
/// @address 6fdbfdd0
/// Imported by ['D2Client.dll']
int __stdcall UNITS_GetNewDirection(D2UnitStrc *pUnit);

/// @ordinal 10415
/// @name UNITS_StoreOwner
/// @address 6fdbffe0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_StoreOwner(D2UnitStrc *pUnit, D2UnitStrc *pOwner);

/// @ordinal 10416
/// @name UNITS_StoreOwnerTypeAndGUID
/// @address 6fdbff20
/// Imported by ['D2Client.dll']
void __stdcall UNITS_StoreOwnerTypeAndGUID(D2UnitStrc *pUnit, int nOwnerType, int nOwnerId);

/// @ordinal 10417
/// @name UNITS_StoreLastAttacker
/// @address 6fdc0060
/// Imported by ['D2Game.dll']
void __stdcall UNITS_StoreLastAttacker(D2UnitStrc *pUnit, D2UnitStrc *pKiller);

/// @ordinal 10418
/// @name UNITS_GetDirectionToCoords
/// @address 6fdc00e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetDirectionToCoords(D2UnitStrc *pUnit, int nNewX, int nNewY);

/// @ordinal 10419
/// @name UNITS_SetInteractData
/// @address 6fdc3680
/// Imported by ['D2Game.dll']
void __fastcall UNITS_SetInteractData(D2UnitStrc *pUnit, int a2, int a3, int nAnyUnitGUID);

/// @ordinal 10420
/// @name UNITS_AllocPlayerData
/// @address 6fdc0320
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_AllocPlayerData(D2UnitStrc *pUnit);

/// @ordinal 10421
/// @name UNITS_FreePlayerData
/// @address 6fdc03f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_FreePlayerData(void *pMemPool, D2UnitStrc *pPlayer);

/// @ordinal 10422
/// @name UNITS_SetNameInPlayerData
/// @address 6fdc04a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetNameInPlayerData(D2UnitStrc *pUnit, char *szName);

/// @ordinal 10423
/// @name UNITS_GetPlayerName
/// @address 6fdc0530
/// Imported by ['D2Game.dll']
char *__stdcall UNITS_GetPlayerName(D2UnitStrc *pUnit);

/// @ordinal 10424
/// @name UNITS_GetPlayerData
/// @address 6fdc05b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2PlayerDataStrc *__stdcall UNITS_GetPlayerData(D2UnitStrc *pUnit);

/// @ordinal 10425
/// @name UNITS_SetPlayerPortalFlags
/// @address 6fdc0600
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetPlayerPortalFlags(D2UnitStrc *pUnit, int a2);

/// @ordinal 10426
/// @name UNITS_GetPlayerPortalFlags
/// @address 6fdc0660
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall UNITS_GetPlayerPortalFlags(D2UnitStrc *pUnit);

/// @ordinal 10427
/// @name UNITS_GetObjectPortalFlags
/// @address 6fdc0700
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall UNITS_GetObjectPortalFlags(D2UnitStrc *pUnit);

/// @ordinal 10428
/// @name UNITS_SetObjectPortalFlags
/// @address 6fdc0760
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetObjectPortalFlags(D2UnitStrc *pUnit, BYTE nPortalFlag);

/// @ordinal 10429
/// @name UNITS_CheckObjectPortalFlag
/// @address 6fdc07c0
/// Imported by ['D2Game.dll']
bool __stdcall UNITS_CheckObjectPortalFlag(D2UnitStrc *pUnit, BYTE nFlag);

/// @ordinal 10430
/// @name UNITS_GetOverlayHeight
/// @address 6fdc0820
/// Imported by ['D2Client.dll']
int __stdcall UNITS_GetOverlayHeight(D2UnitStrc *pUnit);

/// @ordinal 10431
/// @name UNITS_GetDefense
/// @address 6fdc08b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetDefense(D2UnitStrc *pShield);

/// @ordinal 10432
/// @name UNITS_GetAttackRate
/// @address 6fdc0ac0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetAttackRate(D2UnitStrc *pUnit);

/// @ordinal 10433
/// @name UNITS_GetBlockRate
/// @address 6fdc0b60
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetBlockRate(D2UnitStrc *pUnit, BOOL bExpansion);

/// @ordinal 10434
/// @name 
/// @address 6fdc0da0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall(D2UnitStrc *pUnit, int a2);

/// @ordinal 10435
/// @name UNITS_GetEquippedWeaponFromMonster
/// @address 6fdc0f70
/// Not imported by any .dll
D2UnitStrc *__stdcall UNITS_GetEquippedWeaponFromMonster(D2UnitStrc *pUnit);

/// @ordinal 10436
/// @name UNITS_GetFrameBonus
/// @address 6fdc0fc0
/// Imported by ['D2Game.dll']
int __stdcall UNITS_GetFrameBonus(D2UnitStrc *pClass);

/// @ordinal 10437
/// @name UNITS_SetOverlay
/// @address 6fdc0160
/// Imported by ['D2Game.dll']
void __stdcall UNITS_SetOverlay(D2UnitStrc *pUnit, int nOverlay, int nUnused);

/// @ordinal 10438
/// @name UNITS_GetHealingCost
/// @address 6fdc1d00
/// Imported by ['D2Client.dll', 'D2Game.dll']
unsigned int __stdcall UNITS_GetHealingCost(D2UnitStrc *pUnit);

/// @ordinal 10439
/// @name UNITS_GetInventoryGoldLimit
/// @address 6fdc1d90
/// Imported by ['D2Game.dll']
unsigned int __stdcall UNITS_GetInventoryGoldLimit(D2UnitStrc *pUnit);

/// @ordinal 10440
/// @name UNITS_MergeDualWieldWeaponStatLists
/// @address 6fdc1db0
/// Not imported by any .dll
void __stdcall UNITS_MergeDualWieldWeaponStatLists(D2UnitStrc *pUnit, int a2);

/// @ordinal 10441
/// @name D2Common_11077_Return
/// @address 6fda6400
/// Not imported by any .dll
void __stdcall D2Common_11077_Return(int arg, int a2);

/// @ordinal 10442
/// @name UNITS_GetItemComponentId
/// @address 6fdc1f10
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall UNITS_GetItemComponentId(D2UnitStrc *pUnit, D2UnitStrc *pItem);

/// @ordinal 10443
/// @name UNITS_InitRightSkill
/// @address 6fdc2030
/// Imported by ['D2Game.dll']
void __stdcall UNITS_InitRightSkill(D2UnitStrc *pUnit);

/// @ordinal 10444
/// @name UNITS_InitLeftSkill
/// @address 6fdc20a0
/// Imported by ['D2Game.dll']
void __stdcall UNITS_InitLeftSkill(D2UnitStrc *pUnit);

/// @ordinal 10445
/// @name UNITS_InitSwitchRightSkill
/// @address 6fdc2110
/// Imported by ['D2Game.dll']
void __stdcall UNITS_InitSwitchRightSkill(D2UnitStrc *pUnit);

/// @ordinal 10446
/// @name UNITS_InitSwitchLeftSkill
/// @address 6fdc2180
/// Imported by ['D2Game.dll']
void __stdcall UNITS_InitSwitchLeftSkill(D2UnitStrc *pUnit);

/// @ordinal 10447
/// @name UNITS_GetRightSkillData
/// @address 6fdc21f0
/// Imported by ['D2Game.dll']
void __stdcall UNITS_GetRightSkillData(D2UnitStrc *pUnit, int *pRightSkillId, int *pRightSkillFlags);

/// @ordinal 10448
/// @name UNITS_GetLeftSkillData
/// @address 6fdc2250
/// Imported by ['D2Game.dll']
void __stdcall UNITS_GetLeftSkillData(D2UnitStrc *pUnit, int *pLeftSkillId, int *pLeftSkillFlags);

/// @ordinal 10449
/// @name UNITS_GetSwitchRightSkillDataResetRightSkill
/// @address 6fdc22b0
/// Imported by ['D2Game.dll']
void __stdcall UNITS_GetSwitchRightSkillDataResetRightSkill(D2UnitStrc *pUnit, int *pSwitchRightSkillId, int *pSwitchRightSkillFlags);

/// @ordinal 10450
/// @name UNITS_GetSwitchLeftSkillDataResetLeftSkill
/// @address 6fdc2330
/// Imported by ['D2Game.dll']
void __stdcall UNITS_GetSwitchLeftSkillDataResetLeftSkill(D2UnitStrc *pUnit, int *pSwitchLeftSkillId, int *pSwitchLeftSkillFlags);

/// @ordinal 10451
/// @name UNITS_GetSwitchLeftSkillData
/// @address 6fdc23b0
/// Imported by ['D2Game.dll']
void __stdcall UNITS_GetSwitchLeftSkillData(D2UnitStrc *pUnit, int *pSwitchLeftSkillId, int *pSwitchLeftSkillFlags);

/// @ordinal 10452
/// @name UNITS_GetSwitchRightSkillData
/// @address 6fdc2420
/// Imported by ['D2Game.dll']
void __stdcall UNITS_GetSwitchRightSkillData(D2UnitStrc *pUnit, int *pSwitchRightSkillId, int *pSwitchRightSkillFlags);

/// @ordinal 10453
/// @name UNITS_SetSwitchLeftSkill
/// @address 6fdc2490
/// Imported by ['D2Game.dll']
void __stdcall UNITS_SetSwitchLeftSkill(D2UnitStrc *pUnit, int nSwitchLeftSkillId, int nSwitchLeftSkillFlags);

/// @ordinal 10454
/// @name UNITS_SetSwitchRightSkill
/// @address 6fdc24e0
/// Imported by ['D2Game.dll']
void __stdcall UNITS_SetSwitchRightSkill(D2UnitStrc *pUnit, int nSwitchRightSkillId, int nSwitchRightSkillFlags);

/// @ordinal 10455
/// @name UNITS_SetWeaponGUID
/// @address 6fdc2530
/// Imported by ['D2Game.dll']
void __stdcall UNITS_SetWeaponGUID(D2UnitStrc *pUnit, D2UnitStrc *pWeapon);

/// @ordinal 10456
/// @name UNITS_GetWeaponGUID
/// @address 6fdc25b0
/// Imported by ['D2Game.dll']
int __stdcall UNITS_GetWeaponGUID(D2UnitStrc *pUnit);

/// @ordinal 10457
/// @name UNITS_GetDirection
/// @address 6fdbd520
/// Imported by ['D2Client.dll']
BYTE __stdcall UNITS_GetDirection(D2UnitStrc *pUnit);

/// @ordinal 10458
/// @name UNITS_SetTimerArg
/// @address 6fdc2720
/// Imported by ['D2Game.dll']
/// @guessedtype int()

/// @ordinal 10459
/// @name UNITS_GetTimerArg
/// @address 6fdc2750
/// Imported by ['D2Game.dll']
/// @guessedtype int()

/// @ordinal 10460
/// @name UNITS_AllocStaticPath
/// @address 6fdc2780
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_AllocStaticPath(D2UnitStrc *pUnit);

/// @ordinal 10461
/// @name UNITS_FreeStaticPath
/// @address 6fdc27c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_FreeStaticPath(D2UnitStrc *pUnit);

/// @ordinal 10462
/// @name UNITS_CanDualWield
/// @address 6fdc27f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall UNITS_CanDualWield(D2UnitStrc *pUnit);

/// @ordinal 10463
/// @name STATLIST_SetStat
/// @address 6fdb77b0
/// Imported by ['D2Game.dll']
int __stdcall STATLIST_SetStat(D2StatListExStrc *pList, int nStatId, int nValue, int nParam);

/// @ordinal 10464
/// @name STATLIST_AddStat
/// @address 6fdb7560
/// Imported by ['D2Game.dll']
void __stdcall STATLIST_AddStat(D2StatListExStrc *pStatList, int nStatId, int nValue, uint16_t nParam);

/// @ordinal 10465
/// @name STATLIST_SetStatIfListIsValid
/// @address 6fdb7910
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_SetStatIfListIsValid(D2StatListExStrc *pList, int nStatId, int nValue, int nParam);

/// @ordinal 10466
/// @name STATLIST_GetStatValue
/// @address 6fdb7d40
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall STATLIST_GetStatValue(D2StatListExStrc *pStatListEx, __int16 nStat, __int16 nLayer);

/// @ordinal 10467
/// @name 
/// @address 6fdb8120
/// Not imported by any .dll
int __stdcall(D2StatListStrc *pStatList, signed int nStat);

/// @ordinal 10468
/// @name STATLIST_RemoveAllStats
/// @address 6fdb8150
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_RemoveAllStats(D2StatListStrc *pStatList);

/// @ordinal 10469
/// @name 
/// @address 6fdb8cc0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10470
/// @name STATLIST_AllocStatList
/// @address 6fdb7140
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2StatListStrc *__stdcall STATLIST_AllocStatList(void *pMemPool, DWORD fFilter, DWORD dwTimeout, int nUnitType, DWORD dwUnitGUID);

/// @ordinal 10471
/// @name STATLIST_GetOwnerType
/// @address 6fdb7260
/// Imported by ['D2Game.dll']
DWORD __stdcall STATLIST_GetOwnerType(D2StatListStrc *pStatList);

/// @ordinal 10472
/// @name STATLIST_GetOwnerGUID
/// @address 6fd912d0
/// Imported by ['D2Game.dll']
DWORD __stdcall STATLIST_GetOwnerGUID(D2StatListStrc *pStatList);

/// @ordinal 10473
/// @name D2Common_10529_STATLIST_GetExpireFrame
/// @address 6fdb7320
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10529_STATLIST_GetExpireFrame(D2StatListStrc *pStatList);

/// @ordinal 10474
/// @name 
/// @address 6fdb91c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall(D2UnitStrc *pUnit, D2StatListExStrc *pStatList);

/// @ordinal 10475
/// @name PostStatToStatList
/// @address 6fdb7340
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PostStatToStatList(D2UnitStrc *pUnit, D2StatListStrc *pStatList, BOOL bReset);

/// @ordinal 10476
/// @name D2Common_10528_STATLIST_SetExpireFrame
/// @address 6fdb7300
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10528_STATLIST_SetExpireFrame(D2StatListStrc *pStatList, int nExpireFrame);

/// @ordinal 10477
/// @name STATLIST_SetStatRemoveCallback
/// @address 6fdb8ca0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_SetStatRemoveCallback(D2StatListStrc *pStatList, void *fpStatRemove);

/// @ordinal 10478
/// @name STATLIST_SetState
/// @address 6fdb72c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_SetState(D2StatListStrc *pStatList, int nState);

/// @ordinal 10479
/// @name STATLIST_GetState
/// @address 6fdb72e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall STATLIST_GetState(D2StatListStrc *pStatList);

/// @ordinal 10480
/// @name STATLIST_GetStatListFromUnitAndState
/// @address 6fdb81e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2StatListStrc *__stdcall STATLIST_GetStatListFromUnitAndState(D2UnitStrc *pUnit, int nState);

/// @ordinal 10481
/// @name STATLIST_GetStatListFromUnitAndFlag
/// @address 6fdb8230
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2StatListExStrc *__stdcall STATLIST_GetStatListFromUnitAndFlag(D2UnitStrc *pItem, DWORD dwFlag);

/// @ordinal 10482
/// @name STATLIST_GetStatListFromFlag
/// @address 6fdb8200
/// Imported by ['D2Client.dll']
D2StatListExStrc *__stdcall STATLIST_GetStatListFromFlag(D2StatListExStrc *pStatListEx, int a2);

/// @ordinal 10483
/// @name STATLIST_GetStatListFromUnitStateOrFlag
/// @address 6fdb8270
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2StatListExStrc *__stdcall STATLIST_GetStatListFromUnitStateOrFlag(D2UnitStrc *pUnit, int nStateId, DWORD dwFlag);

/// @ordinal 10484
/// @name STATLIST_GetStatListFromUnitStateAndFlag
/// @address 6fdb82c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2StatListExStrc *__stdcall STATLIST_GetStatListFromUnitStateAndFlag(D2UnitStrc *pUnit, int nState, DWORD dwFlag);

/// @ordinal 10485
/// @name STATLIST_FreeStatList
/// @address 6fdb7030
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_FreeStatList(D2StatListStrc *pStatList);

/// @ordinal 10486
/// @name STATES_ToggleState
/// @address 6fdb4560
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATES_ToggleState(D2UnitStrc *pUnit, int nState, BOOL bSet);

/// @ordinal 10487
/// @name STATES_CheckState
/// @address 6fdb45a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall STATES_CheckState(D2UnitStrc *pUnit, int nState);

/// @ordinal 10488
/// @name STATES_ToggleGfxStateFlag
/// @address 6fdb45f0
/// Imported by ['D2Game.dll']
void __stdcall STATES_ToggleGfxStateFlag(D2UnitStrc *pUnit, int nState, BOOL bSet);

/// @ordinal 10489
/// @name STATES_CheckGfxStateFlag
/// @address 6fdb4670
/// Not imported by any .dll
BOOL __stdcall STATES_CheckGfxStateFlag(D2UnitStrc *pUnit, int nState);

/// @ordinal 10490
/// @name STATES_IsAnyGfxStateFlagSet
/// @address 6fdb4710
/// Imported by ['D2Game.dll']
BOOL __stdcall STATES_IsAnyGfxStateFlagSet(D2UnitStrc *pUnit);

/// @ordinal 10491
/// @name STATES_ClearGfxStateFlags
/// @address 6fdb46c0
/// Imported by ['D2Game.dll']
void __stdcall STATES_ClearGfxStateFlags(D2UnitStrc *pUnit);

/// @ordinal 10492
/// @name STATES_GetGfxStateFlags
/// @address 6fdb4760
/// Imported by ['D2Game.dll']
DWORD *__stdcall STATES_GetGfxStateFlags(D2UnitStrc *pUnit);

/// @ordinal 10493
/// @name STATES_UpdateStayDeathFlags
/// @address 6fdb4790
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit, int)

/// @ordinal 10494
/// @name STATES_GetStatFlags
/// @address 6fdb48f0
/// Imported by ['D2Game.dll']
DWORD *__stdcall STATES_GetStatFlags(D2UnitStrc *pUnit);

/// @ordinal 10495
/// @name STATES_GetNumberOfStateFlags
/// @address 6fdb4900
/// Not imported by any .dll
int __fastcall STATES_GetNumberOfStateFlags();

/// @ordinal 10496
/// @name STATES_CheckStateMaskAuraByStateId
/// @address 6fdb4920
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskAuraByStateId(int nState);

/// @ordinal 10497
/// @name STATES_CheckStateMaskCurseByStateId
/// @address 6fdb4e80
/// Imported by ['D2Game.dll']
BOOL __stdcall STATES_CheckStateMaskCurseByStateId(int nState);

/// @ordinal 10498
/// @name STATES_CheckStateMaskCurableByStateId
/// @address 6fdb4ec0
/// Imported by ['D2Game.dll']
BOOL __stdcall STATES_CheckStateMaskCurableByStateId(int nState);

/// @ordinal 10500
/// @name STATES_CheckStateMaskPgsvByStateId
/// @address 6fdb49d0
/// Not imported by any .dll
BOOL __stdcall STATES_CheckStateMaskPgsvByStateId(int nState);

/// @ordinal 10501
/// @name STATES_UpdatePgsvFlags
/// @address 6fdb4a80
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10502
/// @name STATES_CheckStateMaskActiveOnUnit
/// @address 6fdb4bc0
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskActiveOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10503
/// @name STATES_CheckStateMaskAuraOnUnit
/// @address 6fdb4960
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskAuraOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10511
/// @name STATLIST_FreeModStats
/// @address 6fdb85d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_FreeModStats(D2UnitStrc *pUnit);

/// @ordinal 10512
/// @name 
/// @address 6fdb8420
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 10513
/// @name 
/// @address 6fdb84e0
/// Imported by ['D2Game.dll']
void __stdcall(D2UnitStrc *pUnit1, D2UnitStrc *pUnit2, void (__fastcall *pfCallback)(_DWORD, _DWORD, _DWORD, _DWORD));

/// @ordinal 10514
/// @name STATLIST_ClampStaminaManaHP
/// @address 6fdb8d30
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_ClampStaminaManaHP(D2UnitStrc *pUnit);

/// @ordinal 10515
/// @name STATLIST_DeactivateTemporaryStates
/// @address 6fdb80c0
/// Imported by ['D2Client.dll']
void __stdcall STATLIST_DeactivateTemporaryStates(D2UnitStrc *pUnit);

/// @ordinal 10516
/// @name STATLIST_UpdateStatListsExpiration
/// @address 6fdb8b10
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_UpdateStatListsExpiration(D2UnitStrc *pUnit, int nFrame);

/// @ordinal 10517
/// @name STATLIST_SetUnitStat
/// @address 6fdb7ab0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_SetUnitStat(D2UnitStrc *pUnit, int nStat, int nValue, int nParam);

/// @ordinal 10518
/// @name STATLIST_AddUnitStat
/// @address 6fdb7b00
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_AddUnitStat(D2UnitStrc *pUnit, int nStat, int nValue, int nParam);

/// @ordinal 10519
/// @name STATLIST_UnitGetStatValue
/// @address 6fdb7c30
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall STATLIST_UnitGetStatValue(D2UnitStrc *pUnit, int nStat, WORD nLayer);

/// @ordinal 10520
/// @name STATLIST_UnitGetItemStatOrSkillStatValue
/// @address 6fdb7e30
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall STATLIST_UnitGetItemStatOrSkillStatValue(D2UnitStrc *pUnit, int nStat, WORD nLayer);

/// @ordinal 10521
/// @name STATLIST_GetUnitBaseStat
/// @address 6fdb7b30
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall STATLIST_GetUnitBaseStat(D2UnitStrc *pUnit, int nStat, int nParam);

/// @ordinal 10522
/// @name STATLIST_GetUnitStatBonus
/// @address 6fdb7f40
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall STATLIST_GetUnitStatBonus(D2UnitStrc *pUnit, int nStatId, uint16_t nLayer);

/// @ordinal 10523
/// @name STATLIST_MergeStatLists
/// @address 6fdb8310
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_MergeStatLists(D2UnitStrc *pTarget, D2UnitStrc *pUnit, BOOL bType);

/// @ordinal 10524
/// @name STATLIST_ExpireUnitStatlist
/// @address 6fdb9ae0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_ExpireUnitStatlist(D2UnitStrc *pOwner, D2UnitStrc *pUnit);

/// @ordinal 10525
/// @name 
/// @address 6fdb8f30
/// Imported by ['D2Game.dll']
void __stdcall(D2UnitStrc *pItemGem, D2UnitStrc *pItemToSocket);

/// @ordinal 10526
/// @name STATLIST_AllocStatListEx
/// @address 6fdb7190
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pUnit, int nFlags, int pCallbackFunc, int pGame)

/// @ordinal 10527
/// @name STATLIST_FreeStatListEx
/// @address 6fdb7110
/// Not imported by any .dll
void __stdcall STATLIST_FreeStatListEx(D2UnitStrc *pUnit);

/// @ordinal 10528
/// @name STATLIST_SetExpireFrame
/// @address 6fdb7300
/// Imported by ['D2Game.dll']
void __stdcall STATLIST_SetExpireFrame(D2StatListStrc *pStatList, int nExpireFrame);

/// @ordinal 10529
/// @name STATLIST_GetExpireFrame
/// @address 6fdb7320
/// Imported by ['D2Game.dll']
int __stdcall STATLIST_GetExpireFrame(D2StatListStrc *pStatList);

/// @ordinal 10530
/// @name D2CheckStatlistFlagDMGRed
/// @address 6fdb8770
/// Imported by ['D2Game.dll']
DWORD __stdcall D2CheckStatlistFlagDMGRed(D2UnitStrc *pUnit);

/// @ordinal 10531
/// @name SetStatInStatListLayer0
/// @address 6fdb9b00
/// Not imported by any .dll
int __stdcall SetStatInStatListLayer0(D2StatListStrc *pList, int nStatId, int nValue, int nUnused);

/// @ordinal 10532
/// @name STATLIST_GetTotalStatValue_Layer0
/// @address 6fdb87a0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10533
/// @name STATLIST_RemoveAllStatsFromOverlay
/// @address 6fdb8890
/// Imported by ['D2Game.dll']
void __stdcall STATLIST_RemoveAllStatsFromOverlay(D2UnitStrc *pUnit);

/// @ordinal 10534
/// @name 
/// @address 6fdb8750
/// Not imported by any .dll
void __stdcall(D2UnitStrc *pUnit);

/// @ordinal 10535
/// @name STATLIST_GetOwner
/// @address 6fdb83a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall STATLIST_GetOwner(D2UnitStrc *pUnit, BOOL *pDynamic);

/// @ordinal 10536
/// @name STATES_CheckStateMaskBlueOnUnit
/// @address 6fdb4fc0
/// Not imported by any .dll
BOOL __stdcall STATES_CheckStateMaskBlueOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10537
/// @name STATES_CheckStateMaskAttBlueOnUnit
/// @address 6fdb4d80
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskAttBlueOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10538
/// @name STATES_CheckStateMaskDamBlueOnUnit
/// @address 6fdb4ca0
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskDamBlueOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10539
/// @name STATES_CheckStateMaskArmBlueOnUnit
/// @address 6fdb5030
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskArmBlueOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10540
/// @name STATES_CheckStateMaskRFBlueOnUnit
/// @address 6fdb50a0
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskRFBlueOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10541
/// @name STATES_CheckStateMaskRCBlueOnUnit
/// @address 6fdb5110
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskRCBlueOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10542
/// @name STATES_CheckStateMaskRLBlueOnUnit
/// @address 6fdb5180
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskRLBlueOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10543
/// @name STATES_CheckStateMaskRPBlueOnUnit
/// @address 6fdb51f0
/// Imported by ['D2Client.dll']
DWORD __stdcall STATES_CheckStateMaskRPBlueOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10544
/// @name STATES_CheckStateMaskAttRedOnUnit
/// @address 6fdb4df0
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskAttRedOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10545
/// @name STATES_CheckStateMaskDamRedOnUnit
/// @address 6fdb4d10
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskDamRedOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10546
/// @name STATES_CheckStateMaskArmRedOnUnit
/// @address 6fdb5260
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskArmRedOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10547
/// @name STATES_CheckStateMaskRFRedOnUnit
/// @address 6fdb52d0
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskRFRedOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10548
/// @name STATES_CheckStateMaskRCRedOnUnit
/// @address 6fdb5340
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskRCRedOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10549
/// @name STATES_CheckStateMaskRLRedOnUnit
/// @address 6fdb53b0
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskRLRedOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10550
/// @name STATES_CheckStateMaskRPRedOnUnit
/// @address 6fdb5420
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskRPRedOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10551
/// @name STATES_IsUnitShapeShifted
/// @address 6fdb4e60
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall STATES_IsUnitShapeShifted(D2UnitStrc *pUnit);

/// @ordinal 10552
/// @name STATES_CheckStateMaskExpOnUnit
/// @address 6fdb5490
/// Imported by ['D2Game.dll']
BOOL __stdcall STATES_CheckStateMaskExpOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10553
/// @name STATES_CheckStateMaskExpByStateId
/// @address 6fdb5500
/// Imported by ['D2Game.dll', 'D2Server.dll']
BOOL __stdcall STATES_CheckStateMaskExpByStateId(int nState);

/// @ordinal 10554
/// @name STATES_CheckStateMaskStayDeathOnUnitByStateId
/// @address 6fdb4f00
/// Imported by ['D2Game.dll', 'D2Server.dll']
BOOL __stdcall STATES_CheckStateMaskStayDeathOnUnitByStateId(D2UnitStrc *pUnit, int nState);

/// @ordinal 10555
/// @name STATES_CheckStateMaskShatterOnUnit
/// @address 6fdb5540
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskShatterOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10556
/// @name STATES_CheckStateMaskShatterByStateId
/// @address 6fdb55b0
/// Not imported by any .dll
BOOL __stdcall STATES_CheckStateMaskShatterByStateId(int nState);

/// @ordinal 10557
/// @name STATES_CheckStateMaskHideOnUnit
/// @address 6fdb4b50
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall STATES_CheckStateMaskHideOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10558
/// @name STATES_CheckStateMaskHideByStateId
/// @address 6fdb4b20
/// Not imported by any .dll
BOOL __stdcall STATES_CheckStateMaskHideByStateId(int nState);

/// @ordinal 10559
/// @name STATES_CheckStateMaskLifeOnUnit
/// @address 6fdb55f0
/// Imported by ['D2Game.dll']
BOOL __stdcall STATES_CheckStateMaskLifeOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10560
/// @name STATES_CheckStateMaskUdeadOnUnit
/// @address 6fdb5660
/// Imported by ['D2Game.dll']
BOOL __stdcall STATES_CheckStateMaskUdeadOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10561
/// @name STATES_CheckStateMaskGreenOnUnit
/// @address 6fdb56d0
/// Imported by ['D2Client.dll']
BOOL __stdcall STATES_CheckStateMaskGreenOnUnit(D2UnitStrc *pUnit);

/// @ordinal 10562
/// @name STATLIST_GetUnitAlignment
/// @address 6fdb8620
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall STATLIST_GetUnitAlignment(D2UnitStrc *pUnit);

/// @ordinal 10563
/// @name STATLIST_AreUnitsAligned
/// @address 6fdb57c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall STATLIST_AreUnitsAligned(D2UnitStrc *pUnit1, D2UnitStrc *pUnit2);

/// @ordinal 10564
/// @name STATLIST_GetMaxLifeFromUnit
/// @address 6fdb91d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall STATLIST_GetMaxLifeFromUnit(D2UnitStrc *pUnit);

/// @ordinal 10565
/// @name STATLIST_GetMaxManaFromUnit
/// @address 6fdb92c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall STATLIST_GetMaxManaFromUnit(D2UnitStrc *pUnit);

/// @ordinal 10566
/// @name STATLIST_GetMaxStaminaFromUnit
/// @address 6fdb93b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall STATLIST_GetMaxStaminaFromUnit(D2UnitStrc *pUnit);

/// @ordinal 10567
/// @name STATLIST_GetMaxDurabilityFromUnit
/// @address 6fdb94a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall STATLIST_GetMaxDurabilityFromUnit(D2UnitStrc *pUnit);

/// @ordinal 10568
/// @name STATLIST_GetMaxDamageFromUnit
/// @address 6fdb95d0
/// Imported by ['D2Client.dll']
int __stdcall STATLIST_GetMaxDamageFromUnit(D2UnitStrc *pUnit, int a2);

/// @ordinal 10569
/// @name STATLIST_GetMinDamageFromUnit
/// @address 6fdb96f0
/// Imported by ['D2Client.dll']
int __stdcall STATLIST_GetMinDamageFromUnit(D2UnitStrc *pUnit, int a2);

/// @ordinal 10570
/// @name STATLIST_GetMaxThrowDamageFromUnit
/// @address 6fdb9810
/// Not imported by any .dll
int __stdcall STATLIST_GetMaxThrowDamageFromUnit(D2UnitStrc *pUnit);

/// @ordinal 10571
/// @name STATLIST_GetMinThrowDamageFromUnit
/// @address 6fdb9900
/// Not imported by any .dll
int __stdcall STATLIST_GetMinThrowDamageFromUnit(D2UnitStrc *pUnit);

/// @ordinal 10572
/// @name STATLIST_GetDefenseFromUnit
/// @address 6fdb99f0
/// Imported by ['D2Client.dll']
int __stdcall STATLIST_GetDefenseFromUnit(D2UnitStrc *pUnit);

/// @ordinal 10573
/// @name STATLIST_MergeBaseStats
/// @address 6fdb8c50
/// Imported by ['D2Client.dll']
void __stdcall STATLIST_MergeBaseStats(D2StatListStrc *pTargetStatlist, D2StatListStrc *pSourceStatlist);

/// @ordinal 10574
/// @name 
/// @address 6fdb8eb0
/// Not imported by any .dll
BOOL __stdcall(D2UnitStrc *pUnit, int nStateId, int a3);

/// @ordinal 10575
/// @name DATATBLS_UnloadAllBins
/// @address 6fd50150
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_UnloadAllBins();

/// @ordinal 10576
/// @name DATATBLS_LoadAllTxts
/// @address 6fd504b0
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_LoadAllTxts(void *pMemPool, int a2, int a3);

/// @ordinal 10578
/// @name DATATBLS_CompileTxt
/// @address 6fd4fd70
/// Not imported by any .dll
void *__stdcall DATATBLS_CompileTxt(void *pMemPool, char *szName, D2BinFieldStrc *pTbl, int *pRecordCount, int nSize);

/// @ordinal 10579
/// @name DATATBLS_UnloadBin
/// @address 6fd50110
/// Not imported by any .dll
void __stdcall DATATBLS_UnloadBin(void *pBinFile);

/// @ordinal 10580
/// @name DATATBLS_WriteBinFile
/// @address 6fd4fcf0
/// Not imported by any .dll
void __stdcall DATATBLS_WriteBinFile(char *szFileName, void *pWriteBuffer, size_t Size, char Str);

/// @ordinal 10583
/// @name DATATBLS_GetHirelingTxtRecordFromIdAndLevel
/// @address 6fd6b1d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2HirelingTxt *__stdcall DATATBLS_GetHirelingTxtRecordFromIdAndLevel(BOOL bExpansion, int nId, int nLevel);

/// @ordinal 10584
/// @name DATATBLS_GetNextHirelingTxtRecordFromActAndDifficulty
/// @address 6fd6b440
/// Imported by ['D2Game.dll']
D2HirelingTxt *__stdcall DATATBLS_GetNextHirelingTxtRecordFromActAndDifficulty(BOOL bExpansion, int nAct, int nDifficulty, D2HirelingTxt *pRecord);

/// @ordinal 10585
/// @name DATATBLS_GetNextHirelingTxtRecordFromNameId
/// @address 6fd6b270
/// Not imported by any .dll
D2HirelingTxt *__stdcall DATATBLS_GetNextHirelingTxtRecordFromNameId(BOOL bExpansion, WORD nNameId, _DWORD a3);

/// @ordinal 10586
/// @name DATATBLS_GetNextHirelingTxtRecordFromClassId
/// @address 6fd6b310
/// Not imported by any .dll
D2HirelingTxt *__stdcall DATATBLS_GetNextHirelingTxtRecordFromClassId(BOOL bExpansion, int nClass, _DWORD a3);

/// @ordinal 10587
/// @name DATATBLS_GetNextHirelingTxtRecordFromVendorIdAndDifficulty
/// @address 6fd6b3a0
/// Imported by ['D2Game.dll']
D2HirelingTxt *__stdcall DATATBLS_GetNextHirelingTxtRecordFromVendorIdAndDifficulty(DWORD bExpansion, DWORD dwVendorId, DWORD dwDifficulty, _DWORD a4);

/// @ordinal 10588
/// @name DATATBLS_GetNpcTxtRecord
/// @address 6fd6b820
/// Not imported by any .dll
D2NpcTxt *__stdcall DATATBLS_GetNpcTxtRecord(DWORD dwNpcId);

/// @ordinal 10590
/// @name DATATBLS_GetMissileVelocityFromMissilesTxt
/// @address 6fd64be0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10592
/// @name DATATBLS_GetMonsterChainInfo
/// @address 6fd64c40
/// Imported by ['D2Game.dll']
int __stdcall DATATBLS_GetMonsterChainInfo(int nMonsterId, int *pMaxChainId, int *pChainId);

/// @ordinal 10593
/// @name DATATBLS_GetCharstatsTxtTable
/// @address 6fd4e4b0
/// Not imported by any .dll
D2CharStatsTxt *__fastcall DATATBLS_GetCharstatsTxtTable();

/// @ordinal 10596
/// @name DATATBLS_GetArenaTxtRecord
/// @address 6fd47970
/// Imported by ['D2Game.dll']
/// @guessedtype int()

/// @ordinal 10597
/// @name DATATBLS_MapOldItemIndexToCurrent
/// @address 6fd57630
/// Imported by ['D2Game.dll']
signed int __stdcall DATATBLS_MapOldItemIndexToCurrent(int nItemId);

/// @ordinal 10599
/// @name DATATBLS_GetItemDataTables
/// @address 6fd57620
/// Imported by ['D2Game.dll']
D2ItemDataTbl *__stdcall DATATBLS_GetItemDataTables();

/// @ordinal 10600
/// @name DATATBLS_GetItemsTxtRecord
/// @address 6fd57680
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2ItemsTxt *__stdcall DATATBLS_GetItemsTxtRecord(DWORD dwItemNo);

/// @ordinal 10601
/// @name DATATBLS_GetItemRecordFromItemCode
/// @address 6fd576d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2ItemsTxt *__stdcall DATATBLS_GetItemRecordFromItemCode(DWORD dwCode, int *pItemId);

/// @ordinal 10602
/// @name DATATBLS_GetItemIdFromItemCode
/// @address 6fd57720
/// Imported by ['D2Game.dll']
int __stdcall DATATBLS_GetItemIdFromItemCode(DWORD dwCode);

/// @ordinal 10603
/// @name DATATBLS_GetMagicAffixDataTables
/// @address 6fd580b0
/// Imported by ['D2Game.dll']
D2MagicAffixInfoStrc *__stdcall DATATBLS_GetMagicAffixDataTables();

/// @ordinal 10604
/// @name DATATBLS_GetMagicAffixTxtRecord
/// @address 6fd580c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2MagicAffixTxt *__stdcall DATATBLS_GetMagicAffixTxtRecord(int nIndex);

/// @ordinal 10605
/// @name DATATBLS_GetRareAffixDataTables
/// @address 6fd58480
/// Imported by ['D2Game.dll']
D2RareAffixDataTbl *__fastcall DATATBLS_GetRareAffixDataTables();

/// @ordinal 10606
/// @name DATATBLS_GetRareAffixTxtRecord
/// @address 6fd58490
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int nId)

/// @ordinal 10611
/// @name DATATBLS_GetQualityItemDataTables
/// @address 6fd5b260
/// Imported by ['D2Game.dll']
D2QualityItemDataTbl *__fastcall DATATBLS_GetQualityItemDataTables();

/// @ordinal 10612
/// @name DATATBLS_GetQualityItemsTxtRecord
/// @address 6fd5b270
/// Imported by ['D2Game.dll']
D2QualityItemsTxt *__stdcall DATATBLS_GetQualityItemsTxtRecord(int nIndex);

/// @ordinal 10613
/// @name DATATBLS_GetLowQualityItemDataTables
/// @address 6fd5be50
/// Imported by ['D2Game.dll']
D2LowQualityItemDataTbl *__fastcall DATATBLS_GetLowQualityItemDataTables();

/// @ordinal 10614
/// @name DATATBLS_GetLowQualityItemsTxtRecord
/// @address 6fd5be60
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int nId)

/// @ordinal 10615
/// @name DATATBLS_GetGemDataTables
/// @address 6fd5baf0
/// Not imported by any .dll
D2GemDataTbl *__fastcall DATATBLS_GetGemDataTables();

/// @ordinal 10616
/// @name DATATBLS_GetGemsTxtRecord
/// @address 6fd5bb00
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2GemsTxt *__stdcall DATATBLS_GetGemsTxtRecord(int nGemId);

/// @ordinal 10617
/// @name DATATBLS_GetBookDataTables
/// @address 6fd5bd20
/// Imported by ['D2Game.dll']
D2BookDataTbl *__fastcall DATATBLS_GetBookDataTables();

/// @ordinal 10618
/// @name DATATBLS_GetBooksTxtRecord
/// @address 6fd5bd30
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int nBookId)

/// @ordinal 10619
/// @name DATATBLS_GetRuneDataTables
/// @address 6fd5e9e0
/// Not imported by any .dll
D2RuneDataTbl *__fastcall DATATBLS_GetRuneDataTables();

/// @ordinal 10620
/// @name DATATBLS_GetRunesTxtRecord
/// @address 6fd5eaa0
/// Not imported by any .dll
D2RunesTxt *__stdcall DATATBLS_GetRunesTxtRecord(int nRunewordId);

/// @ordinal 10621
/// @name DATATBLS_AddOrChangeRunesTxtRecord
/// @address 6fd5e9f0
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_AddOrChangeRunesTxtRecord(int nRecordIdx, D2RunesTxt *pRecord);

/// @ordinal 10622
/// @name DATATBLS_GetItemRatioDataTables
/// @address 6fd5c210
/// Not imported by any .dll
D2ItemRatioDataTbl *__fastcall DATATBLS_GetItemRatioDataTables();

/// @ordinal 10623
/// @name DATATBLS_GetItemRatioTxtRecord
/// @address 6fd5c220
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int nItemId, char nDifficulty, __int16 wVersion)

/// @ordinal 10624
/// @name DATATBLS_GetShrinesTxtRecord
/// @address 6fd72000
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int nShrineId)

/// @ordinal 10625
/// @name DATATBLS_GetShrinesTxtRecordCount
/// @address 6fd72070
/// Imported by ['D2Game.dll']
int __stdcall DATATBLS_GetShrinesTxtRecordCount();

/// @ordinal 10626
/// @name DATATBLS_GetObjectsTxtRecord
/// @address 6fd718f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2ObjectsTxt *__stdcall DATATBLS_GetObjectsTxtRecord(int nObjectId);

/// @ordinal 10627
/// @name DATATBLS_GetObjGroupTxtRecord
/// @address 6fd71e00
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int nId)

/// @ordinal 10628
/// @name DATATBLS_GetLevelThreshold
/// @address 6fd496b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall DATATBLS_GetLevelThreshold(int nClass, DWORD dwLevel);

/// @ordinal 10629
/// @name DATATBLS_GetMaxLevel
/// @address 6fd496e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall DATATBLS_GetMaxLevel(int nClass);

/// @ordinal 10630
/// @name DATATBLS_GetCurrentLevelFromExp
/// @address 6fd49710
/// Imported by ['D2Game.dll']
DWORD __stdcall DATATBLS_GetCurrentLevelFromExp(int nClass, DWORD dwExperience);

/// @ordinal 10631
/// @name DATATBLS_GetLevelsTxtRecord
/// @address 6fd603c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2LevelsTxt *__stdcall DATATBLS_GetLevelsTxtRecord(int nLevelId);

/// @ordinal 10632
/// @name DATATBLS_GetRainFromLevelsTxt
/// @address 6fd603f0
/// Imported by ['D2Client.dll']
BYTE __stdcall DATATBLS_GetRainFromLevelsTxt(int nLevelId);

/// @ordinal 10633
/// @name DATATBLS_GetMudFromLevelsTxt
/// @address 6fd60470
/// Imported by ['D2Client.dll']
BYTE __stdcall DATATBLS_GetMudFromLevelsTxt(int nLevelId);

/// @ordinal 10634
/// @name DATATBLS_GetNoPerFromLevelsTxt
/// @address 6fd60430
/// Imported by ['D2Client.dll']
BYTE __stdcall DATATBLS_GetNoPerFromLevelsTxt(int nLevelId);

/// @ordinal 10635
/// @name DATATBLS_GetInventoryRect
/// @address 6fd54f20
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_GetInventoryRect(int nInventoryTxtId, int bHigherRes, D2InvRectStrc *pInvRect);

/// @ordinal 10636
/// @name DATATBLS_GetInventoryGridInfo
/// @address 6fd54fb0
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_GetInventoryGridInfo(int nInventoryRecordId, BOOL bHigherRes, D2InventoryGridInfoStrc *pInventoryGridInfo);

/// @ordinal 10637
/// @name DATATBLS_GetInventoryComponentGrid
/// @address 6fd55030
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_GetInventoryComponentGrid(int nInventoryTxtId, int bHigherRes, D2InvCompGridStrc *pInvCompGrid, int nComponent);

/// @ordinal 10638
/// @name DATATBLS_GetBeltsTxtRecord
/// @address 6fd493b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall DATATBLS_GetBeltsTxtRecord(int nIndex, int bHigherRes, D2BeltsTxt *pBeltsTxtRecord);

/// @ordinal 10639
/// @name DATATBLS_GetInvRectFromBeltsTxt
/// @address 6fd49420
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_GetInvRectFromBeltsTxt(int nIndex, int bHigherRes, D2InvRectStrc *pInvRect, int a4);

/// @ordinal 10640
/// @name DATATBLS_UnitAnimInfoDebugSet
/// @address 6fd475d0
/// Not imported by any .dll
void __stdcall DATATBLS_UnitAnimInfoDebugSet(D2UnitStrc *pUnit, int animSpeed);

/// @ordinal 10641
/// @name DATATBLS_GetAnimDataInfo
/// @address 6fd47700
/// Not imported by any .dll
signed int __stdcall DATATBLS_GetAnimDataInfo(char *szPath, int *pLength, int *pOutAnimSpeed, int *pOutFirstFrameTagged);

/// @ordinal 10642
/// @name DATATBLS_SetVelocityInMonStatsTxtRecord
/// @address 6fd689b0
/// Not imported by any .dll
__int16 __stdcall DATATBLS_SetVelocityInMonStatsTxtRecord(int nMonsterId, WORD nVelocity);

/// @ordinal 10643
/// @name DATATBLS_GetPlrMode_TypeDataTables
/// @address 6fd73150
/// Not imported by any .dll
D2PlrModeDataTbl *__fastcall DATATBLS_GetPlrMode_TypeDataTables();

/// @ordinal 10644
/// @name DATATBLS_GetMonModeDataTables
/// @address 6fd73160
/// Not imported by any .dll
D2MonModeDataTbl *__fastcall DATATBLS_GetMonModeDataTables();

/// @ordinal 10645
/// @name DATATBLS_GetObjMode_TypeDataTables
/// @address 6fd73170
/// Not imported by any .dll
D2ObjModeDataTbl *__fastcall DATATBLS_GetObjMode_TypeDataTables();

/// @ordinal 10646
/// @name DATATBLS_GetPlrModeTypeTxtRecord
/// @address 6fd73180
/// Imported by ['D2Client.dll']
D2PlrModeTypeTxt *__stdcall DATATBLS_GetPlrModeTypeTxtRecord(unsigned int nIndex, int bGetMode);

/// @ordinal 10647
/// @name DATATBLS_GetMonModeTxtRecord
/// @address 6fd73230
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int nIndex, int bGetMode)

/// @ordinal 10648
/// @name DATATBLS_GetObjModeTypeTxtRecord
/// @address 6fd732b0
/// Imported by ['D2Client.dll']
D2ObjModeTypeTxt *__stdcall DATATBLS_GetObjModeTypeTxtRecord(unsigned int nIndex, int bGetMode);

/// @ordinal 10649
/// @name DATATBLS_GetCompositTxtRecord
/// @address 6fd73330
/// Imported by ['D2Client.dll']
/// @guessedtype int __cdecl(int nComposit)

/// @ordinal 10650
/// @name DATATBLS_GetArmTypeTxtRecord
/// @address 6fd73370
/// Imported by ['D2Client.dll']
D2ArmTypeTxt *__stdcall DATATBLS_GetArmTypeTxtRecord(int nId);

/// @ordinal 10651
/// @name DATATBLS_RollRandomUniqueTitleString
/// @address 6fd68a10
/// Not imported by any .dll
wchar_t *__fastcall DATATBLS_RollRandomUniqueTitleString(D2UnitStrc *pUnit);

/// @ordinal 10652
/// @name DATATBLS_RollRandomUniquePrefixString
/// @address 6fd68a80
/// Imported by ['D2Client.dll']
wchar_t *__fastcall DATATBLS_RollRandomUniquePrefixString(D2UnitStrc *pUnit);

/// @ordinal 10653
/// @name DATATBLS_RollRandomUniqueSuffixString
/// @address 6fd68af0
/// Imported by ['D2Client.dll']
wchar_t *__fastcall DATATBLS_RollRandomUniqueSuffixString(D2UnitStrc *pUnit);

/// @ordinal 10654
/// @name DATATBLS_RollRandomUniqueAppellationString
/// @address 6fd68b60
/// Imported by ['D2Client.dll']
wchar_t *__fastcall DATATBLS_RollRandomUniqueAppellationString(D2UnitStrc *pUnit);

/// @ordinal 10655
/// @name DATATBLS_GetDifficultyLevelsTxtRecord
/// @address 6fd4e4d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int nDifficulty)

/// @ordinal 10656
/// @name DATATBLS_ShouldNeverCallInExpansion
/// @address 6fd69b70
/// Not imported by any .dll
int __stdcall DATATBLS_ShouldNeverCallInExpansion();

/// @ordinal 10658
/// @name DATATBLS_GetTreasureClassExRecordFromName
/// @address 6fd68dc0
/// Not imported by any .dll
D2TCExShortStrc *__stdcall DATATBLS_GetTreasureClassExRecordFromName(char *szName);

/// @ordinal 10659
/// @name DATATBLS_GetTreasureClassExRecordFromIdAndLevel
/// @address 6fd68df0
/// Imported by ['D2Game.dll']
D2TCExShortStrc *__stdcall DATATBLS_GetTreasureClassExRecordFromIdAndLevel(WORD wTCId, int nLvl);

/// @ordinal 10660
/// @name DATATBLS_GetTreasureClassExRecordFromActAndDifficulty
/// @address 6fd68e50
/// Imported by ['D2Game.dll']
D2TCExShortStrc *__stdcall DATATBLS_GetTreasureClassExRecordFromActAndDifficulty(int nDifficulty, int nAct, int nIndex);

/// @ordinal 10661
/// @name D2Common_11079_Return0
/// @address 6fd9fb40
/// Not imported by any .dll
int __stdcall D2Common_11079_Return0(int arg, int a2);

/// @ordinal 10662
/// @name DATATBLS_GetMonItemPercentDataTables
/// @address 6fd69c50
/// Not imported by any .dll
D2MonItemPercentDataTbl *__fastcall DATATBLS_GetMonItemPercentDataTables();

/// @ordinal 10663
/// @name DATATBLS_GetMonItemPercentTxtRecord
/// @address 6fd69c60
/// Not imported by any .dll
/// @guessedtype int __stdcall(int nId)

/// @ordinal 10664
/// @name DATATBLS_GetCharTemplateTxtRecordCount
/// @address 6fd48790
/// Not imported by any .dll
int __fastcall DATATBLS_GetCharTemplateTxtRecordCount();

/// @ordinal 10665
/// @name DATATBLS_GetCharTemplateTxtRecord
/// @address 6fd487a0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10666
/// @name DATATBLS_GetClassFromCharTemplateTxtRecord
/// @address 6fd48810
/// Imported by ['D2Game.dll']
int __fastcall DATATBLS_GetClassFromCharTemplateTxtRecord(int nTemplate, int nLevel);

/// @ordinal 10667
/// @name DATATBLS_UNUSED_Return0
/// @address 6fd733b0
/// Not imported by any .dll
int __stdcall DATATBLS_UNUSED_Return0(int a1, int a2);

/// @ordinal 10668
/// @name DATATBLS_GetSuperUniquesTxtRecord
/// @address 6fd6a440
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int nSuperUniqueId)

/// @ordinal 10671
/// @name DATATBLS_GetGambleDataTables
/// @address 6fd5d7f0
/// Imported by ['D2Game.dll']
D2GambleDataTbl *__cdecl DATATBLS_GetGambleDataTables();

/// @ordinal 10674
/// @name DATATBLS_GetFramesFromOverlayTxt
/// @address 6fd72530
/// Not imported by any .dll
DWORD __stdcall DATATBLS_GetFramesFromOverlayTxt(int nOverlayId);

/// @ordinal 10675
/// @name DATABLS_GetPreDrawFromOverlayTxt
/// @address 6fd72570
/// Not imported by any .dll
int __stdcall DATABLS_GetPreDrawFromOverlayTxt(int nOverlayId);

/// @ordinal 10676
/// @name DATATBLS_GetOffsetXFromOverlayTxt
/// @address 6fd725b0
/// Not imported by any .dll
DWORD __stdcall DATATBLS_GetOffsetXFromOverlayTxt(int nOverlayId);

/// @ordinal 10677
/// @name DATATBLS_GetOffsetYFromOverlayTxt
/// @address 6fd725f0
/// Not imported by any .dll
DWORD __stdcall DATATBLS_GetOffsetYFromOverlayTxt(int nOverlayId);

/// @ordinal 10678
/// @name DATATBLS_GetTransFromOverlayTxt
/// @address 6fd72630
/// Not imported by any .dll
int __stdcall DATATBLS_GetTransFromOverlayTxt(int nOverlayId);

/// @ordinal 10679
/// @name DATATBLS_GetRadiusAndColorFromOverlayTxt
/// @address 6fd72670
/// Not imported by any .dll
int __stdcall DATATBLS_GetRadiusAndColorFromOverlayTxt(int nOverlayId, int *pInitRadius, int *pRadius, BYTE *pRed, BYTE *pGreen, BYTE *pBlue);

/// @ordinal 10680
/// @name DATATBLS_Get1OfNFromOverlayTxt
/// @address 6fd72720
/// Imported by ['D2Client.dll']
DWORD __stdcall DATATBLS_Get1OfNFromOverlayTxt(int nOverlayId);

/// @ordinal 10681
/// @name DATATBLS_GetDirFromOverlayTxt
/// @address 6fd72760
/// Not imported by any .dll
int __stdcall DATATBLS_GetDirFromOverlayTxt(int nOverlayId);

/// @ordinal 10682
/// @name DATATBLS_GetMonSeqTxtRecordFromUnit
/// @address 6fd727a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2MonSeqTxt *__stdcall DATATBLS_GetMonSeqTxtRecordFromUnit(D2UnitStrc *pUnit);

/// @ordinal 10683
/// @name DATATBLS_GetSeqFramePointsCount
/// @address 6fd728a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall DATATBLS_GetSeqFramePointsCount(D2UnitStrc *pUnit);

/// @ordinal 10684
/// @name DATATBLS_GetSeqFrameCount
/// @address 6fd728c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall DATATBLS_GetSeqFrameCount(D2UnitStrc *pUnit);

/// @ordinal 10685
/// @name DATATBLS_ComputeSequenceAnimation
/// @address 6fd728e0
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_ComputeSequenceAnimation(D2MonSeqTxt *pMonSeqTxt, int nTargetFramePoint, int nCurrentFramePoint, int *pMode, int *pFrame, int *pDirection, int *pEvent);

/// @ordinal 10686
/// @name DATATBLS_GetSequenceEvent
/// @address 6fd72990
/// Imported by ['D2Game.dll']
void __stdcall DATATBLS_GetSequenceEvent(D2MonSeqTxt *pMonSeqTxt, int nSeqFramePoint, int *pEvent);

/// @ordinal 10687
/// @name ITEMS_AllocItemData
/// @address 6fd98380
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ITEMS_AllocItemData(void *pMemPool, D2UnitStrc *pItem);

/// @ordinal 10688
/// @name ITEMS_FreeItemData
/// @address 6fd983f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ITEMS_FreeItemData(void *pMemPool, D2UnitStrc *pItem);

/// @ordinal 10689
/// @name ITEMS_GetBodyLocation
/// @address 6fd98430
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall ITEMS_GetBodyLocation(D2UnitStrc *pItem);

/// @ordinal 10690
/// @name ITEMS_SetBodyLocation
/// @address 6fd98450
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ITEMS_SetBodyLocation(D2UnitStrc *pItem, BYTE nBodyLoc);

/// @ordinal 10691
/// @name ITEMS_GetItemSeed
/// @address 6fd98470
/// Imported by ['D2Game.dll']
D2SeedStrc *__stdcall ITEMS_GetItemSeed(D2UnitStrc *pItem);

/// @ordinal 10692
/// @name ITEMS_InitItemSeed
/// @address 6fd98490
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ITEMS_InitItemSeed(D2UnitStrc *pItem);

/// @ordinal 10693
/// @name ITEMS_GetItemStartSeed
/// @address 6fd984b0
/// Imported by ['D2Game.dll']
int __stdcall ITEMS_GetItemStartSeed(D2UnitStrc *pItem);

/// @ordinal 10694
/// @name ITEMS_SetItemStartSeed
/// @address 6fd984d0
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetItemStartSeed(D2UnitStrc *pItem, int nSeed);

/// @ordinal 10695
/// @name ITEMS_GetItemQuality
/// @address 6fd98550
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_GetItemQuality(D2UnitStrc *pItem);

/// @ordinal 10696
/// @name ITEMS_SetItemQuality
/// @address 6fd98580
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetItemQuality(D2UnitStrc *pItem, int nQuality);

/// @ordinal 10697
/// @name ITEMS_GetAutoAffix
/// @address 6fd98600
/// Imported by ['D2Game.dll']
WORD __stdcall ITEMS_GetAutoAffix(D2UnitStrc *pItem);

/// @ordinal 10698
/// @name ITEMS_SetAutoAffix
/// @address 6fd98630
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetAutoAffix(D2UnitStrc *pItem, WORD nAffix);

/// @ordinal 10699
/// @name ITEMS_GetPrefixId
/// @address 6fd985a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
__int16 __stdcall ITEMS_GetPrefixId(D2UnitStrc *pItem, int a2);

/// @ordinal 10700
/// @name ITEMS_AssignPrefix
/// @address 6fd985d0
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_AssignPrefix(D2UnitStrc *arg, __int16 a2, int a3);

/// @ordinal 10701
/// @name ITEMS_GetSuffixId
/// @address 6fd98650
/// Imported by ['D2Client.dll', 'D2Game.dll']
__int16 __stdcall ITEMS_GetSuffixId(D2UnitStrc *pItem, DWORD suffixId);

/// @ordinal 10702
/// @name ITEMS_AssignSuffix
/// @address 6fd98680
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_AssignSuffix(D2UnitStrc *pUnit, __int16 nSuffixId, int nArrayPos);

/// @ordinal 10703
/// @name ITEMS_GetRarePrefixId
/// @address 6fd986b0
/// Imported by ['D2Client.dll']
__int16 __stdcall ITEMS_GetRarePrefixId(D2UnitStrc *pItem);

/// @ordinal 10704
/// @name ITEMS_AssignRarePrefix
/// @address 6fd986e0
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_AssignRarePrefix(D2UnitStrc *pItem, WORD nPrefix);

/// @ordinal 10705
/// @name ITEMS_GetRareSuffixId
/// @address 6fd98700
/// Imported by ['D2Client.dll']
__int16 __stdcall ITEMS_GetRareSuffixId(D2UnitStrc *pItem);

/// @ordinal 10706
/// @name ITEMS_AssignRareSuffix
/// @address 6fd98730
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_AssignRareSuffix(D2UnitStrc *pItem, WORD nSuffix);

/// @ordinal 10707
/// @name ITEMS_CheckItemFlag
/// @address 6fd98750
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_CheckItemFlag(D2UnitStrc *pItem, DWORD dwFlag, int nLine, char *szFile);

/// @ordinal 10708
/// @name ITEMS_SetItemFlag
/// @address 6fd98780
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ITEMS_SetItemFlag(D2UnitStrc *pItem, DWORD dwFlag, BOOL bSet);

/// @ordinal 10709
/// @name ITEMS_GetItemFlags
/// @address 6fd987c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_GetItemFlags(D2UnitStrc *pItem);

/// @ordinal 10710
/// @name ITEMS_CheckItemCMDFlag
/// @address 6fd987e0
/// Imported by ['D2Game.dll']
int __stdcall ITEMS_CheckItemCMDFlag(D2UnitStrc *pItem, int nFlag);

/// @ordinal 10711
/// @name ITEMS_SetItemCMDFlag
/// @address 6fd98810
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetItemCMDFlag(D2UnitStrc *pItem, int nFlagIndex, BOOL bSet);

/// @ordinal 10712
/// @name ITEMS_GetItemCMDFlags
/// @address 6fd98850
/// Not imported by any .dll
int __stdcall ITEMS_GetItemCMDFlags(D2UnitStrc *pItem);

/// @ordinal 10717
/// @name ITEMS_GetItemLevel
/// @address 6fd98870
/// Imported by ['D2Game.dll']
int __stdcall ITEMS_GetItemLevel(D2UnitStrc *pItem);

/// @ordinal 10718
/// @name ITEMS_SetItemLevel
/// @address 6fd988b0
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetItemLevel(D2UnitStrc *pItem, int iLvl);

/// @ordinal 10719
/// @name ITEMS_GetInvPage
/// @address 6fd988e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall ITEMS_GetInvPage(D2UnitStrc *pItem);

/// @ordinal 10720
/// @name ITEMS_SetInvPage
/// @address 6fd98900
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ITEMS_SetInvPage(D2UnitStrc *pItem, BYTE nPage);

/// @ordinal 10721
/// @name ITEMS_GetCellOverlap
/// @address 6fd98920
/// Not imported by any .dll
BYTE __stdcall ITEMS_GetCellOverlap(D2UnitStrc *pItem);

/// @ordinal 10722
/// @name ITEMS_SetCellOverlap
/// @address 6fd98940
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetCellOverlap(D2UnitStrc *pItem, int nValue);

/// @ordinal 10723
/// @name ITEMS_GetEarName
/// @address 6fd989a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
char *__stdcall ITEMS_GetEarName(D2UnitStrc *pItem);

/// @ordinal 10724
/// @name ITEMS_SetEarName
/// @address 6fd989c0
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetEarName(D2UnitStrc *pItem, char *name);

/// @ordinal 10725
/// @name ITEMS_GetEarLevel
/// @address 6fd989f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_GetEarLevel(D2UnitStrc *pItem);

/// @ordinal 10726
/// @name ITEMS_SetEarLevel
/// @address 6fd98a10
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetEarLevel(D2UnitStrc *pItem, BYTE nLevel);

/// @ordinal 10727
/// @name ITEMS_GetVarGfxIndex
/// @address 6fd98a30
/// Imported by ['D2Client.dll']
BYTE __stdcall ITEMS_GetVarGfxIndex(D2UnitStrc *pItem);

/// @ordinal 10728
/// @name ITEMS_SetVarGfxIndex
/// @address 6fd98a50
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetVarGfxIndex(D2UnitStrc *pItem, BYTE nIndex);

/// @ordinal 10729
/// @name ITEMS_CheckItemTypeIdByItemId
/// @address 6fd9dba0
/// Imported by ['D2Game.dll']
BOOL __stdcall ITEMS_CheckItemTypeIdByItemId(int nItemId, int nItemType);

/// @ordinal 10730
/// @name ITEMS_CheckType
/// @address 6fd9dc80
/// Imported by ['D2Game.dll']
BOOL __stdcall ITEMS_CheckType(int nItemType1, int nItemType2);

/// @ordinal 10731
/// @name ITEMS_CheckItemTypeId
/// @address 6fd9dce0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_CheckItemTypeId(D2UnitStrc *pItem, int nItemType);

/// @ordinal 10732
/// @name ITEMS_GetFileIndex
/// @address 6fd9dee0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_GetFileIndex(D2UnitStrc *pItem);

/// @ordinal 10733
/// @name ITEMS_SetFileIndex
/// @address 6fd9df60
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetFileIndex(D2UnitStrc *pItem, DWORD dwFileIndex);

/// @ordinal 10734
/// @name ITEMS_SetOwnerId
/// @address 6fd9e0a0
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetOwnerId(D2UnitStrc *pItem, int nOwnerGUID);

/// @ordinal 10735
/// @name ITEMS_GetOwnerId
/// @address 6fd9e120
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_GetOwnerId(D2UnitStrc *pItem);

/// @ordinal 10736
/// @name ITEMS_IsBodyItem
/// @address 6fd9e1a0
/// Imported by ['D2Game.dll']
int __stdcall ITEMS_IsBodyItem(D2UnitStrc *pItem);

/// @ordinal 10737
/// @name ITEMS_IsClassValid
/// @address 6fd9e310
/// Imported by ['D2Client.dll']
BOOL __stdcall ITEMS_IsClassValid(D2UnitStrc *pItem);

/// @ordinal 10738
/// @name ITEMS_IsClassValidByItemId
/// @address 6fd9e2a0
/// Not imported by any .dll
BOOL __stdcall ITEMS_IsClassValidByItemId(DWORD dwItemNo);

/// @ordinal 10739
/// @name ITEMS_GetClassOfClassSpecificItem
/// @address 6fd9e390
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_GetClassOfClassSpecificItem(D2UnitStrc *pItem);

/// @ordinal 10740
/// @name ITEMS_IsNotQuestItem
/// @address 6fd9e580
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_IsNotQuestItem(D2UnitStrc *pItem);

/// @ordinal 10741
/// @name ITEMS_GetQuestFromItemId
/// @address 6fd99bc0
/// Not imported by any .dll
DWORD __stdcall ITEMS_GetQuestFromItemId(DWORD dwId);

/// @ordinal 10742
/// @name ITEMS_GetQuest
/// @address 6fd99c60
/// Not imported by any .dll
DWORD __stdcall ITEMS_GetQuest(D2UnitStrc *pItem);

/// @ordinal 10743
/// @name ITEMS_GetNormalCode
/// @address 6fd99d40
/// Not imported by any .dll
DWORD __stdcall ITEMS_GetNormalCode(D2UnitStrc *pItem);

/// @ordinal 10744
/// @name ITEMS_GetWeaponClassCode
/// @address 6fd992c0
/// Not imported by any .dll
DWORD __stdcall ITEMS_GetWeaponClassCode(D2UnitStrc *pItem);

/// @ordinal 10745
/// @name ITEMS_Get2HandWeaponClassCode
/// @address 6fd992f0
/// Not imported by any .dll
DWORD __stdcall ITEMS_Get2HandWeaponClassCode(D2UnitStrc *pItem);

/// @ordinal 10746
/// @name ITEMS_GetBaseCode
/// @address 6fd99370
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_GetBaseCode(D2UnitStrc *pItem);

/// @ordinal 10747
/// @name ITEMS_GetAltGfx
/// @address 6fd993f0
/// Imported by ['D2Client.dll']
DWORD __stdcall ITEMS_GetAltGfx(D2UnitStrc *pItem);

/// @ordinal 10748
/// @name ITEMS_GetComponent
/// @address 6fd99480
/// Imported by ['D2Client.dll']
BYTE __stdcall ITEMS_GetComponent(D2UnitStrc *pItem);

/// @ordinal 10749
/// @name ITEMS_GetDimensions
/// @address 6fd99500
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ITEMS_GetDimensions(D2UnitStrc *pItem, BYTE *pWidth, BYTE *pHeight);

/// @ordinal 10750
/// @name ITEMS_GetAllowedBodyLocations
/// @address 6fd99540
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_GetAllowedBodyLocations(D2UnitStrc *pItem, BYTE *pBodyLoc1, BYTE *pBodyLoc2);

/// @ordinal 10751
/// @name ITEMS_GetItemType
/// @address 6fd995d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_GetItemType(D2UnitStrc *pItem);

/// @ordinal 10752
/// @name ITEMS_GetItemTypeFromItemId
/// @address 6fd99640
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_GetItemTypeFromItemId(DWORD dwItemId);

/// @ordinal 10753
/// @name ITEMS_GetItemQlvl
/// @address 6fd99680
/// Imported by ['D2Game.dll']
BYTE __stdcall ITEMS_GetItemQlvl(D2UnitStrc *pItem);

/// @ordinal 10754
/// @name ITEMS_CheckIfFlagIsSet
/// @address 6fd99700
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_CheckIfFlagIsSet(int nFlags, int nFlag);

/// @ordinal 10755
/// @name ITEMS_SetOrRemoveFlag
/// @address 6fd99710
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetOrRemoveFlag(int *pFlags, int nFlag, int bSet);

/// @ordinal 10756
/// @name ITEMS_CheckRequirements
/// @address 6fd99740
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_CheckRequirements(D2UnitStrc *pItem, D2UnitStrc *pUnit, BOOL bEquipping, BOOL *bStrength, BOOL *bDexterity, BOOL *bLevel);

/// @ordinal 10757
/// @name ITEMS_GetLevelRequirement
/// @address 6fd9a3f0
/// Imported by ['D2Client.dll']
int __stdcall ITEMS_GetLevelRequirement(D2UnitStrc *pItem, D2UnitStrc *pUnit);

/// @ordinal 10758
/// @name ITEMS_CheckBodyLocation
/// @address 6fd9a400
/// Imported by ['D2Client.dll']
DWORD __stdcall ITEMS_CheckBodyLocation(D2UnitStrc *pItem, BYTE nBodyLoc);

/// @ordinal 10759
/// @name ITEMS_CheckIfThrowable
/// @address 6fd9a530
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_CheckIfThrowable(D2UnitStrc *pItem);

/// @ordinal 10760
/// @name ITEMS_GetMissileType
/// @address 6fd9a5b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_GetMissileType(D2UnitStrc *pItem);

/// @ordinal 10761
/// @name ITEMS_GetMeleeRange
/// @address 6fd9a5e0
/// Not imported by any .dll
BYTE __stdcall ITEMS_GetMeleeRange(D2UnitStrc *pItem);

/// @ordinal 10762
/// @name ITEMS_CheckItemTypeIfThrowable
/// @address 6fd9a4f0
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_CheckItemTypeIfThrowable(int nItemType);

/// @ordinal 10763
/// @name ITEMS_CheckWeaponClassByItemId
/// @address 6fd9a610
/// Not imported by any .dll
DWORD __stdcall ITEMS_CheckWeaponClassByItemId(int nItem, int nItemType);

/// @ordinal 10764
/// @name ITEMS_CheckWeaponClass
/// @address 6fd9a660
/// Not imported by any .dll
DWORD __stdcall ITEMS_CheckWeaponClass(D2UnitStrc *pItem, int nItemType);

/// @ordinal 10765
/// @name ITEMS_CheckWeaponIfTwoHanded
/// @address 6fd9a700
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_CheckWeaponIfTwoHanded(D2UnitStrc *pItem);

/// @ordinal 10766
/// @name ITEMS_CheckWeaponIfTwoHandedByItemId
/// @address 6fd9a6c0
/// Not imported by any .dll
DWORD __stdcall ITEMS_CheckWeaponIfTwoHandedByItemId(int nItem);

/// @ordinal 10767
/// @name ITEMS_CheckIfStackable
/// @address 6fd9a750
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_CheckIfStackable(D2UnitStrc *pItem);

/// @ordinal 10768
/// @name ITEMS_CheckIfBeltable
/// @address 6fd9a7a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_CheckIfBeltable(D2UnitStrc *pItem);

/// @ordinal 10769
/// @name ITEMS_ComparePotionTypes
/// @address 6fd9a820
/// Not imported by any .dll
BOOL __stdcall ITEMS_ComparePotionTypes(D2UnitStrc *pItem1, D2UnitStrc *pItem2);

/// @ordinal 10770
/// @name ITEMS_CheckIfAutoBeltable
/// @address 6fd9a960
/// Imported by ['D2Game.dll']
BOOL __stdcall ITEMS_CheckIfAutoBeltable(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10771
/// @name ITEMS_CheckIfUseable
/// @address 6fd9aa00
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_CheckIfUseable(D2UnitStrc *pItem);

/// @ordinal 10772
/// @name ITEMS_GetUniqueColumnFromItemsTxt
/// @address 6fd9aa70
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_GetUniqueColumnFromItemsTxt(D2UnitStrc *pItem);

/// @ordinal 10773
/// @name ITEMS_IsQuestItem
/// @address 6fd9ab00
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_IsQuestItem(D2UnitStrc *pItem);

/// @ordinal 10774
/// @name ITEMS_IsNotQuestItemByItemId
/// @address 6fd9de90
/// Not imported by any .dll
BOOL __stdcall ITEMS_IsNotQuestItemByItemId(DWORD dwItemNo);

/// @ordinal 10775
/// @name ITEMS_GetTransactionCost
/// @address 6fd9cde0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_GetTransactionCost(D2UnitStrc *pPlayer, D2UnitStrc *pItem, int nDifficulty, void *pHistory, int nVendorId, int nTransactionType);

/// @ordinal 10776
/// @name ITEMS_GetNoOfUnidItems
/// @address 6fd9ff00
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_GetNoOfUnidItems(D2UnitStrc *pUnit);

/// @ordinal 10777
/// @name ITEMS_IsRepairable
/// @address 6fd98a70
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_IsRepairable(D2UnitStrc *pItem);

/// @ordinal 10780
/// @name ITEMS_GetAmmoTypeFromItemType
/// @address 6fd98c60
/// Not imported by any .dll
DWORD __stdcall ITEMS_GetAmmoTypeFromItemType(int nItemType);

/// @ordinal 10781
/// @name ITEMS_GetAmmoType
/// @address 6fd98ca0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_GetAmmoType(D2UnitStrc *pItem);

/// @ordinal 10782
/// @name ITEMS_GetQuiverTypeFromItemType
/// @address 6fd98d20
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_GetQuiverTypeFromItemType(int nItemType);

/// @ordinal 10783
/// @name ITEMS_GetQuiverType
/// @address 6fd98d60
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_GetQuiverType(D2UnitStrc *pItem);

/// @ordinal 10784
/// @name ITEMS_GetAutoStackFromItemType
/// @address 6fd98de0
/// Not imported by any .dll
DWORD __stdcall ITEMS_GetAutoStackFromItemType(int nItemType);

/// @ordinal 10785
/// @name ITEMS_GetAutoStack
/// @address 6fd98e20
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_GetAutoStack(D2UnitStrc *pItem);

/// @ordinal 10786
/// @name ITEMS_GetReload
/// @address 6fd98ea0
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_GetReload(D2UnitStrc *pItem);

/// @ordinal 10787
/// @name ITEMS_GetReEquip
/// @address 6fd98f20
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_GetReEquip(D2UnitStrc *pItem);

/// @ordinal 10788
/// @name ITEMS_GetStorePage
/// @address 6fd98fa0
/// Imported by ['D2Game.dll']
BYTE __stdcall ITEMS_GetStorePage(D2UnitStrc *pItem);

/// @ordinal 10789
/// @name ITEMS_GetVarInvGfxCount
/// @address 6fd99020
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall ITEMS_GetVarInvGfxCount(D2UnitStrc *pItem);

/// @ordinal 10790
/// @name ITEMS_GetVarInvGfxString
/// @address 6fd990a0
/// Imported by ['D2Client.dll']
char *__stdcall ITEMS_GetVarInvGfxString(D2UnitStrc *pItem, int unk);

/// @ordinal 10791
/// @name ITEMS_CanBeMagic
/// @address 6fd991c0
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_CanBeMagic(D2UnitStrc *pItem);

/// @ordinal 10792
/// @name ITEMS_CanBeRare
/// @address 6fd99140
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_CanBeRare(D2UnitStrc *pItem);

/// @ordinal 10793
/// @name ITEMS_CanBeNormal
/// @address 6fd99240
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_CanBeNormal(D2UnitStrc *pItem);

/// @ordinal 10794
/// @name ITEMS_GetMaxStack
/// @address 6fd9ce10
/// Not imported by any .dll
DWORD __stdcall ITEMS_GetMaxStack(DWORD dwItemId);

/// @ordinal 10795
/// @name ITEMS_GetTotalMaxStack
/// @address 6fd9ce50
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_GetTotalMaxStack(D2UnitStrc *pItem);

/// @ordinal 10796
/// @name ITEMS_GetMinStackFromItemId
/// @address 6fd9cfb0
/// Not imported by any .dll
DWORD __stdcall ITEMS_GetMinStackFromItemId(DWORD dwItemId);

/// @ordinal 10797
/// @name ITEMS_GetMinStack
/// @address 6fd9cff0
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_GetMinStack(D2UnitStrc *pItem);

/// @ordinal 10798
/// @name ITEMS_GetSpawnStackFromItemId
/// @address 6fd9cef0
/// Not imported by any .dll
DWORD __stdcall ITEMS_GetSpawnStackFromItemId(DWORD dwItemId);

/// @ordinal 10799
/// @name ITEMS_GetSpawnStack
/// @address 6fd9cf30
/// Imported by ['D2Game.dll']
DWORD __stdcall ITEMS_GetSpawnStack(D2UnitStrc *pItem);

/// @ordinal 10800
/// @name ITEMS_CheckBitField1Flag8
/// @address 6fd9d070
/// Not imported by any .dll
DWORD __stdcall ITEMS_CheckBitField1Flag8(D2UnitStrc *pItem);

/// @ordinal 10801
/// @name ITEMS_CheckBitField1Flag4
/// @address 6fd9de50
/// Not imported by any .dll
/// @guessedtype int __stdcall(int dwItemNo)

/// @ordinal 10802
/// @name ITEMS_IsMetalItem
/// @address 6fd9de10
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int dwItemNo)

/// @ordinal 10803
/// @name ITEMS_CheckBitField1Flag1
/// @address 6fd9ddd0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int dwItemNo)

/// @ordinal 10804
/// @name ITEMS_GetSpellIcon
/// @address 6fd9d0f0
/// Imported by ['D2Game.dll']
int __stdcall ITEMS_GetSpellIcon(D2UnitStrc *pItem);

/// @ordinal 10805
/// @name ITEMS_GetDurWarnCount
/// @address 6fd9d1e0
/// Not imported by any .dll
BYTE __stdcall ITEMS_GetDurWarnCount(D2UnitStrc *pItem);

/// @ordinal 10806
/// @name ITEMS_GetQtyWarnCount
/// @address 6fd9d260
/// Imported by ['D2Client.dll']
BYTE __stdcall ITEMS_GetQtyWarnCount(D2UnitStrc *pItem);

/// @ordinal 10807
/// @name ITEMS_GetStrengthBonus
/// @address 6fd9d2e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
WORD __stdcall ITEMS_GetStrengthBonus(D2UnitStrc *pItem);

/// @ordinal 10808
/// @name ITEMS_GetDexBonus
/// @address 6fd9d310
/// Imported by ['D2Client.dll', 'D2Game.dll']
WORD __stdcall ITEMS_GetDexBonus(D2UnitStrc *pItem);

/// @ordinal 10809
/// @name ITEMS_CheckIfSocketableByItemId
/// @address 6fd9d340
/// Not imported by any .dll
DWORD __stdcall ITEMS_CheckIfSocketableByItemId(DWORD dwItemId);

/// @ordinal 10810
/// @name ITEMS_CheckIfSocketable
/// @address 6fd9d360
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_CheckIfSocketable(D2UnitStrc *pItem);

/// @ordinal 10811
/// @name ITEMS_HasDurability
/// @address 6fd9d390
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_HasDurability(D2UnitStrc *pItem);

/// @ordinal 10813
/// @name ITEMS_GetStaffMods
/// @address 6fd9d3f0
/// Imported by ['D2Game.dll']
int __stdcall ITEMS_GetStaffMods(D2UnitStrc *pItem);

/// @ordinal 10814
/// @name ITEMS_GetAllowedGemSocketsFromItemId
/// @address 6fd9d470
/// Not imported by any .dll
BYTE __stdcall ITEMS_GetAllowedGemSocketsFromItemId(DWORD dwItemId);

/// @ordinal 10815
/// @name ITEMS_GetMaxSockets
/// @address 6fd9d490
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall ITEMS_GetMaxSockets(D2UnitStrc *pItem);

/// @ordinal 10816
/// @name ITEMS_GetSockets
/// @address 6fd9d580
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ITEMS_GetSockets(D2UnitStrc *pItem);

/// @ordinal 10817
/// @name ITEMS_AddSockets
/// @address 6fd9d5e0
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_AddSockets(D2UnitStrc *pItem, DWORD dwSocks);

/// @ordinal 10818
/// @name ITEMS_SetSockets
/// @address 6fd9d7c0
/// Not imported by any .dll
void __stdcall ITEMS_SetSockets(D2UnitStrc *pUnit, int nValue);

/// @ordinal 10819
/// @name ITEMS_GetGemApplyTypeFromItemId
/// @address 6fd9d900
/// Not imported by any .dll
int __stdcall ITEMS_GetGemApplyTypeFromItemId(DWORD dwItemNo);

/// @ordinal 10820
/// @name ITEMS_GetGemApplyType
/// @address 6fd9d940
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_GetGemApplyType(D2UnitStrc *pItem);

/// @ordinal 10821
/// @name ITEMS_IsSocketFiller
/// @address 6fd9d9d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_IsSocketFiller(D2UnitStrc *pItem);

/// @ordinal 10822
/// @name ITEMS_GetRunesTxtRecordFromItem
/// @address 6fd9d9e0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10823
/// @name ITEMS_GetWeaponClassId
/// @address 6fd9e410
/// Imported by ['D2Client.dll']
__int16 __stdcall ITEMS_GetWeaponClassId(D2UnitStrc *pItem);

/// @ordinal 10824
/// @name ITEMS_GetTransmogrifyFromItemId
/// @address 6fd9e480
/// Not imported by any .dll
DWORD __stdcall ITEMS_GetTransmogrifyFromItemId(DWORD dwItemId);

/// @ordinal 10825
/// @name ITEMS_GetTransmogrify
/// @address 6fd9e4c0
/// Imported by ['D2Client.dll']
DWORD __stdcall ITEMS_GetTransmogrify(D2UnitStrc *pItem);

/// @ordinal 10826
/// @name ITEMS_IsMagSetRarUniCrfOrTmp
/// @address 6fd9e550
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_IsMagSetRarUniCrfOrTmp(D2UnitStrc *pItem);

/// @ordinal 10827
/// @name ITEMS_GetHitClassFromItem
/// @address 6fd9e5f0
/// Not imported by any .dll
BYTE __stdcall ITEMS_GetHitClassFromItem(D2UnitStrc *pUnit);

/// @ordinal 10828
/// @name ITEMS_Is1Or2Handed
/// @address 6fd9e670
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_Is1Or2Handed(D2UnitStrc *pPlayer, D2UnitStrc *pItem);

/// @ordinal 10829
/// @name ITEMS_GetColor
/// @address 6fd9e710
/// Imported by ['D2Client.dll']
BYTE *__stdcall ITEMS_GetColor(D2UnitStrc *pPlayer, D2UnitStrc *pItem, BYTE *pColor, int nTransType);

/// @ordinal 10830
/// @name ITEMS_IsImbueable
/// @address 6fd9eea0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_IsImbueable(D2UnitStrc *pItem);

/// @ordinal 10831
/// @name ITEMS_IsSocketable
/// @address 6fd9f260
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_IsSocketable(D2UnitStrc *pItem);

/// @ordinal 10832
/// @name ITEMS_IsPersonalizable
/// @address 6fd9f080
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_IsPersonalizable(D2UnitStrc *pItem);

/// @ordinal 10833
/// @name ITEMS_AreStackablesEqual
/// @address 6fd9f720
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall ITEMS_AreStackablesEqual(D2UnitStrc *pItem1, D2UnitStrc *pItem2);

/// @ordinal 10834
/// @name ITEMS_CanItemBeUsedForThrowSkill
/// @address 6fd9fa70
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall ITEMS_CanItemBeUsedForThrowSkill(D2UnitStrc *pItem);

/// @ordinal 10835
/// @name D2Common_11079_Return0
/// @address 6fd9fb40
/// Imported by ['D2Game.dll']
int __stdcall D2Common_11079_Return0(int arg, int a2);

/// @ordinal 10836
/// @name ITEMS_GetSetItemsMask
/// @address 6fd9fb50
/// Imported by ['D2Client.dll']
DWORD __stdcall ITEMS_GetSetItemsMask(D2UnitStrc *pPlayer, D2UnitStrc *pSetItem, BOOL bSkipItem);

/// @ordinal 10837
/// @name ITEMS_GetNoOfSetItemsFromItem
/// @address 6fda42e0
/// Imported by ['D2Client.dll']
int __stdcall ITEMS_GetNoOfSetItemsFromItem(D2UnitStrc *pItem);

/// @ordinal 10838
/// @name ITEMS_GetSetItemsTxtRecordFromItem
/// @address 6fd9fd80
/// Imported by ['D2Client.dll']
D2SetItemsTxt *__stdcall ITEMS_GetSetItemsTxtRecordFromItem(D2UnitStrc *pUnit);

/// @ordinal 10839
/// @name ITEMS_CanBeEquipped
/// @address 6fd9fe20
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_CanBeEquipped(D2UnitStrc *pItem);

/// @ordinal 10840
/// @name ITEMS_IsCharmUsable
/// @address 6fd9fe70
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_IsCharmUsable(D2UnitStrc *pItem, D2UnitStrc *pPlayer);

/// @ordinal 10841
/// @name ITEMS_GetBonusLifeBasedOnClass
/// @address 6fd9ff90
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_GetBonusLifeBasedOnClass(D2UnitStrc *pPlayer, int nValue);

/// @ordinal 10842
/// @name ITEMS_GetBonusManaBasedOnClass
/// @address 6fd9ffe0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_GetBonusManaBasedOnClass(D2UnitStrc *pPlayer, int nValue);

/// @ordinal 10843
/// @name ITEMMODS_GetByTimeAdjustment
/// @address 6fd928d0
/// Imported by ['D2Client.dll']
int __stdcall ITEMMODS_GetByTimeAdjustment(int nAmount, int nPeriodOfDay, int nBaseTime, int *nItemModPeriodOfDay, int *nItemModMin, int *nItemModMax);

/// @ordinal 10844
/// @name ITEMMODS_First
/// @address 6fd92640
/// Not imported by any .dll
void __stdcall ITEMMODS_First(int nDataBits, int *pLayer, int *pValue);

/// @ordinal 10845
/// @name 
/// @address 6fd929b0
/// Not imported by any .dll
void __stdcall(int nDataBits, int *a2, int *a3, int *a4);

/// @ordinal 10846
/// @name 
/// @address 6fd92670
/// Not imported by any .dll
void __stdcall(int nDataBits, int *a2, int *a3, int *a4, int *a5);

/// @ordinal 10847
/// @name ITEMMODS_UpdateItemWithSkillCharges
/// @address 6fd927d0
/// Imported by ['D2Game.dll']
BOOL __stdcall ITEMMODS_UpdateItemWithSkillCharges(D2UnitStrc *pItem, int a2, int a3, int a4);

/// @ordinal 10848
/// @name 
/// @address 6fd92a00
/// Not imported by any .dll
void __stdcall(int nDataBits, int *pClass, int *pTab, int *pLevel);

/// @ordinal 10849
/// @name 
/// @address 6fd929a0
/// Not imported by any .dll
int __stdcall(int a1, int a2);

/// @ordinal 10850
/// @name 
/// @address 6fd929e0
/// Not imported by any .dll
int __stdcall(int a1, int a2, int a3);

/// @ordinal 10851
/// @name 
/// @address 6fd92a60
/// Not imported by any .dll
int __stdcall(int a1, int a2, int a3);

/// @ordinal 10853
/// @name ITEMS_GetItemCell
/// @address 6fd98960
/// Imported by ['D2Game.dll']
BYTE __stdcall ITEMS_GetItemCell(D2UnitStrc *pItem);

/// @ordinal 10854
/// @name ITEMS_SetItemCell
/// @address 6fd98980
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetItemCell(D2UnitStrc *pItem, int nValue);

/// @ordinal 10855
/// @name ITEMMODS_AssignProperty
/// @address 6fd95430
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ITEMMODS_AssignProperty(int nType, D2UnitStrc *a2, D2UnitStrc *pItem, void *pMods, int nPropSet, int nApplyType);

/// @ordinal 10856
/// @name D2Common_11240_Return
/// @address 6fdb40f0
/// Not imported by any .dll
void __stdcall D2Common_11240_Return(int arg, int a2, int a3);

/// @ordinal 10859
/// @name ITEMMODS_CanItemHaveMagicAffix
/// @address 6fd95be0
/// Imported by ['D2Game.dll']
BOOL __stdcall ITEMMODS_CanItemHaveMagicAffix(D2UnitStrc *pItem, D2MagicAffixTxt *pMagicAffixTxtRecord);

/// @ordinal 10860
/// @name ITEMMODS_CanItemHaveRareAffix
/// @address 6fd95cc0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pItem, int pRareAffixTxtRecord)

/// @ordinal 10861
/// @name ITEMMODS_CanItemBeHighQuality
/// @address 6fd95d60
/// Imported by ['D2Game.dll']
BOOL __stdcall ITEMMODS_CanItemBeHighQuality(D2UnitStrc *pItem, D2QualityItemsTxt *pQualityItemsTxtRecord);

/// @ordinal 10862
/// @name ITEMMODS_SetRandomElixirFileIndex
/// @address 6fd95e90
/// Imported by ['D2Game.dll']
void __stdcall ITEMMODS_SetRandomElixirFileIndex(D2UnitStrc *pItem);

/// @ordinal 10865
/// @name ITEMMODS_ApplyEthereality
/// @address 6fd958d0
/// Imported by ['D2Game.dll']
void __stdcall ITEMMODS_ApplyEthereality(D2UnitStrc *pUnit);

/// @ordinal 10866
/// @name ITEMS_UpdateSets
/// @address 6fda4640
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_UpdateSets(D2UnitStrc *pPlayer, D2UnitStrc *pItem, int a3, int a4);

/// @ordinal 10867
/// @name ITEMMODS_UpdateRuneword
/// @address 6fd959f0
/// Imported by ['D2Game.dll']
BOOL __stdcall ITEMMODS_UpdateRuneword(D2UnitStrc *pUnit, D2UnitStrc *pItem, int nUnused);

/// @ordinal 10868
/// @name ITEMMODS_AddCraftPropertyList
/// @address 6fd95f90
/// Imported by ['D2Game.dll']
void __stdcall ITEMMODS_AddCraftPropertyList(D2UnitStrc *pItem, D2PropertyStrc *pProperty, BOOL bExpansion);

/// @ordinal 10875
/// @name ITEMS_GetItemFormat
/// @address 6fda0030
/// Imported by ['D2Game.dll']
WORD __stdcall ITEMS_GetItemFormat(D2UnitStrc *pItem);

/// @ordinal 10876
/// @name ITEMS_SetItemFormat
/// @address 6fda00b0
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_SetItemFormat(D2UnitStrc *pItem, WORD nItemFormat);

/// @ordinal 10877
/// @name ITEMS_GetAllRepairCosts
/// @address 6fd9f490
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pGame, int pPlayer, int nNpcId, int nDifficulty, int pQuestFlags, int pfCallback)

/// @ordinal 10878
/// @name ITEMS_GetWeaponAttackSpeed
/// @address 6fda0130
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_GetWeaponAttackSpeed(D2UnitStrc *pUnit, D2UnitStrc *pWeapon_nLength);

/// @ordinal 10879
/// @name ITEMS_HasUsedCharges
/// @address 6fda02b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMS_HasUsedCharges(D2UnitStrc *pItem, BOOL *pHasChargedSkills);

/// @ordinal 10880
/// @name ITEMS_IsEthereal
/// @address 6fda0340
/// Imported by ['D2Game.dll']
int __stdcall ITEMS_IsEthereal(D2UnitStrc *pItem);

/// @ordinal 10881
/// @name ITEMS_SerializeItemToBitstream
/// @address 6fda2ba0
/// Imported by ['D2Game.dll']
int __stdcall ITEMS_SerializeItemToBitstream(D2UnitStrc *pUnit, BYTE *pBitstream, int nSize, BOOL bServer, BOOL bSaveItemInv, BOOL bGamble);

/// @ordinal 10882
/// @name ITEMS_DecodeItemFromBitstream
/// @address 6fda0490
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_DecodeItemFromBitstream(D2UnitStrc *pItem, BYTE *pBitstream, int nBufferSize, BOOL bCheckForHeader, int *pSocketedItems, unsigned int dwVersion, int *pFail);

/// @ordinal 10883
/// @name ITEMS_GetCompactItemDataFromBitstream
/// @address 6fda0370
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_GetCompactItemDataFromBitstream(BYTE *pBitstream, int nBitstreamSize, BOOL bCheckForHeader, D2ItemSaveStrc *pItemSave);

/// @ordinal 10884
/// @name COMPOSIT_unk
/// @address 6fd466c0
/// Not imported by any .dll
void __stdcall COMPOSIT_unk(D2UnitStrc *pUnit, int nClass, int nMode, int nUnitType, D2InventoryStrc *pInventory, char *szPath, int *pWeaponCode, BOOL bAddPathPrefix, int a9);

/// @ordinal 10885
/// @name COMPOSIT_unk
/// @address 6fd46bc0
/// Imported by ['D2Client.dll']
void __stdcall COMPOSIT_unk(D2UnitStrc *pUnit, char *szPath, int *pWeaponClass, BOOL bAddPathPrefix, int a9, D2InventoryStrc *pInventory, int nAnimMode);

/// @ordinal 10886
/// @name COMPOSIT_GetWeaponClassIdFromCode
/// @address 6fd46c60
/// Not imported by any .dll
int __stdcall COMPOSIT_GetWeaponClassIdFromCode(int weaponClassCode);

/// @ordinal 10887
/// @name COMPOSIT_GetWeaponClassCode
/// @address 6fd46c90
/// Not imported by any .dll
int __stdcall COMPOSIT_GetWeaponClassCode(D2UnitStrc *pUnit, D2C_UnitTypes nUnitType, int nClass, int nMode, D2InventoryStrc *pInventory, int *pWeaponClassId);

/// @ordinal 10888
/// @name COMPOSIT_GetWeaponClassId
/// @address 6fd47150
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall COMPOSIT_GetWeaponClassId(D2UnitStrc *pUnit, D2InventoryStrc *pInventory, int *pWeaponClassId, int nAnimMode, BOOL a5);

/// @ordinal 10889
/// @name COMPOSIT_IsArmorComponent
/// @address 6fd47200
/// Imported by ['D2Client.dll']
bool __stdcall COMPOSIT_IsArmorComponent(int nComponent);

/// @ordinal 10890
/// @name COMPOSIT_IsWeaponBowOrXBow
/// @address 6fd47230
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall COMPOSIT_IsWeaponBowOrXBow(D2UnitStrc *pUnit);

/// @ordinal 10891
/// @name COMPOSIT_GetArmorTypeFromComponent
/// @address 6fd472e0
/// Imported by ['D2Client.dll']
/// @guessedtype int __cdecl(int eComponent, int a2)

/// @ordinal 10892
/// @name CHAT_AllocHoverMsg
/// @address 6fdc3bf0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2HoverTextStrc *__stdcall CHAT_AllocHoverMsg(void *pMemPool, const char *szText, int nTimeout);

/// @ordinal 10893
/// @name CHAT_FreeHoverMsg
/// @address 6fdc3c80
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall CHAT_FreeHoverMsg(void *pMemPool, D2HoverTextStrc *pHoverText);

/// @ordinal 10894
/// @name CHAT_GetDisplayTimeFromHoverMsg
/// @address 6fdc3ca0
/// Not imported by any .dll
DWORD __stdcall CHAT_GetDisplayTimeFromHoverMsg(D2HoverTextStrc *pHoverMsg);

/// @ordinal 10895
/// @name CHAT_GetTimeoutFromHoverMsg
/// @address 6fdc3cb0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall CHAT_GetTimeoutFromHoverMsg(D2HoverTextStrc *pHoverMsg);

/// @ordinal 10896
/// @name CHAT_CopyHoverMsgToBuffer
/// @address 6fdc3cc0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall CHAT_CopyHoverMsgToBuffer(D2HoverTextStrc *pHoverMsg, char *szMessage);

/// @ordinal 10897
/// @name CHAT_GetUsedFromHoverMsg
/// @address 6fdc3ce0
/// Imported by ['D2Client.dll']
DWORD __stdcall CHAT_GetUsedFromHoverMsg(D2DynamicPathStrc *pPath);

/// @ordinal 10898
/// @name CHAT_SetUsedInHoverMsg
/// @address 6fdc3cf0
/// Imported by ['D2Client.dll']
void __stdcall CHAT_SetUsedInHoverMsg(D2HoverTextStrc *pHoverMsg, BOOL bUsed);

/// @ordinal 10899
/// @name CHAT_GetLangIdFromHoverMsg
/// @address 6fdc3d00
/// Imported by ['D2Client.dll', 'D2Game.dll']
char __stdcall CHAT_GetLangIdFromHoverMsg(D2HoverTextStrc *pHoverMsg);

/// @ordinal 10900
/// @name CHAT_SetLangIdInHoverMsg
/// @address 6fdc3d10
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall CHAT_SetLangIdInHoverMsg(D2HoverTextStrc *pHoverMsg, char nLangId);

/// @ordinal 10901
/// @name TEXT_AllocTextHeader
/// @address 6fdc36e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2TextHeaderStrc *__stdcall TEXT_AllocTextHeader(void *pMemPool);

/// @ordinal 10902
/// @name TEXT_FreeTextHeader
/// @address 6fdc3710
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall TEXT_FreeTextHeader(D2TextHeaderStrc *pTextHeader);

/// @ordinal 10903
/// @name TEXT_AddNodeToTextList
/// @address 6fdc3760
/// Imported by ['D2Game.dll']
void __stdcall TEXT_AddNodeToTextList(D2TextHeaderStrc *pTextHeader, __int16 nStringId, int nMenu);

/// @ordinal 10904
/// @name TEXT_RemoveNodeFromTextList
/// @address 6fdc37a0
/// Not imported by any .dll
void __stdcall TEXT_RemoveNodeFromTextList(D2TextHeaderStrc *pTextHeader, __int16 nStringId);

/// @ordinal 10905
/// @name TEXT_GetMenuType2NodeCount
/// @address 6fdc37f0
/// Imported by ['D2Client.dll']
int __stdcall TEXT_GetMenuType2NodeCount(D2TextHeaderStrc *pTextHeader);

/// @ordinal 10906
/// @name TEXT_GetStringIdOfMenuType2Node
/// @address 6fdc3820
/// Imported by ['D2Client.dll']
__int16 __stdcall TEXT_GetStringIdOfMenuType2Node(D2TextHeaderStrc *pTextHeader, int nNodeId);

/// @ordinal 10907
/// @name TEXT_GetStringIdOfMenuType1Or2Node
/// @address 6fdc3850
/// Imported by ['D2Client.dll']
__int16 __stdcall TEXT_GetStringIdOfMenuType1Or2Node(D2TextHeaderStrc *pTextHeader, int nNodeId);

/// @ordinal 10908
/// @name TEXT_GetStringIdOfMenuType0Or2Node
/// @address 6fdc3890
/// Imported by ['D2Client.dll']
__int16 __stdcall TEXT_GetStringIdOfMenuType0Or2Node(D2TextHeaderStrc *pTextHeader, int nNodeId);

/// @ordinal 10909
/// @name TEXT_CreateMessageListFromTextHeader
/// @address 6fdc38c0
/// Imported by ['D2Game.dll']
void __stdcall TEXT_CreateMessageListFromTextHeader(D2TextHeaderStrc *pTextHeader, D2MessageListStrc *pMsgList);

/// @ordinal 10910
/// @name TEXT_CreateTextHeaderFromMessageList
/// @address 6fdc3970
/// Imported by ['D2Client.dll']
void __stdcall TEXT_CreateTextHeaderFromMessageList(D2TextHeaderStrc *pTextHeader, D2MessageListStrc *pMsgList);

/// @ordinal 10911
/// @name TEXT_SortTextNodeListByStringId
/// @address 6fdc3a70
/// Imported by ['D2Client.dll']
void __stdcall TEXT_SortTextNodeListByStringId(D2TextHeaderStrc *pTextHeader);

/// @ordinal 10912
/// @name SEED_InitSeed
/// @address 6fdaeab0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __fastcall SEED_InitSeed(D2SeedStrc *pSeed);

/// @ordinal 10913
/// @name SEED_InitLowSeed
/// @address 6fdaeac0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __fastcall SEED_InitLowSeed(D2SeedStrc *pSeed, int nLowSeed);

/// @ordinal 10914
/// @name SEED_GetLowSeed
/// @address 6fdaead0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __fastcall SEED_GetLowSeed(D2SeedStrc *pSeed);

/// @ordinal 10915
/// @name SEED_GetHighSeed
/// @address 6fdaeb00
/// Not imported by any .dll
int __fastcall SEED_GetHighSeed(D2SeedStrc *pSeed);

/// @ordinal 10916
/// @name SEED_Return
/// @address 6fda5260
/// Not imported by any .dll
void __stdcall SEED_Return();

/// @ordinal 10920
/// @name SEED_GetRandomValue
/// @address 6fdaea80
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __fastcall SEED_GetRandomValue(int nValue);

/// @ordinal 10921
/// @name SEED_SetSeeds
/// @address 6fdaeae0
/// Imported by ['D2Game.dll']
void __fastcall SEED_SetSeeds(D2SeedStrc *pSeed, int nLowSeed, int nHighSeed);

/// @ordinal 10922
/// @name SEED_GetSeeds
/// @address 6fdaeaf0
/// Imported by ['D2Game.dll']
void __fastcall SEED_GetSeeds(D2SeedStrc *pSeed, int *pLowSeed, int *pHighSeed);

/// @ordinal 10923
/// @name ENVIRONMENT_UpdatePeriodOfDay
/// @address 6fd8dc00
/// Imported by ['D2Client.dll']
bool __stdcall ENVIRONMENT_UpdatePeriodOfDay(D2DrlgActStrc *pAct, D2RoomStrc *pRoom);

/// @ordinal 10924
/// @name ENVIRONMENT_UpdateCycleIndex
/// @address 6fd8dd60
/// Imported by ['D2Game.dll']
BOOL __stdcall ENVIRONMENT_UpdateCycleIndex(D2DrlgActStrc *pAct, int nActNo);

/// @ordinal 10925
/// @name ENVIRONMENT_GetStatistics
/// @address 6fd8e0b0
/// Not imported by any .dll
void __stdcall ENVIRONMENT_GetStatistics(D2DrlgActStrc *pAct, float *pCos, float *pLast, float *pSin, int *a5);

/// @ordinal 10926
/// @name ENVIRONMENT_GetIntensityFromAct
/// @address 6fd8de00
/// Imported by ['D2Client.dll']
int __stdcall ENVIRONMENT_GetIntensityFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10927
/// @name ENVIRONMENT_GetLightColorFromAct
/// @address 6fd8ddd0
/// Imported by ['D2Client.dll']
void __stdcall ENVIRONMENT_GetLightColorFromAct(D2DrlgActStrc *pAct, BYTE *pRed, BYTE *pGreen, BYTE *pBlue);

/// @ordinal 10928
/// @name ENVIRONMENT_GetUnusedMember
/// @address 6fd8de70
/// Not imported by any .dll
D2DrlgEnvironmentStrc *__stdcall ENVIRONMENT_GetUnusedMember(D2DrlgActStrc *pAct);

/// @ordinal 10929
/// @name ENVIRONMENT_NextEnvCycle
/// @address 6fd8de90
/// Not imported by any .dll
char __stdcall ENVIRONMENT_NextEnvCycle(D2DrlgActStrc *pAct, D2RoomStrc *pRoom);

/// @ordinal 10930
/// @name ENVIRONMENT_GetCycleIndexFromAct
/// @address 6fd8df30
/// Imported by ['D2Client.dll']
int __stdcall ENVIRONMENT_GetCycleIndexFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10931
/// @name ENVIRONMENT_GetCycleIndex_Ticks_EclipseFromAct
/// @address 6fd8e080
/// Imported by ['D2Game.dll']
void __stdcall ENVIRONMENT_GetCycleIndex_Ticks_EclipseFromAct(D2DrlgActStrc *pAct, int *pTimeIndex, int *pTicks, int *pEclipse);

/// @ordinal 10932
/// @name ENVIRONMENT_InitializeEnvironment
/// @address 6fd8df40
/// Imported by ['D2Client.dll']
void __stdcall ENVIRONMENT_InitializeEnvironment(D2DrlgActStrc *pAct, D2RoomStrc *pRoom, int nIndex, int nAngle, int bEclipse);

/// @ordinal 10933
/// @name ENVIRONMENT_GetPeriodOfDayFromAct
/// @address 6fd8de20
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ENVIRONMENT_GetPeriodOfDayFromAct(D2DrlgActStrc *pAct, int *pBaseTime);

/// @ordinal 10934
/// @name ENVIRONMENT_GetTimeRateFromAct
/// @address 6fd8e0f0
/// Not imported by any .dll
DWORD __stdcall ENVIRONMENT_GetTimeRateFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10935
/// @name ENVIRONMENT_SetNextTimeRate
/// @address 6fd8e100
/// Not imported by any .dll
char __stdcall ENVIRONMENT_SetNextTimeRate(D2DrlgActStrc *pAct, D2RoomStrc *pRoom);

/// @ordinal 10936
/// @name ENVIRONMENT_TaintedSunBegin
/// @address 6fd8e1b0
/// Imported by ['D2Game.dll']
void __stdcall ENVIRONMENT_TaintedSunBegin(D2DrlgActStrc *pAct);

/// @ordinal 10937
/// @name ENVIRONMENT_TaintedSunEnd
/// @address 6fd8e1e0
/// Imported by ['D2Game.dll']
void __stdcall ENVIRONMENT_TaintedSunEnd(D2DrlgActStrc *pAct);

/// @ordinal 10938
/// @name SKILLS_GetPassiveState
/// @address 6fdaeb10
/// Imported by ['D2Game.dll']
__int16 __stdcall SKILLS_GetPassiveState(int nSkillId);

/// @ordinal 10940
/// @name SKILLS_RefreshSkill
/// @address 6fdaf8c0
/// Imported by ['D2Game.dll']
void __stdcall SKILLS_RefreshSkill(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 10941
/// @name SKILLS_RefreshPassiveSkills
/// @address 6fdafb40
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_RefreshPassiveSkills(D2UnitStrc *pUnit);

/// @ordinal 10942
/// @name SKILLS_GetSkillModeFromUnit
/// @address 6fdafc80
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetSkillModeFromUnit(D2UnitStrc *pUnit, D2SkillStrc *pSkill);

/// @ordinal 10943
/// @name D2Common_11049_SKILLS_Return1
/// @address 6fdafca0
/// Not imported by any .dll
int __stdcall D2Common_11049_SKILLS_Return1(int a1);

/// @ordinal 10944
/// @name SKILLS_GetRange
/// @address 6fdafcb0
/// Not imported by any .dll
int __stdcall SKILLS_GetRange(D2SkillStrc *pSkill);

/// @ordinal 10945
/// @name SKILLS_AllocSkillList
/// @address 6fdafcd0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillListStrc *__stdcall SKILLS_AllocSkillList(void *pMemPool);

/// @ordinal 10946
/// @name SKILLS_InitSkillList
/// @address 6fdafd10
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_InitSkillList(D2UnitStrc *pUnit);

/// @ordinal 10947
/// @name D2Common_10948_SKILLS_GetFirstSkillFromSkillList
/// @address 6fdafea0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillStrc *__stdcall D2Common_10948_SKILLS_GetFirstSkillFromSkillList(D2SkillListStrc *pSkillList);

/// @ordinal 10948
/// @name SKILLS_GetFirstSkillFromSkillList
/// @address 6fdafea0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillStrc *__stdcall SKILLS_GetFirstSkillFromSkillList(D2SkillListStrc *pSkillList);

/// @ordinal 10949
/// @name SKILLS_GetSkillById
/// @address 6fdaff40
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillStrc *__fastcall SKILLS_GetSkillById(D2UnitStrc *pUnit, int nSkillId, int nFlags);

/// @ordinal 10950
/// @name SKILLS_GetHighestLevelSkillFromUnitAndId
/// @address 6fdaff80
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillStrc *__fastcall SKILLS_GetHighestLevelSkillFromUnitAndId(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 10951
/// @name SKILLS_RemoveSkill
/// @address 6fdaffd0
/// Imported by ['D2Client.dll']
void __stdcall SKILLS_RemoveSkill(D2UnitStrc *pUnit, int nSkillId, char *szFile, int nLine);

/// @ordinal 10952
/// @name SKILLS_AddSkill
/// @address 6fdb0320
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillStrc *__stdcall SKILLS_AddSkill(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 10953
/// @name SKILLS_AssignSkill
/// @address 6fdb04d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_AssignSkill(D2UnitStrc *pUnit, int nSkillId, int nSkillLevel, int a4, char *szFile, int nLine);

/// @ordinal 10954
/// @name 
/// @address 6fdb05e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall(D2UnitStrc *pUnit, int nFlags, int nSkillId, int nSkillLevel, int a5, int a6);

/// @ordinal 10955
/// @name SKILLS_GetSkillInfo
/// @address 6fdb08f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall SKILLS_GetSkillInfo(D2SkillStrc *pSkill, int *pFlags, int *pSkillId, int *pSkillLevel, int *a5);

/// @ordinal 10956
/// @name SKILLS_SetCharges
/// @address 6fdb0960
/// Not imported by any .dll
BOOL __stdcall SKILLS_SetCharges(D2SkillStrc *pSkill, int a2);

/// @ordinal 10957
/// @name SKILLS_GetOwnerGUIDFromSkill
/// @address 6fdb08c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetOwnerGUIDFromSkill(D2SkillStrc *pSkill);

/// @ordinal 10958
/// @name 
/// @address 6fdb0270
/// Imported by ['D2Client.dll']
void __stdcall(D2UnitStrc *pUnit, int a2);

/// @ordinal 10959
/// @name 
/// @address 6fdb02a0
/// Not imported by any .dll
int __stdcall(D2UnitStrc *pUnit);

/// @ordinal 10960
/// @name SKILLS_FreeSkillList
/// @address 6fdb02c0
/// Not imported by any .dll
void __stdcall SKILLS_FreeSkillList(D2UnitStrc *pUnit);

/// @ordinal 10961
/// @name SKILLS_SetLeftActiveSkill
/// @address 6fdb09a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_SetLeftActiveSkill(D2UnitStrc *pUnit, int nSkillId, int nFlags);

/// @ordinal 10962
/// @name SKILLS_SetRightActiveSkill
/// @address 6fdb0a30
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_SetRightActiveSkill(D2UnitStrc *pUnit, int nSkillId, int nFlags);

/// @ordinal 10963
/// @name SKILLS_GetSkillIdFromSkill
/// @address 6fdb0ac0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetSkillIdFromSkill(D2SkillStrc *pSkill, char *szFile, int nLine);

/// @ordinal 10964
/// @name SKILLS_GetUseState
/// @address 6fdb0b70
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pUnit, int pSkill)

/// @ordinal 10965
/// @name SKILLS_GetSeqNumFromSkill
/// @address 6fdb0af0
/// Not imported by any .dll
int __fastcall SKILLS_GetSeqNumFromSkill(D2UnitStrc *pUnit, D2SkillStrc *pSkill);

/// @ordinal 10966
/// @name SKILLS_GetSkillsTxtRecordFromSkill
/// @address 6fdb1540
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillsTxt *__fastcall SKILLS_GetSkillsTxtRecordFromSkill(D2SkillStrc *pSkill);

/// @ordinal 10967
/// @name SKILLS_GetShrineSkillLevelBonus
/// @address 6fdb1550
/// Not imported by any .dll
int __stdcall SKILLS_GetShrineSkillLevelBonus(D2UnitStrc *pUnit);

/// @ordinal 10968
/// @name SKILLS_GetSkillLevel
/// @address 6fdb1700
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetSkillLevel(D2UnitStrc *pUnit, D2SkillStrc *pSkill, BOOL bBonus);

/// @ordinal 10969
/// @name 
/// @address 6fdb18f0
/// Not imported by any .dll
int __stdcall(D2SkillStrc *pSkill);

/// @ordinal 10970
/// @name 
/// @address 6fdb1920
/// Not imported by any .dll
void __stdcall(D2SkillStrc *pSkill, int a2);

/// @ordinal 10971
/// @name 
/// @address 6fdb1950
/// Not imported by any .dll
int __stdcall(D2SkillStrc *pSkill);

/// @ordinal 10972
/// @name 
/// @address 6fdb1980
/// Not imported by any .dll
void __stdcall(D2SkillStrc *pSkill, int a2);

/// @ordinal 10973
/// @name 
/// @address 6fdb19b0
/// Not imported by any .dll
void __stdcall(D2SkillStrc *pSkill);

/// @ordinal 10974
/// @name SKILLS_SetSkillMode
/// @address 6fdb18b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_SetSkillMode(D2SkillStrc *pSkill, int nSkillMode);

/// @ordinal 10975
/// @name SKILLS_GetSkillMode
/// @address 6fdb18d0
/// Imported by ['D2Game.dll']
int __stdcall SKILLS_GetSkillMode(D2SkillStrc *pSkill);

/// @ordinal 10976
/// @name SKILLS_GetParam1
/// @address 6fdb19f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetParam1(D2SkillStrc *pSkill);

/// @ordinal 10977
/// @name SKILLS_GetParam2
/// @address 6fdb1a20
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetParam2(D2SkillStrc *pSkill);

/// @ordinal 10978
/// @name SKILLS_GetParam3
/// @address 6fdb1a50
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetParam3(D2SkillStrc *pSkill);

/// @ordinal 10979
/// @name SKILLS_GetParam4
/// @address 6fdb1a80
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetParam4(D2SkillStrc *pSkill);

/// @ordinal 10980
/// @name SKILLS_SetParam1
/// @address 6fdb1ab0
/// Imported by ['D2Client.dll', 'D2Game.dll', 'D2Server.dll']
void __stdcall SKILLS_SetParam1(D2SkillStrc *pSkill, int a2);

/// @ordinal 10981
/// @name SKILLS_SetParam2
/// @address 6fdb1ae0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_SetParam2(D2SkillStrc *pSkill, int a2);

/// @ordinal 10982
/// @name SKILLS_SetParam3
/// @address 6fdb1b10
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_SetParam3(D2SkillStrc *pSkill, int a2);

/// @ordinal 10983
/// @name SKILLS_SetParam4
/// @address 6fdb1b40
/// Imported by ['D2Client.dll', 'D2Game.dll', 'D2Server.dll']
void __stdcall SKILLS_SetParam4(D2SkillStrc *pSkill, int a2);

/// @ordinal 10984
/// @name SKILLS_SetFlags
/// @address 6fdb1b70
/// Imported by ['D2Client.dll', 'D2Game.dll', 'D2Server.dll']
void __stdcall SKILLS_SetFlags(D2SkillStrc *pSkill, int a2);

/// @ordinal 10985
/// @name SKILLS_GetFlags
/// @address 6fdb1ba0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetFlags(D2SkillStrc *pSkill);

/// @ordinal 10986
/// @name SKILLS_GetRequiredLevel
/// @address 6fdb1bc0
/// Not imported by any .dll
int __stdcall SKILLS_GetRequiredLevel(int nSkillId);

/// @ordinal 10987
/// @name SKILLS_GetRequiredLevelBasedOnCurrent
/// @address 6fdb1c00
/// Not imported by any .dll
int __stdcall SKILLS_GetRequiredLevelBasedOnCurrent(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 10988
/// @name SKILLS_CheckRequiredSkills
/// @address 6fdb1c80
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall SKILLS_CheckRequiredSkills(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 10989
/// @name SKILLS_CheckRequiredAttributes
/// @address 6fdb1fc0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall SKILLS_CheckRequiredAttributes(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 10999
/// @name SKILLS_GetToHitFactor
/// @address 6fdb2110
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetToHitFactor(D2UnitStrc *pUnit, int nSkillId, int nSkillLevel);

/// @ordinal 11000
/// @name SKILLS_GetHighestSkillLevelById
/// @address 6fdb21e0
/// Imported by ['D2Game.dll']
int __stdcall SKILLS_GetHighestSkillLevelById(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 11001
/// @name SKILLS_GetManaCosts
/// @address 6fdb2280
/// Imported by ['D2Game.dll']
int __stdcall SKILLS_GetManaCosts(int nSkillId, int nSkillLevel);

/// @ordinal 11002
/// @name SKILLS_GetMinPhysDamage
/// @address 6fdb2390
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetMinPhysDamage(D2UnitStrc *pUnit, int nSkillId, int nLevel, int a4);

/// @ordinal 11003
/// @name SKILLS_GetMaxPhysDamage
/// @address 6fdb25d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetMaxPhysDamage(D2UnitStrc *pUnit, int nSkillId, int nLevel, int a4);

/// @ordinal 11004
/// @name SKILLS_GetMinElemDamage
/// @address 6fdb2810
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetMinElemDamage(D2UnitStrc *pUnit, int nSkillId, int nLevel, int a4);

/// @ordinal 11005
/// @name SKILLS_GetMaxElemDamage
/// @address 6fdb2b00
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetMaxElemDamage(D2UnitStrc *pUnit, int nSkillId, int nLevel, int a4);

/// @ordinal 11006
/// @name SKILLS_GetElementalLength
/// @address 6fdb2ca0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetElementalLength(D2UnitStrc *pUnit, int nSkillId, int nSkillLevel, int a4);

/// @ordinal 11008
/// @name SKILLS_GetClassIdFromSkillId
/// @address 6fdb2e80
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetClassIdFromSkillId(int nSkillId);

/// @ordinal 11009
/// @name D2Common_11239_SKILLS_Return0
/// @address 6fdb2e70
/// Not imported by any .dll
int __stdcall D2Common_11239_SKILLS_Return0(int arg);

/// @ordinal 11010
/// @name SKILLS_IsPlayerClassSkill
/// @address 6fdb2ec0
/// Imported by ['D2Client.dll']
BOOL __stdcall SKILLS_IsPlayerClassSkill(int nSkillId, int *pPlayerClass);

/// @ordinal 11011
/// @name SKILLS_GetQuantity
/// @address 6fdb2f40
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetQuantity(D2SkillStrc *pSkill);

/// @ordinal 11012
/// @name SKILLS_SetQuantity
/// @address 6fdb2f70
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_SetQuantity(D2SkillStrc *pSkill, int a2);

/// @ordinal 11013
/// @name ConvertMode
/// @address 6fdb30a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ConvertMode(D2UnitStrc *pUnit, int *pOutType, int *pOutClass, int *pOutMode, char *szFile, int nLine);

/// @ordinal 11014
/// @name ConvertShapeShiftedMode
/// @address 6fdb2fa0
/// Not imported by any .dll
int __stdcall ConvertShapeShiftedMode(int nOriginalMode, int nMonsterId);

/// @ordinal 11015
/// @name 
/// @address 6fdb3290
/// Not imported by any .dll
/// @guessedtype int __stdcall(int pUnit, int, int nSkillId)

/// @ordinal 11016
/// @name 
/// @address 6fdb3340
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall(D2UnitStrc *a1, D2SkillStrc *a2);

/// @ordinal 11017
/// @name CheckUnitIfConsumeable
/// @address 6fdb33a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckUnitIfConsumeable(D2UnitStrc *pUnit, int a2);

/// @ordinal 11018
/// @name D2Common_11020_
/// @address 6fdb3480
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 11019
/// @name D2Common_11022_SKILLS_CanUnitCorpseBeSelected
/// @address 6fdb3520
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11022_SKILLS_CanUnitCorpseBeSelected(D2UnitStrc *pUnit);

/// @ordinal 11020
/// @name 
/// @address 6fdb3480
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 11021
/// @name D2Common_11022_SKILLS_CanUnitCorpseBeSelected
/// @address 6fdb3520
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11022_SKILLS_CanUnitCorpseBeSelected(D2UnitStrc *pUnit);

/// @ordinal 11022
/// @name SKILLS_CanUnitCorpseBeSelected
/// @address 6fdb3520
/// Imported by ['D2Game.dll']
BOOL __stdcall SKILLS_CanUnitCorpseBeSelected(D2UnitStrc *pUnit);

/// @ordinal 11023
/// @name SKILLS_GetWeaponMasteryBonus
/// @address 6fdb36d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetWeaponMasteryBonus(D2UnitStrc *pUnit, D2UnitStrc *pItem, D2SkillStrc *pSkill, int nType);

/// @ordinal 11024
/// @name 
/// @address 6fdb35b0
/// Imported by ['D2Game.dll']
int __stdcall(D2UnitStrc *pUnit, D2UnitStrc *pItem, D2SkillStrc *pSkill, int a4, int *a5);

/// @ordinal 11025
/// @name 
/// @address 6fdb3910
/// Imported by ['D2Client.dll', 'D2Game.dll']
bool __stdcall(int a1, int a2, int a3, int a4, D2RoomStrc *pRoom, int a6);

/// @ordinal 11026
/// @name 
/// @address 6fdb3960
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int, int, int pUnit, int nCollisionType)

/// @ordinal 11027
/// @name SKILLS_GetShiftedManaCosts
/// @address 6fdb3a10
/// Imported by ['D2Game.dll']
int __stdcall SKILLS_GetShiftedManaCosts(int nSkillId, int nLevel);

/// @ordinal 11028
/// @name 
/// @address 6fdb3a90
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 11029
/// @name SKILLS_GetBonusSkillLevelFromSkillId
/// @address 6fdb1750
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetBonusSkillLevelFromSkillId(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 11030
/// @name 
/// @address 6fdb17a0
/// Imported by ['D2Client.dll']
void __stdcall(D2UnitStrc *pUnit, int nSkillId, int a3);

/// @ordinal 11031
/// @name 
/// @address 6fdb1820
/// Imported by ['D2Client.dll']
void __stdcall(D2UnitStrc *pUnit, int nSkillId, int a3);

/// @ordinal 11032
/// @name 
/// @address 6fdb37b0
/// Not imported by any .dll
int __stdcall(int a1, int nSkillId, int a3, int a4);

/// @ordinal 11033
/// @name 
/// @address 6fdb3ab0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 11034
/// @name 
/// @address 6fdb3b00
/// Imported by ['D2Game.dll']
int __stdcall(int nLevel, int nSkillId);

/// @ordinal 11035
/// @name 
/// @address 6fdb3b90
/// Not imported by any .dll
int __stdcall(int nLevel, int nSkillId);

/// @ordinal 11036
/// @name GetMonCurseResistanceSubtraction
/// @address 6fdb3c20
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetMonCurseResistanceSubtraction(int nLevel, int nSkillId);

/// @ordinal 11037
/// @name SKILLS_CheckIfCanLeapTo
/// @address 6fdb3cb0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall SKILLS_CheckIfCanLeapTo(D2UnitStrc *pUnit, D2UnitStrc *pRoom, int *pX, int *pY);

/// @ordinal 11039
/// @name CheckWeaponIsMissileBased
/// @address 6fdb3f60
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall CheckWeaponIsMissileBased(D2UnitStrc *pUnit, int *a2);

/// @ordinal 11040
/// @name SKILLS_IsEnhanceable
/// @address 6fdb4020
/// Imported by ['D2Client.dll']
BOOL __stdcall SKILLS_IsEnhanceable(int nSkillId);

/// @ordinal 11041
/// @name SKILLS_GetClassSkillId
/// @address 6fdb4100
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetClassSkillId(int nClassId, int nPosition);

/// @ordinal 11042
/// @name SKILLS_GetPlayerSkillCount
/// @address 6fdb4150
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetPlayerSkillCount(int nClassId);

/// @ordinal 11043
/// @name 
/// @address 6fdb4180
/// Not imported by any .dll
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 11047
/// @name SKILLS_GetConcentrationDamageBonus
/// @address 6fdb41d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetConcentrationDamageBonus(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 11048
/// @name D2Common_11049_SKILLS_Return1
/// @address 6fdafca0
/// Not imported by any .dll
int __stdcall D2Common_11049_SKILLS_Return1(int a1);

/// @ordinal 11049
/// @name SKILLS_Return1
/// @address 6fdafca0
/// Not imported by any .dll
int __stdcall SKILLS_Return1(int a1);

/// @ordinal 11050
/// @name 
/// @address 6fda54e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall(D2UnitStrc *pFrameCount, signed int nFrame);

/// @ordinal 11051
/// @name MONSTERS_GetMaximalLightRadius
/// @address 6fda6410
/// Imported by ['D2Client.dll']
BYTE __stdcall MONSTERS_GetMaximalLightRadius(D2UnitStrc *pUnit);

/// @ordinal 11052
/// @name 
/// @address 6fda55e0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 11053
/// @name 
/// @address 6fda5600
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 11054
/// @name 
/// @address 6fda5620
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 11055
/// @name 
/// @address 6fda5640
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall(unsigned __int8 a1, int *a2, int *a3);

/// @ordinal 11057
/// @name MONSTERS_IsSandLeaper
/// @address 6fda5750
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall MONSTERS_IsSandLeaper(D2UnitStrc *pUnit, int a2);

/// @ordinal 11058
/// @name MONSTERS_IsDemon
/// @address 6fda57d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall MONSTERS_IsDemon(D2UnitStrc *pUnit);

/// @ordinal 11059
/// @name MONSTERS_IsUndead
/// @address 6fda5830
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall MONSTERS_IsUndead(D2UnitStrc *pUnit);

/// @ordinal 11060
/// @name MONSTERS_IsBoss
/// @address 6fda58a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall MONSTERS_IsBoss(D2MonStatsTxt *pMonStatsTxt, D2UnitStrc *pUnit);

/// @ordinal 11061
/// @name MONSTERS_GetMinionSpawnInfo
/// @address 6fda5b30
/// Imported by ['D2Game.dll']
void __stdcall MONSTERS_GetMinionSpawnInfo(D2UnitStrc *pMonster, int *pId, int *pX, int *pY, int *a5, int a6, int (__fastcall *pfCallback)(D2UnitStrc *));

/// @ordinal 11062
/// @name D2Common_11077_Return
/// @address 6fda6400
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_11077_Return(int arg, int a2);

/// @ordinal 11063
/// @name 
/// @address 6fda64b0
/// Imported by ['D2Game.dll']
int __stdcall(D2RoomStrc *pRoom, int nMonsterId);

/// @ordinal 11064
/// @name MONSTERS_IsDead
/// @address 6fda5900
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall MONSTERS_IsDead(D2UnitStrc *pUnit);

/// @ordinal 11065
/// @name MONSTERS_IsPrimeEvil
/// @address 6fda6620
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall MONSTERS_IsPrimeEvil(D2UnitStrc *pMonster);

/// @ordinal 11066
/// @name 
/// @address 6fda6680
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall(D2UnitStrc *pMonster, int *pDirectionX, int *pDirectionY);

/// @ordinal 11067
/// @name MONSTERS_GetHirelingTypeId
/// @address 6fda6730
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall MONSTERS_GetHirelingTypeId(D2UnitStrc *pUnit);

/// @ordinal 11068
/// @name GetCompInfo
/// @address 6fda5270
/// Imported by ['D2Game.dll']
int __stdcall GetCompInfo(D2UnitStrc *pMonster, int nComponent);

/// @ordinal 11069
/// @name 
/// @address 6fda52f0
/// Imported by ['D2Client.dll']
DWORD __stdcall(D2UnitStrc *pMonster, unsigned int nComponent, unsigned int a3);

/// @ordinal 11070
/// @name 
/// @address 6fda5450
/// Imported by ['D2Client.dll']
DWORD __stdcall(int nMonsterId, unsigned int nMode, unsigned int nCompInfo);

/// @ordinal 11076
/// @name D2Common_11077_Return
/// @address 6fda6400
/// Not imported by any .dll
void __stdcall D2Common_11077_Return(int arg, int a2);

/// @ordinal 11077
/// @name Return
/// @address 6fda6400
/// Imported by ['D2Game.dll']
void __stdcall Return(int arg, int a2);

/// @ordinal 11078
/// @name D2Common_11079_Return0
/// @address 6fd9fb40
/// Not imported by any .dll
int __stdcall D2Common_11079_Return0(int arg, int a2);

/// @ordinal 11079
/// @name Return0
/// @address 6fd9fb40
/// Not imported by any .dll
int __stdcall Return0(int arg, int a2);

/// @ordinal 11080
/// @name D2Common_11296_Return
/// @address 6fda5250
/// Not imported by any .dll
void __stdcall D2Common_11296_Return(D2UnitStrc *pUnit);

/// @ordinal 11081
/// @name 
/// @address 6fda4e20
/// Not imported by any .dll
signed int __fastcall(int nLowSeed, D2HirelingInitStrc *pHirelingInit, unsigned __int8 a3);

/// @ordinal 11082
/// @name MONSTERS_HirelingInit
/// @address 6fda4c10
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __fastcall MONSTERS_HirelingInit(BOOL bExpansion, D2UnitStrc *pUnit, int nLowSeed, int nAct, int nDifficulty, D2HirelingInitStrc *pHirelingInit);

/// @ordinal 11083
/// @name MONSTERS_GetHirelingResurrectionCost
/// @address 6fda5220
/// Imported by ['D2Game.dll']
int __stdcall MONSTERS_GetHirelingResurrectionCost(D2UnitStrc *pUnit);

/// @ordinal 11084
/// @name MONSTERS_GetHirelingExpForNextLevel
/// @address 6fda5200
/// Imported by ['D2Game.dll']
int __stdcall MONSTERS_GetHirelingExpForNextLevel(int a1, int a2);

/// @ordinal 11085
/// @name MONSTERS_GetHirelingDescString
/// @address 6fda51a0
/// Imported by ['D2Client.dll']
wchar_t *__fastcall MONSTERS_GetHirelingDescString(int nId);

/// @ordinal 11086
/// @name MONSTERS_GetActFromHirelingTxt
/// @address 6fda51c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __fastcall MONSTERS_GetActFromHirelingTxt(BOOL bExpansion, int a2, unsigned __int16 a3);

/// @ordinal 11087
/// @name UNITFINDS_FindUnitInNeighboredRooms
/// @address 6fdbc720
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall UNITFINDS_FindUnitInNeighboredRooms(D2RoomStrc *pRoom, int nUnitType, int nClassId);

/// @ordinal 11088
/// @name UNITFINDS_GetNearestTestedUnit
/// @address 6fdbc840
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall UNITFINDS_GetNearestTestedUnit(D2UnitStrc *pUnit, int nX, int nY, int nSize, int (__fastcall *pfnUnitTest)(D2UnitStrc *, D2UnitStrc *));

/// @ordinal 11089
/// @name DATATBLS_InitializeCollisionFieldTable
/// @address 6fd52010
/// Not imported by any .dll
BOOL __stdcall DATATBLS_InitializeCollisionFieldTable(char *pExpField, int nSize);

/// @ordinal 11090
/// @name DATATBLS_FreeCollisionFieldTable
/// @address 6fd520f0
/// Not imported by any .dll
BOOL __stdcall DATATBLS_FreeCollisionFieldTable();

/// @ordinal 11091
/// @name DATATBLS_GetCollisionFieldCenter
/// @address 6fd52140
/// Not imported by any .dll
void __stdcall DATATBLS_GetCollisionFieldCenter(int *a1, int *a2);

/// @ordinal 11092
/// @name DATATBLS_GetCollisionFieldWidth
/// @address 6fd52160
/// Not imported by any .dll
int __stdcall DATATBLS_GetCollisionFieldWidth();

/// @ordinal 11093
/// @name DATATBLS_GetCollisionFieldHeight
/// @address 6fd52170
/// Not imported by any .dll
int __stdcall DATATBLS_GetCollisionFieldHeight();

/// @ordinal 11094
/// @name DATATBLS_AllocField
/// @address 6fd52180
/// Not imported by any .dll
D2FieldStrc *__stdcall DATATBLS_AllocField();

/// @ordinal 11095
/// @name DATATBLS_FreeField
/// @address 6fd521d0
/// Not imported by any .dll
void __stdcall DATATBLS_FreeField(D2FieldStrc *pField);

/// @ordinal 11096
/// @name DATATBLS_SetFieldCoordinates
/// @address 6fd52210
/// Not imported by any .dll
void __stdcall DATATBLS_SetFieldCoordinates(D2FieldStrc *pField, int nX, int nY);

/// @ordinal 11097
/// @name 
/// @address 6fd52250
/// Not imported by any .dll
int __stdcall(D2FieldStrc *pField, int a2, int a3);

/// @ordinal 11098
/// @name 
/// @address 6fd522a0
/// Not imported by any .dll
int __stdcall(D2FieldStrc *pField, int *pX, int *pY);

/// @ordinal 11099
/// @name 
/// @address 6fd52360
/// Not imported by any .dll
BOOL __stdcall(D2FieldStrc *pField, D2RoomStrc *pRoom, int nX, int nY, WORD fMask);

/// @ordinal 11100
/// @name LOG_11100
/// @address 6fda47a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void LOG_11100(int a1, int a2, int a3, int a4, char *szFile, int nLine, const char *Format, ...);

/// @ordinal 11101
/// @name LOG_11101
/// @address 6fda48e0
/// Not imported by any .dll
void LOG_11101(int nGame, int nFrame, int nClient, int a4, int nSize, const char *Format, ...);

/// @ordinal 11102
/// @name LOG_11102
/// @address 6fda46c0
/// Imported by ['D2Client.dll']
/// @guessedtype int()

/// @ordinal 11103
/// @name LOG_11103
/// @address 6fda4790
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 11104
/// @name LOG_11104
/// @address 6fda4aa0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 11105
/// @name LOG_11105
/// @address 6fda4b00
/// Imported by ['D2Client.dll']
/// Failed to extract type

/// @ordinal 11106
/// @name LOG_11106
/// @address 6fda4b80
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 11107
/// @name QUESTRECORD_GetQuestState
/// @address 6fdae800
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall QUESTRECORD_GetQuestState(D2BitBufferStrc *pQuestRecord, int nQuest, int nState);

/// @ordinal 11108
/// @name QUESTRECORD_SetQuestState
/// @address 6fdae850
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall QUESTRECORD_SetQuestState(D2BitBufferStrc *pQuestRecord, int nQuest, int nState);

/// @ordinal 11109
/// @name QUESTRECORD_ClearQuestState
/// @address 6fdae890
/// Imported by ['D2Game.dll']
void __stdcall QUESTRECORD_ClearQuestState(D2BitBufferStrc *pQuestRecord, int nQuest, int nState);

/// @ordinal 11110
/// @name QUESTRECORD_ResetIntermediateStateFlags
/// @address 6fdae8d0
/// Imported by ['D2Game.dll']
void __stdcall QUESTRECORD_ResetIntermediateStateFlags(D2BitBufferStrc *pQuestRecord, int nQuest);

/// @ordinal 11111
/// @name QUESTRECORD_AllocRecord
/// @address 6fdae920
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2BitBufferStrc *__stdcall QUESTRECORD_AllocRecord(void *pMemPool);

/// @ordinal 11112
/// @name QUESTRECORD_FreeRecord
/// @address 6fdae970
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall QUESTRECORD_FreeRecord(void *pMemPool, D2BitBufferStrc *pQuestRecord);

/// @ordinal 11113
/// @name QUESTRECORD_CopyBufferToRecord
/// @address 6fdae9b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall QUESTRECORD_CopyBufferToRecord(D2BitBufferStrc *pQuestRecord, BYTE *pBuffer, __int16 nBufferSize, int a4);

/// @ordinal 11114
/// @name QUESTRECORD_CopyRecordToBuffer
/// @address 6fdaea40
/// Imported by ['D2Game.dll']
void __stdcall QUESTRECORD_CopyRecordToBuffer(D2BitBufferStrc *pBitBuffer, BYTE *pBuffer, __int16 nBufferSize, int a4);

/// @ordinal 11115
/// @name MISSILE_AllocMissileData
/// @address 6fdb9f30
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_AllocMissileData(D2UnitStrc *pMissile);

/// @ordinal 11116
/// @name MISSILE_FreeMissileData
/// @address 6fdb9f80
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_FreeMissileData(D2UnitStrc *pMissile);

/// @ordinal 11117
/// @name MISSILE_GetFlags
/// @address 6fdb9fc0
/// Imported by ['D2Game.dll']
DWORD __stdcall MISSILE_GetFlags(D2UnitStrc *pMissile);

/// @ordinal 11118
/// @name MISSILE_SetFlags
/// @address 6fdb9fe0
/// Imported by ['D2Game.dll']
void __stdcall MISSILE_SetFlags(D2UnitStrc *pMissile, DWORD dwFlags);

/// @ordinal 11119
/// @name MISSILE_SetLevel
/// @address 6fdba000
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_SetLevel(D2UnitStrc *pMissile, WORD nLevel);

/// @ordinal 11120
/// @name MISSILE_GetLevel
/// @address 6fdba020
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall MISSILE_GetLevel(D2UnitStrc *pMissile);

/// @ordinal 11121
/// @name MISSILE_SetTotalFrames
/// @address 6fdba0a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_SetTotalFrames(D2UnitStrc *pMissile, int nTotalFrames);

/// @ordinal 11122
/// @name MISSILE_GetTotalFrames
/// @address 6fdba0e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall MISSILE_GetTotalFrames(D2UnitStrc *pMissile);

/// @ordinal 11123
/// @name MISSILE_SetCurrentFrame
/// @address 6fdba100
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_SetCurrentFrame(D2UnitStrc *pMissile, int nCurrentFrame);

/// @ordinal 11124
/// @name MISSILE_GetCurrentFrame
/// @address 6fdba140
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall MISSILE_GetCurrentFrame(D2UnitStrc *pMissile);

/// @ordinal 11125
/// @name MISSILE_GetRemainingFrames
/// @address 6fdba160
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall MISSILE_GetRemainingFrames(D2UnitStrc *pMissile);

/// @ordinal 11126
/// @name MISSILE_SetSkill
/// @address 6fdba040
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_SetSkill(D2UnitStrc *pMissile, int nSkill);

/// @ordinal 11127
/// @name MISSILE_GetSkill
/// @address 6fdba080
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall MISSILE_GetSkill(D2UnitStrc *pMissile);

/// @ordinal 11128
/// @name MISSILE_GetClassId
/// @address 6fdba190
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall MISSILE_GetClassId(D2UnitStrc *pMissile);

/// @ordinal 11129
/// @name MISSILE_SetOwner
/// @address 6fdba1b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_SetOwner(D2UnitStrc *pMissile, D2UnitStrc *pOwner);

/// @ordinal 11130
/// @name MISSILE_CheckUnitIfOwner
/// @address 6fdba230
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall MISSILE_CheckUnitIfOwner(D2UnitStrc *pMissile, D2UnitStrc *pUnit);

/// @ordinal 11131
/// @name MISSILE_SetStreamMissile
/// @address 6fdba2b0
/// Imported by ['D2Client.dll']
void __stdcall MISSILE_SetStreamMissile(D2UnitStrc *pMissile, WORD nStreamMissile);

/// @ordinal 11132
/// @name MISSILE_GetStreamMissile
/// @address 6fdba2d0
/// Imported by ['D2Client.dll']
int __stdcall MISSILE_GetStreamMissile(D2UnitStrc *pMissile);

/// @ordinal 11133
/// @name MISSILE_SetStreamRange
/// @address 6fdba300
/// Imported by ['D2Client.dll']
void __stdcall MISSILE_SetStreamRange(D2UnitStrc *pMissile, WORD nStreamRange);

/// @ordinal 11134
/// @name MISSILE_GetStreamRange
/// @address 6fdba320
/// Imported by ['D2Client.dll']
DWORD __stdcall MISSILE_GetStreamRange(D2UnitStrc *pMissile);

/// @ordinal 11135
/// @name MISSILE_GetHitClass
/// @address 6fdba340
/// Imported by ['D2Game.dll']
int __stdcall MISSILE_GetHitClass(D2UnitStrc *pMissile);

/// @ordinal 11136
/// @name MISSILE_SetActivateFrame
/// @address 6fdba390
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_SetActivateFrame(D2UnitStrc *pMissile, int nActivateFrame);

/// @ordinal 11137
/// @name MISSILE_GetActivateFrame
/// @address 6fdba3d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall MISSILE_GetActivateFrame(D2UnitStrc *pMissile);

/// @ordinal 11138
/// @name MISSILE_GetAnimSpeed
/// @address 6fdba3f0
/// Not imported by any .dll
DWORD __stdcall MISSILE_GetAnimSpeed(D2UnitStrc *pMissile);

/// @ordinal 11139
/// @name MISSILE_SetAnimSpeed
/// @address 6fdba410
/// Imported by ['D2Client.dll']
void __stdcall MISSILE_SetAnimSpeed(D2UnitStrc *pMissile, int nAnimSpeed);

/// @ordinal 11140
/// @name MISSILE_SetTargetX
/// @address 6fdba490
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_SetTargetX(D2UnitStrc *pMissile, int nStatus);

/// @ordinal 11141
/// @name MISSILE_GetTargetX
/// @address 6fdba4b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall MISSILE_GetTargetX(D2UnitStrc *pMissile);

/// @ordinal 11142
/// @name MISSILE_SetTargetY
/// @address 6fdba4d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_SetTargetY(D2UnitStrc *pMissile, D2PathPointStrc *pPathPoint);

/// @ordinal 11143
/// @name MISSILE_GetTargetY
/// @address 6fdba4f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2PathPointStrc *__stdcall MISSILE_GetTargetY(D2UnitStrc *pMissile);

/// @ordinal 11144
/// @name MISSILE_SetHomeType
/// @address 6fdba510
/// Not imported by any .dll
void __stdcall MISSILE_SetHomeType(D2UnitStrc *pMissile, D2UnitStrc *pTarget);

/// @ordinal 11145
/// @name MISSILE_GetHomeType
/// @address 6fdba550
/// Not imported by any .dll
void __stdcall MISSILE_GetHomeType(D2UnitStrc *pMissile, int *nHomeType, int *nHomeGUID);

/// @ordinal 11146
/// @name WAYPOINTS_IsActivated
/// @address 6fdc3de0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pHistory, int wField)

/// @ordinal 11147
/// @name WAYPOINTS_ActivateWaypoint
/// @address 6fdc3e80
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pHistory, int wField)

/// @ordinal 11148
/// @name WAYPOINTS_AllocWaypointData
/// @address 6fdc3f20
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int pMemPool)

/// @ordinal 11149
/// @name WAYPOINTS_FreeWaypointData
/// @address 6fdc3f70
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int pMemPool, int pFree)

/// @ordinal 11150
/// @name WAYPOINTS_CopyAndValidateWaypointData
/// @address 6fdc3fd0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pDestination, int pSource)

/// @ordinal 11151
/// @name WAYPOINTS_ValidateAndCopyWaypointData
/// @address 6fdc4060
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pSource, int pDestination)

/// @ordinal 11152
/// @name WAYPOINTS_GetWaypointNoFromLevelId
/// @address 6fdc3d90
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall WAYPOINTS_GetWaypointNoFromLevelId(int nLevelId, WORD *nWpNo);

/// @ordinal 11153
/// @name WAYPOINTS_GetLevelIdFromWaypointNo
/// @address 6fdc3d20
/// Imported by ['D2Client.dll']
BOOL __stdcall WAYPOINTS_GetLevelIdFromWaypointNo(WORD nWaypointId, int *nLevelId);

/// @ordinal 11213
/// @name MISSTREAM_AllocMissileStream
/// @address 6fdbc230
/// Not imported by any .dll
void __stdcall MISSTREAM_AllocMissileStream(D2UnitStrc *pMissile);

/// @ordinal 11214
/// @name MISSTREAM_FreeMissileStream
/// @address 6fdbc280
/// Imported by ['D2Client.dll']
void __stdcall MISSTREAM_FreeMissileStream(D2UnitStrc *pMissile);

/// @ordinal 11215
/// @name MISSTREAM_ExecuteHit
/// @address 6fdbc2e0
/// Not imported by any .dll
D2RoomStrc *__stdcall MISSTREAM_ExecuteHit(D2UnitStrc *pUnit, int a2, int a3, FARPROC pfnHit);

/// @ordinal 11216
/// @name MISSTREAM_Update
/// @address 6fdbc3c0
/// Not imported by any .dll
int __stdcall MISSTREAM_Update(int a1, D2UnitStrc *pMissile, signed int a3, signed int a4, FARPROC lpfn, void (__thiscall *a6)(_DWORD));

/// @ordinal 11217
/// @name MISSILE_CalculateDamageData
/// @address 6fdba5b0
/// Imported by ['D2Game.dll']
void __stdcall MISSILE_CalculateDamageData(D2MissileDamageDataStrc *pMissileDamageData, D2UnitStrc *pOwner, D2UnitStrc *pOrigin, D2UnitStrc *pMissile, int nLevel);

/// @ordinal 11218
/// @name MISSILE_SetDamageStats
/// @address 6fdbb2e0
/// Imported by ['D2Game.dll']
void __stdcall MISSILE_SetDamageStats(D2UnitStrc *pOwner, D2UnitStrc *pMissile, D2MissileDamageDataStrc *pMissileDamageData, int nLevel);

/// @ordinal 11221
/// @name MISSILE_GetElementalLength
/// @address 6fdbbba0
/// Imported by ['D2Client.dll']
int __stdcall MISSILE_GetElementalLength(int nUnused, D2UnitStrc *pMissile, int nMissileId, int nLevel);

/// @ordinal 11222
/// @name DRLGPRESET_CountPresetObjectsByAct
/// @address 6fd859a0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 11223
/// @name DRLGPRESET_GetObjectIndexFromObjPreset
/// @address 6fd859e0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 11226
/// @name DATATBLS_CheckActInLevelTypesTxt
/// @address 6fd614a0
/// Imported by ['D2Client.dll']
bool __stdcall DATATBLS_CheckActInLevelTypesTxt(int nLevelType, BYTE nAct);

/// @ordinal 11227
/// @name DATATBLS_GetFileNameFromLevelTypeAndFileId
/// @address 6fd61500
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_GetFileNameFromLevelTypeAndFileId(int nLevelType, int nFileId, char *szFile);

/// @ordinal 11229
/// @name D2Common_11296_Return
/// @address 6fda5250
/// Not imported by any .dll
void __stdcall D2Common_11296_Return(D2UnitStrc *pUnit);

/// @ordinal 11230
/// @name SKILLS_RemoveTransformStatesFromShapeshiftedUnit
/// @address 6fdb4070
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 11232
/// @name DATATBLS_GetCubemainTxtRecord
/// @address 6fd54260
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int nIndex)

/// @ordinal 11233
/// @name DATATBLS_GetCubemainTxtRecordCount
/// @address 6fd542c0
/// Imported by ['D2Game.dll']
int __fastcall DATATBLS_GetCubemainTxtRecordCount();

/// @ordinal 11234
/// @name STATES_CheckStateMaskPgsvOnUnit
/// @address 6fdb4a10
/// Imported by ['D2Game.dll']
BOOL __stdcall STATES_CheckStateMaskPgsvOnUnit(D2UnitStrc *pUnit);

/// @ordinal 11235
/// @name D2Common_11239_SKILLS_Return0
/// @address 6fdb2e70
/// Not imported by any .dll
int __stdcall D2Common_11239_SKILLS_Return0(int arg);

/// @ordinal 11236
/// @name D2Common_11240_Return
/// @address 6fdb40f0
/// Not imported by any .dll
void __stdcall D2Common_11240_Return(int arg, int a2, int a3);

/// @ordinal 11237
/// @name D2Common_11240_Return
/// @address 6fdb40f0
/// Not imported by any .dll
void __stdcall D2Common_11240_Return(int arg, int a2, int a3);

/// @ordinal 11238
/// @name UNITS_IsCorpseUseable
/// @address 6fdc2860
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 11239
/// @name SKILLS_Return0
/// @address 6fdb2e70
/// Not imported by any .dll
int __stdcall SKILLS_Return0(int arg);

/// @ordinal 11240
/// @name Return
/// @address 6fdb40f0
/// Not imported by any .dll
void __stdcall Return(int arg, int a2, int a3);

/// @ordinal 11241
/// @name D2Common_11296_Return
/// @address 6fda5250
/// Not imported by any .dll
void __stdcall D2Common_11296_Return(D2UnitStrc *pUnit);

/// @ordinal 11242
/// @name DATATBLS_ToggleCompileTxtFlag
/// @address 6fd500f0
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_ToggleCompileTxtFlag(BOOL bSilent);

/// @ordinal 11243
/// @name STATLIST_GetBaseStatsData
/// @address 6fdb8c00
/// Imported by ['D2Game.dll']
int __stdcall STATLIST_GetBaseStatsData(D2StatListExStrc *pStatList, D2StatStrc *pStatBuffer, int nBufferSize);

/// @ordinal 11244
/// @name ITEMS_GetRealmData
/// @address 6fd9dfe0
/// Not imported by any .dll
void __stdcall ITEMS_GetRealmData(D2UnitStrc *pItem, int *pRealmData0, int *pRealmData1);

/// @ordinal 11245
/// @name ITEMS_SetRealmData
/// @address 6fd9e070
/// Not imported by any .dll
void __stdcall ITEMS_SetRealmData(D2UnitStrc *pItem, int a2, int a3);

/// @ordinal 11246
/// @name 
/// @address 6fda6790
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall(D2UnitStrc *pMonster, int a2, BYTE a3);

/// @ordinal 11247
/// @name DATATBLS_GetMonsterLevelInArea
/// @address 6fd604f0
/// Imported by ['D2Game.dll']
int __stdcall DATATBLS_GetMonsterLevelInArea(int nLevelId, BYTE nDifficulty, BOOL bExpansion);

/// @ordinal 11248
/// @name 
/// @address 6fdb9b10
/// Imported by ['D2Client.dll']
int __stdcall(D2UnitStrc *pUnused, D2UnitStrc *pUnit, int nStatId);

/// @ordinal 11249
/// @name DATATBLS_GetExpRatio
/// @address 6fd49680
/// Imported by ['D2Game.dll']
DWORD __stdcall DATATBLS_GetExpRatio(int nClass);

/// @ordinal 11250
/// @name DATATBLS_GetMonSoundsTxtRecordFromMonsterId
/// @address 6fd6bf80
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int nMonsterId)

/// @ordinal 11252
/// @name DATATBLS_GetMonSoundsTxtRecordFromSoundId
/// @address 6fd6bf50
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int nSoundId)

/// @ordinal 11255
/// @name DATATBLS_GetCodeFromCompCodeTxt
/// @address 6fd49660
/// Not imported by any .dll
DWORD __stdcall DATATBLS_GetCodeFromCompCodeTxt(int nCompCode);

/// @ordinal 11256
/// @name DATATBLS_GetMonPresetTxtActSection
/// @address 6fd6ef30
/// Not imported by any .dll
/// @guessedtype int __stdcall(int nAct, int)

/// @ordinal 11257
/// @name DATATBLS_GetSuperUniquesTxtRecordCount
/// @address 6fd6a470
/// Imported by ['D2Game.dll']
int __fastcall DATATBLS_GetSuperUniquesTxtRecordCount();

/// @ordinal 11258
/// @name DATATBLS_MapSuperUniqueId
/// @address 6fd6ef70
/// Imported by ['D2Game.dll']
int __stdcall DATATBLS_MapSuperUniqueId(int nMonsterType, int nMonsterId);

/// @ordinal 11259
/// @name UNITS_AllocUnit
/// @address 6fdbd6b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall UNITS_AllocUnit(void *pMemPool, DWORD dwUnitType);

/// @ordinal 11260
/// @name UNITS_FreeUnit
/// @address 6fdbd720
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_FreeUnit(D2UnitStrc *pUnit);

/// @ordinal 11261
/// @name DATATBLS_CalculateMonsterStatsByLevel
/// @address 6fd67bd0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall DATATBLS_CalculateMonsterStatsByLevel(int nMonsterId, int nGameType, int nDifficulty, int nLevel, __int16 nFlags, D2UnkMonInitStrc *a6);

/// @ordinal 11262
/// @name DATATBLS_GetMonSeqTableRecord
/// @address 6fd6f200
/// Not imported by any .dll
D2SeqRecordStrc *__stdcall DATATBLS_GetMonSeqTableRecord(int nSequence);

/// @ordinal 11263
/// @name COLLISION_RayTrace
/// @address 6fd45210
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall COLLISION_RayTrace(D2RoomStrc *pRoom, D2CoordStrc *pBeginCoord, D2CoordStrc *pEndCoord, uint16_t nCollisionType);

/// @ordinal 11264
/// @name STATLIST_SetSkillId
/// @address 6fda9e60
/// Imported by ['D2Game.dll']
void __stdcall STATLIST_SetSkillId(D2DynamicPathStrc *pDynamicPath, D2RoomStrc *pRoom);

/// @ordinal 11265
/// @name STATLIST_GetSkillId
/// @address 6fdb9c10
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall STATLIST_GetSkillId(D2DynamicPathStrc *pPath);

/// @ordinal 11266
/// @name STATLIST_SetSkillLevel
/// @address 6fdb9c20
/// Imported by ['D2Game.dll']
void __stdcall STATLIST_SetSkillLevel(D2StatListExStrc *pStatList, int nSkillLevel);

/// @ordinal 11267
/// @name STATLIST_GetSkillLevel
/// @address 6fda9e70
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall STATLIST_GetSkillLevel(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 11268
/// @name STATLIST_GetFullStatsDataFromUnit
/// @address 6fdb8ba0
/// Not imported by any .dll
int __stdcall STATLIST_GetFullStatsDataFromUnit(D2UnitStrc *pUnit, D2StatStrc *pStat, int nStats);

/// @ordinal 11269
/// @name CopyStats
/// @address 6fdb9c30
/// Imported by ['D2Client.dll']
int __stdcall CopyStats(D2StatListExStrc *pStatlist, WORD wStat, D2StatStrc *pBuffer, size_t nBufferSize);

/// @ordinal 11270
/// @name STATLIST_CopyStats
/// @address 6fdb9d20
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall STATLIST_CopyStats(D2UnitStrc *a1, WORD wStat, D2StatStrc *pBuffer, size_t nBufferSize);

/// @ordinal 11271
/// @name SKILLS_GetSpecialParamValue
/// @address 6fdaeb60
/// Not imported by any .dll
int __stdcall SKILLS_GetSpecialParamValue(D2UnitStrc *pUnit, unsigned __int8 a2, int nSkillId, int nSkillLevel);

/// @ordinal 11272
/// @name STATES_CheckStateMaskRemHitOnUnit
/// @address 6fdb4c30
/// Imported by ['D2Game.dll']
BOOL __stdcall STATES_CheckStateMaskRemHitOnUnit(D2UnitStrc *pUnit);

/// @ordinal 11273
/// @name 
/// @address 6fdb9d60
/// Not imported by any .dll
int __stdcall(D2UnitStrc *pUnit, int a2);

/// @ordinal 11274
/// @name 
/// @address 6fdb9d90
/// Not imported by any .dll
BOOL __stdcall(D2UnitStrc *pTarget, D2UnitStrc *pUnit);

/// @ordinal 11275
/// @name 
/// @address 6fdb9e60
/// Not imported by any .dll
BOOL __stdcall(D2UnitStrc *pTarget, D2UnitStrc *pUnit);

/// @ordinal 11276
/// @name SKILLS_EvaluateSkillFormula
/// @address 6fdaf7e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_EvaluateSkillFormula(D2UnitStrc *pUnit, unsigned int nCalc, int nSkillId, int nSkillLevel);

/// @ordinal 11277
/// @name D2Common_11296_Return
/// @address 6fda5250
/// Imported by ['D2Game.dll']
void __stdcall D2Common_11296_Return(D2UnitStrc *pUnit);

/// @ordinal 11278
/// @name INVENTORY_GetItemsXPosition
/// @address 6fd8fed0
/// Imported by ['D2Game.dll']
DWORD __stdcall INVENTORY_GetItemsXPosition(D2InventoryStrc *pInventory, D2UnitStrc *pUnit);

/// @ordinal 11279
/// @name UNITROOM_AddUnitToRoomEx
/// @address 6fdbcf10
/// Imported by ['D2Game.dll']
int __stdcall UNITROOM_AddUnitToRoomEx(D2UnitStrc *pUnit, D2RoomStrc *pRoom, int nUnused);

/// @ordinal 11280
/// @name MONSTERS_GetSpawnMode_XY
/// @address 6fda5930
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall MONSTERS_GetSpawnMode_XY(D2UnitStrc *pUnit, int a2, int nSkillId, int nUnused, int *pSpawnMode, int *pX, int *pY);

/// @ordinal 11281
/// @name CollisionPatternFromSize
/// @address 6fda9250
/// Not imported by any .dll
signed int __stdcall CollisionPatternFromSize(D2UnitStrc *pUnit, int a2);

/// @ordinal 11282
/// @name PATH_GetCollisionPatternFromMonStats2Txt
/// @address 6fda91b0
/// Not imported by any .dll
int __stdcall PATH_GetCollisionPatternFromMonStats2Txt(int nMonsterId);

/// @ordinal 11283
/// @name SKILLS_CalculateKickDamage
/// @address 6fdb4260
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_CalculateKickDamage(D2UnitStrc *pUnit, int *pMinDamage, int *pMaxDamage, int *pDamagePercent);

/// @ordinal 11284
/// @name MISSILE_EvaluateMissileFormula
/// @address 6fdbc170
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall MISSILE_EvaluateMissileFormula(D2UnitStrc *pMissile, D2UnitStrc *pOwner, DWORD nId, int nMissile, int nLevel);

/// @ordinal 11285
/// @name MISSILE_GetMinDamage
/// @address 6fdbb5a0
/// Imported by ['D2Client.dll']
int __stdcall MISSILE_GetMinDamage(D2UnitStrc *pMissile, D2UnitStrc *pOwner, int nId, int nLevel);

/// @ordinal 11286
/// @name MISSILE_GetMaxDamage
/// @address 6fdbb710
/// Imported by ['D2Client.dll']
int __stdcall MISSILE_GetMaxDamage(D2UnitStrc *pMissile, D2UnitStrc *pOwner, int nId, int nLevel);

/// @ordinal 11287
/// @name MISSILE_GetMinElemDamage
/// @address 6fdbb8c0
/// Imported by ['D2Client.dll']
int __stdcall MISSILE_GetMinElemDamage(D2UnitStrc *pMissile, D2UnitStrc *pOwner, int nId, int nLevel);

/// @ordinal 11288
/// @name MISSILE_GetMaxElemDamage
/// @address 6fdbba30
/// Imported by ['D2Client.dll']
int __stdcall MISSILE_GetMaxElemDamage(D2UnitStrc *pMissile, D2UnitStrc *pOwner, int nId, int nLevel);

/// @ordinal 11289
/// @name MISSILE_GetElemTypeFromMissileId
/// @address 6fdbb880
/// Imported by ['D2Client.dll', 'D2Game.dll']
char __stdcall MISSILE_GetElemTypeFromMissileId(int nMissileId);

/// @ordinal 11290
/// @name MISSILE_GetSpecialParamValue
/// @address 6fdbbc50
/// Not imported by any .dll
int __stdcall MISSILE_GetSpecialParamValue(D2UnitStrc *pMissile, D2UnitStrc *pOwner, int, int nId, int nLevel);

/// @ordinal 11291
/// @name PATH_SetNumberOfPathPoints
/// @address 6fda9b90
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetNumberOfPathPoints(D2DynamicPathStrc *pDynamicPath, int a2);

/// @ordinal 11292
/// @name ItemAssignProperty
/// @address 6fd98160
/// Imported by ['D2Game.dll']
void __stdcall ItemAssignProperty(D2C_PropertyModes nPropertyMode, D2UnitStrc *pUnit, D2UnitStrc *pItem, void *pMods, int nIndex, int nPropSet, D2PropertyStrc *pProperty, int nState, int fStatlist, int nSubType);

/// @ordinal 11293
/// @name ITEMMODS_GetItemCharges
/// @address 6fd926c0
/// Imported by ['D2Game.dll']
BOOL __stdcall ITEMMODS_GetItemCharges(D2UnitStrc *pItem, int nSkillId, int a3, int *pValue, D2StatListStrc **ppStatList);

/// @ordinal 11294
/// @name STATLIST_SetBaseStat
/// @address 6fdb7930
/// Not imported by any .dll
BOOL __stdcall STATLIST_SetBaseStat(D2StatListStrc *pStatList, int a2, int nValue, unsigned __int16 a4, int a5);

/// @ordinal 11295
/// @name STATLIST_SetBaseStat2
/// @address 6fdb7a90
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall STATLIST_SetBaseStat2(D2StatListStrc *a1, int a2, int a3, unsigned __int16 a4, int a5);

/// @ordinal 11296
/// @name Return
/// @address 6fda5250
/// Not imported by any .dll
void __stdcall Return(D2UnitStrc *pUnit);

/// @ordinal 11297
/// @name MONSTERS_SetMonsterNameInMonsterData
/// @address 6fda5670
/// Imported by ['D2Client.dll']
void __fastcall MONSTERS_SetMonsterNameInMonsterData(D2UnitStrc *pUnit, wchar_t *wszName);

/// @ordinal 11298
/// @name DATATBLS_GetUnitNameFromUnit
/// @address 6fd4f990
/// Imported by ['D2Client.dll', 'D2Game.dll']
char *__stdcall DATATBLS_GetUnitNameFromUnit(D2UnitStrc *pUnit, char *szName);

/// @ordinal 11299
/// @name DATATBLS_GetUnitNameFromUnitTypeAndClassId
/// @address 6fd4fb50
/// Not imported by any .dll
char *__stdcall DATATBLS_GetUnitNameFromUnitTypeAndClassId(D2C_UnitTypes nUnitType, int nUnitId, char *Format);

/// @ordinal 11300
/// @name ITEMMODS_EvaluateItemFormula
/// @address 6fd98300
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall ITEMMODS_EvaluateItemFormula(D2UnitStrc *pUnit, D2UnitStrc *pItem, unsigned int nCalc);

/// @ordinal 11301
/// @name INVENTORY_GetSecondaryWeapon
/// @address 6fd8fd10
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_GetSecondaryWeapon(D2InventoryStrc *pInventory);

/// @ordinal 11302
/// @name SKILLS_EvaluateSkillDescFormula
/// @address 6fdaf850
/// Imported by ['D2Client.dll']
int __stdcall SKILLS_EvaluateSkillDescFormula(D2UnitStrc *pUnit, int nCalc, int nSkillId, int nSkillLevel);

/// @ordinal 11303
/// @name STATES_CheckStateMaskOnUnit
/// @address 6fdb5740
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall STATES_CheckStateMaskOnUnit(D2UnitStrc *pUnit, int nStateMask);

/// @ordinal 11304
/// @name STATLIST_GetBaseStatsCount
/// @address 6fdb7280
/// Not imported by any .dll
int __stdcall STATLIST_GetBaseStatsCount(D2StatListExStrc *pStatListEx);

/// @ordinal 11305
/// @name STATLIST_GetFullStatsCountFromUnit
/// @address 6fdb72a0
/// Imported by ['D2Game.dll']
int __stdcall STATLIST_GetFullStatsCountFromUnit(D2UnitStrc *pUnit);

/// @ordinal 11306
/// @name INVENTORY_GetBackPackItemByCode
/// @address 6fd90d50
/// Not imported by any .dll
D2UnitStrc *__stdcall INVENTORY_GetBackPackItemByCode(D2InventoryStrc *pInventory, int nItemCode, D2UnitStrc *a3);

/// @ordinal 11307
/// @name UNITS_IsObjectInInteractRange
/// @address 6fdc2910
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall UNITS_IsObjectInInteractRange(D2UnitStrc *a1, D2UnitStrc *pUnit);

