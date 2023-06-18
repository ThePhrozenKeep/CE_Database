// List of D2Common.dll exports (base address 6fd40000)
// For each of the other .DLLs, here are the number of imports of the current module exports:
// (Note that this is not the number of uses/references, just the number of times the current module is listed in the import table)
// |- D2Client.dll     : 622
// |- D2Game.dll       : 712
// |- D2Server.dll     :   5


/// @ordinal 10000
/// @name GetLevelType
/// @address 6fd75260
/// Imported by ['D2Client.dll']
int __stdcall GetLevelType(int nLevelId);

/// @ordinal 10001
/// @name GetActNoFromLevelId
/// @address 6fd75300
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall GetActNoFromLevelId(int nLevelId);

/// @ordinal 10002
/// @name GetLOSDraw
/// @address 6fd75350
/// Imported by ['D2Client.dll']
int __stdcall GetLOSDraw(int nLevelId);

/// @ordinal 10003
/// @name D2Common_10003
/// @address 6fd73f20
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10003(D2DrlgStrc *pDrlg);

/// @ordinal 10004
/// @name GetSaveMonsters
/// @address 6fd75330
/// Imported by ['D2Game.dll']
int __stdcall GetSaveMonsters(int nLevelId);

/// @ordinal 10005
/// @name GetLevel
/// @address 6fd749a0
/// Not imported by any .dll
D2DrlgLevelStrc *__stdcall GetLevel(D2DrlgStrc *pDrlg, int nLevelId);

/// @ordinal 10006
/// @name InitLevel
/// @address 6fd74c10
/// Not imported by any .dll
void __stdcall InitLevel(D2DrlgLevelStrc *pLevel);

/// @ordinal 10007
/// @name GetRoomExFromRoom
/// @address 6fd8d0c0
/// Imported by ['D2Client.dll']
D2RoomExStrc *__fastcall GetRoomExFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10008
/// @name D2Common_10008
/// @address 6fd881a0
/// Not imported by any .dll
int __thiscall D2Common_10008(D2DrlgStrc *this);

/// @ordinal 10009
/// @name D2Common_10009
/// @address 6fd881b0
/// Not imported by any .dll
char *__fastcall D2Common_10009(D2RoomExStrc *pRoomEx);

/// @ordinal 10010
/// @name GetLevelDefsRecord
/// @address 6fd60d90
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2LevelDefBin *__fastcall GetLevelDefsRecord(int nLevelId);

/// @ordinal 10011
/// @name GetAutomapCell
/// @address 6fd62d30
/// Imported by ['D2Client.dll']
int __fastcall GetAutomapCell(int dwAutomapLevelType, int dwAutomapTileType, int nStyle, signed int nSequence);

/// @ordinal 10012
/// @name FreeDrlgAndLevels
/// @address 6fd743b0
/// Not imported by any .dll
void __fastcall FreeDrlgAndLevels(D2DrlgStrc *pDrlg);

/// @ordinal 10013
/// @name AllocLevel
/// @address 6fd748d0
/// Not imported by any .dll
D2DrlgLevelStrc *__fastcall AllocLevel(D2DrlgStrc *pDrlg, int nLevelId);

/// @ordinal 10014
/// @name AllocDrlg
/// @address 6fd74120
/// Not imported by any .dll
/// @guessedtype int __stdcall(int a3, int nInitSeed, int nLevelId, int nFlags, int pGame, char nDifficulty, int a9, int a10)

/// @ordinal 10015
/// @name D2Common_10015
/// @address 6fd73ef0
/// Not imported by any .dll
void __fastcall D2Common_10015(int *a1, int *a2, int *a3, int *a4);

/// @ordinal 10016
/// @name D2Common_10018_Return0
/// @address 6fd412b0
/// Not imported by any .dll
int __stdcall D2Common_10018_Return0();

/// @ordinal 10017
/// @name GetNumberOfShadowsFromRoom
/// @address 6fd8a1b0
/// Not imported by any .dll
int __fastcall GetNumberOfShadowsFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10018
/// @name Return0
/// @address 6fd412b0
/// Not imported by any .dll
int __stdcall Return0();

/// @ordinal 10019
/// @name D2Common_11296_MONSTERS_Return
/// @address 6fda5250
/// Not imported by any .dll
void __stdcall D2Common_11296_MONSTERS_Return(D2UnitStrc *pUnit);

/// @ordinal 10020
/// @name DRLGPRESET_CreateCopyOfMapAI
/// @address 6fd86480
/// Imported by ['D2Game.dll']
D2MapAIStrc *__fastcall DRLGPRESET_CreateCopyOfMapAI(void *pMemPool, D2MapAIStrc *pMapAI);

/// @ordinal 10021
/// @name D2Common_10021
/// @address 6fd864f0
/// Imported by ['D2Game.dll']
int __fastcall D2Common_10021(int *a1, int *a2);

/// @ordinal 10022
/// @name D2Common_10022
/// @address 6fd86500
/// Imported by ['D2Game.dll']
/// @guessedtype int __fastcall(void *pMemPool, void *pFree)

/// @ordinal 10023
/// @name GetLevelTypesTxtRecord
/// @address 6fd61460
/// Not imported by any .dll
D2LvlTypesTxt *__stdcall GetLevelTypesTxtRecord(int nLevelType);

/// @ordinal 10024
/// @name GetLvlPrestTxtRecord
/// @address 6fd61b50
/// Not imported by any .dll
D2LvlPrestTxt *__stdcall GetLvlPrestTxtRecord(int nLvlPrestId);

/// @ordinal 10025
/// @name DRLG_GetRoomCenterX_RoomWarpXFromRoom
/// @address 6fd8d1e0
/// Imported by ['D2Game.dll']
int *__stdcall DRLG_GetRoomCenterX_RoomWarpXFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10026
/// @name EnableOrDisableRoomTiles
/// @address 6fd8b9e0
/// Not imported by any .dll
void __stdcall EnableOrDisableRoomTiles(D2RoomStrc *pRoom, BOOL bEnabled);

/// @ordinal 10027
/// @name D2Common_10027
/// @address 6fd8ba20
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall D2Common_10027(D2RoomStrc *pRoom, int nSourceLevel, D2LvlWarpTxt **ppLvlWarpTxtRecord);

/// @ordinal 10028
/// @name GetLvlWarpTxtRecord
/// @address 6fd8bab0
/// Imported by ['D2Client.dll']
D2LvlWarpTxt *__stdcall GetLvlWarpTxtRecord(D2RoomStrc *pRoom, D2UnitStrc *pUnit);

/// @ordinal 10029
/// @name GetFirstUnitInRoom
/// @address 6fd8c4a0
/// Imported by ['D2Client.dll']
D2UnitStrc *__stdcall GetFirstUnitInRoom(D2RoomStrc *pRoom);

/// @ordinal 10030
/// @name GetFloorTilesFromRoom
/// @address 6fd8baf0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetFloorTilesFromRoom(D2RoomStrc *pRoom, int *pFloorCount);

/// @ordinal 10031
/// @name GetWallTilesFromRoom
/// @address 6fd8bb20
/// Imported by ['D2Client.dll']
void *__stdcall GetWallTilesFromRoom(D2RoomStrc *pRoom, int *pWallCount);

/// @ordinal 10032
/// @name GetRoofTilesFromRoom
/// @address 6fd8bb60
/// Imported by ['D2Client.dll']
void *__stdcall GetRoofTilesFromRoom(D2RoomStrc *pRoom, int *pRoofCount);

/// @ordinal 10033
/// @name DUNGEON_GetTileDataFromAct
/// @address 6fd8bba0
/// Imported by ['D2Client.dll']
D2DrlgTileDataStrc *__stdcall DUNGEON_GetTileDataFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10034
/// @name GetRoomCoordStrc
/// @address 6fd8bbb0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall GetRoomCoordStrc(D2RoomStrc *pRoom, D2RoomCoordStrc *pCoord);

/// @ordinal 10035
/// @name DUNGEON_GetAdjacentRoomsListFromRoom
/// @address 6fd8bc10
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall DUNGEON_GetAdjacentRoomsListFromRoom(D2RoomStrc *pRoom, D2RoomStrc ***pppRoom, DWORD *pNumRooms);

/// @ordinal 10036
/// @name GetAlliedCountFromRoom
/// @address 6fd8c4f0
/// Not imported by any .dll
int __stdcall GetAlliedCountFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10037
/// @name GetTownIdFromAct
/// @address 6fd8d4f0
/// Imported by ['D2Game.dll']
int __stdcall GetTownIdFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10038
/// @name AllocAct
/// @address 6fd8b8a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(char nActNo, int nInitSeed, int bClient, int pGame, int nDifficulty, int pMemPool, int nTownLevelId, int a9, int a10)

/// @ordinal 10039
/// @name FreeAct
/// @address 6fd8b950
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall FreeAct(D2DrlgActStrc *pAct);

/// @ordinal 10040
/// @name DUNGEON_DoRoomsTouchOrOverlap
/// @address 6fd8bd90
/// Not imported by any .dll
bool __stdcall DUNGEON_DoRoomsTouchOrOverlap(D2RoomStrc *ptFirst, D2RoomStrc *ptSecond);

/// @ordinal 10041
/// @name DUNGEON_FindRoomByCoordinates
/// @address 6fd8c240
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2RoomStrc *__stdcall DUNGEON_FindRoomByCoordinates(D2DrlgActStrc *pAct, int nX, int nY);

/// @ordinal 10042
/// @name sgptDataTable
/// @address 6fdd6a20
/// Not imported by any .dll
/// @guessedtype int *

/// @ordinal 10043
/// @name DUNGEON_AreCoordinatesInsideRoom
/// @address 6fd8be30
/// Not imported by any .dll
bool __stdcall DUNGEON_AreCoordinatesInsideRoom(D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10044
/// @name D2Common_10044
/// @address 6fd8d040
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10044(D2RoomStrc *pRoom);

/// @ordinal 10045
/// @name D2Common_10045
/// @address 6fd8c340
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall D2Common_10045(D2DrlgActStrc *pAct, int nLevelId, int a3, int *a4, int a5, int nUnitSize);

/// @ordinal 10046
/// @name D2Common_10046
/// @address 6fd8c2f0
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall D2Common_10046(D2DrlgActStrc *pAct, int nLevelId, int a3, int *a4, int *a5);

/// @ordinal 10047
/// @name GetTombStaffLevel
/// @address 6fd8d520
/// Imported by ['D2Game.dll']
int __stdcall GetTombStaffLevel(D2DrlgActStrc *pAct);

/// @ordinal 10048
/// @name D2Common_10048
/// @address 6fd8be90
/// Not imported by any .dll
int __stdcall D2Common_10048(D2RoomStrc *pRoom, int nUnused);

/// @ordinal 10049
/// @name DUNGEON_ForEachRoom
/// @address 6fd8bff0
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_ForEachRoom(D2RoomStrc *pRoom, FARPROC pfnRoomCallback, void *a3);

/// @ordinal 10050
/// @name D2Common_10050
/// @address 6fd8bf50
/// Not imported by any .dll
D2RoomStrc *__stdcall D2Common_10050(D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10051
/// @name D2Common_10051
/// @address 6fd8bf00
/// Not imported by any .dll
int __stdcall D2Common_10051(int a1, int nX, int nY);

/// @ordinal 10052
/// @name D2Common_10052
/// @address 6fd8c080
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10052(D2RoomStrc *pRoom, RECT *pRect);

/// @ordinal 10053
/// @name DUNGEON_GetSubtileRect
/// @address 6fd8c170
/// Not imported by any .dll
void __stdcall DUNGEON_GetSubtileRect(D2RoomStrc *pRoom, RECT *pRect);

/// @ordinal 10054
/// @name GetRGB_IntensityFromRoom
/// @address 6fd8c210
/// Imported by ['D2Client.dll']
void __stdcall GetRGB_IntensityFromRoom(D2RoomStrc *pRoom, BYTE *pIntensity, BYTE *pRed, BYTE *pGreen, BYTE *pBlue);

/// @ordinal 10055
/// @name D2Common_10055
/// @address 6fd8c5c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2PresetUnitStrc *__stdcall D2Common_10055(D2RoomStrc *pRoom);

/// @ordinal 10056
/// @name GetRoomFromAct
/// @address 6fd8c770
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2RoomStrc *__stdcall GetRoomFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10057
/// @name GetLevelIdFromRoom
/// @address 6fd8c7a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetLevelIdFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10058
/// @name GetLevelIdFromTile
/// @address 6fd8c7c0
/// Imported by ['D2Client.dll']
int __stdcall GetLevelIdFromTile(D2RoomStrc *pRoom, int nClassId);

/// @ordinal 10059
/// @name GetLevelIdFromRoom
/// @address 6fd8c7e0
/// Imported by ['D2Game.dll']
int __stdcall GetLevelIdFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10060
/// @name D2Common_10060
/// @address 6fd8c800
/// Imported by ['D2Game.dll']
BOOL __stdcall D2Common_10060(D2RoomStrc *pRoom);

/// @ordinal 10061
/// @name D2Common_10061
/// @address 6fd8c840
/// Not imported by any .dll
void *__stdcall D2Common_10061(D2RoomStrc *pRoom);

/// @ordinal 10062
/// @name D2Common_10062
/// @address 6fd8c700
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10062(D2RoomStrc *pRoom1, D2RoomStrc *pRoom2);

/// @ordinal 10063
/// @name AddRoomData
/// @address 6fd8c660
/// Imported by ['D2Client.dll']
void __stdcall AddRoomData(D2DrlgActStrc *pAct, int nLevelId, int nX, int nY, D2RoomStrc *pRoom);

/// @ordinal 10064
/// @name RemoveRoomData
/// @address 6fd8c6b0
/// Imported by ['D2Client.dll']
void __stdcall RemoveRoomData(D2DrlgActStrc *pAct, int nLevelId, int nX, int nY, D2RoomStrc *pRoom);

/// @ordinal 10065
/// @name GetRoomFromActAndCoord
/// @address 6fd8c730
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall GetRoomFromActAndCoord(D2DrlgActStrc *pAct, int nX, int nY);

/// @ordinal 10066
/// @name AllocDrlgDelete
/// @address 6fd8c860
/// Imported by ['D2Game.dll']
void __stdcall AllocDrlgDelete(D2RoomStrc *pRoom, int nUnitType, int nUnitId);

/// @ordinal 10067
/// @name D2Common_10067
/// @address 6fd8c8b0
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10067(D2RoomStrc *pRoom);

/// @ordinal 10068
/// @name DRLG_GetDrlgDeleteFromRoom
/// @address 6fd8c910
/// Imported by ['D2Game.dll']
D2DrlgDeleteStrc *__stdcall DRLG_GetDrlgDeleteFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10069
/// @name D2Common_10069
/// @address 6fd8c940
/// Not imported by any .dll
int __stdcall D2Common_10069(D2DrlgActStrc *pAct);

/// @ordinal 10070
/// @name D2Common_10070
/// @address 6fd8c980
/// Not imported by any .dll
int __stdcall D2Common_10070(D2DrlgActStrc *pAct, D2RoomStrc *pRoom);

/// @ordinal 10071
/// @name DungeonTestRoomCanUnTile
/// @address 6fd8c9e0
/// Imported by ['D2Game.dll']
signed int __stdcall DungeonTestRoomCanUnTile(D2DrlgActStrc *pAct, D2RoomStrc *pRoom);

/// @ordinal 10072
/// @name D2Common_10072
/// @address 6fd8ca60
/// Not imported by any .dll
bool __stdcall D2Common_10072(D2RoomStrc *pRoom);

/// @ordinal 10073
/// @name D2Common_10073
/// @address 6fd8ca80
/// Imported by ['D2Game.dll']
signed int __stdcall D2Common_10073(D2RoomStrc *pRoom);

/// @ordinal 10074
/// @name D2Common_10074
/// @address 6fd8cae0
/// Imported by ['D2Game.dll']
DWORD __stdcall D2Common_10074(D2RoomStrc *pRoom);

/// @ordinal 10075
/// @name D2Common_10075
/// @address 6fd8cb10
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10075(D2RoomStrc *pRoom, BOOL bSet);

/// @ordinal 10076
/// @name D2Common_10076
/// @address 6fd8cf10
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10076(D2DrlgActStrc *pAct, D2RoomStrc *pRoom);

/// @ordinal 10077
/// @name D2Common_10077
/// @address 6fd8d000
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10077(D2RoomStrc *pRoom1, D2RoomStrc *pRoom2);

/// @ordinal 10078
/// @name D2Common_10078
/// @address 6fd8d030
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10078(D2DrlgActStrc *pAct);

/// @ordinal 10079
/// @name D2Common_10079
/// @address 6fd8cb60
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pRoom, int pClient)

/// @ordinal 10080
/// @name D2Common_10080
/// @address 6fd8cd10
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pRoom, int pClient)

/// @ordinal 10081
/// @name GetTileCountFromRoom
/// @address 6fd8cdf0
/// Imported by ['D2Game.dll']
int __stdcall GetTileCountFromRoom(D2RoomStrc *pRoom);

/// @ordinal 10082
/// @name TestRoomIfTown
/// @address 6fd8d0e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall TestRoomIfTown(D2RoomStrc *pRoom);

/// @ordinal 10083
/// @name Return0
/// @address 6fd8d100
/// Imported by ['D2Client.dll']
int __stdcall Return0(D2RoomStrc *pRoom);

/// @ordinal 10084
/// @name D2Common_10084
/// @address 6fd8d130
/// Not imported by any .dll
int __stdcall D2Common_10084(D2RoomStrc *pRoom);

/// @ordinal 10085
/// @name GetTownLevelIdFromActNo
/// @address 6fd8d140
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetTownLevelIdFromActNo(int nAct);

/// @ordinal 10086
/// @name TestLevelIdIfTown
/// @address 6fd8d0d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall TestLevelIdIfTown(int nLevelId);

/// @ordinal 10087
/// @name D2Common_10087
/// @address 6fd8d180
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10087(D2RoomStrc *pRoom);

/// @ordinal 10088
/// @name GetDrlgFromAct
/// @address 6fd8d090
/// Imported by ['D2Client.dll']
D2DrlgStrc *__stdcall GetDrlgFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10089
/// @name D2Common_10472_GetStatListOwnerId
/// @address 6fd912d0
/// Imported by ['D2Client.dll']
DWORD __stdcall D2Common_10472_GetStatListOwnerId(D2StatListStrc *pStatList);

/// @ordinal 10090
/// @name D2Common_10090
/// @address 6fd8d1c0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10090(D2DrlgActStrc *pAct, int nLevelId);

/// @ordinal 10091
/// @name D2Common_10091
/// @address 6fd8d220
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10091(D2RoomStrc *pRoom, int nLevelId);

/// @ordinal 10092
/// @name D2Common_10092
/// @address 6fd8d260
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10092(D2RoomStrc *pRoom, int nLevelId);

/// @ordinal 10093
/// @name D2Common_10093
/// @address 6fd8d2a0
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10093(D2RoomStrc *pRoom, int nX, int nY, int a4);

/// @ordinal 10094
/// @name D2Common_10094
/// @address 6fd8d2e0
/// Not imported by any .dll
int *__stdcall D2Common_10094(D2RoomStrc *pRoom, int *a2, int *a3);

/// @ordinal 10095
/// @name D2Common_10095
/// @address 6fd8d300
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10095(D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10096
/// @name D2Common_10096
/// @address 6fd8d3a0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10096(D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10097
/// @name DUNGEON_GetRoomCoordList
/// @address 6fd8d3c0
/// Imported by ['D2Game.dll']
int __stdcall DUNGEON_GetRoomCoordList(D2RoomStrc *pRoom);

/// @ordinal 10098
/// @name D2Common_10098
/// @address 6fd8d3d0
/// Not imported by any .dll
void *__stdcall D2Common_10098(void *pMemPool, int a2, void *a3, int *a4);

/// @ordinal 10099
/// @name D2Common_10099
/// @address 6fd8d4b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10099(int nPortalId);

/// @ordinal 10100
/// @name IncreasePlayerUnitsCountInRoom
/// @address 6fd8c4e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall IncreasePlayerUnitsCountInRoom(D2RoomStrc *pRoom);

/// @ordinal 10101
/// @name DecreasePlayerUnitsCountInRoom
/// @address 6fd8c510
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall DecreasePlayerUnitsCountInRoom(D2RoomStrc *pRoom);

/// @ordinal 10102
/// @name RoomSetFrame
/// @address 6fd8d540
/// Imported by ['D2Game.dll']
void __stdcall RoomSetFrame(D2RoomStrc *pRoom, int nFrame);

/// @ordinal 10103
/// @name SetActCallbackFunc
/// @address 6fd8d5c0
/// Imported by ['D2Client.dll']
void __stdcall SetActCallbackFunc(D2DrlgActStrc *pAct, void *pFunc);

/// @ordinal 10104
/// @name D2Common_10104
/// @address 6fd8d560
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10104(D2RoomStrc *pRoom);

/// @ordinal 10105
/// @name D2Common_10105
/// @address 6fd8d580
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10105(D2DrlgActStrc *pAct, D2RoomStrc *pRoom1, D2RoomStrc *pRoom2);

/// @ordinal 10106
/// @name DUNGEON_SaveKilledUnitGUID
/// @address 6fd8d600
/// Imported by ['D2Game.dll']
void __stdcall DUNGEON_SaveKilledUnitGUID(D2RoomStrc *pRoom, int nUnitGUID);

/// @ordinal 10107
/// @name DUNGEON_CartesianToIsoTileCoords
/// @address 6fd8d690
/// Not imported by any .dll
void __stdcall DUNGEON_CartesianToIsoTileCoords(int *pX, int *pY);

/// @ordinal 10108
/// @name DUNGEON_CartesianToIsoSubtileCoords
/// @address 6fd8d870
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_CartesianToIsoSubtileCoords(int *pX, int *pY);

/// @ordinal 10109
/// @name DUNGEON_CartesianToIsometricCoords
/// @address 6fd8d8a0
/// Not imported by any .dll
void __stdcall DUNGEON_CartesianToIsometricCoords(int *pX, int *pY);

/// @ordinal 10110
/// @name DUNGEON_IsoTileToCartesianCoords
/// @address 6fd8d6e0
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_IsoTileToCartesianCoords(int *pX, int *pY);

/// @ordinal 10111
/// @name DUNGEON_IsoSubTileToCartesianCoords
/// @address 6fd8d630
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_IsoSubTileToCartesianCoords(int *pX, int *pY);

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
/// @name DUNGEON_CartesianTileBboxOriginToIsometricCoords
/// @address 6fd8d710
/// Imported by ['D2Client.dll']
void __stdcall DUNGEON_CartesianTileBboxOriginToIsometricCoords(int nX, int nY, int *pX, int *pY);

/// @ordinal 10115
/// @name DUNGEON_IsometricToCartesianTileBboxOriginCoords
/// @address 6fd8d790
/// Not imported by any .dll
void __stdcall DUNGEON_IsometricToCartesianTileBboxOriginCoords(int nX, int nY, int *pX, int *pY);

/// @ordinal 10116
/// @name DUNGEON_CartesianSubileBboxOriginToIsometricCoords
/// @address 6fd8d7d0
/// Not imported by any .dll
void __stdcall DUNGEON_CartesianSubileBboxOriginToIsometricCoords(int nX, int nY, int *pX, int *pY);

/// @ordinal 10117
/// @name DUNGEON_IsometricToCartesianSubtileBboxOriginCoords
/// @address 6fd8d830
/// Not imported by any .dll
void __stdcall DUNGEON_IsometricToCartesianSubtileBboxOriginCoords(int nX, int nY, int *pX, int *pY);

/// @ordinal 10118
/// @name COLLISION_CheckMask
/// @address 6fd41650
/// Imported by ['D2Client.dll', 'D2Game.dll']
uint16_t __stdcall COLLISION_CheckMask(D2RoomStrc *pRoom, int nX, int nY, uint16_t nMask);

/// @ordinal 10119
/// @name D2Common_10119
/// @address 6fd43080
/// Imported by ['D2Client.dll', 'D2Game.dll']
__int16 __stdcall D2Common_10119(D2RoomStrc *pRoom, int nX, int nY, int nUnitSize, int nCollisionType);

/// @ordinal 10120
/// @name COLLISION_CheckMaskWithSizeXY
/// @address 6fd418c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall COLLISION_CheckMaskWithSizeXY(D2RoomStrc *pRoom, int nX, int nY, signed int nSizeX, signed int nSizeY, uint16_t nFlag);

/// @ordinal 10121
/// @name D2Common_10121
/// @address 6fd41de0
/// Imported by ['D2Client.dll', 'D2Game.dll']
__int16 __stdcall D2Common_10121(D2RoomStrc *pRoom, int nX, int nY, int nCollisionPattern, int nCollisionType);

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
/// @name D2Common_10131
/// @address 6fd44660
/// Not imported by any .dll
uint16_t __fastcall D2Common_10131(D2RoomStrc *pRoom, int nX1, int nY1, int nX2, int nY2, int nUnitSize, uint16_t nResetCollisionMask, uint16_t nMask);

/// @ordinal 10132
/// @name D2Common_10132
/// @address 6fd44950
/// Not imported by any .dll
__int16 __fastcall D2Common_10132(D2RoomStrc *pRoom, int nX1, int nY1, int nX2, int nY2, int nCollisionPattern, int nCollisionType, int nMask);

/// @ordinal 10133
/// @name D2Common_10133
/// @address 6fd451d0
/// Not imported by any .dll
void __fastcall D2Common_10133(D2RoomStrc *pRoom1, int nX1, int nY1, D2RoomStrc *pRoom2, int nX2, int nY2, int nCollisionPattern, int nCollisionType);

/// @ordinal 10134
/// @name GetFreeCoords
/// @address 6fd46280
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2RoomStrc *__stdcall GetFreeCoords(D2RoomStrc *pRoom, D2CoordStrc *pCoord, int nUnitSize, int a4, int a5);

/// @ordinal 10135
/// @name D2Common_10135
/// @address 6fd459d0
/// Imported by ['D2Client.dll']
D2RoomStrc *__stdcall D2Common_10135(D2RoomStrc *pRoom, D2CoordStrc *pCoord, int a3, int a4, int a5, int a6);

/// @ordinal 10136
/// @name D2Common_10136
/// @address 6fd46310
/// Imported by ['D2Game.dll']
void __fastcall D2Common_10136(D2RoomStrc *pRoom, int edx0, int a3, int nCollisionType, D2RoomStrc **a5);

/// @ordinal 10137
/// @name D2Common_10137
/// @address 6fd462b0
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall D2Common_10137(D2RoomStrc *pRoom, D2CoordStrc *pCoord, int nUnitSize, int a4, int a5);

/// @ordinal 10138
/// @name GetFreeRoomCoords
/// @address 6fd462e0
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall GetFreeRoomCoords(D2RoomStrc *pRoom, D2CoordStrc *pCoord1, D2CoordStrc *pCoord2, int nUnitSize, int a5, int a6, BOOL a7);

/// @ordinal 10139
/// @name D2Common_10916_MONSTERS_Return
/// @address 6fda5260
/// Not imported by any .dll
void __stdcall D2Common_10916_MONSTERS_Return();

/// @ordinal 10140
/// @name D2Common_10916_MONSTERS_Return
/// @address 6fda5260
/// Not imported by any .dll
void __stdcall D2Common_10916_MONSTERS_Return();

/// @ordinal 10141
/// @name D2Common_10141
/// @address 6fda82a0
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10141(D2UnitStrc *pUnit, int *pX, int *pY);

/// @ordinal 10142
/// @name D2Common_10142
/// @address 6fda8600
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall D2Common_10142(D2DynamicPathStrc *pDynamicPath, D2UnitStrc *pUnit, int a3);

/// @ordinal 10143
/// @name PATH_SetUnitDeadCollision
/// @address 6fda9870
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetUnitDeadCollision(D2UnitStrc *pUnit, int bForceUnitSize3x3);

/// @ordinal 10144
/// @name D2Common_10144
/// @address 6fda98f0
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10144(D2UnitStrc *pUnit, int bDoNothing);

/// @ordinal 10145
/// @name D2Common_10145
/// @address 6fda9f00
/// Not imported by any .dll
void __stdcall D2Common_10145(D2DynamicPathStrc *pDynamicPath, BOOL bSet);

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
/// @name D2Common_10150
/// @address 6fda9af0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10150(D2DynamicPathStrc *pDynamicPath, int a2);

/// @ordinal 10151
/// @name D2Common_10151
/// @address 6fda9b10
/// Not imported by any .dll
int __stdcall D2Common_10151(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10152
/// @name AllocDynamicPath
/// @address 6fda9480
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall AllocDynamicPath(void *pMemPool, D2RoomStrc *pRoom, int nX, int nY, D2UnitStrc *pUnit, DWORD a6);

/// @ordinal 10153
/// @name D2Common_10153
/// @address 6fda9b20
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10153(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10154
/// @name D2Common_10154
/// @address 6fda9b80
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10154(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10155
/// @name D2Common_10155
/// @address 6fda9bc0
/// Not imported by any .dll
int __stdcall D2Common_10155(D2DynamicPathStrc *pDynamicPath);

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
/// @name PATH_GetTargetX
/// @address 6fda9db0
/// Not imported by any .dll
int __stdcall PATH_GetTargetX(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10165
/// @name PathGetTargetY
/// @address 6fdc3ce0
/// Not imported by any .dll
DWORD __stdcall PathGetTargetY(D2DynamicPathStrc *pPath);

/// @ordinal 10166
/// @name PathGetRoom
/// @address 6fdb9c10
/// Not imported by any .dll
D2RoomStrc *__stdcall PathGetRoom(D2DynamicPathStrc *pPath);

/// @ordinal 10167
/// @name PATH_SetRoom
/// @address 6fda9e60
/// Not imported by any .dll
void __stdcall PATH_SetRoom(D2DynamicPathStrc *pDynamicPath, D2RoomStrc *pRoom);

/// @ordinal 10168
/// @name PATH_GetNextRoom
/// @address 6fda9e70
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2RoomStrc *__stdcall PATH_GetNextRoom(D2DynamicPathStrc *pDynamicPath);

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
/// @name PATH_GetTargetTypeAndId
/// @address 6fda9f60
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_GetTargetTypeAndId(D2DynamicPathStrc *pDynamicPath, int *pTargetType, int *pTargetGUID);

/// @ordinal 10172
/// @name D2Common_10172
/// @address 6fda9ec0
/// Not imported by any .dll
BOOL __stdcall D2Common_10172(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10173
/// @name D2Common_10173
/// @address 6fda9ed0
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10173(D2DynamicPathStrc *pDynamicPath, BOOL bSet);

/// @ordinal 10174
/// @name D2Common_10174
/// @address 6fda9f30
/// Not imported by any .dll
BOOL __stdcall D2Common_10174(D2DynamicPathStrc *pDynamicPath);

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
/// @name PathGetLastPointX
/// @address 6fda9e20
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall PathGetLastPointX(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10178
/// @name PathGetLastPointY
/// @address 6fda9e40
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall PathGetLastPointY(D2DynamicPathStrc *pDynamicPath);

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
/// @name PathSetCollisionType
/// @address 6fda9fe0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PathSetCollisionType(D2DynamicPathStrc *pDynamicPath, int nCollisionType);

/// @ordinal 10183
/// @name D2Common_10183
/// @address 6fdaa0c0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10183(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10184
/// @name D2Common_10184
/// @address 6fdaa0d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10184(D2DynamicPathStrc *pDynamicPath, int a2);

/// @ordinal 10185
/// @name PathSetType
/// @address 6fdaa0e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PathSetType(D2DynamicPathStrc *pDynamicPath, int nPathType);

/// @ordinal 10186
/// @name PathSetAsLastType
/// @address 6fdaa1e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PathSetAsLastType(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10187
/// @name PATH_GetType
/// @address 6fdaa240
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall PATH_GetType(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10188
/// @name PathSetNewDistance
/// @address 6fdaa280
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PathSetNewDistance(D2DynamicPathStrc *pDynamicPath, BYTE nNewDistance);

/// @ordinal 10189
/// @name PATH_GetMaxDistance
/// @address 6fdaa2b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall PATH_GetMaxDistance(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10190
/// @name PATH_SetDistance
/// @address 6fdaa250
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetDistance(D2DynamicPathStrc *pDynamicPath, BYTE nDistance);

/// @ordinal 10191
/// @name PATH_GetDistance
/// @address 6fdaa270
/// Imported by ['D2Game.dll']
BYTE __stdcall PATH_GetDistance(D2DynamicPathStrc *pPath);

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
/// @name D2Common_10201
/// @address 6fdaa2c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
WORD __stdcall D2Common_10201(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10202
/// @name D2Common_10202
/// @address 6fdaa300
/// Not imported by any .dll
WORD __stdcall D2Common_10202(D2DynamicPathStrc *pDynamicPath);

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
/// @name D2Common_10207
/// @address 6fdaa4c0
/// Not imported by any .dll
void __stdcall D2Common_10207(D2DynamicPathStrc *a1, char a2, char a3);

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
/// @name PathGetUnitCollisionPattern
/// @address 6fdaa570
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall PathGetUnitCollisionPattern(D2UnitStrc *pDynamicPath);

/// @ordinal 10211
/// @name PATH_SetCollisionPattern
/// @address 6fdaa580
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_SetCollisionPattern(D2UnitStrc *pUnit, int nCollisionPattern);

/// @ordinal 10212
/// @name PATH_SetMoveFlags
/// @address 6fdaa5a0
/// Imported by ['D2Client.dll']
void __stdcall PATH_SetMoveFlags(D2UnitStrc *pUnit, BOOL bSet);

/// @ordinal 10213
/// @name D2Common_10213
/// @address 6fdaa600
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10214
/// @name D2Common_10214
/// @address 6fda92f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10215
/// @name D2Common_10215
/// @address 6fdac700
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10215(int nX1, int nY1, int nX2, int nY2);

/// @ordinal 10216
/// @name D2Common_10216
/// @address 6fda97c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10216(D2DynamicPathStrc *pDynamicPath, int nX, int nY, int a4);

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
/// @name PATH_UpdateCollisionMaskForOptionalUnit
/// @address 6fdaa6d0
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10222
/// @name PATH_UpdateCollisionMaskForUnit
/// @address 6fda8320
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10223
/// @name D2Common_10223
/// @address 6fda8450
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_10223(D2UnitStrc *pUnit, int a2);

/// @ordinal 10224
/// @name D2Common_10224
/// @address 6fda9e00
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10224(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10225
/// @name D2Common_10225
/// @address 6fda9e10
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10225(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10226
/// @name D2Common_10226
/// @address 6fdac9a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_10226(D2UnitStrc *pUnit, signed int a2);

/// @ordinal 10227
/// @name D2Common_10227
/// @address 6fdad530
/// Not imported by any .dll
signed int __stdcall D2Common_10227(D2UnitStrc *pUnit);

/// @ordinal 10228
/// @name D2Common_10228
/// @address 6fda9850
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10228(D2UnitStrc *pUnit);

/// @ordinal 10229
/// @name D2Common_10229
/// @address 6fdad590
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_10229(D2DynamicPathStrc *pDynamicPath, D2UnitStrc *pUnit, D2RoomStrc *a3, DWORD a4, DWORD a5);

/// @ordinal 10230
/// @name D2Common_10230
/// @address 6fdadf00
/// Imported by ['D2Client.dll']
BOOL __stdcall D2Common_10230(D2DynamicPathStrc *pDynamicPath, int a2, D2RoomStrc *a3, unsigned int a4, __int16 a5);

/// @ordinal 10231
/// @name D2Common_10231
/// @address 6fdadc20
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10231(D2DynamicPathStrc *a1, D2UnitStrc *a2, D2RoomStrc *pRooms, int nX, int nY);

/// @ordinal 10232
/// @name D2Common_10232
/// @address 6fdadf50
/// Not imported by any .dll
signed int __stdcall D2Common_10232(D2DynamicPathStrc *pDynamicPath, D2UnitStrc *pUnit, D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10233
/// @name D2Common_10233
/// @address 6fdae290
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10233(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10234
/// @name D2Common_10234
/// @address 6fdae500
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_10234(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 10235
/// @name PATH_Last
/// @address 6fdae520
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall PATH_Last(D2UnitStrc *pRiderUnit, D2UnitStrc *pHorseUnit);

/// @ordinal 10236
/// @name D2Common_10236
/// @address 6fdac8f0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int a2, int)

/// @ordinal 10237
/// @name D2Common_10237
/// @address 6fdaa6f0
/// Not imported by any .dll
void *__stdcall D2Common_10237(D2UnitStrc *pUnit);

/// @ordinal 10238
/// @name D2Common_10916_MONSTERS_Return
/// @address 6fda5260
/// Not imported by any .dll
void __stdcall D2Common_10916_MONSTERS_Return();

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
/// @name INVENTORY_CompareInventoryWithItemsParentInventory
/// @address 6fd8e620
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall INVENTORY_CompareInventoryWithItemsParentInventory(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10245
/// @name INVENTORY_GetFreePosition
/// @address 6fd8e7e0
/// Imported by ['D2Client.dll']
BOOL __stdcall INVENTORY_GetFreePosition(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int nInventoryRecordId, int *pFreeX, int *pFreeY, BYTE nPage);

/// @ordinal 10246
/// @name D2Common_10246
/// @address 6fd8f1e0
/// Imported by ['D2Game.dll']
signed int __stdcall D2Common_10246(D2InventoryStrc *pInventory, D2UnitStrc *pItem, int a3, int a4, int a5, char *szFile, int nLine);

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
/// @name Return
/// @address 6fd8f970
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall Return(char *szFile, int nLine, D2InventoryStrc *pInventory, int nX, int nY, int nInventoryRecordId, int a7, int nPage);

/// @ordinal 10251
/// @name D2Common_11296_MONSTERS_Return
/// @address 6fda5250
/// Imported by ['D2Client.dll']
void __stdcall D2Common_11296_MONSTERS_Return(D2UnitStrc *pUnit);

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
/// @name D2Common_10255
/// @address 6fd8fb20
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10255(D2UnitStrc *pPlayer, D2InventoryStrc *pInventory, D2UnitStrc **ppItem, int nBodyLoc);

/// @ordinal 10256
/// @name D2Common_10256
/// @address 6fd8fbb0
/// Not imported by any .dll
BOOL __stdcall D2Common_10256(D2InventoryStrc *pInventory, int nItemType);

/// @ordinal 10257
/// @name INVENTORY_GetItemFromBodyLoc
/// @address 6fd8fae0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_GetItemFromBodyLoc(D2InventoryStrc *pInventory, int nBodyLoc);

/// @ordinal 10258
/// @name GetLeftHandItem
/// @address 6fd8fc60
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetLeftHandItem(D2InventoryStrc *pInventory);

/// @ordinal 10259
/// @name GetItemFromComponent
/// @address 6fd8fdd0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall GetItemFromComponent(D2InventoryStrc *pInventory, int nComponent);

/// @ordinal 10260
/// @name INVENTORY_GetItemsXPosCapped
/// @address 6fd8fe80
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall INVENTORY_GetItemsXPosCapped(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

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
/// @name D2Common_10263
/// @address 6fd8ffa0
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall D2Common_10263(D2InventoryStrc *pInventory, D2UnitStrc *a2, D2UnitStrc *a3);

/// @ordinal 10264
/// @name D2Common_10264
/// @address 6fd90080
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10264(D2InventoryStrc *pInventory, int a2, int a3);

/// @ordinal 10265
/// @name D2Common_10265
/// @address 6fd90130
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall D2Common_10265(D2InventoryStrc *pInventory, D2UnitStrc *a2, D2UnitStrc *a3);

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
/// @name INVENTORY_HasSimiliarPotionInBelt
/// @address 6fd902b0
/// Not imported by any .dll
BOOL __stdcall INVENTORY_HasSimiliarPotionInBelt(D2InventoryStrc *pInventory, D2UnitStrc *pPotion);

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
/// @name D2Common_10274
/// @address 6fd90760
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_10274(D2InventoryStrc *pInventory, D2UnitStrc **ppItem, int *pBodyLoc, BOOL *pIsLeftHandItem);

/// @ordinal 10275
/// @name INVENTORY_HasBodyArmorEquipped
/// @address 6fd90850
/// Not imported by any .dll
bool __stdcall INVENTORY_HasBodyArmorEquipped(D2InventoryStrc *pInventory);

/// @ordinal 10276
/// @name D2Common_10276
/// @address 6fd908a0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10276(D2InventoryStrc *pInventory, int a2, signed int a3, int a4);

/// @ordinal 10277
/// @name INVENTORY_GetFirstItemInInventory
/// @address 6fd8e7a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall INVENTORY_GetFirstItemInInventory(D2InventoryStrc *pInventory);

/// @ordinal 10278
/// @name INVENTORY_GetLastItemInInventory
/// @address 6fd8e7c0
/// Not imported by any .dll
D2UnitStrc *__stdcall INVENTORY_GetLastItemInInventory(D2InventoryStrc *pInventory);

/// @ordinal 10279
/// @name INVENTORY_CleanInventory
/// @address 6fd90910
/// Imported by ['D2Client.dll']
void __stdcall INVENTORY_CleanInventory(D2InventoryStrc *pInventory);

/// @ordinal 10280
/// @name INVENTORY_GetFirstInventoryNode
/// @address 6fd90940
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pInventory)

/// @ordinal 10281
/// @name INVENTORY_FreeInventoryNodes
/// @address 6fd90960
/// Imported by ['D2Game.dll']
void __stdcall INVENTORY_FreeInventoryNodes(D2InventoryStrc *pInventory);

/// @ordinal 10282
/// @name D2Common_10282
/// @address 6fd909b0
/// Not imported by any .dll
BOOL __stdcall D2Common_10282(D2InventoryStrc *pInventory, int nItemId);

/// @ordinal 10283
/// @name INVENTORY_AddToContainer
/// @address 6fd909f0
/// Imported by ['D2Game.dll']
void __stdcall INVENTORY_AddToContainer(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10284
/// @name INVENTORY_GetNoOfFilledSockets
/// @address 6fd90ac0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall INVENTORY_GetNoOfFilledSockets(D2InventoryStrc *pInventory);

/// @ordinal 10285
/// @name D2Common_10285
/// @address 6fd90ae0
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall D2Common_10285(D2InventoryStrc *pInventory, int nItemType, D2UnitStrc *a3);

/// @ordinal 10286
/// @name D2Common_10286
/// @address 6fd90bc0
/// Not imported by any .dll
D2UnitStrc *__stdcall D2Common_10286(D2InventoryStrc *pInventory, int nItemType, D2UnitStrc *a3);

/// @ordinal 10287
/// @name D2Common_10287
/// @address 6fd90c80
/// Not imported by any .dll
D2UnitStrc *__stdcall D2Common_10287(D2InventoryStrc *pInventory, int nItemCode, D2UnitStrc *a3);

/// @ordinal 10288
/// @name D2Common_10288
/// @address 6fd90e20
/// Not imported by any .dll
/// @guessedtype int __stdcall(int pInventory, int)

/// @ordinal 10289
/// @name D2Common_10289
/// @address 6fd90ed0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10289(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10290
/// @name D2Common_10290
/// @address 6fd90f80
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10290(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10291
/// @name INVENTORY_GetWieldType
/// @address 6fd91050
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall INVENTORY_GetWieldType(D2UnitStrc *pPlayer, D2InventoryStrc *pInventory);

/// @ordinal 10292
/// @name SetOwnerIdOfInventory
/// @address 6fd91140
/// Imported by ['D2Game.dll']
void __stdcall SetOwnerIdOfInventory(D2InventoryStrc *pInventory, DWORD nOwnerId);

/// @ordinal 10293
/// @name GetInventoryOwnerId
/// @address 6fd91160
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetInventoryOwnerId(D2InventoryStrc *pInventory);

/// @ordinal 10294
/// @name CreateCorpseForPlayer
/// @address 6fd91190
/// Imported by ['D2Game.dll']
void __stdcall CreateCorpseForPlayer(D2InventoryStrc *pInventory, int nUnitId, int a3, int a4);

/// @ordinal 10295
/// @name FreeCorpse
/// @address 6fd91210
/// Imported by ['D2Game.dll']
BOOL __stdcall FreeCorpse(D2InventoryStrc *pInventory, int nUnitId, int a3);

/// @ordinal 10296
/// @name GetCorpseFromInventory
/// @address 6fd91290
/// Imported by ['D2Game.dll']
D2CorpseStrc *__stdcall GetCorpseFromInventory(D2InventoryStrc *pInventory);

/// @ordinal 10297
/// @name GetNumberOfCorpses
/// @address 6fd912b0
/// Imported by ['D2Game.dll']
DWORD __stdcall GetNumberOfCorpses(D2InventoryStrc *pInventory);

/// @ordinal 10298
/// @name D2Common_10298
/// @address 6fd912f0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit, int a2, int pColor)

/// @ordinal 10299
/// @name D2Common_10299
/// @address 6fd91b60
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10299(D2UnitStrc *pUnit, int nBodyLoc, D2UnitStrc *pItem, int bDontCheckReqs);

/// @ordinal 10300
/// @name D2Common_10300
/// @address 6fd92180
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall D2Common_10300(D2InventoryStrc *pInventory);

/// @ordinal 10301
/// @name D2Common_11239_Return0
/// @address 6fdb2e70
/// Not imported by any .dll
int __stdcall D2Common_11239_Return0(int arg);

/// @ordinal 10302
/// @name D2Common_10302
/// @address 6fd921d0
/// Imported by ['D2Game.dll']
signed int __stdcall D2Common_10302(void *pInventory, D2UnitStrc *a2, D2UnitStrc *a3, int *a4);

/// @ordinal 10303
/// @name D2Common_11077_Return
/// @address 6fda6400
/// Not imported by any .dll
void __stdcall D2Common_11077_Return(int arg, int a2);

/// @ordinal 10304
/// @name GetNextInventoryItem
/// @address 6fd92080
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall GetNextInventoryItem(D2UnitStrc *pPreviousItem);

/// @ordinal 10305
/// @name CheckUnitIfItem
/// @address 6fd920c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall CheckUnitIfItem(D2UnitStrc *pItem);

/// @ordinal 10306
/// @name GetItemId
/// @address 6fd920e0
/// Imported by ['D2Client.dll']
DWORD __stdcall GetItemId(D2UnitStrc *pItem);

/// @ordinal 10307
/// @name GetNodePageOfItem
/// @address 6fd92100
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetNodePageOfItem(D2UnitStrc *pUnit);

/// @ordinal 10308
/// @name D2Common_11077_Return
/// @address 6fda6400
/// Not imported by any .dll
void __stdcall D2Common_11077_Return(int arg, int a2);

/// @ordinal 10309
/// @name D2Common_11239_Return0
/// @address 6fdb2e70
/// Not imported by any .dll
int __stdcall D2Common_11239_Return0(int arg);

/// @ordinal 10310
/// @name D2Common_10310
/// @address 6fd92140
/// Not imported by any .dll
D2UnitStrc *__stdcall D2Common_10310(D2InventoryStrc *pParentInventory, D2UnitStrc *pItem);

/// @ordinal 10311
/// @name D2Common_10948_SKILLS_GetFirstSkillFromSkillList
/// @address 6fdafea0
/// Imported by ['D2Game.dll']
D2SkillStrc *__stdcall D2Common_10948_SKILLS_GetFirstSkillFromSkillList(D2SkillListStrc *pSkillList);

/// @ordinal 10312
/// @name D2Common_10316
/// @address 6fd90ab0
/// Imported by ['D2Game.dll']
DWORD __stdcall D2Common_10316(D2CorpseStrc *pCorpse);

/// @ordinal 10313
/// @name D2Common_10472_GetStatListOwnerId
/// @address 6fd912d0
/// Imported by ['D2Game.dll']
DWORD __stdcall D2Common_10472_GetStatListOwnerId(D2StatListStrc *pStatList);

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
/// @name D2Common_10316
/// @address 6fd90ab0
/// Imported by ['D2Game.dll']
DWORD __stdcall D2Common_10316(D2CorpseStrc *pCorpse);

/// @ordinal 10317
/// @name D2Common_10317
/// @address 6fdc2680
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __fastcall D2Common_10317(int nMonsterId);

/// @ordinal 10318
/// @name D2Common_10318
/// @address 6fdc1b40
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_10318(D2UnitStrc *pUnit);

/// @ordinal 10319
/// @name D2Common_10319
/// @address 6fdc1c30
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_10319(D2UnitStrc *pUnit);

/// @ordinal 10320
/// @name UNITS_GetStartSkill
/// @address 6fdbd570
/// Imported by ['D2Client.dll']
D2SkillStrc *__stdcall UNITS_GetStartSkill(D2UnitStrc *pUnit);

/// @ordinal 10321
/// @name UNITS_GetGetLeftSkill
/// @address 6fdbd5b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2SkillStrc *__stdcall UNITS_GetGetLeftSkill(D2UnitStrc *pUnit);

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
/// @name UNITS_GetTargetX
/// @address 6fdbdb10
/// Imported by ['D2Client.dll']
int __stdcall UNITS_GetTargetX(D2UnitStrc *pUnit);

/// @ordinal 10334
/// @name UNITS_GetTargetY
/// @address 6fdbdb60
/// Imported by ['D2Client.dll']
int __stdcall UNITS_GetTargetY(D2UnitStrc *pUnit);

/// @ordinal 10335
/// @name UNITS_GetTargetCoords
/// @address 6fdbdda0
/// Imported by ['D2Client.dll']
void __stdcall UNITS_GetTargetCoords(D2UnitStrc *pUnit, D2CoordStrc *pTargetCoords);

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
/// @name SetAnimStartFrame
/// @address 6fdbe510
/// Imported by ['D2Client.dll']
void __stdcall SetAnimStartFrame(D2UnitStrc *pUnit);

/// @ordinal 10350
/// @name UNITS_SetUnitPathTarget
/// @address 6fdbe1a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetUnitPathTarget(D2UnitStrc *pUnit, D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10351
/// @name UNITS_UpdateCollisionMaskForUnit
/// @address 6fdbe060
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_UpdateCollisionMaskForUnit(D2UnitStrc *pUnit, D2RoomStrc *pRoom, int nX, int nY);

/// @ordinal 10352
/// @name UNITS_SetNoCollision
/// @address 6fdbdec0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetNoCollision(D2UnitStrc *pUnit);

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
/// @name D2Common_10355
/// @address 6fdbead0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall D2Common_10355(D2UnitStrc *pUnit);

/// @ordinal 10356
/// @name D2Common_10356
/// @address 6fdbeb20
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10356(D2UnitStrc *pUnit, int a2);

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
/// @name D2Common_10359
/// @address 6fdc02a0
/// Imported by ['D2Client.dll']
int __stdcall D2Common_10359(D2UnitStrc *pUnit);

/// @ordinal 10360
/// @name GetMeleeRange
/// @address 6fdc1120
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetMeleeRange(D2UnitStrc *pUnit);

/// @ordinal 10361
/// @name D2Common_10361
/// @address 6fdc1a70
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall D2Common_10361(D2UnitStrc *pUnit1, D2UnitStrc *pUnit2, int a3);

/// @ordinal 10362
/// @name D2Common_10362
/// @address 6fdc14c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall D2Common_10362(D2UnitStrc *hUnit1, D2UnitStrc *hUnit2, int a3);

/// @ordinal 10363
/// @name D2Common_10363
/// @address 6fdc1790
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall D2Common_10363(D2UnitStrc *pUnit, D2UnitStrc *a2, int a3);

/// @ordinal 10364
/// @name D2Common_10364
/// @address 6fdc1230
/// Imported by ['D2Game.dll']
signed int __stdcall D2Common_10364(D2UnitStrc *pUnit, int nX, int nY, int nFlags);

/// @ordinal 10365
/// @name UNITS_GetHitClass
/// @address 6fdc1c50
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __fastcall UNITS_GetHitClass(D2UnitStrc *pUnit);

/// @ordinal 10366
/// @name D2Common_10366
/// @address 6fdc1ce0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __fastcall D2Common_10366(D2UnitStrc *pUnit);

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
/// @name D2Common_10371
/// @address 6fdbed90
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10371(D2UnitStrc *pUnit);

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
/// @name UnitUpdateAnimRateAndVel
/// @address 6fdbf050
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UnitUpdateAnimRateAndVel(D2UnitStrc *pUnit, char *szFile, int nLine);

/// @ordinal 10377
/// @name UNITS_SetAnimationSpeed
/// @address 6fdbf8d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITS_SetAnimationSpeed(D2UnitStrc *pUnit, int nSpeed);

/// @ordinal 10378
/// @name UNITS_IsUnitAtEndOfFrameCycle
/// @address 6fdbf910
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_IsUnitAtEndOfFrameCycle(D2UnitStrc *pUnit);

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
/// @name GetEventFrameInfo
/// @address 6fdbfa90
/// Not imported by any .dll
int __stdcall GetEventFrameInfo(D2UnitStrc *pUnit, int nFrame);

/// @ordinal 10383
/// @name UNITS_GetLightMap
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
/// @name D2Common_10387
/// @address 6fdbd400
/// Not imported by any .dll
void __stdcall D2Common_10387(D2UnitStrc *pUnit);

/// @ordinal 10388
/// @name D2Common_10388
/// @address 6fdbd1b0
/// Not imported by any .dll
void __stdcall D2Common_10388(D2RoomStrc *pRoom);

/// @ordinal 10389
/// @name UNITROOM_IsUnitInRoom
/// @address 6fdbd4c0
/// Imported by ['D2Client.dll']
BOOL __stdcall UNITROOM_IsUnitInRoom(D2RoomStrc *pRoom, D2UnitStrc *pUnit);

/// @ordinal 10390
/// @name UNITROOM_RemoveUnitFromRoomEx
/// @address 6fdbd250
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UNITROOM_RemoveUnitFromRoomEx(D2UnitStrc *pUnit);

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
/// @name D2Common_10399
/// @address 6fdc2cb0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10399(D2UnitStrc *pUnit1, D2UnitStrc *pUnit2);

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
/// @name D2Common_10406
/// @address 6fdc3090
/// Not imported by any .dll
/// @guessedtype int __stdcall(int pUnit, int, int)

/// @ordinal 10407
/// @name D2Common_10407
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
/// @name UpdateDirection
/// @address 6fdbfdb0
/// Imported by ['D2Client.dll']
void __stdcall UpdateDirection(D2UnitStrc *pUnit, int nX, int nY);

/// @ordinal 10414
/// @name GetNewDirection
/// @address 6fdbfdd0
/// Imported by ['D2Client.dll']
int __stdcall GetNewDirection(D2UnitStrc *pUnit);

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
/// @name GetNewDirection
/// @address 6fdc00e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetNewDirection(D2UnitStrc *pUnit, int nNewX, int nNewY);

/// @ordinal 10419
/// @name D2Common_10419
/// @address 6fdc3680
/// Imported by ['D2Game.dll']
void __fastcall D2Common_10419(D2UnitStrc *pUnit, int a2, int a3, int nAnyUnitGUID);

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
/// @name UNITS_GetDefenseRate
/// @address 6fdc08b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall UNITS_GetDefenseRate(D2UnitStrc *pShield);

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
/// @name D2Common_10434
/// @address 6fdc0da0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall D2Common_10434(D2UnitStrc *pUnit, int a2);

/// @ordinal 10435
/// @name D2Common_10435
/// @address 6fdc0f70
/// Not imported by any .dll
D2UnitStrc *__stdcall D2Common_10435(D2UnitStrc *pUnit);

/// @ordinal 10436
/// @name D2Common_10436
/// @address 6fdc0fc0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10436(D2UnitStrc *pClass);

/// @ordinal 10437
/// @name AddOverlay
/// @address 6fdc0160
/// Imported by ['D2Game.dll']
void __stdcall AddOverlay(D2UnitStrc *pUnit, int nOverlay, int nUnused);

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
/// @name D2Common_10440
/// @address 6fdc1db0
/// Not imported by any .dll
void __stdcall D2Common_10440(D2UnitStrc *pUnit, int a2);

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
/// @name SetStatInStatList
/// @address 6fdb77b0
/// Imported by ['D2Game.dll']
int __stdcall SetStatInStatList(D2StatListExStrc *pList, int nStatId, int nValue, int nParam);

/// @ordinal 10464
/// @name AddStatToStatList
/// @address 6fdb7560
/// Imported by ['D2Game.dll']
void __stdcall AddStatToStatList(D2StatListExStrc *pStatList, int nStatId, int nValue, uint16_t nParam);

/// @ordinal 10465
/// @name SetStatIfListIsValid
/// @address 6fdb7910
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SetStatIfListIsValid(D2StatListExStrc *pList, int nStatId, int nValue, int nParam);

/// @ordinal 10466
/// @name STATLIST_GetStat
/// @address 6fdb7d40
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall STATLIST_GetStat(D2StatListExStrc *pStatListEx, __int16 nStat, __int16 nLayer);

/// @ordinal 10467
/// @name D2Common_10467
/// @address 6fdb8120
/// Not imported by any .dll
int __stdcall D2Common_10467(D2StatListStrc *pStatList, signed int nStat);

/// @ordinal 10468
/// @name D2Common_10468
/// @address 6fdb8150
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10468(D2StatListStrc *pStatList);

/// @ordinal 10469
/// @name D2Common_10469
/// @address 6fdb8cc0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10470
/// @name STATLIST_Create
/// @address 6fdb7140
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2StatListStrc *__stdcall STATLIST_Create(void *pMemPool, DWORD fFilter, DWORD dwTimeout, int nUnitType, DWORD dwUnitGUID);

/// @ordinal 10471
/// @name GetStatListOwnerType
/// @address 6fdb7260
/// Imported by ['D2Game.dll']
DWORD __stdcall GetStatListOwnerType(D2StatListStrc *pStatList);

/// @ordinal 10472
/// @name GetStatListOwnerId
/// @address 6fd912d0
/// Imported by ['D2Game.dll']
DWORD __stdcall GetStatListOwnerId(D2StatListStrc *pStatList);

/// @ordinal 10473
/// @name D2Common_10529_STATLIST_GetExpireFrame
/// @address 6fdb7320
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10529_STATLIST_GetExpireFrame(D2StatListStrc *pStatList);

/// @ordinal 10474
/// @name D2Common_10474
/// @address 6fdb91c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10474(D2UnitStrc *pUnit, D2StatListExStrc *pStatList);

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
/// @name SetStatRemoveFnInStatList
/// @address 6fdb8ca0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SetStatRemoveFnInStatList(D2StatListStrc *pStatList, void *fpStatRemove);

/// @ordinal 10478
/// @name SetStateInStatList
/// @address 6fdb72c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SetStateInStatList(D2StatListStrc *pStatList, int nState);

/// @ordinal 10479
/// @name GetState
/// @address 6fdb72e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetState(D2StatListStrc *pStatList);

/// @ordinal 10480
/// @name STATES_GetStatList
/// @address 6fdb81e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2StatListStrc *__stdcall STATES_GetStatList(D2UnitStrc *pUnit, int nState);

/// @ordinal 10481
/// @name GetListFromItem
/// @address 6fdb8230
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2StatListExStrc *__stdcall GetListFromItem(D2UnitStrc *pItem, DWORD dwFlag);

/// @ordinal 10482
/// @name D2Common_10482
/// @address 6fdb8200
/// Imported by ['D2Client.dll']
D2StatListExStrc *__stdcall D2Common_10482(D2StatListExStrc *pStatListEx, int a2);

/// @ordinal 10483
/// @name STATLIST_GetFirstByFilterEx
/// @address 6fdb8270
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2StatListExStrc *__stdcall STATLIST_GetFirstByFilterEx(D2UnitStrc *pUnit, int nStateId, DWORD dwFlag);

/// @ordinal 10484
/// @name STATLIST_GetFirst
/// @address 6fdb82c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2StatListExStrc *__stdcall STATLIST_GetFirst(D2UnitStrc *pUnit, int nState, DWORD dwFlag);

/// @ordinal 10485
/// @name STATLIST_Free
/// @address 6fdb7030
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall STATLIST_Free(D2StatListStrc *pStatList);

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
/// @name STATES_GetListGfxFlags
/// @address 6fdb4760
/// Imported by ['D2Game.dll']
DWORD *__stdcall STATES_GetListGfxFlags(D2UnitStrc *pUnit);

/// @ordinal 10493
/// @name D2Common_10493
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
/// @name D2Common_10496
/// @address 6fdb4920
/// Imported by ['D2Client.dll']
BOOL __stdcall D2Common_10496(int nState);

/// @ordinal 10497
/// @name D2Common_10497
/// @address 6fdb4e80
/// Imported by ['D2Game.dll']
BOOL __stdcall D2Common_10497(int nState);

/// @ordinal 10498
/// @name D2Common_10498
/// @address 6fdb4ec0
/// Imported by ['D2Game.dll']
BOOL __stdcall D2Common_10498(int nState);

/// @ordinal 10500
/// @name D2Common_10500
/// @address 6fdb49d0
/// Not imported by any .dll
BOOL __stdcall D2Common_10500(int nState);

/// @ordinal 10501
/// @name D2Common_10501
/// @address 6fdb4a80
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10502
/// @name D2Common_10502
/// @address 6fdb4bc0
/// Imported by ['D2Client.dll']
BOOL __stdcall D2Common_10502(D2UnitStrc *pUnit);

/// @ordinal 10503
/// @name D2Common_10503
/// @address 6fdb4960
/// Imported by ['D2Client.dll']
BOOL __stdcall D2Common_10503(D2UnitStrc *pUnit);

/// @ordinal 10511
/// @name D2Common_10511
/// @address 6fdb85d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10511(D2UnitStrc *pUnit);

/// @ordinal 10512
/// @name D2Common_10512
/// @address 6fdb8420
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 10513
/// @name D2Common_10513
/// @address 6fdb84e0
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10513(D2UnitStrc *pUnit1, D2UnitStrc *pUnit2, void (__fastcall *pfCallback)(_DWORD, _DWORD, _DWORD, _DWORD));

/// @ordinal 10514
/// @name D2Common_10514
/// @address 6fdb8d30
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10514(D2UnitStrc *pUnit);

/// @ordinal 10515
/// @name D2Common_10515
/// @address 6fdb80c0
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10515(D2UnitStrc *pUnit);

/// @ordinal 10516
/// @name D2Common_10516
/// @address 6fdb8b10
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10516(D2UnitStrc *pUnit, int nFrame);

/// @ordinal 10517
/// @name SetStat
/// @address 6fdb7ab0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SetStat(D2UnitStrc *pUnit, int nStat, int nValue, int nParam);

/// @ordinal 10518
/// @name AddStat
/// @address 6fdb7b00
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall AddStat(D2UnitStrc *pUnit, int nStat, int nValue, int nParam);

/// @ordinal 10519
/// @name GetUnitStat
/// @address 6fdb7c30
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetUnitStat(D2UnitStrc *pUnit, int nStat, WORD nLayer);

/// @ordinal 10520
/// @name GetStatSigned
/// @address 6fdb7e30
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetStatSigned(D2UnitStrc *pUnit, int nStat, WORD nLayer);

/// @ordinal 10521
/// @name GetBaseStat
/// @address 6fdb7b30
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetBaseStat(D2UnitStrc *pUnit, int nStat, int nParam);

/// @ordinal 10522
/// @name GetBonusStats
/// @address 6fdb7f40
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetBonusStats(D2UnitStrc *pUnit, int nStatId, uint16_t nLayer);

/// @ordinal 10523
/// @name MergeStatlist
/// @address 6fdb8310
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MergeStatlist(D2UnitStrc *pTarget, D2UnitStrc *pUnit, BOOL bType);

/// @ordinal 10524
/// @name ExpireUnitStatlist
/// @address 6fdb9ae0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ExpireUnitStatlist(D2UnitStrc *pOwner, D2UnitStrc *pUnit);

/// @ordinal 10525
/// @name ITEMS_AddGemToSocket
/// @address 6fdb8f30
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_AddGemToSocket(D2UnitStrc *pItemGem, D2UnitStrc *pItemToSocket);

/// @ordinal 10526
/// @name AllocStatListEx
/// @address 6fdb7190
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pUnit, int nFlags, int pCallbackFunc, int pGame)

/// @ordinal 10527
/// @name FreeStatListEx
/// @address 6fdb7110
/// Not imported by any .dll
void __stdcall FreeStatListEx(D2UnitStrc *pUnit);

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
/// @name D2Common_10532
/// @address 6fdb87a0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10533
/// @name D2Common_10533
/// @address 6fdb8890
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10533(D2UnitStrc *pUnit);

/// @ordinal 10534
/// @name D2Common_10534
/// @address 6fdb8750
/// Not imported by any .dll
void __stdcall D2Common_10534(D2UnitStrc *pUnit);

/// @ordinal 10535
/// @name STATLIST_GetOwner
/// @address 6fdb83a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2UnitStrc *__stdcall STATLIST_GetOwner(D2UnitStrc *pUnit, BOOL *pDynamic);

/// @ordinal 10536
/// @name D2CheckStateMaskBlue
/// @address 6fdb4fc0
/// Not imported by any .dll
BOOL __stdcall D2CheckStateMaskBlue(D2UnitStrc *pUnit);

/// @ordinal 10537
/// @name D2CheckStateMaskATBlue
/// @address 6fdb4d80
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskATBlue(D2UnitStrc *pUnit);

/// @ordinal 10538
/// @name D2CheckStateMaskDMGBlue
/// @address 6fdb4ca0
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskDMGBlue(D2UnitStrc *pUnit);

/// @ordinal 10539
/// @name D2CheckStateMaskPlayerStayDeath
/// @address 6fdb5030
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskPlayerStayDeath(D2UnitStrc *pUnit);

/// @ordinal 10540
/// @name D2CheckStateMaskRFBlue
/// @address 6fdb50a0
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskRFBlue(D2UnitStrc *pUnit);

/// @ordinal 10541
/// @name D2CheckStateMaskRCBlue
/// @address 6fdb5110
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskRCBlue(D2UnitStrc *pUnit);

/// @ordinal 10542
/// @name D2CheckStateMaskRLBlue
/// @address 6fdb5180
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskRLBlue(D2UnitStrc *pUnit);

/// @ordinal 10543
/// @name D2CheckStateMaskRPBlue
/// @address 6fdb51f0
/// Imported by ['D2Client.dll']
DWORD __stdcall D2CheckStateMaskRPBlue(D2UnitStrc *pUnit);

/// @ordinal 10544
/// @name D2CheckStateMaskATRed
/// @address 6fdb4df0
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskATRed(D2UnitStrc *pUnit);

/// @ordinal 10545
/// @name D2CheckStateMaskDMGRed
/// @address 6fdb4d10
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskDMGRed(D2UnitStrc *pUnit);

/// @ordinal 10546
/// @name D2Common_10546
/// @address 6fdb5260
/// Imported by ['D2Client.dll']
BOOL __stdcall D2Common_10546(D2UnitStrc *pUnit);

/// @ordinal 10547
/// @name D2CheckStateMaskRFRed
/// @address 6fdb52d0
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskRFRed(D2UnitStrc *pUnit);

/// @ordinal 10548
/// @name D2CheckStateMaskRCRed
/// @address 6fdb5340
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskRCRed(D2UnitStrc *pUnit);

/// @ordinal 10549
/// @name D2CheckStateMaskRLRed
/// @address 6fdb53b0
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskRLRed(D2UnitStrc *pUnit);

/// @ordinal 10550
/// @name D2CheckStateMaskRPRed
/// @address 6fdb5420
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskRPRed(D2UnitStrc *pUnit);

/// @ordinal 10551
/// @name STATES_IsUnitShapeShifted
/// @address 6fdb4e60
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall STATES_IsUnitShapeShifted(D2UnitStrc *pUnit);

/// @ordinal 10552
/// @name D2CheckStateMaskExp
/// @address 6fdb5490
/// Imported by ['D2Game.dll']
BOOL __stdcall D2CheckStateMaskExp(D2UnitStrc *pUnit);

/// @ordinal 10553
/// @name D2CheckStateMaskExp2
/// @address 6fdb5500
/// Imported by ['D2Game.dll', 'D2Server.dll']
BOOL __stdcall D2CheckStateMaskExp2(int nState);

/// @ordinal 10554
/// @name D2CheckStateMaskStayDeath
/// @address 6fdb4f00
/// Imported by ['D2Game.dll', 'D2Server.dll']
BOOL __stdcall D2CheckStateMaskStayDeath(D2UnitStrc *pUnit, int nState);

/// @ordinal 10555
/// @name D2CheckStateMaskShatter
/// @address 6fdb5540
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskShatter(D2UnitStrc *pUnit);

/// @ordinal 10556
/// @name D2Common_10556
/// @address 6fdb55b0
/// Not imported by any .dll
BOOL __stdcall D2Common_10556(int nState);

/// @ordinal 10557
/// @name D2CheckStateMaskHide
/// @address 6fdb4b50
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2CheckStateMaskHide(D2UnitStrc *pUnit);

/// @ordinal 10558
/// @name D2Common_10558
/// @address 6fdb4b20
/// Not imported by any .dll
BOOL __stdcall D2Common_10558(int nState);

/// @ordinal 10559
/// @name D2CheckStateMaskLife
/// @address 6fdb55f0
/// Imported by ['D2Game.dll']
BOOL __stdcall D2CheckStateMaskLife(D2UnitStrc *pUnit);

/// @ordinal 10560
/// @name D2CheckStateMaskUdead
/// @address 6fdb5660
/// Imported by ['D2Game.dll']
BOOL __stdcall D2CheckStateMaskUdead(D2UnitStrc *pUnit);

/// @ordinal 10561
/// @name D2CheckStateMaskGreen
/// @address 6fdb56d0
/// Imported by ['D2Client.dll']
BOOL __stdcall D2CheckStateMaskGreen(D2UnitStrc *pUnit);

/// @ordinal 10562
/// @name D2Common_10562
/// @address 6fdb8620
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall D2Common_10562(D2UnitStrc *pUnit);

/// @ordinal 10563
/// @name D2Common_10563
/// @address 6fdb57c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_10563(D2UnitStrc *pUnit1, D2UnitStrc *pUnit2);

/// @ordinal 10564
/// @name QuickGetTotalMaxLife
/// @address 6fdb91d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall QuickGetTotalMaxLife(D2UnitStrc *pUnit);

/// @ordinal 10565
/// @name QuickGetTotalMaxMana
/// @address 6fdb92c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall QuickGetTotalMaxMana(D2UnitStrc *pUnit);

/// @ordinal 10566
/// @name QuickGetTotalMaxStamina
/// @address 6fdb93b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall QuickGetTotalMaxStamina(D2UnitStrc *pUnit);

/// @ordinal 10567
/// @name GetMaxDuraFromItem
/// @address 6fdb94a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetMaxDuraFromItem(D2UnitStrc *pUnit);

/// @ordinal 10568
/// @name GetItemMaxDamage
/// @address 6fdb95d0
/// Imported by ['D2Client.dll']
int __stdcall GetItemMaxDamage(D2UnitStrc *pUnit, int a2);

/// @ordinal 10569
/// @name GetItemMinDamage
/// @address 6fdb96f0
/// Imported by ['D2Client.dll']
int __stdcall GetItemMinDamage(D2UnitStrc *pUnit, int a2);

/// @ordinal 10570
/// @name GetItemMaxThrowDamage
/// @address 6fdb9810
/// Not imported by any .dll
int __stdcall GetItemMaxThrowDamage(D2UnitStrc *pUnit);

/// @ordinal 10571
/// @name GetItemMinThrowDamage
/// @address 6fdb9900
/// Not imported by any .dll
int __stdcall GetItemMinThrowDamage(D2UnitStrc *pUnit);

/// @ordinal 10572
/// @name GetItemDefense
/// @address 6fdb99f0
/// Imported by ['D2Client.dll']
int __stdcall GetItemDefense(D2UnitStrc *pUnit);

/// @ordinal 10573
/// @name MergeBaseStats
/// @address 6fdb8c50
/// Imported by ['D2Client.dll']
void __stdcall MergeBaseStats(D2StatListStrc *pTargetStatlist, D2StatListStrc *pSourceStatlist);

/// @ordinal 10574
/// @name D2Common_10574
/// @address 6fdb8eb0
/// Not imported by any .dll
BOOL __stdcall D2Common_10574(D2UnitStrc *pUnit, int nStateId, int a3);

/// @ordinal 10575
/// @name UnloadAllBins
/// @address 6fd50150
/// Imported by ['D2Client.dll']
void __stdcall UnloadAllBins();

/// @ordinal 10576
/// @name LoadAllTxts
/// @address 6fd504b0
/// Imported by ['D2Client.dll']
void __stdcall LoadAllTxts(void *pMemPool, int a2, int a3);

/// @ordinal 10578
/// @name CompileTxt
/// @address 6fd4fd70
/// Not imported by any .dll
void *__stdcall CompileTxt(void *pMemPool, char *szName, D2BinFieldStrc *pTbl, int *pRecordCount, int nSize);

/// @ordinal 10579
/// @name UnloadBin
/// @address 6fd50110
/// Not imported by any .dll
void __stdcall UnloadBin(void *pBinFile);

/// @ordinal 10580
/// @name D2Common_10580
/// @address 6fd4fcf0
/// Not imported by any .dll
void __stdcall D2Common_10580(char *szFileName, void *pWriteBuffer, size_t Size, char Str);

/// @ordinal 10583
/// @name D2Common_10583
/// @address 6fd6b1d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2HirelingTxt *__stdcall D2Common_10583(BOOL bExpansion, int nId, int nLevel);

/// @ordinal 10584
/// @name D2Common_10584
/// @address 6fd6b440
/// Imported by ['D2Game.dll']
D2HirelingTxt *__stdcall D2Common_10584(BOOL bExpansion, int nAct, int nDifficulty, D2HirelingTxt *pRecord);

/// @ordinal 10585
/// @name D2Common_10585
/// @address 6fd6b270
/// Not imported by any .dll
D2HirelingTxt *__stdcall D2Common_10585(BOOL bExpansion, WORD nNameId, _DWORD a3);

/// @ordinal 10586
/// @name D2Common_10586
/// @address 6fd6b310
/// Not imported by any .dll
D2HirelingTxt *__stdcall D2Common_10586(BOOL bExpansion, int nClass, _DWORD a3);

/// @ordinal 10587
/// @name GetHirelingTxtRecord
/// @address 6fd6b3a0
/// Imported by ['D2Game.dll']
D2HirelingTxt *__stdcall GetHirelingTxtRecord(DWORD bExpansion, DWORD dwVendorId, DWORD dwDifficulty, _DWORD a4);

/// @ordinal 10588
/// @name GetNpcTxtRecord
/// @address 6fd6b820
/// Not imported by any .dll
D2NpcTxt *__stdcall GetNpcTxtRecord(DWORD dwNpcId);

/// @ordinal 10590
/// @name D2Common_10590
/// @address 6fd64be0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10592
/// @name GetMonsterChainInfo
/// @address 6fd64c40
/// Imported by ['D2Game.dll']
int __stdcall GetMonsterChainInfo(int nMonsterId, int *pMaxChainId, int *pChainId);

/// @ordinal 10593
/// @name GetCharstatsTxtTable
/// @address 6fd4e4b0
/// Not imported by any .dll
D2CharStatsTxt *__fastcall GetCharstatsTxtTable();

/// @ordinal 10596
/// @name GetArenaTxtRecord
/// @address 6fd47970
/// Imported by ['D2Game.dll']
/// @guessedtype int()

/// @ordinal 10597
/// @name D2Common_10597
/// @address 6fd57630
/// Imported by ['D2Game.dll']
signed int __stdcall D2Common_10597(int nItemId);

/// @ordinal 10599
/// @name GetItemsTxt
/// @address 6fd57620
/// Imported by ['D2Game.dll']
D2ItemDataTbl *__stdcall GetItemsTxt();

/// @ordinal 10600
/// @name GetItemsTxtRecord
/// @address 6fd57680
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2ItemsTxt *__stdcall GetItemsTxtRecord(DWORD dwItemNo);

/// @ordinal 10601
/// @name GetItemRecordFromItemCode
/// @address 6fd576d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2ItemsTxt *__stdcall GetItemRecordFromItemCode(DWORD dwCode, int *pItemId);

/// @ordinal 10602
/// @name GetItemIdFromItemCode
/// @address 6fd57720
/// Imported by ['D2Game.dll']
int __stdcall GetItemIdFromItemCode(DWORD dwCode);

/// @ordinal 10603
/// @name GetMagicAffixInfo
/// @address 6fd580b0
/// Imported by ['D2Game.dll']
D2MagicAffixInfoStrc *__stdcall GetMagicAffixInfo();

/// @ordinal 10604
/// @name GetAffixTxtRecord
/// @address 6fd580c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2MagicAffixTxt *__stdcall GetAffixTxtRecord(int nIndex);

/// @ordinal 10605
/// @name GetRareAffixTxt
/// @address 6fd58480
/// Imported by ['D2Game.dll']
D2RareAffixDataTbl *__fastcall GetRareAffixTxt();

/// @ordinal 10606
/// @name GetRareSuffixPrefixTxtRecord
/// @address 6fd58490
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int nId)

/// @ordinal 10611
/// @name GetQualityItemsTxt
/// @address 6fd5b260
/// Imported by ['D2Game.dll']
D2QualityItemDataTbl *__fastcall GetQualityItemsTxt();

/// @ordinal 10612
/// @name GetQualityItemsTxtRecord
/// @address 6fd5b270
/// Imported by ['D2Game.dll']
D2QualityItemsTxt *__stdcall GetQualityItemsTxtRecord(int nIndex);

/// @ordinal 10613
/// @name GetLowQualityItemsTxt
/// @address 6fd5be50
/// Imported by ['D2Game.dll']
D2LowQualityItemDataTbl *__fastcall GetLowQualityItemsTxt();

/// @ordinal 10614
/// @name GetLowQualityItemsTxtRecord
/// @address 6fd5be60
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int nId)

/// @ordinal 10615
/// @name GetGemsTxt
/// @address 6fd5baf0
/// Not imported by any .dll
D2GemDataTbl *__fastcall GetGemsTxt();

/// @ordinal 10616
/// @name GetGemsTxtRecord
/// @address 6fd5bb00
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2GemsTxt *__stdcall GetGemsTxtRecord(int nGemId);

/// @ordinal 10617
/// @name GetBooksTxt
/// @address 6fd5bd20
/// Imported by ['D2Game.dll']
D2BookDataTbl *__fastcall GetBooksTxt();

/// @ordinal 10618
/// @name GetBooksTxtRecord
/// @address 6fd5bd30
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int nBookId)

/// @ordinal 10619
/// @name GetRunesTxt
/// @address 6fd5e9e0
/// Not imported by any .dll
D2RuneDataTbl *__fastcall GetRunesTxt();

/// @ordinal 10620
/// @name GetRunesTxtRecord
/// @address 6fd5eaa0
/// Not imported by any .dll
D2RunesTxt *__stdcall GetRunesTxtRecord(int nRunewordId);

/// @ordinal 10621
/// @name SetRunesTxtRecord
/// @address 6fd5e9f0
/// Imported by ['D2Client.dll']
void __stdcall SetRunesTxtRecord(int nRecordIdx, D2RunesTxt *pRecord);

/// @ordinal 10622
/// @name GetItemRatioTxt
/// @address 6fd5c210
/// Not imported by any .dll
D2ItemRatioDataTbl *__fastcall GetItemRatioTxt();

/// @ordinal 10623
/// @name GetItemRatioTxtRecord
/// @address 6fd5c220
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int nItemId, char nDifficulty, __int16 wVersion)

/// @ordinal 10624
/// @name GetShrinesTxtRecord
/// @address 6fd72000
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int nShrineId)

/// @ordinal 10625
/// @name GetShrinesTxtRecordCount
/// @address 6fd72070
/// Imported by ['D2Game.dll']
int __stdcall GetShrinesTxtRecordCount();

/// @ordinal 10626
/// @name GetObjectsTxtRecord
/// @address 6fd718f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2ObjectsTxt *__stdcall GetObjectsTxtRecord(int nObjectId);

/// @ordinal 10627
/// @name GetObjGroupTxtRecord
/// @address 6fd71e00
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int nId)

/// @ordinal 10628
/// @name GetLevelThreshold
/// @address 6fd496b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetLevelThreshold(int nClass, DWORD dwLevel);

/// @ordinal 10629
/// @name GetMaxLevel
/// @address 6fd496e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetMaxLevel(int nClass);

/// @ordinal 10630
/// @name GetCurrentLevelFromExp
/// @address 6fd49710
/// Imported by ['D2Game.dll']
DWORD __stdcall GetCurrentLevelFromExp(int nClass, DWORD dwExperience);

/// @ordinal 10631
/// @name GetLevelsTxtRecord
/// @address 6fd603c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2LevelsTxt *__stdcall GetLevelsTxtRecord(int nLevelId);

/// @ordinal 10632
/// @name GetRainFromLevelsTxt
/// @address 6fd603f0
/// Imported by ['D2Client.dll']
BYTE __stdcall GetRainFromLevelsTxt(int nLevelId);

/// @ordinal 10633
/// @name GetMudFromLevelsTxt
/// @address 6fd60470
/// Imported by ['D2Client.dll']
BYTE __stdcall GetMudFromLevelsTxt(int nLevelId);

/// @ordinal 10634
/// @name GetNoPerFromLevelsTxt
/// @address 6fd60430
/// Imported by ['D2Client.dll']
BYTE __stdcall GetNoPerFromLevelsTxt(int nLevelId);

/// @ordinal 10635
/// @name GetRectFromInventoryTxt
/// @address 6fd54f20
/// Imported by ['D2Client.dll']
void __stdcall GetRectFromInventoryTxt(int nInventoryTxtId, int bHigherRes, D2InvRectStrc *pInvRect);

/// @ordinal 10636
/// @name DATATBLS_GetInventoryGridInfo
/// @address 6fd54fb0
/// Imported by ['D2Client.dll']
void __stdcall DATATBLS_GetInventoryGridInfo(int nInventoryRecordId, BOOL bHigherRes, D2InventoryGridInfoStrc *pInventoryGridInfo);

/// @ordinal 10637
/// @name GetInventoryComponentGrid
/// @address 6fd55030
/// Imported by ['D2Client.dll']
void __stdcall GetInventoryComponentGrid(int nInventoryTxtId, int bHigherRes, D2InvCompGridStrc *pInvCompGrid, int nComponent);

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
/// @name DebugSetAnimDataSpeed
/// @address 6fd475d0
/// Not imported by any .dll
void __stdcall DebugSetAnimDataSpeed(D2UnitStrc *pUnit, int animSpeed);

/// @ordinal 10641
/// @name GetAnimDataSpeedAndUnk
/// @address 6fd47700
/// Not imported by any .dll
signed int __stdcall GetAnimDataSpeedAndUnk(char *szPath, int *pLength, int *pOutAnimSpeed, int *pOutFirstFrameTagged);

/// @ordinal 10642
/// @name SetVelocityInMonStatsTxtRecord
/// @address 6fd689b0
/// Not imported by any .dll
__int16 __stdcall SetVelocityInMonStatsTxtRecord(int nMonsterId, WORD nVelocity);

/// @ordinal 10643
/// @name GetPlrMode_TypeTxt
/// @address 6fd73150
/// Not imported by any .dll
D2PlrModeDataTbl *__fastcall GetPlrMode_TypeTxt();

/// @ordinal 10644
/// @name GetMonModeTxt
/// @address 6fd73160
/// Not imported by any .dll
D2MonModeDataTbl *__fastcall GetMonModeTxt();

/// @ordinal 10645
/// @name GetObjMode_TypeTxt
/// @address 6fd73170
/// Not imported by any .dll
D2ObjModeDataTbl *__fastcall GetObjMode_TypeTxt();

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
/// @name GetCompositTxtRecord
/// @address 6fd73330
/// Imported by ['D2Client.dll']
/// @guessedtype int __cdecl(int nComposit)

/// @ordinal 10650
/// @name GetArmtypeTxtRecord
/// @address 6fd73370
/// Imported by ['D2Client.dll']
D2ArmTypeTxt *__stdcall GetArmtypeTxtRecord(int nId);

/// @ordinal 10651
/// @name RollRandomUniqueTitleString
/// @address 6fd68a10
/// Not imported by any .dll
wchar_t *__fastcall RollRandomUniqueTitleString(D2UnitStrc *pUnit);

/// @ordinal 10652
/// @name RollRandomUniquePrefixString
/// @address 6fd68a80
/// Imported by ['D2Client.dll']
wchar_t *__fastcall RollRandomUniquePrefixString(D2UnitStrc *pUnit);

/// @ordinal 10653
/// @name RollRandomUniqueSuffixString
/// @address 6fd68af0
/// Imported by ['D2Client.dll']
wchar_t *__fastcall RollRandomUniqueSuffixString(D2UnitStrc *pUnit);

/// @ordinal 10654
/// @name RollRandomUniqueAppellationString
/// @address 6fd68b60
/// Imported by ['D2Client.dll']
wchar_t *__fastcall RollRandomUniqueAppellationString(D2UnitStrc *pUnit);

/// @ordinal 10655
/// @name GetDifficultyLevelsTxtRecord
/// @address 6fd4e4d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int nDifficulty)

/// @ordinal 10656
/// @name ShouldNeverCallInExpansion
/// @address 6fd69b70
/// Not imported by any .dll
int __stdcall ShouldNeverCallInExpansion();

/// @ordinal 10658
/// @name GetTreasureClassExFromName
/// @address 6fd68dc0
/// Not imported by any .dll
D2TCExShortStrc *__stdcall GetTreasureClassExFromName(char *szName);

/// @ordinal 10659
/// @name GetTCExTxtRecord
/// @address 6fd68df0
/// Imported by ['D2Game.dll']
D2TCExShortStrc *__stdcall GetTCExTxtRecord(WORD wTCId, int nLvl);

/// @ordinal 10660
/// @name GetTreasureClassEx
/// @address 6fd68e50
/// Imported by ['D2Game.dll']
D2TCExShortStrc *__stdcall GetTreasureClassEx(int nDifficulty, int nAct, int nIndex);

/// @ordinal 10661
/// @name D2Common_11079_Return0
/// @address 6fd9fb40
/// Not imported by any .dll
int __stdcall D2Common_11079_Return0(int arg, int a2);

/// @ordinal 10662
/// @name GetMonItemPercentTxt
/// @address 6fd69c50
/// Not imported by any .dll
D2MonItemPercentDataTbl *__fastcall GetMonItemPercentTxt();

/// @ordinal 10663
/// @name GetMonItemPercentTxtRecord
/// @address 6fd69c60
/// Not imported by any .dll
/// @guessedtype int __stdcall(int nId)

/// @ordinal 10664
/// @name GetCharTemplateTxtRecordCount
/// @address 6fd48790
/// Not imported by any .dll
int __fastcall GetCharTemplateTxtRecordCount();

/// @ordinal 10665
/// @name GetCharTemplateTxtRecord
/// @address 6fd487a0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10666
/// @name GetClassFromCharTemplateTxtRecord
/// @address 6fd48810
/// Imported by ['D2Game.dll']
int __fastcall GetClassFromCharTemplateTxtRecord(int nTemplate, int nLevel);

/// @ordinal 10667
/// @name UNUSED_Return0
/// @address 6fd733b0
/// Not imported by any .dll
int __stdcall UNUSED_Return0(int a1, int a2);

/// @ordinal 10668
/// @name GetSuperUniquesTxtRecord
/// @address 6fd6a440
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int nSuperUniqueId)

/// @ordinal 10671
/// @name GetGambleTxt
/// @address 6fd5d7f0
/// Imported by ['D2Game.dll']
D2GambleDataTbl *__cdecl GetGambleTxt();

/// @ordinal 10674
/// @name GetFramesFromOverlayTxt
/// @address 6fd72530
/// Not imported by any .dll
DWORD __stdcall GetFramesFromOverlayTxt(int nOverlayId);

/// @ordinal 10675
/// @name GetPreDrawFromOverlayTxt
/// @address 6fd72570
/// Not imported by any .dll
int __stdcall GetPreDrawFromOverlayTxt(int nOverlayId);

/// @ordinal 10676
/// @name GetOffsetXFromOverlayTxt
/// @address 6fd725b0
/// Not imported by any .dll
DWORD __stdcall GetOffsetXFromOverlayTxt(int nOverlayId);

/// @ordinal 10677
/// @name GetOffsetYFromOverlayTxt
/// @address 6fd725f0
/// Not imported by any .dll
DWORD __stdcall GetOffsetYFromOverlayTxt(int nOverlayId);

/// @ordinal 10678
/// @name GetTransFromOverlayTxt
/// @address 6fd72630
/// Not imported by any .dll
int __stdcall GetTransFromOverlayTxt(int nOverlayId);

/// @ordinal 10679
/// @name GetRadiusAndColorFromOverlayTxt
/// @address 6fd72670
/// Not imported by any .dll
int __stdcall GetRadiusAndColorFromOverlayTxt(int nOverlayId, int *pInitRadius, int *pRadius, BYTE *pRed, BYTE *pGreen, BYTE *pBlue);

/// @ordinal 10680
/// @name Get1OfNFromOverlayTxt
/// @address 6fd72720
/// Imported by ['D2Client.dll']
DWORD __stdcall Get1OfNFromOverlayTxt(int nOverlayId);

/// @ordinal 10681
/// @name GetDirFromOverlayTxt
/// @address 6fd72760
/// Not imported by any .dll
int __stdcall GetDirFromOverlayTxt(int nOverlayId);

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
/// @name D2Common_10686
/// @address 6fd72990
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10686(D2MonSeqTxt *pMonSeqTxt, int nSeqFramePoint, int *pEvent);

/// @ordinal 10687
/// @name AllocItemData
/// @address 6fd98380
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall AllocItemData(void *pMemPool, D2UnitStrc *pItem);

/// @ordinal 10688
/// @name FreeItemData
/// @address 6fd983f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall FreeItemData(void *pMemPool, D2UnitStrc *pItem);

/// @ordinal 10689
/// @name GetBodylocFromItem
/// @address 6fd98430
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall GetBodylocFromItem(D2UnitStrc *pItem);

/// @ordinal 10690
/// @name SetItemLocation
/// @address 6fd98450
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SetItemLocation(D2UnitStrc *pItem, BYTE nBodyLoc);

/// @ordinal 10691
/// @name GetItemSeed
/// @address 6fd98470
/// Imported by ['D2Game.dll']
D2SeedStrc *__stdcall GetItemSeed(D2UnitStrc *pItem);

/// @ordinal 10692
/// @name InitItemSeed
/// @address 6fd98490
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall InitItemSeed(D2UnitStrc *pItem);

/// @ordinal 10693
/// @name GetItemStartSeed
/// @address 6fd984b0
/// Imported by ['D2Game.dll']
int __stdcall GetItemStartSeed(D2UnitStrc *pItem);

/// @ordinal 10694
/// @name SetItemStartSeed
/// @address 6fd984d0
/// Imported by ['D2Game.dll']
void __stdcall SetItemStartSeed(D2UnitStrc *pItem, int nSeed);

/// @ordinal 10695
/// @name GetItemQuality
/// @address 6fd98550
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetItemQuality(D2UnitStrc *pItem);

/// @ordinal 10696
/// @name SetItemQuality
/// @address 6fd98580
/// Imported by ['D2Game.dll']
void __stdcall SetItemQuality(D2UnitStrc *pItem, int nQuality);

/// @ordinal 10697
/// @name GetItemAutomagic
/// @address 6fd98600
/// Imported by ['D2Game.dll']
WORD __stdcall GetItemAutomagic(D2UnitStrc *pItem);

/// @ordinal 10698
/// @name SetItemAutomagic
/// @address 6fd98630
/// Imported by ['D2Game.dll']
void __stdcall SetItemAutomagic(D2UnitStrc *pItem, WORD nAffix);

/// @ordinal 10699
/// @name GetPrefixIdFromItem
/// @address 6fd985a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
__int16 __stdcall GetPrefixIdFromItem(D2UnitStrc *pItem, int a2);

/// @ordinal 10700
/// @name AssignPrefixToItem
/// @address 6fd985d0
/// Imported by ['D2Game.dll']
void __stdcall AssignPrefixToItem(D2UnitStrc *arg, __int16 a2, int a3);

/// @ordinal 10701
/// @name GetSuffixIdFromItem
/// @address 6fd98650
/// Imported by ['D2Client.dll', 'D2Game.dll']
__int16 __stdcall GetSuffixIdFromItem(D2UnitStrc *pItem, DWORD suffixId);

/// @ordinal 10702
/// @name AssignSuffixToItem
/// @address 6fd98680
/// Imported by ['D2Game.dll']
void __stdcall AssignSuffixToItem(D2UnitStrc *pUnit, __int16 nSuffixId, int nArrayPos);

/// @ordinal 10703
/// @name GetItemRarePrefix
/// @address 6fd986b0
/// Imported by ['D2Client.dll']
__int16 __stdcall GetItemRarePrefix(D2UnitStrc *pItem);

/// @ordinal 10704
/// @name SetItemRarePrefix
/// @address 6fd986e0
/// Imported by ['D2Game.dll']
void __stdcall SetItemRarePrefix(D2UnitStrc *pItem, WORD nPrefix);

/// @ordinal 10705
/// @name GetItemRareSuffix
/// @address 6fd98700
/// Imported by ['D2Client.dll']
__int16 __stdcall GetItemRareSuffix(D2UnitStrc *pItem);

/// @ordinal 10706
/// @name SetItemRareSuffix
/// @address 6fd98730
/// Imported by ['D2Game.dll']
void __stdcall SetItemRareSuffix(D2UnitStrc *pItem, WORD nSuffix);

/// @ordinal 10707
/// @name CheckItemFlag
/// @address 6fd98750
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckItemFlag(D2UnitStrc *pItem, DWORD dwFlag, int nLine, char *szFile);

/// @ordinal 10708
/// @name SetItemFlag
/// @address 6fd98780
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SetItemFlag(D2UnitStrc *pItem, DWORD dwFlag, BOOL bSet);

/// @ordinal 10709
/// @name GetItemFlags
/// @address 6fd987c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetItemFlags(D2UnitStrc *pItem);

/// @ordinal 10710
/// @name SetItemCMDFlags
/// @address 6fd987e0
/// Imported by ['D2Game.dll']
int __stdcall SetItemCMDFlags(D2UnitStrc *pItem, int nFlag);

/// @ordinal 10711
/// @name SetItemCMDFlags
/// @address 6fd98810
/// Imported by ['D2Game.dll']
void __stdcall SetItemCMDFlags(D2UnitStrc *pItem, int nFlagIndex, BOOL bSet);

/// @ordinal 10712
/// @name GetItemCMDFlags
/// @address 6fd98850
/// Not imported by any .dll
int __stdcall GetItemCMDFlags(D2UnitStrc *pItem);

/// @ordinal 10717
/// @name GetItemLevel
/// @address 6fd98870
/// Imported by ['D2Game.dll']
int __stdcall GetItemLevel(D2UnitStrc *pItem);

/// @ordinal 10718
/// @name SetItemLevel
/// @address 6fd988b0
/// Imported by ['D2Game.dll']
void __stdcall SetItemLevel(D2UnitStrc *pItem, int iLvl);

/// @ordinal 10719
/// @name GetStorePageOfItem
/// @address 6fd988e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall GetStorePageOfItem(D2UnitStrc *pItem);

/// @ordinal 10720
/// @name SetStorePageOfItem
/// @address 6fd98900
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SetStorePageOfItem(D2UnitStrc *pItem, BYTE nPage);

/// @ordinal 10721
/// @name GetItemCellOverlap
/// @address 6fd98920
/// Not imported by any .dll
BYTE __stdcall GetItemCellOverlap(D2UnitStrc *pItem);

/// @ordinal 10722
/// @name SetItemCellOverlap
/// @address 6fd98940
/// Imported by ['D2Game.dll']
void __stdcall SetItemCellOverlap(D2UnitStrc *pItem, int nValue);

/// @ordinal 10723
/// @name GetItemEarName
/// @address 6fd989a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
char *__stdcall GetItemEarName(D2UnitStrc *pItem);

/// @ordinal 10724
/// @name SetItemEarName
/// @address 6fd989c0
/// Imported by ['D2Game.dll']
void __stdcall SetItemEarName(D2UnitStrc *pItem, char *name);

/// @ordinal 10725
/// @name GetItemEarLevel
/// @address 6fd989f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetItemEarLevel(D2UnitStrc *pItem);

/// @ordinal 10726
/// @name SetItemEarLevel
/// @address 6fd98a10
/// Imported by ['D2Game.dll']
void __stdcall SetItemEarLevel(D2UnitStrc *pItem, BYTE nLevel);

/// @ordinal 10727
/// @name GetItemVarGfxIndex
/// @address 6fd98a30
/// Imported by ['D2Client.dll']
BYTE __stdcall GetItemVarGfxIndex(D2UnitStrc *pItem);

/// @ordinal 10728
/// @name SetItemVarGfxIndex
/// @address 6fd98a50
/// Imported by ['D2Game.dll']
void __stdcall SetItemVarGfxIndex(D2UnitStrc *pItem, BYTE nIndex);

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
/// @name CheckItemTypeId
/// @address 6fd9dce0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckItemTypeId(D2UnitStrc *pItem, int nItemType);

/// @ordinal 10732
/// @name GetItemsFileIndex
/// @address 6fd9dee0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetItemsFileIndex(D2UnitStrc *pItem);

/// @ordinal 10733
/// @name SetItemsFileIndex
/// @address 6fd9df60
/// Imported by ['D2Game.dll']
void __stdcall SetItemsFileIndex(D2UnitStrc *pItem, DWORD dwFileIndex);

/// @ordinal 10734
/// @name SetItemsOwnerId
/// @address 6fd9e0a0
/// Imported by ['D2Game.dll']
void __stdcall SetItemsOwnerId(D2UnitStrc *pItem, int nOwnerGUID);

/// @ordinal 10735
/// @name GetItemsOwnerId
/// @address 6fd9e120
/// Imported by ['D2Game.dll']
DWORD __stdcall GetItemsOwnerId(D2UnitStrc *pItem);

/// @ordinal 10736
/// @name D2Common_10736
/// @address 6fd9e1a0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_10736(D2UnitStrc *pItem);

/// @ordinal 10737
/// @name CheckIfItemsClassIsValid
/// @address 6fd9e310
/// Imported by ['D2Client.dll']
BOOL __stdcall CheckIfItemsClassIsValid(D2UnitStrc *pItem);

/// @ordinal 10738
/// @name CheckIfItemIdsClassIsValid
/// @address 6fd9e2a0
/// Not imported by any .dll
BOOL __stdcall CheckIfItemIdsClassIsValid(DWORD dwItemNo);

/// @ordinal 10739
/// @name GetClassOfClassSpecificItem
/// @address 6fd9e390
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetClassOfClassSpecificItem(D2UnitStrc *pItem);

/// @ordinal 10740
/// @name CheckIfItemIsNotQuestItem
/// @address 6fd9e580
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckIfItemIsNotQuestItem(D2UnitStrc *pItem);

/// @ordinal 10741
/// @name D2SecureGetQuestNo
/// @address 6fd99bc0
/// Not imported by any .dll
DWORD __stdcall D2SecureGetQuestNo(DWORD dwId);

/// @ordinal 10742
/// @name SecureGetItemQuestNo
/// @address 6fd99c60
/// Not imported by any .dll
DWORD __stdcall SecureGetItemQuestNo(D2UnitStrc *pItem);

/// @ordinal 10743
/// @name GetItemNormalCode
/// @address 6fd99d40
/// Not imported by any .dll
DWORD __stdcall GetItemNormalCode(D2UnitStrc *pItem);

/// @ordinal 10744
/// @name GetPrimaryWeaponClass
/// @address 6fd992c0
/// Not imported by any .dll
DWORD __stdcall GetPrimaryWeaponClass(D2UnitStrc *pItem);

/// @ordinal 10745
/// @name GetSecondaryWeaponClass
/// @address 6fd992f0
/// Not imported by any .dll
DWORD __stdcall GetSecondaryWeaponClass(D2UnitStrc *pItem);

/// @ordinal 10746
/// @name GetItemBaseCode
/// @address 6fd99370
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetItemBaseCode(D2UnitStrc *pItem);

/// @ordinal 10747
/// @name GetItemAltGfx
/// @address 6fd993f0
/// Imported by ['D2Client.dll']
DWORD __stdcall GetItemAltGfx(D2UnitStrc *pItem);

/// @ordinal 10748
/// @name GetItemCompNo
/// @address 6fd99480
/// Imported by ['D2Client.dll']
BYTE __stdcall GetItemCompNo(D2UnitStrc *pItem);

/// @ordinal 10749
/// @name GetItemDimensions
/// @address 6fd99500
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall GetItemDimensions(D2UnitStrc *pItem, BYTE *pWidth, BYTE *pHeight);

/// @ordinal 10750
/// @name GetItemBodylocs
/// @address 6fd99540
/// Imported by ['D2Game.dll']
void __stdcall GetItemBodylocs(D2UnitStrc *pItem, BYTE *pBodyLoc1, BYTE *pBodyLoc2);

/// @ordinal 10751
/// @name GetItemTypeFromItem
/// @address 6fd995d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetItemTypeFromItem(D2UnitStrc *pItem);

/// @ordinal 10752
/// @name GetItemTypeFromItemId
/// @address 6fd99640
/// Imported by ['D2Game.dll']
DWORD __stdcall GetItemTypeFromItemId(DWORD dwItemId);

/// @ordinal 10753
/// @name GetItemQlvl
/// @address 6fd99680
/// Imported by ['D2Game.dll']
BYTE __stdcall GetItemQlvl(D2UnitStrc *pItem);

/// @ordinal 10754
/// @name CheckIfFlagIsSet
/// @address 6fd99700
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall CheckIfFlagIsSet(int nFlags, int nFlag);

/// @ordinal 10755
/// @name SetOrRemoveFlag
/// @address 6fd99710
/// Imported by ['D2Game.dll']
void __stdcall SetOrRemoveFlag(int *pFlags, int nFlag, int bSet);

/// @ordinal 10756
/// @name CheckItemRequirements
/// @address 6fd99740
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckItemRequirements(D2UnitStrc *pItem, D2UnitStrc *pUnit, BOOL bEquipping, BOOL *bStrength, BOOL *bDexterity, BOOL *bLevel);

/// @ordinal 10757
/// @name GetLevelRequirement
/// @address 6fd9a3f0
/// Imported by ['D2Client.dll']
int __stdcall GetLevelRequirement(D2UnitStrc *pItem, D2UnitStrc *pUnit);

/// @ordinal 10758
/// @name CheckBodyLocation
/// @address 6fd9a400
/// Imported by ['D2Client.dll']
DWORD __stdcall CheckBodyLocation(D2UnitStrc *pItem, BYTE nBodyLoc);

/// @ordinal 10759
/// @name CheckItemIfThrowable
/// @address 6fd9a530
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall CheckItemIfThrowable(D2UnitStrc *pItem);

/// @ordinal 10760
/// @name GetItemMissileType
/// @address 6fd9a5b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetItemMissileType(D2UnitStrc *pItem);

/// @ordinal 10761
/// @name GetItemMeleeRange
/// @address 6fd9a5e0
/// Not imported by any .dll
BYTE __stdcall GetItemMeleeRange(D2UnitStrc *pItem);

/// @ordinal 10762
/// @name CheckItemTypeIfThrowable
/// @address 6fd9a4f0
/// Imported by ['D2Game.dll']
DWORD __stdcall CheckItemTypeIfThrowable(int nItemType);

/// @ordinal 10763
/// @name CheckPrimaryType
/// @address 6fd9a610
/// Not imported by any .dll
DWORD __stdcall CheckPrimaryType(int nItem, int nItemType);

/// @ordinal 10764
/// @name CheckPrimaryItemType
/// @address 6fd9a660
/// Not imported by any .dll
DWORD __stdcall CheckPrimaryItemType(D2UnitStrc *pItem, int nItemType);

/// @ordinal 10765
/// @name CheckIfTwoHanded
/// @address 6fd9a700
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall CheckIfTwoHanded(D2UnitStrc *pItem);

/// @ordinal 10766
/// @name CheckItemIfTwoHanded
/// @address 6fd9a6c0
/// Not imported by any .dll
DWORD __stdcall CheckItemIfTwoHanded(int nItem);

/// @ordinal 10767
/// @name CheckIfItemIsStackable
/// @address 6fd9a750
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall CheckIfItemIsStackable(D2UnitStrc *pItem);

/// @ordinal 10768
/// @name CheckIfItemIsBeltable
/// @address 6fd9a7a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall CheckIfItemIsBeltable(D2UnitStrc *pItem);

/// @ordinal 10769
/// @name ComparePotionTypes
/// @address 6fd9a820
/// Not imported by any .dll
BOOL __stdcall ComparePotionTypes(D2UnitStrc *pItem1, D2UnitStrc *pItem2);

/// @ordinal 10770
/// @name CheckIfItemIsAutoBeltable
/// @address 6fd9a960
/// Imported by ['D2Game.dll']
BOOL __stdcall CheckIfItemIsAutoBeltable(D2InventoryStrc *pInventory, D2UnitStrc *pItem);

/// @ordinal 10771
/// @name CheckIfItemIsUseable
/// @address 6fd9aa00
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckIfItemIsUseable(D2UnitStrc *pItem);

/// @ordinal 10772
/// @name GetUniqueColumnFromItemTxt
/// @address 6fd9aa70
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetUniqueColumnFromItemTxt(D2UnitStrc *pItem);

/// @ordinal 10773
/// @name CheckIfQuestItem
/// @address 6fd9ab00
/// Imported by ['D2Game.dll']
DWORD __stdcall CheckIfQuestItem(D2UnitStrc *pItem);

/// @ordinal 10774
/// @name CheckIfNotQuestItem
/// @address 6fd9de90
/// Not imported by any .dll
BOOL __stdcall CheckIfNotQuestItem(DWORD dwItemNo);

/// @ordinal 10775
/// @name GetTransactionCost
/// @address 6fd9cde0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetTransactionCost(D2UnitStrc *pPlayer, D2UnitStrc *pItem, int nDifficulty, void *pHistory, int nVendorId, int nTransactionType);

/// @ordinal 10776
/// @name GetNoOfUnidItems
/// @address 6fd9ff00
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetNoOfUnidItems(D2UnitStrc *pUnit);

/// @ordinal 10777
/// @name CheckItemIfRepairable
/// @address 6fd98a70
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckItemIfRepairable(D2UnitStrc *pItem);

/// @ordinal 10780
/// @name GetTypeAmmoType
/// @address 6fd98c60
/// Not imported by any .dll
DWORD __stdcall GetTypeAmmoType(int nItemType);

/// @ordinal 10781
/// @name GetItemAmmoType
/// @address 6fd98ca0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetItemAmmoType(D2UnitStrc *pItem);

/// @ordinal 10782
/// @name GetTypeQuiverType
/// @address 6fd98d20
/// Imported by ['D2Game.dll']
DWORD __stdcall GetTypeQuiverType(int nItemType);

/// @ordinal 10783
/// @name GetItemQuiverType
/// @address 6fd98d60
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetItemQuiverType(D2UnitStrc *pItem);

/// @ordinal 10784
/// @name CheckTypeAutoStack
/// @address 6fd98de0
/// Not imported by any .dll
DWORD __stdcall CheckTypeAutoStack(int nItemType);

/// @ordinal 10785
/// @name CheckItemAutoStack
/// @address 6fd98e20
/// Imported by ['D2Game.dll']
DWORD __stdcall CheckItemAutoStack(D2UnitStrc *pItem);

/// @ordinal 10786
/// @name CheckItemReLoad
/// @address 6fd98ea0
/// Imported by ['D2Game.dll']
DWORD __stdcall CheckItemReLoad(D2UnitStrc *pItem);

/// @ordinal 10787
/// @name CheckItemReEquip
/// @address 6fd98f20
/// Imported by ['D2Game.dll']
DWORD __stdcall CheckItemReEquip(D2UnitStrc *pItem);

/// @ordinal 10788
/// @name GetItemVendorPage
/// @address 6fd98fa0
/// Imported by ['D2Game.dll']
BYTE __stdcall GetItemVendorPage(D2UnitStrc *pItem);

/// @ordinal 10789
/// @name GetVarInvGfxFromItem
/// @address 6fd99020
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall GetVarInvGfxFromItem(D2UnitStrc *pItem);

/// @ordinal 10790
/// @name GetVarInvGfxStringFromItem
/// @address 6fd990a0
/// Imported by ['D2Client.dll']
char *__stdcall GetVarInvGfxStringFromItem(D2UnitStrc *pItem, int unk);

/// @ordinal 10791
/// @name CheckItemTypeMagic
/// @address 6fd991c0
/// Imported by ['D2Game.dll']
DWORD __stdcall CheckItemTypeMagic(D2UnitStrc *pItem);

/// @ordinal 10792
/// @name CheckItemTypeRare
/// @address 6fd99140
/// Imported by ['D2Game.dll']
DWORD __stdcall CheckItemTypeRare(D2UnitStrc *pItem);

/// @ordinal 10793
/// @name CheckItemTypeNormal
/// @address 6fd99240
/// Imported by ['D2Game.dll']
DWORD __stdcall CheckItemTypeNormal(D2UnitStrc *pItem);

/// @ordinal 10794
/// @name GetMaxStack
/// @address 6fd9ce10
/// Not imported by any .dll
DWORD __stdcall GetMaxStack(DWORD dwItemId);

/// @ordinal 10795
/// @name GetTotalMaxStack
/// @address 6fd9ce50
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetTotalMaxStack(D2UnitStrc *pItem);

/// @ordinal 10796
/// @name GetItemMinStack
/// @address 6fd9cfb0
/// Not imported by any .dll
DWORD __stdcall GetItemMinStack(DWORD dwItemId);

/// @ordinal 10797
/// @name SecureGetItemMinStack
/// @address 6fd9cff0
/// Imported by ['D2Game.dll']
DWORD __stdcall SecureGetItemMinStack(D2UnitStrc *pItem);

/// @ordinal 10798
/// @name GetItemSpawnStack
/// @address 6fd9cef0
/// Not imported by any .dll
DWORD __stdcall GetItemSpawnStack(DWORD dwItemId);

/// @ordinal 10799
/// @name SecureGetItemSpawnStack
/// @address 6fd9cf30
/// Imported by ['D2Game.dll']
DWORD __stdcall SecureGetItemSpawnStack(D2UnitStrc *pItem);

/// @ordinal 10800
/// @name GetBitField
/// @address 6fd9d070
/// Not imported by any .dll
DWORD __stdcall GetBitField(D2UnitStrc *pItem);

/// @ordinal 10801
/// @name D2Common_10801
/// @address 6fd9de50
/// Not imported by any .dll
/// @guessedtype int __stdcall(int dwItemNo)

/// @ordinal 10802
/// @name D2Common_10802
/// @address 6fd9de10
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int dwItemNo)

/// @ordinal 10803
/// @name D2Common_10803
/// @address 6fd9ddd0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int dwItemNo)

/// @ordinal 10804
/// @name GetSpellIconFromUnit
/// @address 6fd9d0f0
/// Imported by ['D2Game.dll']
int __stdcall GetSpellIconFromUnit(D2UnitStrc *pItem);

/// @ordinal 10805
/// @name GetDurWarnCount
/// @address 6fd9d1e0
/// Not imported by any .dll
BYTE __stdcall GetDurWarnCount(D2UnitStrc *pItem);

/// @ordinal 10806
/// @name GetQtyWarnCount
/// @address 6fd9d260
/// Imported by ['D2Client.dll']
BYTE __stdcall GetQtyWarnCount(D2UnitStrc *pItem);

/// @ordinal 10807
/// @name GetItemStrBonus
/// @address 6fd9d2e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
WORD __stdcall GetItemStrBonus(D2UnitStrc *pItem);

/// @ordinal 10808
/// @name GetItemDexBonus
/// @address 6fd9d310
/// Imported by ['D2Client.dll', 'D2Game.dll']
WORD __stdcall GetItemDexBonus(D2UnitStrc *pItem);

/// @ordinal 10809
/// @name CanHaveSockets
/// @address 6fd9d340
/// Not imported by any .dll
DWORD __stdcall CanHaveSockets(DWORD dwItemId);

/// @ordinal 10810
/// @name SecureCanHaveSockets
/// @address 6fd9d360
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall SecureCanHaveSockets(D2UnitStrc *pItem);

/// @ordinal 10811
/// @name ItemHasDurability
/// @address 6fd9d390
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall ItemHasDurability(D2UnitStrc *pItem);

/// @ordinal 10813
/// @name GetStaffModsFromUnit
/// @address 6fd9d3f0
/// Imported by ['D2Game.dll']
int __stdcall GetStaffModsFromUnit(D2UnitStrc *pItem);

/// @ordinal 10814
/// @name GetGemSocketsFromId
/// @address 6fd9d470
/// Not imported by any .dll
BYTE __stdcall GetGemSocketsFromId(DWORD dwItemId);

/// @ordinal 10815
/// @name GetMaxSockets
/// @address 6fd9d490
/// Imported by ['D2Client.dll', 'D2Game.dll']
BYTE __stdcall GetMaxSockets(D2UnitStrc *pItem);

/// @ordinal 10816
/// @name GetItemSockets
/// @address 6fd9d580
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall GetItemSockets(D2UnitStrc *pItem);

/// @ordinal 10817
/// @name AddSockets
/// @address 6fd9d5e0
/// Imported by ['D2Game.dll']
void __stdcall AddSockets(D2UnitStrc *pItem, DWORD dwSocks);

/// @ordinal 10818
/// @name SetSockets
/// @address 6fd9d7c0
/// Not imported by any .dll
void __stdcall SetSockets(D2UnitStrc *pUnit, int nValue);

/// @ordinal 10819
/// @name GetGemApplyTypeFromId
/// @address 6fd9d900
/// Not imported by any .dll
int __stdcall GetGemApplyTypeFromId(DWORD dwItemNo);

/// @ordinal 10820
/// @name GetGemApplyTypeFromUnit
/// @address 6fd9d940
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetGemApplyTypeFromUnit(D2UnitStrc *pItem);

/// @ordinal 10821
/// @name CheckIfItemIsSocketFiller
/// @address 6fd9d9d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckIfItemIsSocketFiller(D2UnitStrc *pItem);

/// @ordinal 10822
/// @name GetRunesTxtRecordFromItem
/// @address 6fd9d9e0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 10823
/// @name GetWeaponClassId
/// @address 6fd9e410
/// Imported by ['D2Client.dll']
__int16 __stdcall GetWeaponClassId(D2UnitStrc *pItem);

/// @ordinal 10824
/// @name GetTransmogrifyFromId
/// @address 6fd9e480
/// Not imported by any .dll
DWORD __stdcall GetTransmogrifyFromId(DWORD dwItemId);

/// @ordinal 10825
/// @name GetTransmogrifyFromUnit
/// @address 6fd9e4c0
/// Imported by ['D2Client.dll']
DWORD __stdcall GetTransmogrifyFromUnit(D2UnitStrc *pItem);

/// @ordinal 10826
/// @name CheckItemIfMagSetRarUniCrfOrTmp
/// @address 6fd9e550
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall CheckItemIfMagSetRarUniCrfOrTmp(D2UnitStrc *pItem);

/// @ordinal 10827
/// @name GetHitClassFromUnit
/// @address 6fd9e5f0
/// Not imported by any .dll
BYTE __stdcall GetHitClassFromUnit(D2UnitStrc *pUnit);

/// @ordinal 10828
/// @name CheckIfItemIs1Or2Handed
/// @address 6fd9e670
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall CheckIfItemIs1Or2Handed(D2UnitStrc *pPlayer, D2UnitStrc *pItem);

/// @ordinal 10829
/// @name GetItemColor
/// @address 6fd9e710
/// Imported by ['D2Client.dll']
BYTE *__stdcall GetItemColor(D2UnitStrc *pPlayer, D2UnitStrc *pItem, BYTE *pColor, int nTransType);

/// @ordinal 10830
/// @name CheckItemIfImbueable
/// @address 6fd9eea0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckItemIfImbueable(D2UnitStrc *pItem);

/// @ordinal 10831
/// @name CheckItemIfSocketable
/// @address 6fd9f260
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckItemIfSocketable(D2UnitStrc *pItem);

/// @ordinal 10832
/// @name CheckItemIfPersonalizable
/// @address 6fd9f080
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckItemIfPersonalizable(D2UnitStrc *pItem);

/// @ordinal 10833
/// @name D2Common_10833
/// @address 6fd9f720
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall D2Common_10833(D2UnitStrc *pItem1, D2UnitStrc *pItem2);

/// @ordinal 10834
/// @name D2Common_10834
/// @address 6fd9fa70
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall D2Common_10834(D2UnitStrc *pItem);

/// @ordinal 10835
/// @name D2Common_11079_Return0
/// @address 6fd9fb40
/// Imported by ['D2Game.dll']
int __stdcall D2Common_11079_Return0(int arg, int a2);

/// @ordinal 10836
/// @name GetSetItemsMask
/// @address 6fd9fb50
/// Imported by ['D2Client.dll']
DWORD __stdcall GetSetItemsMask(D2UnitStrc *pPlayer, D2UnitStrc *pSetItem, BOOL bSkipItem);

/// @ordinal 10837
/// @name GetNoOfSetItemsFromSetItem
/// @address 6fda42e0
/// Imported by ['D2Client.dll']
int __stdcall GetNoOfSetItemsFromSetItem(D2UnitStrc *pItem);

/// @ordinal 10838
/// @name GetSetItemsTxtFromUnit
/// @address 6fd9fd80
/// Imported by ['D2Client.dll']
D2SetItemsTxt *__stdcall GetSetItemsTxtFromUnit(D2UnitStrc *pUnit);

/// @ordinal 10839
/// @name ItemCanBeEquipped
/// @address 6fd9fe20
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ItemCanBeEquipped(D2UnitStrc *pItem);

/// @ordinal 10840
/// @name CheckIfItemIsUsable
/// @address 6fd9fe70
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckIfItemIsUsable(D2UnitStrc *pItem, D2UnitStrc *pPlayer);

/// @ordinal 10841
/// @name GetBonusLifeBasedOnClass
/// @address 6fd9ff90
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetBonusLifeBasedOnClass(D2UnitStrc *pPlayer, int nValue);

/// @ordinal 10842
/// @name GetBonusManaBasedOnClass
/// @address 6fd9ffe0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetBonusManaBasedOnClass(D2UnitStrc *pPlayer, int nValue);

/// @ordinal 10843
/// @name GetByTimeAdjustment
/// @address 6fd928d0
/// Imported by ['D2Client.dll']
int __stdcall GetByTimeAdjustment(int nAmount, int nPeriodOfDay, int nBaseTime, int *nItemModPeriodOfDay, int *nItemModMin, int *nItemModMax);

/// @ordinal 10844
/// @name ITEMMODS_First
/// @address 6fd92640
/// Not imported by any .dll
void __stdcall ITEMMODS_First(int nDataBits, int *pLayer, int *pValue);

/// @ordinal 10845
/// @name D2Common_10845
/// @address 6fd929b0
/// Not imported by any .dll
void __stdcall D2Common_10845(int nDataBits, int *a2, int *a3, int *a4);

/// @ordinal 10846
/// @name D2Common_10846
/// @address 6fd92670
/// Not imported by any .dll
void __stdcall D2Common_10846(int nDataBits, int *a2, int *a3, int *a4, int *a5);

/// @ordinal 10847
/// @name D2Common_10847
/// @address 6fd927d0
/// Imported by ['D2Game.dll']
BOOL __stdcall D2Common_10847(D2UnitStrc *pItem, int a2, int a3, int a4);

/// @ordinal 10848
/// @name D2Common_10848
/// @address 6fd92a00
/// Not imported by any .dll
void __stdcall D2Common_10848(int nDataBits, int *pClass, int *pTab, int *pLevel);

/// @ordinal 10849
/// @name D2Common_10849
/// @address 6fd929a0
/// Not imported by any .dll
int __stdcall D2Common_10849(int a1, int a2);

/// @ordinal 10850
/// @name D2Common_10850
/// @address 6fd929e0
/// Not imported by any .dll
int __stdcall D2Common_10850(int a1, int a2, int a3);

/// @ordinal 10851
/// @name D2Common_10851
/// @address 6fd92a60
/// Not imported by any .dll
int __stdcall D2Common_10851(int a1, int a2, int a3);

/// @ordinal 10853
/// @name GetItemCellFromItem
/// @address 6fd98960
/// Imported by ['D2Game.dll']
BYTE __stdcall GetItemCellFromItem(D2UnitStrc *pItem);

/// @ordinal 10854
/// @name SetItemCell
/// @address 6fd98980
/// Imported by ['D2Game.dll']
void __stdcall SetItemCell(D2UnitStrc *pItem, int nValue);

/// @ordinal 10855
/// @name ApplyProperties
/// @address 6fd95430
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ApplyProperties(int nType, D2UnitStrc *a2, D2UnitStrc *pItem, void *pMods, int nPropSet, int nApplyType);

/// @ordinal 10856
/// @name D2Common_11240_SKILLS_Return
/// @address 6fdb40f0
/// Not imported by any .dll
void __stdcall D2Common_11240_SKILLS_Return(int arg, int a2, int a3);

/// @ordinal 10859
/// @name D2Common_10859
/// @address 6fd95be0
/// Imported by ['D2Game.dll']
BOOL __stdcall D2Common_10859(D2UnitStrc *pItem, D2MagicAffixTxt *pMagicAffixTxtRecord);

/// @ordinal 10860
/// @name D2Common_10860
/// @address 6fd95cc0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pItem, int pRareAffixTxtRecord)

/// @ordinal 10861
/// @name D2Common_10861
/// @address 6fd95d60
/// Imported by ['D2Game.dll']
BOOL __stdcall D2Common_10861(D2UnitStrc *pItem, D2QualityItemsTxt *pQualityItemsTxtRecord);

/// @ordinal 10862
/// @name ITEMS_ElixiInitStats
/// @address 6fd95e90
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_ElixiInitStats(D2UnitStrc *pItem);

/// @ordinal 10865
/// @name ApplyEthereality
/// @address 6fd958d0
/// Imported by ['D2Game.dll']
void __stdcall ApplyEthereality(D2UnitStrc *pUnit);

/// @ordinal 10866
/// @name ITEMS_Last
/// @address 6fda4640
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall ITEMS_Last(D2UnitStrc *pPlayer, D2UnitStrc *pItem, int a3, int a4);

/// @ordinal 10867
/// @name ITEMS_UpdateRuneword
/// @address 6fd959f0
/// Imported by ['D2Game.dll']
BOOL __stdcall ITEMS_UpdateRuneword(D2UnitStrc *pUnit, D2UnitStrc *pItem, int nUnused);

/// @ordinal 10868
/// @name D2Common_10868
/// @address 6fd95f90
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10868(D2UnitStrc *pItem, D2PropertyStrc *pProperty, BOOL bExpansion);

/// @ordinal 10875
/// @name GetItemFormat
/// @address 6fda0030
/// Imported by ['D2Game.dll']
WORD __stdcall GetItemFormat(D2UnitStrc *pItem);

/// @ordinal 10876
/// @name SetItemFormat
/// @address 6fda00b0
/// Imported by ['D2Game.dll']
void __stdcall SetItemFormat(D2UnitStrc *pItem, WORD nItemFormat);

/// @ordinal 10877
/// @name GetAllRepairCosts
/// @address 6fd9f490
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pGame, int pPlayer, int nNpcId, int nDifficulty, int pQuestFlags, int pfCallback)

/// @ordinal 10878
/// @name GetWeaponAttackSpeed
/// @address 6fda0130
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetWeaponAttackSpeed(D2UnitStrc *pUnit, D2UnitStrc *pWeapon_nLength);

/// @ordinal 10879
/// @name HasUsedCharges
/// @address 6fda02b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall HasUsedCharges(D2UnitStrc *pItem, BOOL *pHasChargedSkills);

/// @ordinal 10880
/// @name CheckIfItemIsEthereal
/// @address 6fda0340
/// Imported by ['D2Game.dll']
int __stdcall CheckIfItemIsEthereal(D2UnitStrc *pItem);

/// @ordinal 10881
/// @name SerializeItem
/// @address 6fda2ba0
/// Imported by ['D2Game.dll']
int __stdcall SerializeItem(D2UnitStrc *pUnit, BYTE *pBitstream, int nSize, BOOL bServer, BOOL bSaveItemInv, BOOL bGamble);

/// @ordinal 10882
/// @name D2Common_10882
/// @address 6fda0490
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_10882(D2UnitStrc *pItem, BYTE *pBitstream, int nBufferSize, BOOL bCheckForHeader, int *pSocketedItems, unsigned int dwVersion, int *pFail);

/// @ordinal 10883
/// @name D2Common_10883
/// @address 6fda0370
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_10883(BYTE *pBitstream, int nBitstreamSize, BOOL bCheckForHeader, D2ItemSaveStrc *pItemSave);

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
/// @name COMPOSIT_unk
/// @address 6fd46c60
/// Not imported by any .dll
int __stdcall COMPOSIT_unk(int weaponClassCode);

/// @ordinal 10887
/// @name COMPOSIT_GetWeapon
/// @address 6fd46c90
/// Not imported by any .dll
int __stdcall COMPOSIT_GetWeapon(D2UnitStrc *pUnit, D2C_UnitTypes nUnitType, int nClass, int nMode, D2InventoryStrc *pInventory, int *pWeaponClassId);

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
/// @name COMPOSIT_WeaponRequiresAmmoItem
/// @address 6fd47230
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall COMPOSIT_WeaponRequiresAmmoItem(D2UnitStrc *pUnit);

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
/// @name CHAT_GetDisplayTime
/// @address 6fdc3ca0
/// Not imported by any .dll
DWORD __stdcall CHAT_GetDisplayTime(D2HoverTextStrc *pHoverMsg);

/// @ordinal 10895
/// @name CHAT_GetTimeout
/// @address 6fdc3cb0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall CHAT_GetTimeout(D2HoverTextStrc *pHoverMsg);

/// @ordinal 10896
/// @name CHAT_CopyHoverMsgToBuffer
/// @address 6fdc3cc0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall CHAT_CopyHoverMsgToBuffer(D2HoverTextStrc *pHoverMsg, char *szMessage);

/// @ordinal 10897
/// @name D2Common_10165_PathGetTargetY
/// @address 6fdc3ce0
/// Imported by ['D2Client.dll']
DWORD __stdcall D2Common_10165_PathGetTargetY(D2DynamicPathStrc *pPath);

/// @ordinal 10898
/// @name CHAT_SetUsed
/// @address 6fdc3cf0
/// Imported by ['D2Client.dll']
void __stdcall CHAT_SetUsed(D2HoverTextStrc *pHoverMsg, BOOL bUsed);

/// @ordinal 10899
/// @name CHAT_GetLangId
/// @address 6fdc3d00
/// Imported by ['D2Client.dll', 'D2Game.dll']
char __stdcall CHAT_GetLangId(D2HoverTextStrc *pHoverMsg);

/// @ordinal 10900
/// @name CHAT_SetLangId
/// @address 6fdc3d10
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall CHAT_SetLangId(D2HoverTextStrc *pHoverMsg, char nLangId);

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
/// @name MONSTERS_Return
/// @address 6fda5260
/// Not imported by any .dll
void __stdcall MONSTERS_Return();

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
/// @name ENVIRONMENT_UpdateTimeIndex
/// @address 6fd8dd60
/// Imported by ['D2Game.dll']
BOOL __stdcall ENVIRONMENT_UpdateTimeIndex(D2DrlgActStrc *pAct, int nActNo);

/// @ordinal 10925
/// @name ENVIRONMENT_GetCos_Sin_LastFromAct
/// @address 6fd8e0b0
/// Not imported by any .dll
void __stdcall ENVIRONMENT_GetCos_Sin_LastFromAct(D2DrlgActStrc *pAct, float *pCos, float *pLast, float *pSin, int *a5);

/// @ordinal 10926
/// @name ENVIRONMENT_GetIntensityFromAct
/// @address 6fd8de00
/// Imported by ['D2Client.dll']
int __stdcall ENVIRONMENT_GetIntensityFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10927
/// @name ENVIRONMENT_GetRGBFromAct
/// @address 6fd8ddd0
/// Imported by ['D2Client.dll']
void __stdcall ENVIRONMENT_GetRGBFromAct(D2DrlgActStrc *pAct, BYTE *pRed, BYTE *pGreen, BYTE *pBlue);

/// @ordinal 10928
/// @name ENVIRONMENT_GetUnkDW0x14
/// @address 6fd8de70
/// Not imported by any .dll
D2DrlgEnvironmentStrc *__stdcall ENVIRONMENT_GetUnkDW0x14(D2DrlgActStrc *pAct);

/// @ordinal 10929
/// @name ENVIRONMENT_NextEnvCycle
/// @address 6fd8de90
/// Not imported by any .dll
char __stdcall ENVIRONMENT_NextEnvCycle(D2DrlgActStrc *pAct, D2RoomStrc *pRoom);

/// @ordinal 10930
/// @name ENVIRONMENT_GetTimeIndexFromAct
/// @address 6fd8df30
/// Imported by ['D2Client.dll']
int __stdcall ENVIRONMENT_GetTimeIndexFromAct(D2DrlgActStrc *pAct);

/// @ordinal 10931
/// @name ENVIRONMENT_GetTimeIndex_Ticks_EclipseFromAct
/// @address 6fd8e080
/// Imported by ['D2Game.dll']
void __stdcall ENVIRONMENT_GetTimeIndex_Ticks_EclipseFromAct(D2DrlgActStrc *pAct, int *pTimeIndex, int *pTicks, int *pEclipse);

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
/// @name ENVIRONMENT_GetimeRateFromAct
/// @address 6fd8e0f0
/// Not imported by any .dll
DWORD __stdcall ENVIRONMENT_GetimeRateFromAct(D2DrlgActStrc *pAct);

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
/// @name RefreshSkill
/// @address 6fdaf8c0
/// Imported by ['D2Game.dll']
void __stdcall RefreshSkill(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 10941
/// @name UpdateSkills
/// @address 6fdafb40
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall UpdateSkills(D2UnitStrc *pUnit);

/// @ordinal 10942
/// @name SKILLS_GetSkillMode
/// @address 6fdafc80
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetSkillMode(D2UnitStrc *pUnit, D2SkillStrc *pSkill);

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
/// @name D2Common_10954
/// @address 6fdb05e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10954(D2UnitStrc *pUnit, int nFlags, int nSkillId, int nSkillLevel, int a5, int a6);

/// @ordinal 10955
/// @name SKILLS_GetSkillInfo
/// @address 6fdb08f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall SKILLS_GetSkillInfo(D2SkillStrc *pSkill, int *pFlags, int *pSkillId, int *pSkillLevel, int *a5);

/// @ordinal 10956
/// @name D2Common_10956
/// @address 6fdb0960
/// Not imported by any .dll
BOOL __stdcall D2Common_10956(D2SkillStrc *pSkill, int a2);

/// @ordinal 10957
/// @name SKILLS_GetFlagsFromSkill
/// @address 6fdb08c0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetFlagsFromSkill(D2SkillStrc *pSkill);

/// @ordinal 10958
/// @name D2Common_10958
/// @address 6fdb0270
/// Imported by ['D2Client.dll']
void __stdcall D2Common_10958(D2UnitStrc *pUnit, int a2);

/// @ordinal 10959
/// @name D2Common_10959
/// @address 6fdb02a0
/// Not imported by any .dll
int __stdcall D2Common_10959(D2UnitStrc *pUnit);

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
/// @name D2Common_10969
/// @address 6fdb18f0
/// Not imported by any .dll
int __stdcall D2Common_10969(D2SkillStrc *pSkill);

/// @ordinal 10970
/// @name D2Common_10970
/// @address 6fdb1920
/// Not imported by any .dll
void __stdcall D2Common_10970(D2SkillStrc *pSkill, int a2);

/// @ordinal 10971
/// @name D2Common_10971
/// @address 6fdb1950
/// Not imported by any .dll
int __stdcall D2Common_10971(D2SkillStrc *pSkill);

/// @ordinal 10972
/// @name D2Common_10972
/// @address 6fdb1980
/// Not imported by any .dll
void __stdcall D2Common_10972(D2SkillStrc *pSkill, int a2);

/// @ordinal 10973
/// @name D2Common_10973
/// @address 6fdb19b0
/// Not imported by any .dll
void __stdcall D2Common_10973(D2SkillStrc *pSkill);

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
/// @name D2Common_10976
/// @address 6fdb19f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10976(D2SkillStrc *pSkill);

/// @ordinal 10977
/// @name D2Common_10977
/// @address 6fdb1a20
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10977(D2SkillStrc *pSkill);

/// @ordinal 10978
/// @name D2Common_10978
/// @address 6fdb1a50
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10978(D2SkillStrc *pSkill);

/// @ordinal 10979
/// @name D2Common_10979
/// @address 6fdb1a80
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10979(D2SkillStrc *pSkill);

/// @ordinal 10980
/// @name D2Common_10980
/// @address 6fdb1ab0
/// Imported by ['D2Client.dll', 'D2Game.dll', 'D2Server.dll']
void __stdcall D2Common_10980(D2SkillStrc *pSkill, int a2);

/// @ordinal 10981
/// @name D2Common_10981
/// @address 6fdb1ae0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10981(D2SkillStrc *pSkill, int a2);

/// @ordinal 10982
/// @name D2Common_10982
/// @address 6fdb1b10
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_10982(D2SkillStrc *pSkill, int a2);

/// @ordinal 10983
/// @name D2Common_10983
/// @address 6fdb1b40
/// Imported by ['D2Client.dll', 'D2Game.dll', 'D2Server.dll']
void __stdcall D2Common_10983(D2SkillStrc *pSkill, int a2);

/// @ordinal 10984
/// @name SetEventFlagOnUnit
/// @address 6fdb1b70
/// Imported by ['D2Client.dll', 'D2Game.dll', 'D2Server.dll']
void __stdcall SetEventFlagOnUnit(D2SkillStrc *pSkill, int a2);

/// @ordinal 10985
/// @name GetEventFlagOnUnit
/// @address 6fdb1ba0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetEventFlagOnUnit(D2SkillStrc *pSkill);

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
/// @name D2Common_10999
/// @address 6fdb2110
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_10999(D2UnitStrc *pUnit, int nSkillId, int nSkillLevel);

/// @ordinal 11000
/// @name D2Common_11000
/// @address 6fdb21e0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_11000(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 11001
/// @name SKILLS_GetManaCosts
/// @address 6fdb2280
/// Imported by ['D2Game.dll']
int __stdcall SKILLS_GetManaCosts(int nSkillId, int nSkillLevel);

/// @ordinal 11002
/// @name GetMinPhysSkillDamage
/// @address 6fdb2390
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetMinPhysSkillDamage(D2UnitStrc *pUnit, int nSkillId, int nLevel, int a4);

/// @ordinal 11003
/// @name GetMaxPhysSkillDamage
/// @address 6fdb25d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetMaxPhysSkillDamage(D2UnitStrc *pUnit, int nSkillId, int nLevel, int a4);

/// @ordinal 11004
/// @name GetMinElemSkillDamage
/// @address 6fdb2810
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetMinElemSkillDamage(D2UnitStrc *pUnit, int nSkillId, int nLevel, int a4);

/// @ordinal 11005
/// @name GetMaxElemSkillDamage
/// @address 6fdb2b00
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetMaxElemSkillDamage(D2UnitStrc *pUnit, int nSkillId, int nLevel, int a4);

/// @ordinal 11006
/// @name D2Common_11006
/// @address 6fdb2ca0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_11006(D2UnitStrc *pUnit, int nSkillId, int nSkillLevel, int a4);

/// @ordinal 11008
/// @name SKILLS_GetClassIdFromSkillId
/// @address 6fdb2e80
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetClassIdFromSkillId(int nSkillId);

/// @ordinal 11009
/// @name D2Common_11239_Return0
/// @address 6fdb2e70
/// Not imported by any .dll
int __stdcall D2Common_11239_Return0(int arg);

/// @ordinal 11010
/// @name SKILLS_GetPlayerClassFromSkillId
/// @address 6fdb2ec0
/// Imported by ['D2Client.dll']
BOOL __stdcall SKILLS_GetPlayerClassFromSkillId(int nSkillId, int *pPlayerClass);

/// @ordinal 11011
/// @name D2Common_11011
/// @address 6fdb2f40
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_11011(D2SkillStrc *pSkill);

/// @ordinal 11012
/// @name D2Common_11012
/// @address 6fdb2f70
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_11012(D2SkillStrc *pSkill, int a2);

/// @ordinal 11013
/// @name ConvertMode
/// @address 6fdb30a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall ConvertMode(D2UnitStrc *pUnit, int *pOutType, int *pOutClass, int *pOutMode, char *szFile, int nLine);

/// @ordinal 11014
/// @name D2Common_11014
/// @address 6fdb2fa0
/// Not imported by any .dll
int __stdcall D2Common_11014(int nOriginalMode, int nMonsterId);

/// @ordinal 11015
/// @name D2Common_11015
/// @address 6fdb3290
/// Not imported by any .dll
/// @guessedtype int __stdcall(int pUnit, int, int nSkillId)

/// @ordinal 11016
/// @name D2Common_11016
/// @address 6fdb3340
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11016(D2UnitStrc *a1, D2SkillStrc *a2);

/// @ordinal 11017
/// @name CheckUnitIfConsumeable
/// @address 6fdb33a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall CheckUnitIfConsumeable(D2UnitStrc *pUnit, int a2);

/// @ordinal 11018
/// @name D2Common_11020
/// @address 6fdb3480
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 11019
/// @name D2Common_11022
/// @address 6fdb3520
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11022(D2UnitStrc *pUnit);

/// @ordinal 11020
/// @name D2Common_11020
/// @address 6fdb3480
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 11021
/// @name D2Common_11022
/// @address 6fdb3520
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11022(D2UnitStrc *pUnit);

/// @ordinal 11022
/// @name D2Common_11022
/// @address 6fdb3520
/// Imported by ['D2Game.dll']
BOOL __stdcall D2Common_11022(D2UnitStrc *pUnit);

/// @ordinal 11023
/// @name D2Common_11023
/// @address 6fdb36d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_11023(D2UnitStrc *pUnit, D2UnitStrc *pItem, D2SkillStrc *pSkill, int nType);

/// @ordinal 11024
/// @name D2Common_11024
/// @address 6fdb35b0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_11024(D2UnitStrc *pUnit, D2UnitStrc *pItem, D2SkillStrc *pSkill, int a4, int *a5);

/// @ordinal 11025
/// @name D2Common_11025
/// @address 6fdb3910
/// Imported by ['D2Client.dll', 'D2Game.dll']
bool __stdcall D2Common_11025(int a1, int a2, int a3, int a4, D2RoomStrc *pRoom, int a6);

/// @ordinal 11026
/// @name D2Common_11026
/// @address 6fdb3960
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int, int, int pUnit, int nCollisionType)

/// @ordinal 11027
/// @name D2Common_11027
/// @address 6fdb3a10
/// Imported by ['D2Game.dll']
int __stdcall D2Common_11027(int nSkillId, int nLevel);

/// @ordinal 11028
/// @name D2Common_11028
/// @address 6fdb3a90
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 11029
/// @name SKILLS_GetBonusSkillLevelFromSkillId
/// @address 6fdb1750
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall SKILLS_GetBonusSkillLevelFromSkillId(D2UnitStrc *pUnit, int nSkillId);

/// @ordinal 11030
/// @name D2Common_11030
/// @address 6fdb17a0
/// Imported by ['D2Client.dll']
void __stdcall D2Common_11030(D2UnitStrc *pUnit, int nSkillId, int a3);

/// @ordinal 11031
/// @name D2Common_11031
/// @address 6fdb1820
/// Imported by ['D2Client.dll']
void __stdcall D2Common_11031(D2UnitStrc *pUnit, int nSkillId, int a3);

/// @ordinal 11032
/// @name D2Common_11032
/// @address 6fdb37b0
/// Not imported by any .dll
int __stdcall D2Common_11032(int a1, int nSkillId, int a3, int a4);

/// @ordinal 11033
/// @name D2Common_11033
/// @address 6fdb3ab0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 11034
/// @name D2Common_11034
/// @address 6fdb3b00
/// Imported by ['D2Game.dll']
int __stdcall D2Common_11034(int nLevel, int nSkillId);

/// @ordinal 11035
/// @name D2Common_11035
/// @address 6fdb3b90
/// Not imported by any .dll
int __stdcall D2Common_11035(int nLevel, int nSkillId);

/// @ordinal 11036
/// @name GetMonCurseResistanceSubtraction
/// @address 6fdb3c20
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall GetMonCurseResistanceSubtraction(int nLevel, int nSkillId);

/// @ordinal 11037
/// @name D2Common_11037
/// @address 6fdb3cb0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11037(D2UnitStrc *pUnit, D2UnitStrc *pRoom, int *pX, int *pY);

/// @ordinal 11039
/// @name CheckWeaponIsMissileBased
/// @address 6fdb3f60
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall CheckWeaponIsMissileBased(D2UnitStrc *pUnit, int *a2);

/// @ordinal 11040
/// @name D2Common_11040
/// @address 6fdb4020
/// Imported by ['D2Client.dll']
BOOL __stdcall D2Common_11040(int nSkillId);

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
/// @name D2Common_11043
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
/// @name D2Common_11050
/// @address 6fda54e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall D2Common_11050(D2UnitStrc *pFrameCount, signed int nFrame);

/// @ordinal 11051
/// @name D2Common_11051
/// @address 6fda6410
/// Imported by ['D2Client.dll']
BYTE __stdcall D2Common_11051(D2UnitStrc *pUnit);

/// @ordinal 11052
/// @name D2Common_11052
/// @address 6fda55e0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 11053
/// @name D2Common_11053
/// @address 6fda5600
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 11054
/// @name D2Common_11054
/// @address 6fda5620
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 11055
/// @name D2Common_11055
/// @address 6fda5640
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_11055(unsigned __int8 a1, int *a2, int *a3);

/// @ordinal 11057
/// @name D2Common_11057
/// @address 6fda5750
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11057(D2UnitStrc *pUnit, int a2);

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
/// @name D2Common_11060
/// @address 6fda58a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall D2Common_11060(D2MonStatsTxt *pMonStatsTxt, D2UnitStrc *pUnit);

/// @ordinal 11061
/// @name GetMinionSpawnInfo
/// @address 6fda5b30
/// Imported by ['D2Game.dll']
void __stdcall GetMinionSpawnInfo(D2UnitStrc *pMonster, int *pId, int *pX, int *pY, int *a5, int a6, int (__fastcall *pfCallback)(D2UnitStrc *));

/// @ordinal 11062
/// @name D2Common_11077_Return
/// @address 6fda6400
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_11077_Return(int arg, int a2);

/// @ordinal 11063
/// @name D2Common_11063
/// @address 6fda64b0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_11063(D2RoomStrc *pRoom, int nMonsterId);

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
/// @name MONSTERS_GetMissileDirectionFromTurretMonster
/// @address 6fda6680
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MONSTERS_GetMissileDirectionFromTurretMonster(D2UnitStrc *pMonster, int *pDirectionX, int *pDirectionY);

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
/// @name D2Common_11069
/// @address 6fda52f0
/// Imported by ['D2Client.dll']
DWORD __stdcall D2Common_11069(D2UnitStrc *pMonster, unsigned int nComponent, unsigned int a3);

/// @ordinal 11070
/// @name MONSTERS_GetArmorToken
/// @address 6fda5450
/// Imported by ['D2Client.dll']
DWORD __stdcall MONSTERS_GetArmorToken(int nMonsterId, unsigned int nMode, unsigned int nCompInfo);

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
/// @name D2Common_11296_MONSTERS_Return
/// @address 6fda5250
/// Not imported by any .dll
void __stdcall D2Common_11296_MONSTERS_Return(D2UnitStrc *pUnit);

/// @ordinal 11081
/// @name D2Common_11081
/// @address 6fda4e20
/// Not imported by any .dll
signed int __fastcall D2Common_11081(int nLowSeed, D2HirelingInitStrc *pHirelingInit, unsigned __int8 a3);

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
/// @name D2Common_11089
/// @address 6fd52010
/// Not imported by any .dll
BOOL __stdcall D2Common_11089(char *pExpField, int nSize);

/// @ordinal 11090
/// @name D2Common_11090
/// @address 6fd520f0
/// Not imported by any .dll
BOOL __stdcall D2Common_11090();

/// @ordinal 11091
/// @name D2Common_11091
/// @address 6fd52140
/// Not imported by any .dll
void __stdcall D2Common_11091(int *a1, int *a2);

/// @ordinal 11092
/// @name D2Common_11092
/// @address 6fd52160
/// Not imported by any .dll
int __stdcall D2Common_11092();

/// @ordinal 11093
/// @name D2Common_11093
/// @address 6fd52170
/// Not imported by any .dll
int __stdcall D2Common_11093();

/// @ordinal 11094
/// @name AllocField
/// @address 6fd52180
/// Not imported by any .dll
D2FieldStrc *__stdcall AllocField();

/// @ordinal 11095
/// @name FreeField
/// @address 6fd521d0
/// Not imported by any .dll
void __stdcall FreeField(D2FieldStrc *pField);

/// @ordinal 11096
/// @name FieldSetCoordinates
/// @address 6fd52210
/// Not imported by any .dll
void __stdcall FieldSetCoordinates(D2FieldStrc *pField, int nX, int nY);

/// @ordinal 11097
/// @name D2Common_11097
/// @address 6fd52250
/// Not imported by any .dll
int __stdcall D2Common_11097(D2FieldStrc *pField, int a2, int a3);

/// @ordinal 11098
/// @name D2Common_11098
/// @address 6fd522a0
/// Not imported by any .dll
int __stdcall D2Common_11098(D2FieldStrc *pField, int *pX, int *pY);

/// @ordinal 11099
/// @name D2Common_11099
/// @address 6fd52360
/// Not imported by any .dll
BOOL __stdcall D2Common_11099(D2FieldStrc *pField, D2RoomStrc *pRoom, int nX, int nY, WORD fMask);

/// @ordinal 11100
/// @name LOG_unk
/// @address 6fda47a0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void LOG_unk(int a1, int a2, int a3, int a4, char *szFile, int nLine, const char *Format, ...);

/// @ordinal 11101
/// @name LOG_unk
/// @address 6fda48e0
/// Not imported by any .dll
void LOG_unk(int nGame, int nFrame, int nClient, int a4, int nSize, const char *Format, ...);

/// @ordinal 11102
/// @name LOG_unk
/// @address 6fda46c0
/// Imported by ['D2Client.dll']
/// @guessedtype int()

/// @ordinal 11103
/// @name LOG_unk
/// @address 6fda4790
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 11104
/// @name LOG_unk
/// @address 6fda4aa0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 11105
/// @name LOG_unk
/// @address 6fda4b00
/// Imported by ['D2Client.dll']
/// Failed to extract type

/// @ordinal 11106
/// @name LOG_unk
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
/// @name QUESTRECORD_ResetIntermediateStates
/// @address 6fdae8d0
/// Imported by ['D2Game.dll']
void __stdcall QUESTRECORD_ResetIntermediateStates(D2BitBufferStrc *pQuestRecord, int nQuest);

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
/// @name MISSILE_GetId
/// @address 6fdba190
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall MISSILE_GetId(D2UnitStrc *pMissile);

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
/// @name MISSILE_SetStatus
/// @address 6fdba490
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall MISSILE_SetStatus(D2UnitStrc *pMissile, int nStatus);

/// @ordinal 11141
/// @name MISSILE_GetStatus
/// @address 6fdba4b0
/// Imported by ['D2Client.dll', 'D2Game.dll']
DWORD __stdcall MISSILE_GetStatus(D2UnitStrc *pMissile);

/// @ordinal 11142
/// @name D2Common_11142
/// @address 6fdba4d0
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_11142(D2UnitStrc *pMissile, D2PathPointStrc *pPathPoint);

/// @ordinal 11143
/// @name D2Common_11143
/// @address 6fdba4f0
/// Imported by ['D2Client.dll', 'D2Game.dll']
D2PathPointStrc *__stdcall D2Common_11143(D2UnitStrc *pMissile);

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
/// @name WAYPOINT_CheckIfWaypointIsActivated
/// @address 6fdc3de0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pHistory, int wField)

/// @ordinal 11147
/// @name WAYPOINT_ActivateWaypoint
/// @address 6fdc3e80
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pHistory, int wField)

/// @ordinal 11148
/// @name WAYPOINT_AllocWaypointData
/// @address 6fdc3f20
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int pMemPool)

/// @ordinal 11149
/// @name WAYPOINT_FreeWaypointData
/// @address 6fdc3f70
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int pMemPool, int pFree)

/// @ordinal 11150
/// @name WAYPOINT_CopyAndCheckWaypointData
/// @address 6fdc3fd0
/// Imported by ['D2Client.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int pDestination, int pSource)

/// @ordinal 11151
/// @name WAYPOINT_CheckAndCopyWaypointData
/// @address 6fdc4060
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pSource, int pDestination)

/// @ordinal 11152
/// @name WAYPOINT_GetWaypointNoFromLevelId
/// @address 6fdc3d90
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall WAYPOINT_GetWaypointNoFromLevelId(int nLevelId, WORD *nWpNo);

/// @ordinal 11153
/// @name WAYPOINT_GetLevelIdFromWpNo
/// @address 6fdc3d20
/// Imported by ['D2Client.dll']
BOOL __stdcall WAYPOINT_GetLevelIdFromWpNo(WORD nWaypointId, int *nLevelId);

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
/// @name D2Common_11215
/// @address 6fdbc2e0
/// Not imported by any .dll
D2RoomStrc *__stdcall D2Common_11215(D2UnitStrc *pUnit, int a2, int a3, FARPROC pfnHit);

/// @ordinal 11216
/// @name MISSTREAM_Last
/// @address 6fdbc3c0
/// Not imported by any .dll
int __stdcall MISSTREAM_Last(int a1, D2UnitStrc *pMissile, signed int a3, signed int a4, FARPROC lpfn, void (__thiscall *a6)(_DWORD));

/// @ordinal 11217
/// @name D2Common_11217
/// @address 6fdba5b0
/// Imported by ['D2Game.dll']
void __stdcall D2Common_11217(D2MissileDamageDataStrc *pMissileDamageData, D2UnitStrc *pOwner, D2UnitStrc *pOrigin, D2UnitStrc *pMissile, int nLevel);

/// @ordinal 11218
/// @name D2Common_11218
/// @address 6fdbb2e0
/// Imported by ['D2Game.dll']
void __stdcall D2Common_11218(D2UnitStrc *pOwner, D2UnitStrc *pMissile, D2MissileDamageDataStrc *pMissileDamageData, int nLevel);

/// @ordinal 11221
/// @name GetMissileElementalLength
/// @address 6fdbbba0
/// Imported by ['D2Client.dll']
int __stdcall GetMissileElementalLength(int nUnused, D2UnitStrc *pMissile, int nMissileId, int nLevel);

/// @ordinal 11222
/// @name D2Common_11222
/// @address 6fd859a0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 11223
/// @name D2Common_11223
/// @address 6fd859e0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 11226
/// @name CheckActInLevelTypesTxt
/// @address 6fd614a0
/// Imported by ['D2Client.dll']
bool __stdcall CheckActInLevelTypesTxt(int nLevelType, BYTE nAct);

/// @ordinal 11227
/// @name D2Common_11227
/// @address 6fd61500
/// Imported by ['D2Client.dll']
void __stdcall D2Common_11227(int nLevelType, int nFileId, char *szFile);

/// @ordinal 11229
/// @name D2Common_11296_MONSTERS_Return
/// @address 6fda5250
/// Not imported by any .dll
void __stdcall D2Common_11296_MONSTERS_Return(D2UnitStrc *pUnit);

/// @ordinal 11230
/// @name D2Common_11230
/// @address 6fdb4070
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 11232
/// @name GetCubemainTxtRecord
/// @address 6fd54260
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int nIndex)

/// @ordinal 11233
/// @name GetCubemainTxtRecordCount
/// @address 6fd542c0
/// Imported by ['D2Game.dll']
int __fastcall GetCubemainTxtRecordCount();

/// @ordinal 11234
/// @name D2Common_11234
/// @address 6fdb4a10
/// Imported by ['D2Game.dll']
BOOL __stdcall D2Common_11234(D2UnitStrc *pUnit);

/// @ordinal 11235
/// @name D2Common_11239_Return0
/// @address 6fdb2e70
/// Not imported by any .dll
int __stdcall D2Common_11239_Return0(int arg);

/// @ordinal 11236
/// @name D2Common_11240_SKILLS_Return
/// @address 6fdb40f0
/// Not imported by any .dll
void __stdcall D2Common_11240_SKILLS_Return(int arg, int a2, int a3);

/// @ordinal 11237
/// @name D2Common_11240_SKILLS_Return
/// @address 6fdb40f0
/// Not imported by any .dll
void __stdcall D2Common_11240_SKILLS_Return(int arg, int a2, int a3);

/// @ordinal 11238
/// @name D2Common_11238
/// @address 6fdc2860
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int pUnit)

/// @ordinal 11239
/// @name Return0
/// @address 6fdb2e70
/// Not imported by any .dll
int __stdcall Return0(int arg);

/// @ordinal 11240
/// @name SKILLS_Return
/// @address 6fdb40f0
/// Not imported by any .dll
void __stdcall SKILLS_Return(int arg, int a2, int a3);

/// @ordinal 11241
/// @name D2Common_11296_MONSTERS_Return
/// @address 6fda5250
/// Not imported by any .dll
void __stdcall D2Common_11296_MONSTERS_Return(D2UnitStrc *pUnit);

/// @ordinal 11242
/// @name ToggleDebugMode
/// @address 6fd500f0
/// Imported by ['D2Client.dll']
void __stdcall ToggleDebugMode(BOOL bSilent);

/// @ordinal 11243
/// @name GetStatListData
/// @address 6fdb8c00
/// Imported by ['D2Game.dll']
int __stdcall GetStatListData(D2StatListExStrc *pStatList, D2StatStrc *pStatBuffer, int nBufferSize);

/// @ordinal 11244
/// @name GetItemRealmData
/// @address 6fd9dfe0
/// Not imported by any .dll
void __stdcall GetItemRealmData(D2UnitStrc *pItem, int *pRealmData0, int *pRealmData1);

/// @ordinal 11245
/// @name SetItemRealmData
/// @address 6fd9e070
/// Not imported by any .dll
void __stdcall SetItemRealmData(D2UnitStrc *pItem, int a2, int a3);

/// @ordinal 11246
/// @name D2Common_11246
/// @address 6fda6790
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall D2Common_11246(D2UnitStrc *pMonster, int a2, BYTE a3);

/// @ordinal 11247
/// @name GetMonsterLevelInArea
/// @address 6fd604f0
/// Imported by ['D2Game.dll']
int __stdcall GetMonsterLevelInArea(int nLevelId, BYTE nDifficulty, BOOL bExpansion);

/// @ordinal 11248
/// @name D2Common_11248
/// @address 6fdb9b10
/// Imported by ['D2Client.dll']
int __stdcall D2Common_11248(D2UnitStrc *pUnused, D2UnitStrc *pUnit, int nStatId);

/// @ordinal 11249
/// @name GetExpRatio
/// @address 6fd49680
/// Imported by ['D2Game.dll']
DWORD __stdcall GetExpRatio(int nClass);

/// @ordinal 11250
/// @name GetMonSoundsTxtRecord
/// @address 6fd6bf80
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int nMonsterId)

/// @ordinal 11252
/// @name GetMonSoundsTxtRecord
/// @address 6fd6bf50
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int nSoundId)

/// @ordinal 11255
/// @name GetCodeFromCompCodeTxt
/// @address 6fd49660
/// Not imported by any .dll
DWORD __stdcall GetCodeFromCompCodeTxt(int nCompCode);

/// @ordinal 11256
/// @name GetMonPresetTxtActSection
/// @address 6fd6ef30
/// Not imported by any .dll
/// @guessedtype int __stdcall(int nAct, int)

/// @ordinal 11257
/// @name GetSuperUniquesTxtRecordCount
/// @address 6fd6a470
/// Imported by ['D2Game.dll']
int __fastcall GetSuperUniquesTxtRecordCount();

/// @ordinal 11258
/// @name MapSuperUniqueId
/// @address 6fd6ef70
/// Imported by ['D2Game.dll']
int __stdcall MapSuperUniqueId(int nMonsterType, int nMonsterId);

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
/// @name D2Common_11261
/// @address 6fd67bd0
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11261(int nMonsterId, int nGameType, int nDifficulty, int nLevel, __int16 nFlags, D2UnkMonInitStrc *a6);

/// @ordinal 11262
/// @name GetMonSeqTableRecord
/// @address 6fd6f200
/// Not imported by any .dll
D2SeqRecordStrc *__stdcall GetMonSeqTableRecord(int nSequence);

/// @ordinal 11263
/// @name D2Common_11263
/// @address 6fd45210
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11263(D2RoomStrc *pRoom, D2CoordStrc *pBeginCoord, D2CoordStrc *pEndCoord, uint16_t nCollisionType);

/// @ordinal 11264
/// @name D2Common_10167_PATH_SetRoom
/// @address 6fda9e60
/// Imported by ['D2Game.dll']
void __stdcall D2Common_10167_PATH_SetRoom(D2DynamicPathStrc *pDynamicPath, D2RoomStrc *pRoom);

/// @ordinal 11265
/// @name D2Common_10166_PathGetRoom
/// @address 6fdb9c10
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall D2Common_10166_PathGetRoom(D2DynamicPathStrc *pPath);

/// @ordinal 11266
/// @name STATLIST_SetSkillLevel
/// @address 6fdb9c20
/// Imported by ['D2Game.dll']
void __stdcall STATLIST_SetSkillLevel(D2StatListExStrc *pStatList, int nSkillLevel);

/// @ordinal 11267
/// @name D2Common_10168_PATH_GetNextRoom
/// @address 6fda9e70
/// Imported by ['D2Game.dll']
D2RoomStrc *__stdcall D2Common_10168_PATH_GetNextRoom(D2DynamicPathStrc *pDynamicPath);

/// @ordinal 11268
/// @name D2Common_11268
/// @address 6fdb8ba0
/// Not imported by any .dll
int __stdcall D2Common_11268(D2UnitStrc *pUnit, D2StatStrc *pStat, int nStats);

/// @ordinal 11269
/// @name CopyStats
/// @address 6fdb9c30
/// Imported by ['D2Client.dll']
int __stdcall CopyStats(D2StatListExStrc *pStatlist, WORD wStat, D2StatStrc *pBuffer, size_t nBufferSize);

/// @ordinal 11270
/// @name D2Common_11270
/// @address 6fdb9d20
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall D2Common_11270(D2UnitStrc *a1, WORD wStat, D2StatStrc *pBuffer, size_t nBufferSize);

/// @ordinal 11271
/// @name D2Common_11271
/// @address 6fdaeb60
/// Not imported by any .dll
int __stdcall D2Common_11271(D2UnitStrc *pUnit, unsigned __int8 a2, int nSkillId, int nSkillLevel);

/// @ordinal 11272
/// @name D2Common_11272
/// @address 6fdb4c30
/// Imported by ['D2Game.dll']
BOOL __stdcall D2Common_11272(D2UnitStrc *pUnit);

/// @ordinal 11273
/// @name D2Common_11273
/// @address 6fdb9d60
/// Not imported by any .dll
int __stdcall D2Common_11273(D2UnitStrc *pUnit, int a2);

/// @ordinal 11274
/// @name D2Common_11274
/// @address 6fdb9d90
/// Not imported by any .dll
BOOL __stdcall D2Common_11274(D2UnitStrc *pTarget, D2UnitStrc *pUnit);

/// @ordinal 11275
/// @name D2Common_11275
/// @address 6fdb9e60
/// Not imported by any .dll
BOOL __stdcall D2Common_11275(D2UnitStrc *pTarget, D2UnitStrc *pUnit);

/// @ordinal 11276
/// @name EvalSkillCalc
/// @address 6fdaf7e0
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall EvalSkillCalc(D2UnitStrc *pUnit, unsigned int nCalc, int nSkillId, int nSkillLevel);

/// @ordinal 11277
/// @name D2Common_11296_MONSTERS_Return
/// @address 6fda5250
/// Imported by ['D2Game.dll']
void __stdcall D2Common_11296_MONSTERS_Return(D2UnitStrc *pUnit);

/// @ordinal 11278
/// @name INVENTORY_GetItemsXPos
/// @address 6fd8fed0
/// Imported by ['D2Game.dll']
DWORD __stdcall INVENTORY_GetItemsXPos(D2InventoryStrc *pInventory, D2UnitStrc *pUnit);

/// @ordinal 11279
/// @name UNITROOM_First
/// @address 6fdbcf10
/// Imported by ['D2Game.dll']
int __stdcall UNITROOM_First(D2UnitStrc *pUnit, D2RoomStrc *pRoom, int nUnused);

/// @ordinal 11280
/// @name D2Common_11280
/// @address 6fda5930
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall D2Common_11280(D2UnitStrc *pUnit, int a2, int nSkillId, int nUnused, int *pSpawnMode, int *pX, int *pY);

/// @ordinal 11281
/// @name Unused
/// @address 6fda9250
/// Not imported by any .dll
signed int __stdcall Unused(D2UnitStrc *pUnit, int a2);

/// @ordinal 11282
/// @name Unused
/// @address 6fda91b0
/// Not imported by any .dll
int __stdcall Unused(int nMonsterId);

/// @ordinal 11283
/// @name SKILLS_Last
/// @address 6fdb4260
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SKILLS_Last(D2UnitStrc *pUnit, int *pMinDamage, int *pMaxDamage, int *pDamagePercent);

/// @ordinal 11284
/// @name EvalMissileCalc
/// @address 6fdbc170
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall EvalMissileCalc(D2UnitStrc *pMissile, D2UnitStrc *pOwner, DWORD nId, int nMissile, int nLevel);

/// @ordinal 11285
/// @name MissileGetMinDamage
/// @address 6fdbb5a0
/// Imported by ['D2Client.dll']
int __stdcall MissileGetMinDamage(D2UnitStrc *pMissile, D2UnitStrc *pOwner, int nId, int nLevel);

/// @ordinal 11286
/// @name MissileGetMaxDamage
/// @address 6fdbb710
/// Imported by ['D2Client.dll']
int __stdcall MissileGetMaxDamage(D2UnitStrc *pMissile, D2UnitStrc *pOwner, int nId, int nLevel);

/// @ordinal 11287
/// @name MissileGetMinElemDamage
/// @address 6fdbb8c0
/// Imported by ['D2Client.dll']
int __stdcall MissileGetMinElemDamage(D2UnitStrc *pMissile, D2UnitStrc *pOwner, int nId, int nLevel);

/// @ordinal 11288
/// @name MissileGetMaxElemDamage
/// @address 6fdbba30
/// Imported by ['D2Client.dll']
int __stdcall MissileGetMaxElemDamage(D2UnitStrc *pMissile, D2UnitStrc *pOwner, int nId, int nLevel);

/// @ordinal 11289
/// @name GetElemTypeFromMissileId
/// @address 6fdbb880
/// Imported by ['D2Client.dll', 'D2Game.dll']
char __stdcall GetElemTypeFromMissileId(int nMissileId);

/// @ordinal 11290
/// @name D2Common_11290
/// @address 6fdbbc50
/// Not imported by any .dll
int __stdcall D2Common_11290(D2UnitStrc *pMissile, D2UnitStrc *pOwner, int, int nId, int nLevel);

/// @ordinal 11291
/// @name SetNumberOfPathPoints
/// @address 6fda9b90
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __stdcall SetNumberOfPathPoints(D2DynamicPathStrc *pDynamicPath, int a2);

/// @ordinal 11292
/// @name ITEMS_ItemAssignProperty
/// @address 6fd98160
/// Imported by ['D2Game.dll']
void __stdcall ITEMS_ItemAssignProperty(D2C_PropertyModes nPropertyMode, D2UnitStrc *pUnit, D2UnitStrc *pItem, void *pMods, int nIndex, int nPropSet, D2PropertyStrc *pProperty, int nState, int fStatlist, int nSubType);

/// @ordinal 11293
/// @name D2Common_11293
/// @address 6fd926c0
/// Imported by ['D2Game.dll']
BOOL __stdcall D2Common_11293(D2UnitStrc *pItem, int nSkillId, int a3, int *pValue, D2StatListStrc **ppStatList);

/// @ordinal 11294
/// @name D2Common_SetBaseStat_11294
/// @address 6fdb7930
/// Not imported by any .dll
BOOL __stdcall D2Common_SetBaseStat_11294(D2StatListStrc *pStatList, int a2, int nValue, unsigned __int16 a4, int a5);

/// @ordinal 11295
/// @name D2Common_11295
/// @address 6fdb7a90
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11295(D2StatListStrc *a1, int a2, int a3, unsigned __int16 a4, int a5);

/// @ordinal 11296
/// @name MONSTERS_Return
/// @address 6fda5250
/// Not imported by any .dll
void __stdcall MONSTERS_Return(D2UnitStrc *pUnit);

/// @ordinal 11297
/// @name MONSTERS_SetMonsterNameInMonsterData
/// @address 6fda5670
/// Imported by ['D2Client.dll']
void __fastcall MONSTERS_SetMonsterNameInMonsterData(D2UnitStrc *pUnit, wchar_t *wszName);

/// @ordinal 11298
/// @name D2Common_11298
/// @address 6fd4f990
/// Imported by ['D2Client.dll', 'D2Game.dll']
char *__stdcall D2Common_11298(D2UnitStrc *pUnit, char *szName);

/// @ordinal 11299
/// @name D2Common_11299
/// @address 6fd4fb50
/// Not imported by any .dll
char *__stdcall D2Common_11299(D2C_UnitTypes nUnitType, int nUnitId, char *Format);

/// @ordinal 11300
/// @name EvalItemCalc
/// @address 6fd98300
/// Imported by ['D2Client.dll', 'D2Game.dll']
int __stdcall EvalItemCalc(D2UnitStrc *pUnit, D2UnitStrc *pItem, unsigned int nCalc);

/// @ordinal 11301
/// @name D2Common_11301
/// @address 6fd8fd10
/// Imported by ['D2Game.dll']
D2UnitStrc *__stdcall D2Common_11301(D2InventoryStrc *pInventory);

/// @ordinal 11302
/// @name EvalSkillDescCalc
/// @address 6fdaf850
/// Imported by ['D2Client.dll']
int __stdcall EvalSkillDescCalc(D2UnitStrc *pUnit, int nCalc, int nSkillId, int nSkillLevel);

/// @ordinal 11303
/// @name D2Common_11303
/// @address 6fdb5740
/// Imported by ['D2Client.dll', 'D2Game.dll']
BOOL __stdcall D2Common_11303(D2UnitStrc *pUnit, int nStateMask);

/// @ordinal 11304
/// @name STATLIST_GetStatCount
/// @address 6fdb7280
/// Not imported by any .dll
int __stdcall STATLIST_GetStatCount(D2StatListExStrc *pStatListEx);

/// @ordinal 11305
/// @name D2Common_11305
/// @address 6fdb72a0
/// Imported by ['D2Game.dll']
int __stdcall D2Common_11305(D2UnitStrc *pUnit);

/// @ordinal 11306
/// @name D2Common_11306
/// @address 6fd90d50
/// Not imported by any .dll
D2UnitStrc *__stdcall D2Common_11306(D2InventoryStrc *pInventory, int nItemCode, D2UnitStrc *a3);

/// @ordinal 11307
/// @name D2Common_11307
/// @address 6fdc2910
/// Imported by ['D2Client.dll', 'D2Game.dll']
signed int __stdcall D2Common_11307(D2UnitStrc *a1, D2UnitStrc *pUnit);

