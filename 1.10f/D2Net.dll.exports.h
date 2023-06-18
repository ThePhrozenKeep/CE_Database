// List of D2Net.dll exports (base address 6fc00000)
// For each of the other .DLLs, here are the number of imports of the current module exports:
// (Note that this is not the number of uses/references, just the number of times the current module is listed in the import table)
// |- D2Client.dll     :  14
// |- D2Game.dll       :  11
// |- D2Launch.dll     :   4
// |- D2Server.dll     :   5


/// @ordinal 10000
/// @name D2Net_10000
/// @address 6fc011b0
/// Imported by ['D2Client.dll', 'D2Launch.dll']
int __stdcall D2Net_10000(int, LPVOID lpParameter);

/// @ordinal 10001
/// @name D2Net_10001
/// @address 6fc01240
/// Imported by ['D2Client.dll', 'D2Launch.dll']
void __stdcall D2Net_10001();

/// @ordinal 10002
/// @name D2Net_10002
/// @address 6fc02130
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10003
/// @name D2Net_10003
/// @address 6fc02150
/// Imported by ['D2Client.dll', 'D2Server.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10004
/// @name SERVER_Release
/// @address 6fc02220
/// Imported by ['D2Client.dll', 'D2Server.dll']
/// @guessedtype int()

/// @ordinal 10005
/// @name D2Net_10005
/// @address 6fc01760
/// Imported by ['D2Client.dll']
int __stdcall D2Net_10005(int, char *buf, int len);

/// @ordinal 10006
/// @name SERVER_unk
/// @address 6fc022b0
/// Imported by ['D2Game.dll']
BOOL __stdcall SERVER_unk(char a1, int nClientId, _BYTE *pBuffer, unsigned int nBufferLen);

/// @ordinal 10007
/// @name D2Net_10007
/// @address 6fc01300
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10008
/// @name D2Net_10008
/// @address 6fc01310
/// Imported by ['D2Client.dll', 'D2Launch.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10010
/// @name SERVER_ReadFromMessageList1
/// @address 6fc02250
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10011
/// @name SERVER_ReadFromMessageList0
/// @address 6fc02270
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10012
/// @name SERVER_ReadFromMessageList2
/// @address 6fc02290
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10013
/// @name CLIENT_GetLocalIpAddressString
/// @address 6fc019a0
/// Not imported by any .dll
int __stdcall CLIENT_GetLocalIpAddressString(int szBuffer);

/// @ordinal 10014
/// @name D2Net_10014
/// @address 6fc02410
/// Imported by ['D2Game.dll']
void __stdcall D2Net_10014(int nClientIdx, char *szIPAddress, int nBufferSize);

/// @ordinal 10015
/// @name D2Net_10015
/// @address 6fc02470
/// Imported by ['D2Game.dll']
void __stdcall D2Net_10015(int nClientId, const char *szFile, int32_t nLine);

/// @ordinal 10016
/// @name D2Net_10016
/// @address 6fc024f0
/// Imported by ['D2Game.dll']
void __stdcall D2Net_10016(int nClientId);

/// @ordinal 10017
/// @name D2Net_10017
/// @address 6fc01000
/// Imported by ['D2Client.dll']
/// @guessedtype int()

/// @ordinal 10018
/// @name D2Net_10018
/// @address 6fc02510
/// Imported by ['D2Server.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10019
/// @name D2Net_10019
/// @address 6fc02530
/// Imported by ['D2Game.dll']
void __stdcall D2Net_10019(int a1);

/// @ordinal 10020
/// @name D2Net_10020
/// @address 6fc02550
/// Imported by ['D2Game.dll']
void __stdcall D2Net_10020(int a1, int a2);

/// @ordinal 10021
/// @name D2Net_10021
/// @address 6fc02580
/// Imported by ['D2Game.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10022
/// @name D2Net_10022
/// @address 6fc025f0
/// Imported by ['D2Server.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10023
/// @name D2Net_10023
/// @address 6fc02200
/// Imported by ['D2Client.dll', 'D2Server.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10024
/// @name D2Net_10024
/// @address 6fc01b30
/// Imported by ['D2Game.dll']
int __stdcall D2Net_10024();

/// @ordinal 10025
/// @name D2Net_10025
/// @address 6fc01120
/// Imported by ['D2Client.dll', 'D2Launch.dll']
/// @guessedtype int()

/// @ordinal 10026
/// @name D2Net_10026
/// @address 6fc021d0
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int)

/// @ordinal 10027
/// @name D2Net_10027
/// @address 6fc021f0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10028
/// @name D2Net_10028
/// @address 6fc02610
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10029
/// @name D2Net_10029
/// @address 6fc02620
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10030
/// @name SERVER_GetServerPacketSize
/// @address 6fc01b60
/// Imported by ['D2Client.dll']
int32_t __fastcall SERVER_GetServerPacketSize(D2PacketBufferStrc *pBuffer, uint32_t nBufferSize, int32_t *pSize);

/// @ordinal 10031
/// @name SERVER_GetClientPacketSize
/// @address 6fc01e60
/// Not imported by any .dll
int32_t __fastcall SERVER_GetClientPacketSize(D2PacketBufferStrc *pBuffer, uint32_t nBufferSize, int32_t *pSize);

/// @ordinal 10032
/// @name D2Net_10032
/// @address 6fc02490
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10033
/// @name D2Net_10033
/// @address 6fc024b0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10034
/// @name D2Net_10034
/// @address 6fc024d0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10035
/// @name D2Net_10035
/// @address 6fc02190
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10036
/// @name D2Net_10036
/// @address 6fc021b0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10037
/// @name D2Net_10037
/// @address 6fc02450
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10038
/// @name D2Net_10038
/// @address 6fc02430
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10039
/// @name D2Net_10039
/// @address 6fc01fa0
/// Imported by ['D2Client.dll']
/// @guessedtype int()

/// @ordinal 10040
/// @name D2Net_10040
/// @address 6fc01fb0
/// Imported by ['D2Client.dll']
/// @guessedtype int()

