// List of Storm.dll exports (base address 6ffb0000)


/// @ordinal 101
/// @name SNetCreateGame
/// @address 6ffcdbb0
BOOL __stdcall SNetCreateGame(char *Source, char *a2, char *a3, int a4, int a5, int a6, char *a7, char *a8, int *playerid);

/// @ordinal 102
/// @name SNetDestroy
/// @address 6ffce3a0
BOOL __cdecl SNetDestroy();

/// @ordinal 103
/// @name SNetEnumProviders
/// @address 6ffcec30
BOOL __stdcall SNetEnumProviders(int mincaps, int (__stdcall *callback)(_DWORD, _DWORD, _DWORD, _DWORD));

/// @ordinal 104
/// @name SNetEnumDevices
/// @address 6ffced60
BOOL __stdcall SNetEnumDevices(int (__stdcall *callback)(_DWORD, _DWORD, _DWORD));

/// @ordinal 105
/// @name SNetEnumGames
/// @address 6ffcf0a0
BOOL __stdcall SNetEnumGames(int (__stdcall *callback)(_DWORD, _DWORD, _DWORD), int *hintnextcall);

/// @ordinal 106
/// @name SNetDropPlayer
/// @address 6ffce670
BOOL __stdcall SNetDropPlayer(int playerid, int flags);

/// @ordinal 107
/// @name SNetGetGameInfo
/// @address 6ffcf6b0
BOOL __stdcall SNetGetGameInfo(int type, void *src, unsigned int length, int *byteswritten);

/// @ordinal 108
/// @name SNetGetNetworkLatency
/// @address 6ffcf820
BOOL __stdcall SNetGetNetworkLatency(int measurementtype, int *result);

/// @ordinal 109
/// @name SNetGetNumPlayers
/// @address 6ffcf910
BOOL __stdcall SNetGetNumPlayers(int *firstplayerid, int *lastplayerid, int *activeplayers);

/// @ordinal 110
/// @name SNetGetOwnerTurnsWaiting
/// @address 6ffcfa40
BOOL __stdcall SNetGetOwnerTurnsWaiting(int *turns);

/// @ordinal 111
/// @name SNetGetPerformanceData
/// @address 6ffd0120
int __stdcall SNetGetPerformanceData(int, int, int, int, LPFILETIME lpFileTime, int);

/// @ordinal 112
/// @name SNetGetPlayerCaps
/// @address 6ffd0210
BOOL __stdcall SNetGetPlayerCaps(char a1, int *caps);

/// @ordinal 113
/// @name SNetGetPlayerName
/// @address 6ffd0320
BOOL __stdcall SNetGetPlayerName(int playerid, char *buffer, size_t buffersize);

/// @ordinal 114
/// @name SNetGetProviderCaps
/// @address 6ffd0410
BOOL __stdcall SNetGetProviderCaps(void *caps);

/// @ordinal 115
/// @name SNetGetTurnsInTransit
/// @address 6ffd04b0
BOOL __stdcall SNetGetTurnsInTransit(int *turns);

/// @ordinal 116
/// @name SNetInitializeDevice
/// @address 6ffd0580
BOOL __stdcall SNetInitializeDevice(int a1, int a2, int a3, int a4, int a5);

/// @ordinal 117
/// @name SNetInitializeProvider
/// @address 6ffd08a0
BOOL __stdcall SNetInitializeProvider(DWORD providerName, int a2, int a3, int a4, DWORD ThreadID);

/// @ordinal 118
/// @name SNetJoinGame
/// @address 6ffd2a20
BOOL __stdcall SNetJoinGame(int a1, char *a2, char *a3, char *playerName, char *a5, int *playerid);

/// @ordinal 119
/// @name SNetLeaveGame
/// @address 6ffd3090
BOOL __stdcall SNetLeaveGame(int type);

/// @ordinal 120
/// @name SNetPerformUpgrade
/// @address 6ffd3270
BOOL __stdcall SNetPerformUpgrade(DWORD *upgradestatus);

/// @ordinal 121
/// @name SNetReceiveMessage
/// @address 6ffd3a20
BOOL __stdcall SNetReceiveMessage(int *senderplayerid, int *data, int *databytes);

/// @ordinal 122
/// @name SNetReceiveTurns
/// @address 6ffd3cd0
BOOL __stdcall SNetReceiveTurns(unsigned int a1, int arraysize, void *arraydata, void *arraydatabytes, void *arrayplayerstatus);

/// @ordinal 123
/// @name SNetRegisterEventHandler
/// @address 6ffd4330
HANDLE __stdcall SNetRegisterEventHandler(int event, int size);

/// @ordinal 124
/// @name SNetResetLatencyMeasurements
/// @address 6ffd4390
BOOL __cdecl SNetResetLatencyMeasurements();

/// @ordinal 125
/// @name SNetSelectGame
/// @address 6ffd44e0
int __stdcall SNetSelectGame(int a1, int a2, int a3, int a4, int a5, int *playerid);

/// @ordinal 126
/// @name SNetSelectProvider
/// @address 6ffd45b0
BOOL __stdcall SNetSelectProvider(LPARAM lparam, int a2, int a3, int a4, int a5, int *providerid);

/// @ordinal 127
/// @name SNetSendMessage
/// @address 6ffd4f10
BOOL __stdcall SNetSendMessage(signed int playerID, void *data, int databytes);

/// @ordinal 128
/// @name SNetSendTurn
/// @address 6ffd51b0
BOOL __stdcall SNetSendTurn(void *data, int databytes);

/// @ordinal 129
/// @name SNetSetBasePlayer
/// @address 6ffd52f0
BOOL __stdcall SNetSetBasePlayer(int a1);

/// @ordinal 130
/// @name SNetSetGameMode
/// @address 6ffd5320
BOOL __stdcall SNetSetGameMode(int a1);

/// @ordinal 131
/// @name SNetUnregisterEventHandler
/// @address 6ffd5410
int __stdcall SNetUnregisterEventHandler(int a1, int callback);

/// @ordinal 133
/// @name SNetEnumGamesEx
/// @address 6ffcef60
BOOL __stdcall SNetEnumGamesEx(int a1, int a2, int (__fastcall *callback)(_DWORD, _DWORD, _DWORD), int *hintnextcall);

/// @ordinal 134
/// @name SNetSendServerChatCommand
/// @address 6ffd5090
int __stdcall SNetSendServerChatCommand(char *command);

/// @ordinal 135
/// @name SNetSend135
/// @address 6ffd4d90
BOOL __stdcall SNetSend135(signed int a1, int a2, int a3);

/// @ordinal 136
/// @name SNetReceive136
/// @address 6ffd37a0
BOOL __stdcall SNetReceive136(int a1, int a2, int a3);

/// @ordinal 137
/// @name SNetGetPlayerNames
/// @address 6ffce5d0
BOOL __stdcall SNetGetPlayerNames(int a1);

/// @ordinal 138
/// @name SNetCreateLadderGame
/// @address 6ffcdbf0
BOOL __stdcall SNetCreateLadderGame(int a1, int a2, int a3, int a4, int a5, int a6, const void *MemSrc, int MemSize, int a9, char *playerName, int a11, int a12);

/// @ordinal 139
/// @name SNetReportGameResult
/// @address 6ffd43e0
BOOL __stdcall SNetReportGameResult(unsigned int a1, int size, int a3, int a4, int a5);

/// @ordinal 140
/// @name SNetCheckDataFile
/// @address 6ffcdb00
BOOL __stdcall SNetCheckDataFile(int a1, int a2, int a3, int a4);

/// @ordinal 201
/// @name SDlgBeginPaint
/// @address 6ffbcfb0
int __stdcall SDlgBeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint);

/// @ordinal 202
/// @name SDlgBltToWindowI
/// @address 6ffbdb30
int __stdcall SDlgBltToWindowI(HWND hWnd, HRGN hrgnSrc2, int, int, int, int, int, int, int, int);

/// @ordinal 203
/// @name SDlgCheckTimers
/// @address 6ffbdba0
BOOL __cdecl SDlgCheckTimers();

/// @ordinal 204
/// @name SDlgCreateDialogIndirectParam
/// @address 6ffbdc30
int __stdcall SDlgCreateDialogIndirectParam(int, int, HWND hWnd, LPVOID lpParam, LPARAM lParam);

/// @ordinal 205
/// @name SDlgCreateDialogParam
/// @address 6ffbf790
int __stdcall SDlgCreateDialogParam(HMODULE hModule, LPCSTR lpName, HWND hWnd, LPVOID lpParam, LPARAM lParam);

/// @ordinal 206
/// @name SDlgDefDialogProc
/// @address 6ffbf800
int __stdcall SDlgDefDialogProc(HWND, int, HDC hdc, HWND hWnd);

/// @ordinal 208
/// @name SDlgDialogBoxIndirectParam
/// @address 6ffbf980
int __stdcall SDlgDialogBoxIndirectParam(int, int, HWND hWnd, LPVOID lpParam, LPARAM lParam);

/// @ordinal 209
/// @name SDlgDialogBoxParam
/// @address 6ffbfa70
int __stdcall SDlgDialogBoxParam(HMODULE hModule, LPCSTR lpName, HWND hWnd, LPVOID lpParam, LPARAM lParam);

/// @ordinal 210
/// @name SDlgDrawBitmap
/// @address 6ffbfab0
int __stdcall SDlgDrawBitmap(HWND hWnd, int, HRGN hrgnSrc2, int, int, int, char);

/// @ordinal 211
/// @name SDlgEndDialog
/// @address 6ffbfcb0
int __stdcall SDlgEndDialog(HWND hWnd, HANDLE hData);

/// @ordinal 212
/// @name SDlgEndPaint
/// @address 6ffbfcf0
BOOL __stdcall SDlgEndPaint(HWND hWnd, PAINTSTRUCT *lpPaint);

/// @ordinal 213
/// @name SDlgKillTimer
/// @address 6ffbfd20
int __stdcall SDlgKillTimer(int a1, int a2);

/// @ordinal 214
/// @name SDlgSetBaseFont
/// @address 6ffbfda0
int __stdcall SDlgSetBaseFont(int a1, int a2, int a3, int a4, char *Source);

/// @ordinal 215
/// @name SDlgSetBitmapI
/// @address 6ffc00f0
int __stdcall SDlgSetBitmapI(int, int, char *Str2, int, int, int, int, int, int, int);

/// @ordinal 216
/// @name SDlgSetControlBitmaps
/// @address 6ffc0160
int __stdcall SDlgSetControlBitmaps(HWND hDlg, int, int, int, int, int, int);

/// @ordinal 217
/// @name SDlgSetCursor
/// @address 6ffc0310
int __stdcall SDlgSetCursor(HWND hWnd, LONG dwNewLong, int, int);

/// @ordinal 218
/// @name SDlgSetSystemCursor
/// @address 6ffc0420
int __stdcall SDlgSetSystemCursor(int a1, int a2, int a3, signed int a4);

/// @ordinal 219
/// @name SDlgSetTimer
/// @address 6ffc05d0
int __stdcall SDlgSetTimer(int a1, int a2, int a3, int a4);

/// @ordinal 220
/// @name SDlgUpdateCursor
/// @address 6ffc0680
int __cdecl SDlgUpdateCursor();

/// @ordinal 221
/// @name SDlgBltToWindowE
/// @address 6ffbd1e0
int __stdcall SDlgBltToWindowE(HWND hWnd, HRGN hrgnSrc2, int, int, int, int, int, int, int, int);

/// @ordinal 222
/// @name SDlgSetBitmapE
/// @address 6ffbfe30
int __stdcall SDlgSetBitmapE(int, int, char *Str2, int, int, int, int, int, int, int);

/// @ordinal 223
/// @name SDlgSetLocale
/// @address 6ffc0400
char *__stdcall SDlgSetLocale(int a1, const char *a2);

/// @ordinal 251
/// @name SFileAuthenticateArchive
/// @address 6ffc3b00
int __stdcall SFileAuthenticateArchive(HANDLE hArchive, int a2);

/// @ordinal 252
/// @name SFileCloseArchive
/// @address 6ffc47c0
BOOL __stdcall SFileCloseArchive(HANDLE hArchive);

/// @ordinal 253
/// @name SFileCloseFile
/// @address 6ffc4900
BOOL __stdcall SFileCloseFile(HANDLE hFile);

/// @ordinal 254
/// @name SFileDdaBegin
/// @address 6ffc4b30
int __stdcall SFileDdaBegin(HANDLE hFile, int a2, int a3);

/// @ordinal 255
/// @name SFileDdaBeginEx
/// @address 6ffc4b60
int __stdcall SFileDdaBeginEx(HANDLE hFile, signed int a2, unsigned int a3, unsigned __int32 lDistanceToMove, signed int a5, signed int a6, int a7);

/// @ordinal 256
/// @name SFileDdaDestroy
/// @address 6ffc67f0
BOOL __cdecl SFileDdaDestroy();

/// @ordinal 257
/// @name SFileDdaEnd
/// @address 6ffc6a00
BOOL __stdcall SFileDdaEnd(HANDLE directsound);

/// @ordinal 258
/// @name SFileDdaGetPos
/// @address 6ffc6b30
BOOL __stdcall SFileDdaGetPos(int a1, int a2, int a3);

/// @ordinal 259
/// @name SFileDdaGetVolume
/// @address 6ffc6be0
BOOL __stdcall SFileDdaGetVolume(int a1, int a2, int a3);

/// @ordinal 260
/// @name SFileDdaInitialize
/// @address 6ffc6cd0
BOOL __stdcall SFileDdaInitialize(HANDLE directsound);

/// @ordinal 261
/// @name SFileDdaSetVolume
/// @address 6ffc6d00
BOOL __stdcall SFileDdaSetVolume(HANDLE directsound, signed int bigvolume, signed int volume);

/// @ordinal 262
/// @name SFileDestroy
/// @address 6ffc6dc0
BOOL __cdecl SFileDestroy();

/// @ordinal 263
/// @name SFileEnableDirectAccess
/// @address 6ffc7040
BOOL __stdcall SFileEnableDirectAccess(HANDLE hFile);

/// @ordinal 264
/// @name SFileGetFileArchive
/// @address 6ffc7220
BOOL __stdcall SFileGetFileArchive(HANDLE hFile, HANDLE archive);

/// @ordinal 265
/// @name SFileGetFileSize
/// @address 6ffc7300
int __stdcall SFileGetFileSize(int, LPDWORD lpFileSizeHigh);

/// @ordinal 266
/// @name SFileOpenArchive
/// @address 6ffc7510
int __stdcall SFileOpenArchive(char *Str, int, int, int);

/// @ordinal 267
/// @name SFileOpenFile
/// @address 6ffc7ed0
int __stdcall SFileOpenFile(char *Str, int);

/// @ordinal 268
/// @name SFileOpenFileEx
/// @address 6ffc7ef0
int __stdcall SFileOpenFileEx(int, char *Str, char, int);

/// @ordinal 269
/// @name SFileReadFile
/// @address 6ffc88e0
int __stdcall SFileReadFile(int, int, int, int, LONG lDistanceToMove);

/// @ordinal 270
/// @name SFileSetBasePath
/// @address 6ffc8fd0
BOOL __stdcall SFileSetBasePath(char *path);

/// @ordinal 271
/// @name SFileSetFilePointer
/// @address 6ffc90c0
int __stdcall SFileSetFilePointer(int, LONG lDistanceToMove, int, DWORD dwMoveMethod);

/// @ordinal 272
/// @name SFileSetLocale
/// @address 6ffc9220
LCID __stdcall SFileSetLocale(LCID lcLocale);

/// @ordinal 273
/// @name SFileGetBasePath
/// @address 6ffc7170
BOOL __stdcall SFileGetBasePath(char *result, int maxSize);

/// @ordinal 274
/// @name SFileSetIoErrorMode
/// @address 6ffc9200
BOOL __stdcall SFileSetIoErrorMode(int a1, int a2);

/// @ordinal 275
/// @name SFileGetArchiveName
/// @address 6ffc7100
BOOL __stdcall SFileGetArchiveName(HANDLE hArchive, char *name, int length);

/// @ordinal 276
/// @name SFileGetFileName
/// @address 6ffc7290
BOOL __stdcall SFileGetFileName(HANDLE hFile, char *buffer, int length);

/// @ordinal 277
/// @name SFileGetArchiveInfo
/// @address 6ffc7070
int __stdcall SFileGetArchiveInfo(int a1, int a2, int a3);

/// @ordinal 278
/// @name SFileSetPlatform
/// @address 6ffc9230
char __stdcall SFileSetPlatform(char a1);

/// @ordinal 279
/// @name SFileLoadFile
/// @address 6ffc7380
int __stdcall SFileLoadFile(char *Str, int, int, int, LONG lDistanceToMove);

/// @ordinal 280
/// @name SFileUnloadFile
/// @address 6ffc9240
BOOL __stdcall SFileUnloadFile(void *buffer);

/// @ordinal 281
/// @name SFileLoadFileEx
/// @address 6ffc73e0
int __stdcall SFileLoadFileEx(int, char *Str, int, int, int, char, LONG lDistanceToMove);

/// @ordinal 282
/// @name SFilePrioritizeRequest
/// @address 6ffc86f0
void __stdcall SFilePrioritizeRequest(int a1, int a2);

/// @ordinal 283
/// @name SFileCancelRequest
/// @address 6ffc4280
void __stdcall SFileCancelRequest(int a1);

/// @ordinal 284
/// @name SFileSetAsyncBudget
/// @address 6ffc8fc0
int __stdcall SFileSetAsyncBudget(int a1);

/// @ordinal 285
/// @name SFileSetDataChunkSize
/// @address 6ffc9090
void __stdcall SFileSetDataChunkSize(int a1);

/// @ordinal 286
/// @name SFileEnableSeekOptimization
/// @address 6ffc7060
/// @guessedtype int __stdcall(int)

/// @ordinal 287
/// @name SFileReadFileEx
/// @address 6ffc8910
int __stdcall SFileReadFileEx(int, int, int, int, LONG lDistanceToMove, int);

/// @ordinal 288
/// @name SFileFileExists
/// @address 6ffc4790
/// @guessedtype int __stdcall(int)

/// @ordinal 289
/// @name SFileFileExistsEx
/// @address 6ffc8940
int __stdcall SFileFileExistsEx(int, int, int, int, LONG lDistanceToMove, int, int);

/// @ordinal 290
/// @name SFileReadFileEx2
/// @address 6ffc7410
int __stdcall SFileReadFileEx2(int, char *Str, int, int, int, char, LONG lDistanceToMove, int);

/// @ordinal 301
/// @name StormDestroy
/// @address 6ffdb300
BOOL __cdecl StormDestroy();

/// @ordinal 302
/// @name StormGetInstance
/// @address 6ffdb350
HMODULE __cdecl StormGetInstance();

/// @ordinal 303
/// @name StormGetOption
/// @address 6ffdb360
BOOL __stdcall StormGetOption(int type, int optval, size_t optlen);

/// @ordinal 304
/// @name StormSetOption
/// @address 6ffdb440
BOOL __stdcall StormSetOption(int type, int optval, size_t optlen);

/// @ordinal 312
/// @name SBltGetSCode
/// @address 6ffb5430
BOOL __stdcall SBltGetSCode(unsigned int a1, char *buffer, size_t buffersize, int a4);

/// @ordinal 313
/// @name SBltROP3
/// @address 6ffb5640
BOOL __stdcall SBltROP3(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);

/// @ordinal 314
/// @name SBltROP3Clipped
/// @address 6ffb58e0
BOOL __stdcall SBltROP3Clipped(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);

/// @ordinal 315
/// @name SBltROP3Tiled
/// @address 6ffb5a90
BOOL __stdcall SBltROP3Tiled(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);

/// @ordinal 321
/// @name SBmpDecodeImage
/// @address 6ffb5da0
BOOL __stdcall SBmpDecodeImage(int a1, signed int *a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9);

/// @ordinal 323
/// @name SBmpLoadImage
/// @address 6ffb68d0
int __stdcall SBmpLoadImage(char *Str, int, int, int, int, int, int);

/// @ordinal 324
/// @name SBmpSaveImage
/// @address 6ffb6fb0
int __stdcall SBmpSaveImage(LPCSTR lpFileName, int, LPCVOID lpBuffer, int, int, int);

/// @ordinal 325
/// @name SBmpAllocLoadImage
/// @address 6ffb5be0
int __stdcall SBmpAllocLoadImage(char *Str, int, int, int, int, int, int, int);

/// @ordinal 326
/// @name SBmpSaveImageEx
/// @address 6ffb6fe0
int __stdcall SBmpSaveImageEx(LPCSTR lpFileName, int, LPCVOID lpBuffer, int, int, int, int);

/// @ordinal 331
/// @name SCodeCompile
/// @address 6ffba4c0
BOOL __stdcall SCodeCompile(char *directives1, char *directives2, int a3, unsigned int a4, unsigned int flags, char *src);

/// @ordinal 332
/// @name SCodeDelete
/// @address 6ffbab30
BOOL __stdcall SCodeDelete(int handle);

/// @ordinal 334
/// @name SCodeExecute
/// @address 6ffbac20
int __cdecl SCodeExecute(int a1, int a2);

/// @ordinal 335
/// @name SCodeGetPseudocode
/// @address 6ffbaf90
BOOL __stdcall SCodeGetPseudocode(int scodestring, int buffer, size_t buffersize);

/// @ordinal 341
/// @name SDrawAutoInitialize
/// @address 6ffc06d0
int __stdcall SDrawAutoInitialize(HINSTANCE hInst, LPCSTR lpClassName, LPCSTR lpCaption, int, int, int nWidth, int nHeight, int);

/// @ordinal 342
/// @name SDrawCaptureScreen
/// @address 6ffc0ef0
BOOL __stdcall SDrawCaptureScreen(char *source);

/// @ordinal 343
/// @name SDrawClearSurface
/// @address 6ffc10e0
BOOL __stdcall SDrawClearSurface(int surfacenumber);

/// @ordinal 344
/// @name SDrawDestroy
/// @address 6ffc11a0
BOOL __cdecl SDrawDestroy();

/// @ordinal 345
/// @name SDrawFlipPage
/// @address 6ffc12a0
BOOL __cdecl SDrawFlipPage();

/// @ordinal 346
/// @name SDrawGetFrameWindow
/// @address 6ffc1320
HWND __stdcall SDrawGetFrameWindow(int sdraw_framewindow);

/// @ordinal 347
/// @name SDrawGetObjects
/// @address 6ffc1340
BOOL __stdcall SDrawGetObjects(int obj1, int obj2, int obj3, int obj4, int obj5, int obj6, int obj7);

/// @ordinal 348
/// @name SDrawGetScreenSize
/// @address 6ffc13c0
BOOL __stdcall SDrawGetScreenSize(int width, int height, int depth);

/// @ordinal 349
/// @name SDrawGetServiceLevel
/// @address 6ffc1490
BOOL __stdcall SDrawGetServiceLevel(int a1);

/// @ordinal 350
/// @name SDrawLockSurface
/// @address 6ffc14f0
BOOL __stdcall SDrawLockSurface(int surfacenumber, RECT *lpDestRect, void **lplpSurface, int *lpPitch, int arg_unused);

/// @ordinal 351
/// @name SDrawManualInitialize
/// @address 6ffc1690
BOOL __stdcall SDrawManualInitialize(HWND a1, int obj1, int obj2, int obj3, int obj4, int obj5, int obj6, void *obj7);

/// @ordinal 352
/// @name SDrawMessageBox
/// @address 6ffc1720
int __stdcall SDrawMessageBox(LPCSTR lpText, LPCSTR lpCaption, UINT uType);

/// @ordinal 353
/// @name SDrawPostClose
/// @address 6ffc1840
BOOL __cdecl SDrawPostClose();

/// @ordinal 354
/// @name SDrawRealizePalette
/// @address 6ffc1860
BOOL __cdecl SDrawRealizePalette();

/// @ordinal 355
/// @name SDrawSelectGdiSurface
/// @address 6ffc1960
int __stdcall SDrawSelectGdiSurface(unsigned int a1, int a2);

/// @ordinal 356
/// @name SDrawUnlockSurface
/// @address 6ffc1a00
BOOL __stdcall SDrawUnlockSurface(int surfacenumber, void *lpSurface, int zero1, int zero2);

/// @ordinal 357
/// @name SDrawUpdatePalette
/// @address 6ffc1b00
BOOL __stdcall SDrawUpdatePalette(unsigned int firstentry, unsigned int numentries, PALETTEENTRY *pPalEntries, int a4);

/// @ordinal 358
/// @name SDrawUpdateScreen
/// @address 6ffc1bc0
BOOL __stdcall SDrawUpdateScreen(int a1);

/// @ordinal 359
/// @name SDrawWaitForVerticalBlank
/// @address 6ffc1d80
int __cdecl SDrawWaitForVerticalBlank();

/// @ordinal 372
/// @name SEvtDispatch
/// @address 6ffc2cc0
BOOL __stdcall SEvtDispatch(DWORD messageID, int a2, int a3, int a4);

/// @ordinal 373
/// @name SEvtRegisterHandler
/// @address 6ffc30a0
BOOL __stdcall SEvtRegisterHandler(DWORD messageID, unsigned int a2, int event, int a4, int a5);

/// @ordinal 374
/// @name SEvtUnregisterHandler
/// @address 6ffc33c0
BOOL __stdcall SEvtUnregisterHandler(DWORD messageID, int a2, int a3, int a4);

/// @ordinal 375
/// @name SEvtUnregisterType
/// @address 6ffc34a0
BOOL __stdcall SEvtUnregisterType(DWORD messageID, int a2);

/// @ordinal 376
/// @name SEvtPopState
/// @address 6ffc2ed0
BOOL __stdcall SEvtPopState(DWORD messageID, int type);

/// @ordinal 377
/// @name SEvtPushState
/// @address 6ffc2f60
BOOL __stdcall SEvtPushState(DWORD messageID, int type);

/// @ordinal 378
/// @name SEvtBreakHandlerChain
/// @address 6ffc2b00
BOOL __stdcall SEvtBreakHandlerChain(int a1);

/// @ordinal 381
/// @name SGdiBitBlt
/// @address 6ffc9420
BOOL __stdcall SGdiBitBlt(int a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, unsigned int a8, signed int a9);

/// @ordinal 382
/// @name SGdiCreateFont
/// @address 6ffc9600
BOOL __stdcall SGdiCreateFont(const void *handle, int bits, int width, int height, int filecharwidth, int filecharheight, const void *charsizetable, int a8);

/// @ordinal 383
/// @name SGdiDeleteObject
/// @address 6ffc97e0
BOOL __stdcall SGdiDeleteObject(int a1);

/// @ordinal 385
/// @name SGdiExtTextOut
/// @address 6ffc9980
BOOL __stdcall SGdiExtTextOut(int a1, int a2, int a3, int a4, unsigned int a8, signed int a6, signed int a7, const char *arg1C, unsigned int arg20);

/// @ordinal 386
/// @name SGdiImportFont
/// @address 6ffc9fa0
int __stdcall SGdiImportFont(HGDIOBJ h, int);

/// @ordinal 387
/// @name SGdiLoadFont
/// @address 6ffca460
int __stdcall SGdiLoadFont(char *Str, int, int, int, int, int);

/// @ordinal 388
/// @name SGdiRectangle
/// @address 6ffca5c0
BOOL __stdcall SGdiRectangle(int a1, int a2, int a3, int a4, int a5, int a6);

/// @ordinal 389
/// @name SGdiSelectObject
/// @address 6ffca700
BOOL __stdcall SGdiSelectObject(int a1);

/// @ordinal 390
/// @name SGdiSetPitch
/// @address 6ffca740
BOOL __stdcall SGdiSetPitch(int pitch);

/// @ordinal 391
/// @name SGdiTextOut
/// @address 6ffca870
BOOL __stdcall SGdiTextOut(int a1, int a2, int a3, unsigned int a8, const char *arg1C, unsigned int arg20);

/// @ordinal 392
/// @name SGdi392
/// @address 6ffca7a0
BOOL __stdcall SGdi392(int, int, int, int);

/// @ordinal 393
/// @name Ordinal393
/// @address 6ffc9f00
BOOL __stdcall Ordinal393(int, int, int);

/// @ordinal 401
/// @name SMemAlloc
/// @address 6ffcb130
void *__stdcall SMemAlloc(int amount, char *logfilename, int logline, int defaultValue);

/// @ordinal 403
/// @name SMemFree
/// @address 6ffcc2e0
BOOL __stdcall SMemFree(void *location, char *logfilename, int logline, int defaultValue);

/// @ordinal 404
/// @name SMemGetSize
/// @address 6ffcc4f0
int __stdcall SMemGetSize(void *location, char *logfilename, int logline);

/// @ordinal 405
/// @name SMemReAlloc
/// @address 6ffcce40
void *__stdcall SMemReAlloc(void *location, int amount, char *logfilename, int logline, int defaultValue);

/// @ordinal 412
/// @name SMsgDispatchMessage
/// @address 6ffcd200
BOOL __stdcall SMsgDispatchMessage(HWND hWnd, DWORD messageID, WPARAM wParam, LPARAM lParam, int a5, int a6);

/// @ordinal 413
/// @name SMsgDoMessageLoop
/// @address 6ffcd310
WPARAM __stdcall SMsgDoMessageLoop(void *callback, int followWithStormDestroy);

/// @ordinal 414
/// @name SMsgRegisterCommand
/// @address 6ffcd4c0
BOOL __stdcall SMsgRegisterCommand(int a1, int a2, int a3);

/// @ordinal 415
/// @name SMsgRegisterKeyDown
/// @address 6ffcd5b0
BOOL __stdcall SMsgRegisterKeyDown(int a1, int a2, int a3);

/// @ordinal 416
/// @name SMsgRegisterKeyUp
/// @address 6ffcd5d0
BOOL __stdcall SMsgRegisterKeyUp(int a1, int a2, int a3);

/// @ordinal 417
/// @name SMsgRegisterMessage
/// @address 6ffcd5f0
BOOL __stdcall SMsgRegisterMessage(int a1, int a2, int a3);

/// @ordinal 418
/// @name SMsgPopRegisterState
/// @address 6ffcd440
BOOL __stdcall SMsgPopRegisterState(int type);

/// @ordinal 419
/// @name SMsgPushRegisterState
/// @address 6ffcd480
BOOL __stdcall SMsgPushRegisterState(int type);

/// @ordinal 421
/// @name SRegLoadData
/// @address 6ffd5840
int __stdcall SRegLoadData(int, DWORD Type, int, LPBYTE lpData, int, LPDWORD lpcbData);

/// @ordinal 422
/// @name SRegLoadString
/// @address 6ffd5a00
int __stdcall SRegLoadString(DWORD Type, DWORD cbData, int, LPSTR, int);

/// @ordinal 423
/// @name SRegLoadValue
/// @address 6ffd5ac0
BOOL __stdcall SRegLoadValue(const char *keyname, const char *valuename, int a3, DWORD *value);

/// @ordinal 424
/// @name SRegSaveData
/// @address 6ffd5ba0
BOOL __stdcall SRegSaveData(char *keyname, char *valuename, BYTE flags, BYTE *lpData, DWORD cbData);

/// @ordinal 425
/// @name SRegSaveString
/// @address 6ffd5d10
BOOL __stdcall SRegSaveString(char *keyname, char *valuename, BYTE flags, char *string);

/// @ordinal 426
/// @name SRegSaveValue
/// @address 6ffd5d80
BOOL __stdcall SRegSaveValue(const char *keyname, const char *valuename, BYTE flags, DWORD result);

/// @ordinal 427
/// @name SRegGetBaseKey
/// @address 6ffd57e0
BOOL __stdcall SRegGetBaseKey(char flags, char *buffer, size_t bufferchars);

/// @ordinal 428
/// @name SRegDeleteValue
/// @address 6ffd5660
BOOL __stdcall SRegDeleteValue(char *keyname, char *valuename, HKEY phkResult);

/// @ordinal 431
/// @name STransBlt
/// @address 6ffdb640
BOOL __stdcall STransBlt(int a1, int a2, int a3, int a4, int a5);

/// @ordinal 432
/// @name STransBltUsingMask
/// @address 6ffdb710
BOOL __stdcall STransBltUsingMask(int a1, int a2, int a3, int a4, int a5);

/// @ordinal 433
/// @name STransCreateI
/// @address 6ffdbc70
BOOL __stdcall STransCreateI(int a1, int a2, int a3, signed int a4, int a5, int a6, int a7);

/// @ordinal 434
/// @name STransDelete
/// @address 6ffdbda0
BOOL __stdcall STransDelete(int a1);

/// @ordinal 436
/// @name STransDuplicate
/// @address 6ffdbeb0
BOOL __stdcall STransDuplicate(int handle, int source);

/// @ordinal 437
/// @name STransIntersectDirtyArray
/// @address 6ffdbff0
BOOL __stdcall STransIntersectDirtyArray(int handle, int dirtyarraymask, unsigned __int8 dirtyarray, int sourcemask);

/// @ordinal 438
/// @name STransInvertMask
/// @address 6ffdbf20
BOOL __stdcall STransInvertMask(int handle, int sourcemask);

/// @ordinal 439
/// @name STransLoadI
/// @address 6ffdc9f0
int __stdcall STransLoadI(char *Str, int, int, int);

/// @ordinal 440
/// @name STransSetDirtyArrayInfo
/// @address 6ffdca40
BOOL __stdcall STransSetDirtyArrayInfo(signed int depth, int depth2, int height, int width);

/// @ordinal 441
/// @name STransUpdateDirtyArray
/// @address 6ffdcb50
BOOL __stdcall STransUpdateDirtyArray(int a1, char a2, int a3, int a4, int a5, int a6);

/// @ordinal 442
/// @name STransPointInMask
/// @address 6ffdc860
BOOL __stdcall STransPointInMask(int, int, int, char *, size_t);

/// @ordinal 443
/// @name STransCombineMasks
/// @address 6ffdc350
BOOL __stdcall STransCombineMasks(int, int, int, int, int, int);

/// @ordinal 444
/// @name STransCreateI2
/// @address 6ffdbd40
BOOL __stdcall STransCreateI2(int, int, int, int, int, int, int);

/// @ordinal 445
/// @name STransCreateE
/// @address 6ffdb7e0
BOOL __stdcall STransCreateE(int, int, int, int, int, int, int);

/// @ordinal 446
/// @name STrans446
/// @address 6ffdbcd0
BOOL __stdcall STrans446(int, int, int, int, int, int, int);

/// @ordinal 447
/// @name STransLoadE
/// @address 6ffdc900
int __stdcall STransLoadE(char *Str, int, int, int);

/// @ordinal 451
/// @name SVidDestroy
/// @address 6ffdd690
BOOL __cdecl SVidDestroy();

/// @ordinal 452
/// @name SVidGetSize
/// @address 6ffdd750
BOOL __stdcall SVidGetSize(int video, int a2, int a3, int a4);

/// @ordinal 453
/// @name SVidInitialize
/// @address 6ffdd820
BOOL __stdcall SVidInitialize(int arg0);

/// @ordinal 454
/// @name SVidPlayBegin
/// @address 6ffddb10
int __stdcall SVidPlayBegin(char *Str, int, int, int, int, int, int);

/// @ordinal 455
/// @name SVidPlayBeginFromMemory
/// @address 6ffde430
int __stdcall SVidPlayBeginFromMemory(LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, int, int, int, int, int, int);

/// @ordinal 456
/// @name SVidPlayContinue
/// @address 6ffde5c0
BOOL __cdecl SVidPlayContinue();

/// @ordinal 457
/// @name SVidPlayContinueSingle
/// @address 6ffde600
BOOL __stdcall SVidPlayContinueSingle(int video, int a2, int a3);

/// @ordinal 458
/// @name SVidPlayEnd
/// @address 6ffdf170
BOOL __stdcall SVidPlayEnd(int video);

/// @ordinal 459
/// @name SVidSetVolume
/// @address 6ffdf290
BOOL __stdcall SVidSetVolume(int video, int a2, int a3, int type);

/// @ordinal 461
/// @name SErrDisplayError
/// @address 6ffc2020
int __stdcall SErrDisplayError(DWORD dwMessageId, int, int, int, int, UINT uExitCode);

/// @ordinal 462
/// @name SErrGetErrorStr
/// @address 6ffc25d0
int __stdcall SErrGetErrorStr(DWORD dwMessageId, LPSTR lpBuffer, DWORD nSize);

/// @ordinal 463
/// @name SErrGetLastError
/// @address 6ffc26f0
DWORD __cdecl SErrGetLastError();

/// @ordinal 464
/// @name SErrRegisterMessageSource
/// @address 6ffc2800
BOOL __stdcall SErrRegisterMessageSource(__int16 a1, int a2, int a3);

/// @ordinal 465
/// @name SErrSetLastError
/// @address 6ffc2940
void __stdcall SErrSetLastError(DWORD dwErrCode);

/// @ordinal 466
/// @name SErrReportNamedResourceLeak
/// @address 6ffc2850
int __stdcall SErrReportNamedResourceLeak(char ArgList, int);

/// @ordinal 467
/// @name SErrReportResourceLeak
/// @address 6ffc2840
int __stdcall SErrReportResourceLeak(char ArgList);

/// @ordinal 468
/// @name SErrSuppressErrors
/// @address 6ffc2960
BOOL __stdcall SErrSuppressErrors(BOOL suppressErrors);

/// @ordinal 469
/// @name SErrRegisterHandler
/// @address 6ffc2740
int __stdcall SErrRegisterHandler(int);

/// @ordinal 470
/// @name SErrUnregisterHandler
/// @address 6ffc2970
void __stdcall SErrUnregisterHandler(int);

/// @ordinal 472
/// @name SCmdGetBool
/// @address 6ffb80a0
BOOL __stdcall SCmdGetBool(int a1);

/// @ordinal 473
/// @name SCmdGetNum
/// @address 6ffb80c0
int __stdcall SCmdGetNum(int a1);

/// @ordinal 474
/// @name SCmdGetString
/// @address 6ffb8100
BOOL __stdcall SCmdGetString(int a1, char *dest, size_t size);

/// @ordinal 475
/// @name SCmdProcess
/// @address 6ffb8180
BOOL __stdcall SCmdProcess(const char **string, int a2, int a3, int a4);

/// @ordinal 476
/// @name SCmdRegisterArgList
/// @address 6ffb8b30
BOOL __stdcall SCmdRegisterArgList(int, int);

/// @ordinal 477
/// @name SCmdRegisterArgument
/// @address 6ffb8b90
BOOL __stdcall SCmdRegisterArgument(int a1, int a2, char *str, int a4, int a5, int a6, int a7, int a8);

/// @ordinal 478
/// @name SCmdStringExists
/// @address 6ffb7f90
int __stdcall SCmdStringExists(int);

/// @ordinal 479
/// @name SCmdProcessCommandLine
/// @address 6ffb8b10
BOOL __stdcall SCmdProcessCommandLine(int, int);

/// @ordinal 481
/// @name SMemFindNextBlock
/// @address 6ffcbe80
BOOL __stdcall SMemFindNextBlock(int, int, int, int);

/// @ordinal 482
/// @name SMemFindNextHeap
/// @address 6ffcc130
BOOL __stdcall SMemFindNextHeap(int prevheap, int details, int nextheap);

/// @ordinal 483
/// @name SMemGetHeapByCaller
/// @address 6ffcc3e0
int __stdcall SMemGetHeapByCaller(int, int);

/// @ordinal 484
/// @name SMemGetHeapByPtr
/// @address 6ffcc480
int __stdcall SMemGetHeapByPtr(int);

/// @ordinal 485
/// @name SMemHeapAlloc
/// @address 6ffcc570
int __stdcall SMemHeapAlloc(int, int, int);

/// @ordinal 486
/// @name SMemHeapCreate
/// @address 6ffcc640
int __stdcall SMemHeapCreate(int, SIZE_T, int);

/// @ordinal 487
/// @name SMemHeapDestroy
/// @address 6ffcc780
BOOL __stdcall SMemHeapDestroy(int);

/// @ordinal 488
/// @name SMemHeapFree
/// @address 6ffcc800
BOOL __stdcall SMemHeapFree(int a1, int a2, void *a3);

/// @ordinal 489
/// @name SMemHeapRealloc
/// @address 6ffcc8c0
int __stdcall SMemHeapRealloc(int a1, int a2, void *a3, int a4);

/// @ordinal 490
/// @name SMemHeapSize
/// @address 6ffccd50
int __stdcall SMemHeapSize(int a1, int a2, void *a3);

/// @ordinal 491
/// @name SMemCopy
/// @address 6ffccf80
int __stdcall SMemCopy(void *dest, const void *source, size_t size);

/// @ordinal 492
/// @name SMemFill
/// @address 6ffccfb0
int __stdcall SMemFill(void *location, size_t length, char fillWith);

/// @ordinal 493
/// @name SMemMove
/// @address 6ffccff0
int __stdcall SMemMove(void *Dst, void *Src, size_t Size);

/// @ordinal 494
/// @name SMemZero
/// @address 6ffcd010
int __stdcall SMemZero(void *location, size_t length);

/// @ordinal 495
/// @name SMemCmp
/// @address 6ffccf60
int __stdcall SMemCmp(void *location1, void *location2, size_t size);

/// @ordinal 496
/// @name SMem496
/// @address 6ffccf10
int __stdcall SMem496(int, char);

/// @ordinal 497
/// @name SMemDumpState
/// @address 6ffcbd60
BOOL __stdcall SMemDumpState(int, int);

/// @ordinal 501
/// @name SStrCopy
/// @address 6ffda120
int __stdcall SStrCopy(char *dest, const char *source, size_t size);

/// @ordinal 502
/// @name SStrHash
/// @address 6ffdad40
DWORD __stdcall SStrHash(const char *string, unsigned __int32 flags, unsigned __int32 Seed);

/// @ordinal 503
/// @name SStrNCat
/// @address 6ffda3c0
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 504
/// @name SStrTokenize
/// @address 6ffdabe0
void __stdcall SStrTokenize(const char **string, char **string, char *buffer, const char *whitespace, size_t size);

/// @ordinal 505
/// @name SStrPack
/// @address 6ffda060
char *__stdcall SStrPack(const char *string, char c, int type);

/// @ordinal 506
/// @name SStrLen
/// @address 6ffda330
int __stdcall SStrLen(const char *string);

/// @ordinal 507
/// @name SStrDup
/// @address 6ffda260
void *__stdcall SStrDup(int a1);

/// @ordinal 508
/// @name SStrCmp
/// @address 6ffda0a0
int __stdcall SStrCmp(char *Str1, char *Str2, size_t MaxCount);

/// @ordinal 509
/// @name SStrCmpI
/// @address 6ffda0e0
int __stdcall SStrCmpI(char *Str1, char *Str, size_t MaxCount);

/// @ordinal 510
/// @name SStrUpper
/// @address 6ffdb240
int __stdcall SStrUpper(char *Str);

/// @ordinal 511
/// @name SMsgBreakHandlerChain
/// @address 6ffcd110
BOOL __stdcall SMsgBreakHandlerChain(int a1);

/// @ordinal 512
/// @name SMsgUnregisterCommand
/// @address 6ffcd630
BOOL __stdcall SMsgUnregisterCommand(int a1, int a2, int a3);

/// @ordinal 513
/// @name SMsgUnregisterKeyDown
/// @address 6ffcd680
BOOL __stdcall SMsgUnregisterKeyDown(int a1, int a2, int a3);

/// @ordinal 514
/// @name SMsgUnregisterKeyUp
/// @address 6ffcd6a0
BOOL __stdcall SMsgUnregisterKeyUp(int a1, int a2, int a3);

/// @ordinal 515
/// @name SMsgUnregisterMessage
/// @address 6ffcd6c0
BOOL __stdcall SMsgUnregisterMessage(int a1, int a2, int a3);

/// @ordinal 516
/// @name SMsgGetDispatcher
/// @address 6ffcd3a0
int __stdcall SMsgGetDispatcher(int a1);

/// @ordinal 517
/// @name SMsgSetDefaultWindow
/// @address 6ffcd610
BOOL __stdcall SMsgSetDefaultWindow(int a1);

/// @ordinal 518
/// @name SMsgGetDefaultWindow
/// @address 6ffcd390
HWND __cdecl SMsgGetDefaultWindow();

/// @ordinal 521
/// @name SRgn521
/// @address 6ffd6060
int __stdcall SRgn521(int a1);

/// @ordinal 523
/// @name SRgn523
/// @address 6ffd69f0
void __stdcall SRgn523(int handle, int a2, int a3, int a4);

/// @ordinal 524
/// @name SRgnCreateRegion
/// @address 6ffd6a50
void __stdcall SRgnCreateRegion(int handle, int a2);

/// @ordinal 525
/// @name SRgnDeleteRegion
/// @address 6ffd6b50
void __stdcall SRgnDeleteRegion(int handle);

/// @ordinal 527
/// @name SRgn527
/// @address 6ffd6d00
void __stdcall SRgn527(int handle, int a2, int a3);

/// @ordinal 528
/// @name SRgn528i
/// @address 6ffd79f0
void __stdcall SRgn528i(int handle, int a2, int a3, int a4);

/// @ordinal 529
/// @name SRgn529i
/// @address 6ffd7b10
void __stdcall SRgn529i(int handle, int a2, int a3);

/// @ordinal 530
/// @name SRgn530i
/// @address 6ffd7000
void __stdcall SRgn530i(int handle, int a2);

/// @ordinal 531
/// @name SRgn531i
/// @address 6ffd7c60
BOOL __stdcall SRgn531i(int handle, int a2, int a3);

/// @ordinal 532
/// @name SRgn532i
/// @address 6ffd7d60
BOOL __stdcall SRgn532i(int handle, int a2);

/// @ordinal 533
/// @name SRgn533i
/// @address 6ffd7e50
void __stdcall SRgn533i(int handle, int a2, int a3);

/// @ordinal 534
/// @name SRgn534
/// @address 6ffd6130
void __stdcall SRgn534(int handle, int a2, int a3, int a4);

/// @ordinal 535
/// @name SRgn535f
/// @address 6ffd7070
void __stdcall SRgn535f(int handle, float a2, float a3, float a4);

/// @ordinal 536
/// @name SRgn536f
/// @address 6ffd7a50
void __stdcall SRgn536f(int handle, float a2, float a3);

/// @ordinal 537
/// @name SRgn537f
/// @address 6ffd6ed0
void __stdcall SRgn537f(int handle, float a2);

/// @ordinal 538
/// @name SRgn538f
/// @address 6ffd7b80
int __stdcall SRgn538f(int, float, float);

/// @ordinal 539
/// @name SRgn539f
/// @address 6ffd7c80
BOOL __stdcall SRgn539f(int handle, float a2);

/// @ordinal 540
/// @name SRgn540f
/// @address 6ffd7db0
int __stdcall SRgn540f(int, float, float);

/// @ordinal 541
/// @name SLogClose
/// @address 6ffca8e0
void __stdcall SLogClose(DWORD NumberOfBytesWritten);

/// @ordinal 542
/// @name SLogCreate
/// @address 6ffcaa60
int __stdcall SLogCreate(LPCSTR lpFileName, int, int);

/// @ordinal 543
/// @name SLog543
/// @address 6ffcb070
void __stdcall SLog543(int a1, int a2);

/// @ordinal 544
/// @name SLogDump
/// @address 6ffcaba0
void __stdcall SLogDump(int a1, int a2, DWORD NumberOfBytesWritten);

/// @ordinal 545
/// @name SLogFlush
/// @address 6ffcaef0
void __stdcall SLogFlush(DWORD NumberOfBytesWritten);

/// @ordinal 546
/// @name SLogFlushAll
/// @address 6ffcaf20
void __cdecl SLogFlushAll();

/// @ordinal 547
/// @name SLogPend
/// @address 6ffcaf90
int __cdecl SLogPend(int, char *Format, char Args);

/// @ordinal 548
/// @name SLogWrite
/// @address 6ffcb0a0
int __cdecl SLogWrite(int, char *Format, char Args);

/// @ordinal 549
/// @name SLog549
/// @address 6ffcb000
void __stdcall SLog549(int a1, int a2);

/// @ordinal 550
/// @name SLogCriticalLog
/// @address 6ffcb030
void __stdcall SLogCriticalLog(HANDLE handle, int a2);

/// @ordinal 551
/// @name SCompCompress
/// @address 6ffbca50
BOOL __stdcall SCompCompress(void *a1, int a2, unsigned int a3, signed int amount, int a5, char a6, int a7);

/// @ordinal 552
/// @name SCompDecompress
/// @address 6ffbcc10
BOOL __stdcall SCompDecompress(void *a1, int *a2, const void *a3, unsigned int a4);

/// @ordinal 561
/// @name SErrCheckDebugSymbolLibrary
/// @address 6ffc1f50
int __cdecl SErrCheckDebugSymbolLibrary(char *Format, char Args);

/// @ordinal 562
/// @name SErrDisplayErrorFmt
/// @address 6ffc2570
int __cdecl SErrDisplayErrorFmt(DWORD dwMessageId, int, int, int, UINT uExitCode, char *Format, char Args);

/// @ordinal 563
/// @name SErrIsDisplayingError
/// @address 6ffc2700
int __cdecl SErrIsDisplayingError();

/// @ordinal 564
/// @name SErrPrepareAppFatal
/// @address 6ffc2710
int __stdcall SErrPrepareAppFatal(int a1, int a2);

/// @ordinal 571
/// @name SStrChr
/// @address 6ffd9fe0
char *__stdcall SStrChr(const char *string, char c);

/// @ordinal 572
/// @name SStrChrR
/// @address 6ffda020
char *__stdcall SStrChrR(const char *string, char c);

/// @ordinal 573
/// @name SStrToDouble
/// @address 6ffda650
double __stdcall SStrToDouble(const char *string);

/// @ordinal 574
/// @name SStrToFloat
/// @address 6ffda830
float __stdcall SStrToFloat(const char *string);

/// @ordinal 575
/// @name SStrToInt
/// @address 6ffdaa10
signed int __stdcall SStrToInt(const char *string);

/// @ordinal 576
/// @name SStrToUnsigned
/// @address 6ffdab90
unsigned int __stdcall SStrToUnsigned(const char *string);

/// @ordinal 577
/// @name SStrToInt64
/// @address 6ffdaa80
__int64 __stdcall SStrToInt64(const char *string);

/// @ordinal 578
/// @name SStrVPrintf
/// @address 6ffda570
int __cdecl SStrVPrintf(char *DstBuf, size_t MaxCount, char *Format, char ArgList);

/// @ordinal 579
/// @name SStrLower
/// @address 6ffdb250
int __stdcall SStrLower(char *Str);

/// @ordinal 580
/// @name SStrHash64
/// @address 6ffdae20
int __stdcall SStrHash64(int a1, int a2, int a3, int a4);

/// @ordinal 581
/// @name SStrPrintf
/// @address 6ffda610
int __cdecl SStrPrintf(char *DstBuf, size_t MaxCount, char *Format, va_list ArgList);

/// @ordinal 582
/// @name SDrawSetClientRect
/// @address 6ffdb1d0
void __stdcall SDrawSetClientRect(LPRECT lpRect);

/// @ordinal 601
/// @name SBigAdd
/// @address 6ffb10b0
int __stdcall SBigAdd(void *buffer, const void *buffer2, const void *buffer3);

/// @ordinal 602
/// @name SBigAnd
/// @address 6ffb1230
int __stdcall SBigAnd(void *buffer, const void *buffer2, const void *buffer3);

/// @ordinal 603
/// @name SBigCompare
/// @address 6ffb1370
int __stdcall SBigCompare(void *buffer, void *buffer2);

/// @ordinal 604
/// @name SBigCopy
/// @address 6ffb1440
int __stdcall SBigCopy(void *buffer, void *buffer2);

/// @ordinal 605
/// @name SBigDec
/// @address 6ffb14c0
int __stdcall SBigDec(void *buffer, const void *buffer2);

/// @ordinal 606
/// @name SBigDel
/// @address 6ffb1620
int __stdcall SBigDel(void *buffer);

/// @ordinal 607
/// @name SBigDiv
/// @address 6ffb16a0
int __stdcall SBigDiv(int a1, const void *buffer1, const void *buffer2);

/// @ordinal 608
/// @name SBigFindPrime
/// @address 6ffb2370
int __stdcall SBigFindPrime(int a1, void *a2, unsigned int a3, const void *a4);

/// @ordinal 609
/// @name SBigFromBinary
/// @address 6ffb3510
int __stdcall SBigFromBinary(void *buffer, const void *str, size_t size);

/// @ordinal 610
/// @name SBigFromStr
/// @address 6ffb3670
int __stdcall SBigFromStr(void *buffer, int a2);

/// @ordinal 611
/// @name SBigFromStream
/// @address 6ffb36c0
int __stdcall SBigFromStream(void *buffer, int a2, int a3, int a4);

/// @ordinal 612
/// @name SBigFromUnsigned
/// @address 6ffb37a0
int __stdcall SBigFromUnsigned(void *buffer, unsigned int value);

/// @ordinal 613
/// @name SBigGcd
/// @address 6ffb37b0
int __stdcall SBigGcd(void *buffer, int a2, int a3);

/// @ordinal 614
/// @name SBigInc
/// @address 6ffb37d0
int __stdcall SBigInc(void *buffer, int a2);

/// @ordinal 615
/// @name SBigInvMod
/// @address 6ffb37f0
int __stdcall SBigInvMod(void *buffer, int a2, int a3);

/// @ordinal 616
/// @name SBigIsEven
/// @address 6ffb39a0
int __stdcall SBigIsEven(void *buffer);

/// @ordinal 617
/// @name SBigIsOdd
/// @address 6ffb39b0
int __stdcall SBigIsOdd(void *buffer);

/// @ordinal 618
/// @name SBigIsOne
/// @address 6ffb3a40
int __stdcall SBigIsOne(void *buffer);

/// @ordinal 619
/// @name SBigIsPrime
/// @address 6ffb3a50
int __stdcall SBigIsPrime(void *buffer);

/// @ordinal 620
/// @name SBigIsZero
/// @address 6ffb3a60
int __stdcall SBigIsZero(void *buffer);

/// @ordinal 621
/// @name SBigMod
/// @address 6ffb3a70
int __stdcall SBigMod(void *buffer, int a2, int a3);

/// @ordinal 622
/// @name SBigMul
/// @address 6ffb3ab0
int __stdcall SBigMul(void *buffer, int a2, int a3);

/// @ordinal 623
/// @name SBigMulMod
/// @address 6ffb3ad0
int __stdcall SBigMulMod(void *buffer, int a2, int a3, int a4);

/// @ordinal 624
/// @name SBigNew
/// @address 6ffb3af0
int __stdcall SBigNew(void **buffer);

/// @ordinal 625
/// @name SBigNot
/// @address 6ffb3b70
int __stdcall SBigNot(void *buffer, int a2);

/// @ordinal 626
/// @name SBigOr
/// @address 6ffb3c70
int __stdcall SBigOr(void *buffer, int a2, int a3);

/// @ordinal 627
/// @name SBigPow
/// @address 6ffb3db0
int __stdcall SBigPow(void *buffer, int a2, int a3);

/// @ordinal 628
/// @name SBigPowMod
/// @address 6ffb3f10
int __stdcall SBigPowMod(void *buffer, int a2, int a3, int a4);

/// @ordinal 629
/// @name SBigRand
/// @address 6ffb3f30
int __stdcall SBigRand(void *buffer, int a2, int a3);

/// @ordinal 630
/// @name SBigSet2Exp
/// @address 6ffb41e0
int __stdcall SBigSet2Exp(void *buffer, int a2);

/// @ordinal 631
/// @name SBigSetOne
/// @address 6ffb41f0
int __stdcall SBigSetOne(void *buffer);

/// @ordinal 632
/// @name SBigSetZero
/// @address 6ffb4200
int __stdcall SBigSetZero(void *buffer);

/// @ordinal 633
/// @name SBigShl
/// @address 6ffb4210
int __stdcall SBigShl(void *buffer, int a2, int a3);

/// @ordinal 634
/// @name SBigShr
/// @address 6ffb4230
int __stdcall SBigShr(void *buffer, int a2, int a3);

/// @ordinal 635
/// @name SBigSquare
/// @address 6ffb4250
int __stdcall SBigSquare(void *buffer, int a2);

/// @ordinal 636
/// @name SBigSub
/// @address 6ffb4270
int __stdcall SBigSub(void *buffer, int a2, int a3);

/// @ordinal 637
/// @name SBigToBinaryArray
/// @address 6ffb4290
int __stdcall SBigToBinaryArray(void *buffer, int a2, int a3);

/// @ordinal 638
/// @name SBigToBinaryBuffer
/// @address 6ffb44f0
int __stdcall SBigToBinaryBuffer(void *buffer, int a2, int a3, int a4);

/// @ordinal 639
/// @name SBigToBinaryPtr
/// @address 6ffb4540
int __stdcall SBigToBinaryPtr(void *buffer, int a2, int a3);

/// @ordinal 640
/// @name SBigToStrArray
/// @address 6ffb4580
int __stdcall SBigToStrArray(void *buffer, int a2, int a3);

/// @ordinal 641
/// @name SBigToStrBuffer
/// @address 6ffb4810
int __stdcall SBigToStrBuffer(void *buffer, char *dst, int count);

/// @ordinal 642
/// @name SBigToStrPtr
/// @address 6ffb4840
int __stdcall SBigToStrPtr(void *buffer, int a2);

/// @ordinal 643
/// @name SBigToStreamArray
/// @address 6ffb4870
int __stdcall SBigToStreamArray(void *buffer, int a2, int a3);

/// @ordinal 644
/// @name SBigToStreamBuffer
/// @address 6ffb4a70
int __stdcall SBigToStreamBuffer(void *buffer, int a2, int a3, int a4);

/// @ordinal 645
/// @name SBigToStreamPtr
/// @address 6ffb4ac0
int __stdcall SBigToStreamPtr(void *buffer, int a2, int a3);

/// @ordinal 646
/// @name SBigToUnsigned
/// @address 6ffb4af0
int __stdcall SBigToUnsigned(void *buffer, int a2);

/// @ordinal 647
/// @name SBigXor
/// @address 6ffb4b20
int __stdcall SBigXor(void *buffer, int a2, int a3);

/// @ordinal 901
/// @name SUniConvertUTF16to8Len
/// @address 6ffdcc20
int __stdcall SUniConvertUTF16to8Len(int a1, int a2, int a3);

/// @ordinal 902
/// @name SUniConvertUTF16to8
/// @address 6ffdcd20
int __stdcall SUniConvertUTF16to8(int a1, int a2, int a3, int a4, int a5, int a6);

/// @ordinal 903
/// @name SUniConvertUTF8to16Len
/// @address 6ffdcf00
int __stdcall SUniConvertUTF8to16Len(int a1, int a2, int a3);

/// @ordinal 904
/// @name SUniConvertUTF8to16
/// @address 6ffdd000
int __stdcall SUniConvertUTF8to16(int a1, int a2, int a3, int a4, int a5, int a6);

/// @ordinal 905
/// @name SUniS905
/// @address 6ffdd1a0
int __stdcall SUniS905(int a1, int a2);

/// @ordinal 906
/// @name SUniS906
/// @address 6ffdd2a0
int __stdcall SUniS906(int a1, int a2);

/// @ordinal 907
/// @name SUniFindAfterUTF8Chr
/// @address 6ffdd3a0
int __stdcall SUniFindAfterUTF8Chr(int a1, int a2);

/// @ordinal 908
/// @name SUniFindUTF8ChrStart
/// @address 6ffdd3f0
int __stdcall SUniFindUTF8ChrStart(int a1, int a2);

/// @ordinal 909
/// @name SUniConvertUTF16To909
/// @address 6ffdd410
int __stdcall SUniConvertUTF16To909(unsigned __int32 a1, char *a2, unsigned __int16 *a3);

/// @ordinal 910
/// @name SUniConvertUTF16To910
/// @address 6ffdd4c0
int __stdcall SUniConvertUTF16To910(unsigned __int32 a1, char *a2, unsigned __int16 *a3);

/// @ordinal 911
/// @name SUniConvertUTF16To911
/// @address 6ffdd4e0
int __stdcall SUniConvertUTF16To911(unsigned __int32 a1, char *a2, unsigned __int16 *a3);

/// @ordinal 912
/// @name SUniConvert912
/// @address 6ffdd500
int __stdcall SUniConvert912(int a1, int a2, int a3);

/// @ordinal 913
/// @name SUniConvert913
/// @address 6ffdd570
int __stdcall SUniConvert913(int a1, int a2, int a3);

/// @ordinal 914
/// @name SUniConvert914
/// @address 6ffdd590
int __stdcall SUniConvert914(int a1, int a2, int a3);

