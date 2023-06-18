// List of Fog.dll exports (base address 6ff50000)
// For each of the other .DLLs, here are the number of imports of the current module exports:
// (Note that this is not the number of uses/references, just the number of times the current module is listed in the import table)
// |- D2CMP.dll        :  23
// |- D2CMPd.dll       :  28
// |- D2Client.dll     :  55
// |- D2Common.dll     :  44
// |- D2DDraw.dll      :   8
// |- D2Direct3D.dll   :   8
// |- D2Game.dll       :  31
// |- D2Gdi.dll        :   4
// |- D2Glide.dll      :   6
// |- D2Lang.dll       :  10
// |- D2Launch.dll     :  25
// |- D2MCPClient.dll  :  15
// |- D2Multi.dll      :  14
// |- D2Net.dll        :  37
// |- D2OpenGL.dll     :   1
// |- D2Server.dll     :  29
// |- D2Win.dll        :  27
// |- D2gfx.dll        :   7
// |- D2sound.dll      :   9
// |- Game.exe         :  12


/// @ordinal 10000
/// @name SOCKET_CloseSocket
/// @address 6ff63280
/// Imported by ['D2Net.dll']
int __fastcall SOCKET_CloseSocket(SOCKET s);

/// @ordinal 10001
/// @name SOCKET_WSAStartup
/// @address 6ff63290
/// Not imported by any .dll
BOOL __fastcall SOCKET_WSAStartup();

/// @ordinal 10002
/// @name SOCKET_WSACleanup
/// @address 6ff632c0
/// Not imported by any .dll
int __fastcall SOCKET_WSACleanup();

/// @ordinal 10003
/// @name SOCKET_Connect
/// @address 6ff632d0
/// Not imported by any .dll
FSafeSock *__fastcall SOCKET_Connect(char *szHostAddress, uint16_t nPortNumber, LPTHREAD_START_ROUTINE pThreadProc, LPVOID lpParameter, const char *szName);

/// @ordinal 10004
/// @name SOCKET_ConnectEx
/// @address 6ff632f0
/// Not imported by any .dll
FSafeSock *__fastcall SOCKET_ConnectEx(char *szHostAddress, uint16_t nPortNumber, LPTHREAD_START_ROUTINE pThreadProc, LPVOID lpParameter, const char *szName, BOOL bNonBlocking);

/// @ordinal 10005
/// @name SOCKET_Destroy
/// @address 6ff63590
/// Not imported by any .dll
void __thiscall SOCKET_Destroy(FSafeSock *pSafeSock);

/// @ordinal 10006
/// @name SOCKET_Receive
/// @address 6ff63630
/// Not imported by any .dll
int __fastcall SOCKET_Receive(FSafeSock *pSafeSock, char *pBuffer, int nBufferLength);

/// @ordinal 10007
/// @name SOCKET_Send
/// @address 6ff63690
/// Not imported by any .dll
int __fastcall SOCKET_Send(FSafeSock *pSafeSock, const char *pBuffer, int nBufferLength);

/// @ordinal 10008
/// @name SOCKET_Select
/// @address 6ff63770
/// Not imported by any .dll
signed int __thiscall SOCKET_Select(FSafeSock *pSafeSock);

/// @ordinal 10009
/// @name SOCKET_SendNoLock
/// @address 6ff63700
/// Not imported by any .dll
int __fastcall SOCKET_SendNoLock(FSafeSock *pSafeSock, const char *pBuffer, int nBufferLength);

/// @ordinal 10010
/// @name SOCKET_Lock
/// @address 6ff63750
/// Not imported by any .dll
void __thiscall SOCKET_Lock(FSafeSock *this);

/// @ordinal 10011
/// @name SOCKET_Unlock
/// @address 6ff63760
/// Not imported by any .dll
void __thiscall SOCKET_Unlock(FSafeSock *this);

/// @ordinal 10012
/// @name SOCKET_GetPeerName
/// @address 6ff63860
/// Imported by ['D2MCPClient.dll']
BOOL __fastcall SOCKET_GetPeerName(FSafeSock *pSafeSock, struct sockaddr *name, int *namelen);

/// @ordinal 10013
/// @name GetHostIPAddress
/// @address 6ff638e0
/// Imported by ['D2Client.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Server.dll']
/// @guessedtype int()

/// @ordinal 10014
/// @name inet_ntoa
/// @address 6ff63a00
/// Imported by ['D2MCPClient.dll', 'D2Multi.dll']
char *__fastcall inet_ntoa(ULONG in);

/// @ordinal 10015
/// @name ResolveHostIPAddress
/// @address 6ff63a40
/// Imported by ['D2Launch.dll', 'D2Net.dll']
char *__fastcall ResolveHostIPAddress(char *szHostName);

/// @ordinal 10016
/// @name SOCK_GetError
/// @address 6ff63a20
/// Imported by ['D2MCPClient.dll']
MACRO_FALSE __fastcall SOCK_GetError(FSafeSock *pSafeSock, _DWORD *pFogErrorCode, _DWORD *pWSALastError);

/// @ordinal 10017
/// @name SOCKET_SetBlockingMode
/// @address 6ff63b20
/// Not imported by any .dll
BOOL __fastcall SOCKET_SetBlockingMode(FSafeSock *pSafeSock, BOOL bNonBlocking);

/// @ordinal 10018
/// @name sprintf
/// @address 6ff5dd90
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2Game.dll', 'D2gfx.dll']
char *sprintf(char *destBuffer, const char *formatSring, ...);

/// @ordinal 10019
/// @name Fog_10019
/// @address 6ff5e1b0
/// Imported by ['D2Server.dll', 'Game.exe']
int __stdcall Fog_10019(int, int);

/// @ordinal 10020
/// @name Fog_10020
/// @address 6ff5e440
/// Imported by ['D2Server.dll']
/// @guessedtype int()

/// @ordinal 10021
/// @name Fog_10021
/// @address 6ff5e1a0
/// Imported by ['D2Server.dll', 'Game.exe']
/// @guessedtype int()

/// @ordinal 10022
/// @name Fog_10022
/// @address 6ff5df20
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2DDraw.dll', 'D2Direct3D.dll', 'D2Server.dll']
/// @guessedtype int()

/// @ordinal 10023
/// @name Assertion
/// @address 6ff5ed30
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2DDraw.dll', 'D2Direct3D.dll', 'D2Game.dll', 'D2Gdi.dll', 'D2Glide.dll', 'D2Lang.dll', 'D2Launch.dll', 'D2MCPClient.dll', 'D2Multi.dll', 'D2Net.dll', 'D2Win.dll', 'D2gfx.dll', 'D2sound.dll']
void Assertion(const char *Msg, const char *szFile, int nLine, ...);

/// @ordinal 10024
/// @name Fog_10024
/// @address 6ff5ed60
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2Game.dll', 'D2Lang.dll', 'D2Net.dll', 'D2Server.dll', 'D2Win.dll', 'D2gfx.dll']
/// @guessedtype int __cdecl(int, char *szFile, int nLine)

/// @ordinal 10025
/// @name Fog_10025
/// @address 6ff5ed90
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2Game.dll', 'D2Win.dll']
void __cdecl Fog_10025(int szErrorStr, char *szFile, int nLine);

/// @ordinal 10026
/// @name Fog_10026
/// @address 6ff5edf0
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2Lang.dll', 'D2Server.dll', 'D2Win.dll', 'D2sound.dll']
void __cdecl Fog_10026(DWORD Type, char *pMsg, char *szFile, int nLine);

/// @ordinal 10027
/// @name Fog_10027
/// @address 6ff5edc0
/// Not imported by any .dll
/// @guessedtype int __cdecl(char *szFile, int)

/// @ordinal 10028
/// @name Fog_10028
/// @address 6ff5f100
/// Imported by ['D2gfx.dll']
void Fog_10028(int outputCategory, const char *szFile, int nLine, char *szFormat_1, ...);

/// @ordinal 10029
/// @name PostToDebugFile
/// @address 6ff620a0
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2DDraw.dll', 'D2Direct3D.dll', 'D2Game.dll', 'D2Gdi.dll', 'D2Glide.dll', 'D2Lang.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll', 'D2gfx.dll', 'D2sound.dll']
void PostToDebugFile(const char *format, ...);

/// @ordinal 10030
/// @name Fog_10030
/// @address 6ff620e0
/// Imported by ['D2CMP.dll', 'D2Game.dll']
int Fog_10030(const char *, char *format, ...);

/// @ordinal 10031
/// @name Fog_10031
/// @address 6ff62180
/// Not imported by any .dll
void Fog_10031(char *format, ...);

/// @ordinal 10032
/// @name Fog_10032
/// @address 6ff62210
/// Not imported by any .dll
void __cdecl Fog_10032(const char *source, const char *string, void *lp, UINT_PTR ucb, int a5, int a6, int a7);

/// @ordinal 10033
/// @name Fog_10033
/// @address 6ff5fa10
/// Imported by ['D2Server.dll']
int __thiscall Fog_10033(HANDLE hSourceHandle);

/// @ordinal 10034
/// @name Fog_10034
/// @address 6ff5f950
/// Imported by ['D2Server.dll']
int __thiscall Fog_10034(HANDLE hSourceHandle);

/// @ordinal 10035
/// @name Fog_10035
/// @address 6ff5ddb0
/// Not imported by any .dll
/// @guessedtype int __cdecl(int, char)

/// @ordinal 10036
/// @name Fog_10036
/// @address 6ff5dee0
/// Imported by ['D2Server.dll']
/// @guessedtype int __cdecl(int, int, char)

/// @ordinal 10037
/// @name Fog_10037
/// @address 6ff5dec0
/// Imported by ['D2Server.dll']
/// @guessedtype int __cdecl(int, char)

/// @ordinal 10038
/// @name Fog_10038
/// @address 6ff5df00
/// Imported by ['D2Server.dll']
/// @guessedtype int __cdecl(int, char)

/// @ordinal 10039
/// @name Fog_10039
/// @address 6ff5f2a0
/// Imported by ['D2Client.dll', 'D2Win.dll']
/// @guessedtype int()

/// @ordinal 10040
/// @name Fog_10040
/// @address 6ff62460
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10041
/// @name Fog_10041
/// @address 6ff58f40
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10042
/// @name AllocClientMemory
/// @address 6ff58f50
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2DDraw.dll', 'D2Direct3D.dll', 'D2Game.dll', 'D2Gdi.dll', 'D2Glide.dll', 'D2Lang.dll', 'D2Launch.dll', 'D2MCPClient.dll', 'D2Multi.dll', 'D2Net.dll', 'D2Win.dll', 'D2sound.dll', 'Game.exe']
void *__fastcall AllocClientMemory(int nSize, char *szFile, int nLine, int n0);

/// @ordinal 10043
/// @name FreeClientMemory
/// @address 6ff58f90
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2DDraw.dll', 'D2Direct3D.dll', 'D2Gdi.dll', 'D2Glide.dll', 'D2Lang.dll', 'D2Launch.dll', 'D2MCPClient.dll', 'D2Multi.dll', 'D2Net.dll', 'D2Win.dll', 'D2sound.dll', 'Game.exe']
void __fastcall FreeClientMemory(void *pFree, const char *szFile, int nLine, int n0);

/// @ordinal 10044
/// @name Realloc
/// @address 6ff58fb0
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10045
/// @name AllocPool
/// @address 6ff58ff0
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2Game.dll', 'D2Win.dll']
int __fastcall AllocPool(int a1, int dwSize, char *sourceFile, int sourceLine, int a5);

/// @ordinal 10046
/// @name FreePool
/// @address 6ff59030
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2Game.dll', 'D2Win.dll']
void __fastcall FreePool(void *pMemPool, void *pFree, const char *szFile, int nLine, int n0);

/// @ordinal 10047
/// @name ReallocPool
/// @address 6ff59060
/// Imported by ['D2Common.dll', 'D2Server.dll']
/// @guessedtype int __stdcall(int, char *szFile, int nLine, int)

/// @ordinal 10048
/// @name Fog_10243
/// @address 6ff51de0
/// Imported by ['D2Server.dll']
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10049
/// @name Fog_10243
/// @address 6ff51de0
/// Imported by ['D2Server.dll']
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10050
/// @name EnterCriticalSection
/// @address 6ff5dc20
/// Imported by ['D2Common.dll', 'D2Game.dll', 'D2Net.dll', 'D2Server.dll']
int __thiscall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);

/// @ordinal 10051
/// @name LeaveCriticalSection
/// @address 6ff5dc40
/// Imported by ['D2Server.dll']
int __thiscall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);

/// @ordinal 10052
/// @name TopLevelExceptionFilter
/// @address 6ff5e6b0
/// Imported by ['D2Server.dll']
LONG __stdcall TopLevelExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo);

/// @ordinal 10053
/// @name Fog_10243
/// @address 6ff51de0
/// Imported by ['D2Server.dll']
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10054
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10055
/// @name Fog_10055
/// @address 6ff5a690
/// Imported by ['D2Client.dll', 'D2Game.dll', 'D2Server.dll']
uint32_t __cdecl Fog_10055();

/// @ordinal 10056
/// @name Fog_10056
/// @address 6ff5a760
/// Imported by ['D2Server.dll']
/// @guessedtype int()

/// @ordinal 10057
/// @name Fog_10057
/// @address 6ff5a840
/// Not imported by any .dll
int __cdecl Fog_10057(LPMEMORYSTATUS lpBuffer);

/// @ordinal 10058
/// @name Fog_10058
/// @address 6ff5a580
/// Imported by ['D2Server.dll']
/// @guessedtype int()

/// @ordinal 10059
/// @name Fog_10059
/// @address 6ff5a5b0
/// Not imported by any .dll
DWORD __stdcall Fog_10059();

/// @ordinal 10060
/// @name CreateDataArray
/// @address 6ff5d7e0
/// Imported by ['D2Client.dll']
DataArray *__fastcall CreateDataArray(char *pszName, int numObjects, int nObjectSize);

/// @ordinal 10061
/// @name DestroyDataArray
/// @address 6ff5d860
/// Imported by ['D2Client.dll']
void __thiscall DestroyDataArray(DataArray *this);

/// @ordinal 10062
/// @name InitDataArray
/// @address 6ff5d890
/// Imported by ['D2Client.dll']
int __thiscall InitDataArray(DataArray *pDataArray);

/// @ordinal 10063
/// @name ResetDataArray
/// @address 6ff5d8f0
/// Imported by ['D2Client.dll']
void __thiscall ResetDataArray(DataArray *lptDataArray);

/// @ordinal 10064
/// @name DataArray_NewElement
/// @address 6ff5d970
/// Imported by ['D2Client.dll']
int __thiscall DataArray_NewElement(DataArray *lptDataArray);

/// @ordinal 10065
/// @name DataArray_DestroyElement
/// @address 6ff5da50
/// Imported by ['D2Client.dll']
void __fastcall DataArray_DestroyElement(DataArray *pDataArray, DataArrayElementHandle hElement);

/// @ordinal 10066
/// @name UNK_DataArray
/// @address 6ff5dbc0
/// Not imported by any .dll
char *__fastcall UNK_DataArray(DataArray *a1, DataArrayElementHandle a2);

/// @ordinal 10067
/// @name DataArray_ElementIsValid
/// @address 6ff5db00
/// Not imported by any .dll
int __fastcall DataArray_ElementIsValid(DataArray *lptDataArray, DataArrayElementHandle hElement);

/// @ordinal 10068
/// @name Fog_10068
/// @address 6ff51920
/// Imported by ['D2MCPClient.dll']
/// @guessedtype int __stdcall(char *source, int, int)

/// @ordinal 10069
/// @name Fog_10069
/// @address 6ff51a10
/// Imported by ['D2MCPClient.dll']
/// @guessedtype int __stdcall(void *pFree)

/// @ordinal 10070
/// @name Fog_10070
/// @address 6ff51210
/// Imported by ['D2MCPClient.dll']
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10071
/// @name Fog_10071
/// @address 6ff51390
/// Imported by ['D2MCPClient.dll']
/// @guessedtype int __stdcall(int, char *pBuffer, int)

/// @ordinal 10072
/// @name Fog_10072
/// @address 6ff51400
/// Imported by ['D2MCPClient.dll']
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10073
/// @name Fog_10073
/// @address 6ff517f0
/// Imported by ['D2MCPClient.dll']
int __stdcall Fog_10073(LPVOID lpParameter);

/// @ordinal 10074
/// @name Fog_10074
/// @address 6ff51860
/// Not imported by any .dll
int __stdcall Fog_10074(LPVOID lpParameter);

/// @ordinal 10075
/// @name Fog_10075
/// @address 6ff518c0
/// Imported by ['D2MCPClient.dll', 'D2Server.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10076
/// @name Fog_10076
/// @address 6ff51ab0
/// Imported by ['D2Server.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10077
/// @name Fog_10077
/// @address 6ff511f0
/// Imported by ['D2MCPClient.dll', 'D2Server.dll']
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10078
/// @name Fog_10078
/// @address 6ff515b0
/// Imported by ['D2Server.dll']
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 10079
/// @name Fog_10079
/// @address 6ff51ad0
/// Imported by ['D2MCPClient.dll', 'D2Server.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10080
/// @name Fog_10080
/// @address 6ff51af0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10081
/// @name Fog_10182
/// @address 6ff51b10
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10082
/// @name Fog_10243
/// @address 6ff51de0
/// Imported by ['Game.exe']
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10083
/// @name Cos_LUT
/// @address 6ff51df0
/// Imported by ['D2Client.dll', 'D2Common.dll']
float __stdcall Cos_LUT(__int16 index);

/// @ordinal 10084
/// @name Sin_LUT
/// @address 6ff51e10
/// Imported by ['D2Client.dll', 'D2Common.dll']
float __stdcall Sin_LUT(__int16 index);

/// @ordinal 10085
/// @name Decode14BitsFromString
/// @address 6ff51b20
/// Imported by ['D2Launch.dll', 'D2Multi.dll']
int __stdcall Decode14BitsFromString(uint16_t *a1);

/// @ordinal 10086
/// @name Encode14BitsToString
/// @address 6ff51b40
/// Imported by ['D2Game.dll', 'D2Launch.dll']
void __stdcall Encode14BitsToString(uint16_t *a1, unsigned int a2);

/// @ordinal 10087
/// @name Decode28BitsFromString
/// @address 6ff51b60
/// Not imported by any .dll
int __stdcall Decode28BitsFromString(const char *szEncodedString);

/// @ordinal 10088
/// @name Fog_10088
/// @address 6ff51ba0
/// Not imported by any .dll
void __stdcall Fog_10088(int a1, unsigned int a2);

/// @ordinal 10089
/// @name AsyncDataInitialize
/// @address 6ff5c010
/// Imported by ['Game.exe']
void __thiscall AsyncDataInitialize(BOOL bUseEvents);

/// @ordinal 10090
/// @name FreeAsyncDataList
/// @address 6ff5c0e0
/// Imported by ['Game.exe']
/// @guessedtype int()

/// @ordinal 10091
/// @name AsyncDataLoadFileEx
/// @address 6ff5c2b0
/// Imported by ['D2CMP.dll', 'D2CMPd.dll', 'D2Client.dll']
AsyncData *__fastcall AsyncDataLoadFileEx(void *pMemPool, const char *pFileName, BOOL bAllowAsync, LONG nFileOffset, int nFileSize, void *pBuffer, AsyncDataLoadFileCallback *asyncOpDesc, int nPriority, const char *sourceFile, int sourceLine);

/// @ordinal 10092
/// @name AsyncDataTestLoaded
/// @address 6ff5c480
/// Imported by ['D2CMP.dll', 'D2CMPd.dll', 'D2Client.dll']
int __thiscall AsyncDataTestLoaded(AsyncData *ptAsyncData);

/// @ordinal 10093
/// @name AsyncDataWaitAndGetBuffer
/// @address 6ff5c630
/// Not imported by any .dll
DWORD __thiscall AsyncDataWaitAndGetBuffer(AsyncData *ptAsyncData);

/// @ordinal 10094
/// @name AsyncDataGetBuffer
/// @address 6ff5c700
/// Imported by ['D2CMP.dll', 'D2CMPd.dll', 'D2Client.dll']
void *__thiscall AsyncDataGetBuffer(AsyncData *ptAsyncData);

/// @ordinal 10095
/// @name AsyncDataGetBufferSize
/// @address 6ff5c790
/// Imported by ['D2CMP.dll', 'D2CMPd.dll', 'D2Client.dll']
int __thiscall AsyncDataGetBufferSize(AsyncData *ptAsyncData);

/// @ordinal 10096
/// @name AsyncDataSetResults
/// @address 6ff5c7e0
/// Not imported by any .dll
void __fastcall AsyncDataSetResults(AsyncData *pAsyncData, int a2, void *pBuffer, int nFileSize);

/// @ordinal 10097
/// @name AsyncDataFree
/// @address 6ff5c880
/// Imported by ['D2CMP.dll', 'D2CMPd.dll', 'D2Client.dll']
signed int __thiscall AsyncDataFree(int ptAsyncData);

/// @ordinal 10098
/// @name Fog_10192
/// @address 6ff5c9d0
/// Imported by ['D2Client.dll']
/// @guessedtype int()

/// @ordinal 10099
/// @name AsyncDataSetPriority
/// @address 6ff5c4e0
/// Not imported by any .dll
int __fastcall AsyncDataSetPriority(AsyncData *ptAsyncData, int nPriority);

/// @ordinal 10100
/// @name AsyncDataHandlePriorityChanges
/// @address 6ff5c5a0
/// Not imported by any .dll
int __thiscall AsyncDataHandlePriorityChanges(BOOL bPostpone);

/// @ordinal 10101
/// @name Fog_10101
/// @address 6ff61590
/// Imported by ['Game.exe']
/// @guessedtype int()

/// @ordinal 10102
/// @name MPQFileOpen
/// @address 6ff61600
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2Lang.dll', 'D2Launch.dll', 'D2Win.dll', 'D2sound.dll']
int __fastcall MPQFileOpen(const char *pFileName, HSFILE *hFILE);

/// @ordinal 10103
/// @name Fog_10103
/// @address 6ff61610
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2Lang.dll', 'D2Launch.dll', 'D2Win.dll', 'D2sound.dll']
/// @guessedtype int()

/// @ordinal 10104
/// @name MPQFileRead
/// @address 6ff61620
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2Lang.dll', 'D2Launch.dll', 'D2Win.dll', 'D2sound.dll']
BOOL __fastcall MPQFileRead(HSFILE hFile, void *pBuffer, DWORD nBufferSize, DWORD *lpFileSizeHigh, LPOVERLAPPED pOverlapped, AsyncDataLoadFileCallback *pAsyncOpDesc, int a6);

/// @ordinal 10105
/// @name SFileGetFileSize
/// @address 6ff61650
/// Imported by ['D2CMP.dll', 'D2Client.dll', 'D2Common.dll', 'D2Lang.dll', 'D2Launch.dll', 'D2Win.dll', 'D2sound.dll']
DWORD __fastcall SFileGetFileSize(HSFILE hFile, LPDWORD lpFileSizeHigh);

/// @ordinal 10106
/// @name SFileSetFilePointer
/// @address 6ff61660
/// Imported by ['D2CMP.dll']
DWORD __fastcall SFileSetFilePointer(HSFILE hFile, LONG lDistanceToMove, DWORD *lpDistanceToMoveHigh, DWORD dwMoveMethod);

/// @ordinal 10107
/// @name Fog_10107
/// @address 6ff61680
/// Imported by ['D2Client.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
int __fastcall Fog_10107(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);

/// @ordinal 10108
/// @name Fog_10108
/// @address 6ff616b0
/// Imported by ['D2Client.dll', 'D2Launch.dll']
int __thiscall Fog_10108(LPCSTR lpFileName);

/// @ordinal 10109
/// @name Fog_10109
/// @address 6ff616c0
/// Imported by ['D2Client.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
int __thiscall Fog_10109(HANDLE hObject);

/// @ordinal 10110
/// @name ReadFile
/// @address 6ff616d0
/// Imported by ['D2Client.dll', 'D2Launch.dll']
BOOL __fastcall ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);

/// @ordinal 10111
/// @name WriteFile
/// @address 6ff616f0
/// Imported by ['D2Client.dll', 'D2Launch.dll', 'D2Multi.dll']
BOOL __fastcall WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);

/// @ordinal 10112
/// @name Fog_10112
/// @address 6ff61710
/// Imported by ['D2Client.dll', 'D2Launch.dll']
int __fastcall Fog_10112(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);

/// @ordinal 10113
/// @name Fog_10113
/// @address 6ff61800
/// Imported by ['D2Server.dll']
/// @guessedtype int __thiscall(char *string)

/// @ordinal 10114
/// @name Fog_10114
/// @address 6ff61730
/// Imported by ['D2Client.dll', 'D2Launch.dll']
/// @guessedtype int()

/// @ordinal 10115
/// @name GetSavePath
/// @address 6ff61900
/// Imported by ['D2Client.dll', 'D2Game.dll', 'D2Launch.dll']
size_t __fastcall GetSavePath(LPSTR pPathBuffer, size_t nBufferSize);

/// @ordinal 10116
/// @name Fog_10116
/// @address 6ff61870
/// Imported by ['D2Client.dll', 'D2Win.dll', 'Game.exe']
DWORD __fastcall Fog_10116(LPSTR lpFilename, DWORD nSize);

/// @ordinal 10117
/// @name Fog_10117
/// @address 6ff61a10
/// Imported by ['D2DDraw.dll', 'D2Direct3D.dll', 'D2Glide.dll', 'D2Win.dll']
/// @guessedtype int()

/// @ordinal 10118
/// @name BITMANIP_SetBitState
/// @address 6ff53320
/// Imported by ['D2Common.dll', 'D2Game.dll']
char __stdcall BITMANIP_SetBitState(_BYTE *pBitStream, signed int nBit);

/// @ordinal 10119
/// @name Fog_10119
/// @address 6ff53340
/// Imported by ['D2Common.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10120
/// @name Fog_10120
/// @address 6ff53370
/// Imported by ['D2Common.dll', 'D2Game.dll']
char __stdcall Fog_10120(_BYTE *pBitStream, signed int nBit);

/// @ordinal 10121
/// @name Fog_10121
/// @address 6ff53390
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10122
/// @name Fog_10122
/// @address 6ff533b0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 10123
/// @name Fog_10123
/// @address 6ff53460
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 10124
/// @name Fog_10124
/// @address 6ff53510
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10125
/// @name Fog_10125
/// @address 6ff535a0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 10126
/// @name Fog_10126
/// @address 6ff53650
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10127
/// @name Fog_10127
/// @address 6ff536a0
/// Imported by ['D2Common.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10128
/// @name Fog_10128
/// @address 6ff536c0
/// Imported by ['D2Common.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10129
/// @name Fog_10129
/// @address 6ff53850
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10130
/// @name Fog_10130
/// @address 6ff53840
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10131
/// @name Fog_10131
/// @address 6ff53890
/// Imported by ['D2Common.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10132
/// @name Fog_10132
/// @address 6ff538c0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10133
/// @name Fog_10133
/// @address 6ff538e0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10134
/// @name Fog_10134
/// @address 6ff53a10
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10135
/// @name Fog_10135
/// @address 6ff53b80
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int, int, int)

/// @ordinal 10136
/// @name Fog_10136
/// @address 6ff53ca0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int, int, int)

/// @ordinal 10137
/// @name ComputeStringCRC16
/// @address 6ff53db0
/// Imported by ['D2Game.dll']
unsigned __int16 __stdcall ComputeStringCRC16(uint8_t *szString);

/// @ordinal 10138
/// @name Fog_10138
/// @address 6ff53e20
/// Imported by ['D2Multi.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10139
/// @name Fog_10139
/// @address 6ff53eb0
/// Imported by ['D2Server.dll']
/// @guessedtype int()

/// @ordinal 10140
/// @name STR_EscapeToLiteral
/// @address 6ff53ed0
/// Not imported by any .dll
char *__fastcall STR_EscapeToLiteral(char *pDestBuff, char *pSrcBuffer, int destsize, char cLiteralDelimiter);

/// @ordinal 10141
/// @name Fog_10141
/// @address 6ff54040
/// Not imported by any .dll
/// @guessedtype int __stdcall(__int64)

/// @ordinal 10142
/// @name CreateNewPoolSystem
/// @address 6ff5a280
/// Imported by ['D2Client.dll', 'D2Game.dll']
void __cdecl CreateNewPoolSystem(char **ppPoolManager, const char *szManagerName, signed int nPoolsToCreate, int nUnused);

/// @ordinal 10143
/// @name DestroyMemoryPoolSystem
/// @address 6ff5a100
/// Imported by ['D2Client.dll', 'D2Game.dll', 'Game.exe']
void __cdecl DestroyMemoryPoolSystem(D2PoolManagerStrc *pMemPoolManager);

/// @ordinal 10144
/// @name Fog_10144
/// @address 6ff59e90
/// Imported by ['D2Client.dll']
/// @guessedtype int __cdecl(LPCRITICAL_SECTION lpCriticalSection)

/// @ordinal 10145
/// @name Fog_10145
/// @address 6ff5a4a0
/// Imported by ['D2Client.dll']
/// @guessedtype int __cdecl(int, int)

/// @ordinal 10146
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10147
/// @name GetMemoryUsage
/// @address 6ff5a4e0
/// Imported by ['D2Game.dll']
int __cdecl GetMemoryUsage(void *pMempool);

/// @ordinal 10148
/// @name Fog_10192
/// @address 6ff5c9d0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10149
/// @name QServer_Initialize
/// @address 6ff54150
/// Imported by ['D2Net.dll']
D2QServerStrc *__stdcall QServer_Initialize(int a1, int a2, u_short nPort, BOOL a4, int (__fastcall *pfn1)(unsigned __int8 *, int, _DWORD *, _DWORD *, int *, _DWORD *, int, int), int (__stdcall *pfn2)(int, int), int (__fastcall *pfn3)(int, int, int, int), int (__stdcall *pfn4)(int));

/// @ordinal 10150
/// @name QSAddPort
/// @address 6ff54480
/// Not imported by any .dll
/// @guessedtype int __stdcall(D2QServerStrc *pQServer, u_short a2)

/// @ordinal 10151
/// @name Fog_10151
/// @address 6ff54970
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10152
/// @name Fog_10152
/// @address 6ff544f0
/// Imported by ['D2Net.dll']
int __stdcall Fog_10152(int, char *buf, int len);

/// @ordinal 10153
/// @name Fog_10153
/// @address 6ff549b0
/// Not imported by any .dll
int __stdcall Fog_10153(int, char *buf, int len);

/// @ordinal 10154
/// @name Fog_10154
/// @address 6ff54a60
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10155
/// @name Fog_10155
/// @address 6ff54890
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10156
/// @name Fog_10156
/// @address 6ff559d0
/// Imported by ['D2Net.dll']
signed int __stdcall Fog_10156(D2QServerStrc *a1, int a2, void *a3, int a4);

/// @ordinal 10157
/// @name Fog_10157
/// @address 6ff55ea0
/// Imported by ['D2Net.dll']
int __stdcall Fog_10157(D2QServerStrc *pQServer, int a2, char *buf, int len);

/// @ordinal 10158
/// @name Fog_10158
/// @address 6ff56210
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10159
/// @name GetClientIPAddress
/// @address 6ff56180
/// Imported by ['D2Net.dll']
void __stdcall GetClientIPAddress(D2QServerStrc *pQServer, int nClientIdx, _BYTE *szIPAddress, int nBufferSize);

/// @ordinal 10160
/// @name Fog_10160
/// @address 6ff56280
/// Not imported by any .dll
int __stdcall Fog_10160(int namelen, int);

/// @ordinal 10161
/// @name Fog_10161
/// @address 6ff56310
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10162
/// @name Fog_10162
/// @address 6ff56380
/// Imported by ['D2Net.dll']
void __stdcall Fog_10162(D2QServerStrc *pQServer, int nClientId, const char *szFile, int32_t nLine);

/// @ordinal 10163
/// @name Fog_10163
/// @address 6ff566e0
/// Imported by ['D2Net.dll']
int __stdcall Fog_10163(int, struct in_addr in, int, int);

/// @ordinal 10164
/// @name Fog_10164
/// @address 6ff569d0
/// Imported by ['D2Net.dll']
int __stdcall Fog_10164(int, struct in_addr in, int, int);

/// @ordinal 10165
/// @name Fog_10165
/// @address 6ff56a10
/// Imported by ['D2Net.dll']
void __stdcall Fog_10165(D2QServerStrc *pQServer, int nClientId, const char *szFileName, int nLine);

/// @ordinal 10166
/// @name Fog_10166
/// @address 6ff56c90
/// Imported by ['D2Net.dll']
int __stdcall Fog_10166(int, struct in_addr in, int, int);

/// @ordinal 10167
/// @name Fog_10193
/// @address 6ff57410
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10168
/// @name PERFORMANCE_ACCUMULATOR
/// @address 6ff86db8
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10169
/// @name PERFORMANCE_ACCUMULATOR_INDEX
/// @address 6ff9edb8
/// Not imported by any .dll
/// @guessedtype int

/// @ordinal 10170
/// @name Fog_10170
/// @address 6ff56f70
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10171
/// @name Fog_10171
/// @address 6ff56fb0
/// Imported by ['D2Net.dll']
void __stdcall Fog_10171(D2QServerStrc *a1, int a2);

/// @ordinal 10172
/// @name Fog_10172
/// @address 6ff56fd0
/// Imported by ['D2Net.dll']
void __stdcall Fog_10172(D2QServerStrc *pQServer, int nClientId, int dwGameGuid);

/// @ordinal 10173
/// @name Fog_10173
/// @address 6ff57040
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10174
/// @name Fog_10174
/// @address 6ff54940
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10175
/// @name Fog_10175
/// @address 6ff57420
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 10176
/// @name Fog_10176
/// @address 6ff5a860
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10177
/// @name Fog_10177
/// @address 6ff55e60
/// Imported by ['D2Net.dll']
int __stdcall Fog_10177(int, DWORD dwMilliseconds);

/// @ordinal 10178
/// @name Fog_10178
/// @address 6ff575a0
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10179
/// @name Fog_10193
/// @address 6ff57410
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10180
/// @name Fog_10180
/// @address 6ff54920
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10181
/// @name Fog_10181
/// @address 6ff575c0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10182
/// @name Fog_10182
/// @address 6ff51b10
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10183
/// @name Fog_10228
/// @address 6ff57620
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10184
/// @name Fog_10184
/// @address 6ff55970
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10185
/// @name Fog_10185
/// @address 6ff54120
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10186
/// @name Fog_10186
/// @address 6ff544c0
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10187
/// @name Fog_10187
/// @address 6ff57630
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10188
/// @name Fog_10188
/// @address 6ff576d0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10189
/// @name Fog_10189
/// @address 6ff63b40
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10190
/// @name Fog_10190
/// @address 6ff5ced0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10191
/// @name Fog_10191
/// @address 6ff5d5c0
/// Imported by ['D2Client.dll', 'D2Launch.dll']
/// @guessedtype int()

/// @ordinal 10192
/// @name Fog_10192
/// @address 6ff5c9d0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10193
/// @name Fog_10193
/// @address 6ff57410
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10194
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10195
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10196
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10197
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10198
/// @name GFXUTIL_GenerateGammaRamp
/// @address 6ff51c00
/// Imported by ['D2DDraw.dll', 'D2Direct3D.dll', 'D2Glide.dll']
void __fastcall GFXUTIL_GenerateGammaRamp(DWORD nGammaValue, void *pRamp, double dContrast, size_t nGammaTableEntrySize, size_t nRampSize, DWORD dwMaxGamma);

/// @ordinal 10199
/// @name Fog_10199
/// @address 6ff61a20
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10200
/// @name Fog_10200
/// @address 6ff61a70
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10201
/// @name Fog_10201
/// @address 6ff61a90
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10202
/// @name Fog_10202
/// @address 6ff61ae0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10203
/// @name Fog_10203
/// @address 6ff61af0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10204
/// @name Fog_10204
/// @address 6ff61b40
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10205
/// @name Fog_10205
/// @address 6ff61b90
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10206
/// @name Fog_10206
/// @address 6ff61bd0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10207
/// @name Fog_10207
/// @address 6ff5aa60
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Win.dll']
/// @guessedtype int __stdcall(int, int, int, int, int)

/// @ordinal 10208
/// @name Fog_10208
/// @address 6ff5a8b0
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Win.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10209
/// @name Fog_10209
/// @address 6ff5aa10
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Win.dll']
/// @guessedtype int __stdcall(int a2)

/// @ordinal 10210
/// @name Fog_10210
/// @address 6ff5aa50
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Win.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10211
/// @name Fog_10211
/// @address 6ff5b720
/// Imported by ['D2Common.dll', 'D2Win.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10212
/// @name Fog_10212
/// @address 6ff5b750
/// Imported by ['D2Common.dll']
/// @guessedtype int __stdcall(int a2)

/// @ordinal 10213
/// @name Fog_10213
/// @address 6ff5b810
/// Imported by ['D2Common.dll', 'D2Game.dll']
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10214
/// @name Fog_10214
/// @address 6ff5b8f0
/// Imported by ['D2Common.dll']
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10215
/// @name Fog_10215
/// @address 6ff5b990
/// Imported by ['D2Common.dll', 'D2Win.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10216
/// @name Fog_10216
/// @address 6ff5bd80
/// Imported by ['D2Common.dll']
/// @guessedtype int __stdcall(int, char *source)

/// @ordinal 10217
/// @name Fog_10217
/// @address 6ff5bc20
/// Imported by ['D2Common.dll']
/// @guessedtype int __stdcall(int, char *source, int)

/// @ordinal 10218
/// @name Fog_10218
/// @address 6ff5cc40
/// Imported by ['Game.exe']
/// @guessedtype int()

/// @ordinal 10219
/// @name Fog_10219
/// @address 6ff5c9e0
/// Imported by ['D2Net.dll']
/// @guessedtype int()

/// @ordinal 10220
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10221
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10222
/// @name Fog_10222
/// @address 6ff5cc90
/// Imported by ['D2Net.dll']
/// @guessedtype int()

/// @ordinal 10223
/// @name Fog_10223
/// @address 6ff5cd50
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10224
/// @name Fog_10224
/// @address 6ff5ce00
/// Imported by ['D2Net.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10225
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10226
/// @name Fog_10226
/// @address 6ff5e4a0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10227
/// @name Fog_10227
/// @address 6ff5d730
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll', 'D2gfx.dll', 'Game.exe']
/// @guessedtype int()

/// @ordinal 10228
/// @name Fog_10228
/// @address 6ff57620
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10229
/// @name CRC32Compute
/// @address 6ff53940
/// Imported by ['D2Game.dll', 'D2Launch.dll']
uint32_t __stdcall CRC32Compute(void *pData, size_t dwSize);

/// @ordinal 10230
/// @name Fog_10230
/// @address 6ff53970
/// Imported by ['D2Game.dll']
int __stdcall Fog_10230(_BYTE *pData, int dwSize);

/// @ordinal 10231
/// @name Fog_10231
/// @address 6ff5f2b0
/// Not imported by any .dll
/// @guessedtype int __thiscall(char *string)

/// @ordinal 10232
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10233
/// @name Fog_10233
/// @address 6ff5f300
/// Imported by ['D2gfx.dll']
/// @guessedtype int()

/// @ordinal 10234
/// @name Fog_10234
/// @address 6ff61e00
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10235
/// @name Fog_10235
/// @address 6ff61f20
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10236
/// @name Fog_10236
/// @address 6ff5f0f0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int, int, int, int)

/// @ordinal 10237
/// @name Fog_10237
/// @address 6ff5fac0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10238
/// @name LogToUnk
/// @address 6ff621c0
/// Not imported by any .dll
void LogToUnk(int a1, const char *format, ...);

/// @ordinal 10239
/// @name Fog_10239
/// @address 6ff61840
/// Not imported by any .dll
int __fastcall Fog_10239(LPSTR lpFilename, DWORD nSize);

/// @ordinal 10240
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10241
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10242
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10243
/// @name Fog_10243
/// @address 6ff51de0
/// Not imported by any .dll
int __thiscall Fog_10243(_DWORD nThreadId);

/// @ordinal 10244
/// @name Fog_10244
/// @address 6ff55f70
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10245
/// @name Fog_10245
/// @address 6ff55ff0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10246
/// @name Fog_10246
/// @address 6ff56070
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10247
/// @name Fog_10247
/// @address 6ff560f0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10248
/// @name Fog_10248
/// @address 6ff64270
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10249
/// @name Fog_10249
/// @address 6ff642b0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10250
/// @name Fog_10250
/// @address 6ff64350
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10251
/// @name FogValidateCriticalSection
/// @address 6ff5dc60
/// Not imported by any .dll
int __fastcall FogValidateCriticalSection(void *lp, int);

/// @ordinal 10252
/// @name _lzcnt
/// @address 6ff539a0
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10253
/// @name Fog_10253
/// @address 6ff51e30
/// Imported by ['D2Common.dll']
/// @guessedtype int __stdcall(int, int, int, int, int, int)

/// @ordinal 10254
/// @name Fog_10254
/// @address 6ff524f0
/// Imported by ['D2Common.dll']
int __stdcall Fog_10254(const char *szFormulaString, _BYTE *pOutBuffer, int nOutBufferSize, int (__thiscall *pfnFunctionNameToId)(char *), int (__thiscall *a5)(int), int (__fastcall *a6)(char *, BOOL *, int, int));

/// @ordinal 10255
/// @name Fog_10255
/// @address 6ff5bb20
/// Imported by ['D2Common.dll']
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10256
/// @name PERFORMANCE_FREQUENCY_TICKS_PER_MICROSEC
/// @address 6ff86db0
/// Not imported by any .dll
/// @guessedtype int

/// @ordinal 10257
/// @name PERFORMANCE_FREQUENCY_TICKS_PER_MILLISEC
/// @address 6ff86dac
/// Not imported by any .dll
/// @guessedtype int

/// @ordinal 10258
/// @name gcsCriticalSectionTimer
/// @address 6ff9fe1c
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10259
/// @name gdwBitMasks
/// @address 6ff71308
/// Imported by ['D2CMP.dll', 'D2CMPd.dll', 'D2Client.dll', 'D2Common.dll', 'D2DDraw.dll', 'D2Direct3D.dll', 'D2Game.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
DWORD gdwBitMasks[32];

/// @ordinal 10260
/// @name gdwInvBitMasks
/// @address 6ff71388
/// Imported by ['D2Common.dll', 'D2Game.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
DWORD gdwInvBitMasks[32];

/// @ordinal 10261
/// @name gfTimeCriticalSections
/// @address 6ff9fe18
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10262
/// @name Fog_10262
/// @address 6ff638a0
/// Not imported by any .dll
/// Failed to extract type

/// @ordinal 10263
/// @name Fog_10263
/// @address 6ff61370
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10264
/// @name gqwCriticalSectionTimer
/// @address 6ff9fe20
/// Not imported by any .dll
/// Failed to extract type

