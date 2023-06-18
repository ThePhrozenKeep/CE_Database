// List of D2Game.dll exports (base address 6fc30000)
// For each of the other .DLLs, here are the number of imports of the current module exports:
// (Note that this is not the number of uses/references, just the number of times the current module is listed in the import table)
// |- D2Client.dll     :  13
// |- D2Server.dll     :  26


/// @ordinal 10001
/// @name D2Game_10001
/// @address 6fc31010
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10002
/// @name D2Game_10002
/// @address 6fc35880
/// Imported by ['D2Client.dll', 'D2Server.dll']
void __stdcall D2Game_10002(D2GameManagerStrc *pGameDataTbl, void *pGameList);

/// @ordinal 10003
/// @name D2Game_10003
/// @address 6fc38530
/// Imported by ['D2Client.dll', 'D2Server.dll']
/// @guessedtype int()

/// @ordinal 10004
/// @name D2Game_10004
/// @address 6fc38e20
/// Imported by ['D2Client.dll']
/// Failed to extract type

/// @ordinal 10005
/// @name D2Game_10005
/// @address 6fc392a0
/// Imported by ['D2Client.dll']
/// Failed to extract type

/// @ordinal 10006
/// @name D2Game_10006
/// @address 6fc399c0
/// Imported by ['D2Client.dll', 'D2Server.dll']
/// Failed to extract type

/// @ordinal 10007
/// @name D2Game_10007
/// @address 6fc36280
/// Imported by ['D2Server.dll']
int __stdcall D2Game_10007(char Args, int, int, int, int, int, int, int);

/// @ordinal 10008
/// @name D2Game_10008
/// @address 6fc3b280
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10009
/// @name D2Game_10009
/// @address 6fc3b2a0
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10010
/// @name D2Game_10010
/// @address 6fc35920
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10011
/// @name D2Game_10011
/// @address 6fc35930
/// Not imported by any .dll
DWORD __cdecl D2Game_10011();

/// @ordinal 10012
/// @name GetGamesCount
/// @address 6fc39b50
/// Imported by ['D2Server.dll']
/// @guessedtype int()

/// @ordinal 10013
/// @name D2Game_10013
/// @address 6fc39ef0
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10014
/// @name D2Game_10014
/// @address 6fc39ff0
/// Imported by ['D2Server.dll']
/// Failed to extract type

/// @ordinal 10015
/// @name GetGameIds
/// @address 6fc3a390
/// Imported by ['D2Server.dll']
int __stdcall GetGameIds(WORD *ptwGameIds, int nBufferSize);

/// @ordinal 10016
/// @name D2Game_10016
/// @address 6fc3a490
/// Imported by ['D2Client.dll', 'D2Server.dll']
/// Failed to extract type

/// @ordinal 10017
/// @name D2Game_10017
/// @address 6fc3a5a0
/// Imported by ['D2Server.dll']
/// Failed to extract type

/// @ordinal 10018
/// @name D2Game_10018
/// @address 6fc3ab20
/// Imported by ['D2Server.dll']
/// Failed to extract type

/// @ordinal 10019
/// @name D2Game_10019
/// @address 6fc3a8b0
/// Imported by ['D2Server.dll']
void __stdcall D2Game_10019(unsigned __int16 a1, void *ptList, int eType);

/// @ordinal 10020
/// @name GetStatistics
/// @address 6fc3acd0
/// Imported by ['D2Server.dll']
void __stdcall GetStatistics(D2GameStatistics *pStats);

/// @ordinal 10021
/// @name D2Game_10021
/// @address 6fc3ae10
/// Imported by ['D2Server.dll']
int __stdcall D2Game_10021(int, int, char *Source);

/// @ordinal 10022
/// @name D2Game_10022
/// @address 6fc3afb0
/// Imported by ['D2Server.dll']
int __stdcall D2Game_10022(int, char *Str2);

/// @ordinal 10023
/// @name D2Game_SetEventCallbacks_10023
/// @address 6fc358e0
/// Imported by ['D2Server.dll']
void __stdcall D2Game_SetEventCallbacks_10023(D2ServerCallbackFunctions *ptEventCallbackTable);

/// @ordinal 10024
/// @name D2Game_10024
/// @address 6fc379c0
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10025
/// @name D2Game_10025
/// @address 6fccd2e0
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10026
/// @name D2Game_10026
/// @address 6fccd310
/// Not imported by any .dll
D2DrlgActStrc *__stdcall D2Game_10026(int nAct);

/// @ordinal 10027
/// @name D2Game_10027
/// @address 6fccd350
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10028
/// @name D2Game_10028
/// @address 6fccd3b0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int nX, int nY)

/// @ordinal 10029
/// @name SAVE_WriteFileInterface
/// @address 6fc89ab0
/// Not imported by any .dll
BOOL __stdcall SAVE_WriteFileInterface(D2GameStrc *pGame, D2UnitStrc *pPlayer, const char *szName);

/// @ordinal 10033
/// @name D2Game_10033
/// @address 6fcc1dc0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10034
/// @name Return
/// @address 6fca4640
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10035
/// @name DisableQuestSequences
/// @address 6fccd410
/// Not imported by any .dll
/// @guessedtype void __fastcall()

/// @ordinal 10036
/// @name SAVE_FirstFn
/// @address 6fc895d0
/// Imported by ['D2Client.dll']
/// @guessedtype int()

/// @ordinal 10037
/// @name D2GAME_QUESTS_CheckFirstPickedSet_10037_6FC95360
/// @address 6fc95360
/// Not imported by any .dll
BOOL __stdcall D2GAME_QUESTS_CheckFirstPickedSet_10037_6FC95360(D2GameStrc *pGame);

/// @ordinal 10038
/// @name D2GAME_QUESTS_CheckNotIntroQuest_10038_6FC953A0
/// @address 6fc953a0
/// Not imported by any .dll
BOOL __stdcall D2GAME_QUESTS_CheckNotIntroQuest_10038_6FC953A0(D2GameStrc *pGame, int nQuestId);

/// @ordinal 10039
/// @name ?__CxxSetUnhandledExceptionFilter@@YAXXZ
/// @address 6fc404e0
/// Imported by ['D2Server.dll']
void __cdecl ?__CxxSetUnhandledExceptionFilter@@YAXXZ();

/// @ordinal 10040
/// @name TASK_FreeAllQueueSlots
/// @address 6fc40500
/// Imported by ['D2Server.dll']
/// @guessedtype int()

/// @ordinal 10041
/// @name TASK_Create
/// @address 6fc405b0
/// Imported by ['D2Server.dll']
/// @guessedtype int()

/// @ordinal 10042
/// @name D2Game_10042
/// @address 6fc407a0
/// Not imported by any .dll
signed int __fastcall D2Game_10042(D2TaskStrc *pTask, int nTaskType, D2LinkStrc *pPrevTaskBalanceLink);

/// @ordinal 10043
/// @name D2Game_10043
/// @address 6fc40930
/// Imported by ['D2Server.dll']
signed int __fastcall D2Game_10043(char nTaskNumber, int a2);

/// @ordinal 10044
/// @name D2Game_10044
/// @address 6fc40a40
/// Not imported by any .dll
signed int __fastcall D2Game_10044(char nTaskNumber);

/// @ordinal 10045
/// @name sSrvTaskProcessGame
/// @address 6fc40b30
/// Imported by ['D2Server.dll']
void __fastcall sSrvTaskProcessGame(char nTaskSlot, D2TaskStrc *ptTask);

/// @ordinal 10046
/// @name D2Game_10046
/// @address 6fc357c0
/// Imported by ['D2Client.dll', 'D2Server.dll']
/// @guessedtype int()

/// @ordinal 10047
/// @name D2Game_10047
/// @address 6fc35e70
/// Imported by ['D2Server.dll']
/// Failed to extract type

/// @ordinal 10048
/// @name D2Game_10049_Return1
/// @address 6fcf30d0
/// Imported by ['D2Server.dll']
/// @guessedtype int __stdcall(int, int, int, int, int, int)

/// @ordinal 10049
/// @name Return1
/// @address 6fcf30d0
/// Imported by ['D2Server.dll']
/// @guessedtype int __stdcall(int, int, int, int, int, int)

/// @ordinal 10050
/// @name D2Game_10050
/// @address 6fc35810
/// Imported by ['D2Client.dll', 'D2Server.dll']
/// @guessedtype int()

/// @ordinal 10051
/// @name D2Game_10051
/// @address 6fc39ec0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10052
/// @name D2Game_10052
/// @address 6fc39ed0
/// Not imported by any .dll
void __stdcall D2Game_10052(DWORD *a3, int a4);

/// @ordinal 10053
/// @name D2Game_10053
/// @address 6fc39c70
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10054
/// @name D2Game_10054
/// @address 6fc39d80
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10055
/// @name D2Game_10055
/// @address 6fc37880
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10056
/// @name D2Game_10056
/// @address 6fc35e50
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10057
/// @name D2Game_10057
/// @address 6fc39b70
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10058
/// @name D2Game_10058
/// @address 6fc39c60
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10059
/// @name SetVirtualPlayerCount
/// @address 6fc7c490
/// Imported by ['D2Client.dll']
/// @guessedtype int()

/// @ordinal 10060
/// @name D2Game_10061_Return
/// @address 6fcb1d80
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10061
/// @name Return
/// @address 6fcb1d80
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10062
/// @name D2Game_10062
/// @address 6fc3a6f0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

