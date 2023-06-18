// List of D2Lang.dll exports (base address 6fc10000)
// For each of the other .DLLs, here are the number of imports of the current module exports:
// (Note that this is not the number of uses/references, just the number of times the current module is listed in the import table)
// |- D2Client.dll     :  24
// |- D2Common.dll     :  11
// |- D2Game.dll       :   2
// |- D2Launch.dll     :  19
// |- D2Multi.dll      :  17
// |- D2Server.dll     :   2
// |- D2Win.dll        :  15


/// @ordinal 10000
/// @name LoadStringTables
/// @address 6fc12f90
/// Imported by ['D2Client.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Server.dll']
BOOL __fastcall LoadStringTables(int a1, char *szLanguageString, BOOL bLoadExpansion);

/// @ordinal 10001
/// @name FreeStringTables
/// @address 6fc13be0
/// Imported by ['D2Client.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Server.dll']
void __fastcall FreeStringTables();

/// @ordinal 10002
/// @name CalculateHash
/// @address 6fc12f50
/// Not imported by any .dll
DWORD __stdcall CalculateHash(char *szString, unsigned int nHashTableSize);

/// @ordinal 10003
/// @name GetStringByReferenceString
/// @address 6fc13bc0
/// Imported by ['D2Client.dll', 'D2Common.dll']
wchar_t *__fastcall GetStringByReferenceString(char *szReference);

/// @ordinal 10004
/// @name GetStringFromTblIndex
/// @address 6fc13740
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Game.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
wchar_t *__fastcall GetStringFromTblIndex(D2C_StringIndices nIndex);

/// @ordinal 10005
/// @name CalculateCRC
/// @address 6fc13d80
/// Not imported by any .dll
void __stdcall CalculateCRC(D2TblHeaderStrc *pTblHeader, BYTE *pData, unsigned int dwIndexStart, unsigned int dwIndexEnd);

/// @ordinal 10006
/// @name GetLanguageString
/// @address 6fc13fb0
/// Imported by ['D2Client.dll', 'D2Launch.dll']
void __stdcall GetLanguageString(char *szLangString, int nLocaleId?);

/// @ordinal 10007
/// @name GetLocaleId
/// @address 6fc13df0
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
int __fastcall GetLocaleId();

/// @ordinal 10008
/// @name D2Lang_10008
/// @address 6fc13e60
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10009
/// @name D2Lang_10009
/// @address 6fc140e0
/// Imported by ['D2Client.dll']
int __stdcall D2Lang_10009(int, int Value, int);

/// @ordinal 10010
/// @name D2Lang_10010
/// @address 6fc14210
/// Imported by ['D2Client.dll']
int __stdcall D2Lang_10010(int, unsigned __int32 Value, int);

/// @ordinal 10011
/// @name D2Lang_10011
/// @address 6fc14330
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 10012
/// @name D2Lang_10012
/// @address 6fc14450
/// Imported by ['D2Multi.dll']
int __stdcall D2Lang_10012(int, unsigned __int64 Val, int);

/// @ordinal 10013
/// @name GetStringAndIdByReferenceString
/// @address 6fc13960
/// Imported by ['D2Common.dll']
WORD __stdcall GetStringAndIdByReferenceString(char *szReference, wchar_t **ppUnicode);

/// @ordinal 10014
/// @name ??0Unicode@@QAE@G@Z
/// @address 6fc11010
/// Not imported by any .dll
void *__thiscall ??0Unicode@@QAE@G@Z(wchar_t *this, __int16 a2);

/// @ordinal 10015
/// @name ??4Unicode@@QAEAAU0@ABU0@@Z
/// @address 6fc111f0
/// Not imported by any .dll
void *__thiscall ??4Unicode@@QAEAAU0@ABU0@@Z(wchar_t *this, int a2);

/// @ordinal 10016
/// @name ??BUnicode@@QBEGXZ
/// @address 6fc11020
/// Not imported by any .dll
__int16 __thiscall ??BUnicode@@QBEGXZ(wchar_t *this);

/// @ordinal 10017
/// @name ??_FUnicode@@QAEXXZ
/// @address 6fc11200
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
void __thiscall ??_FUnicode@@QAEXXZ(wchar_t *this);

/// @ordinal 10018
/// @name ?Personalize@Unicode@@SIXPAU1@PBU1@1HW4ELANGUAGE@@@Z
/// @address 6fc11d50
/// Imported by ['D2Client.dll']
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10019
/// @name ?_toLowerTable@Unicode@@0PAGA
/// @address 6fc1d508
/// Imported by ['D2Client.dll']
__int16 ?_toLowerTable@Unicode@@0PAGA[256];

/// @ordinal 10020
/// @name ?_toUpperTable@Unicode@@0PAGA
/// @address 6fc1d308
/// Imported by ['D2Client.dll', 'D2Launch.dll']
__int16 ?_toUpperTable@Unicode@@0PAGA[256];

/// @ordinal 10021
/// @name ?compare@Unicode@@QBEHU1@@Z
/// @address 6fc11110
/// Not imported by any .dll
bool __thiscall ?compare@Unicode@@QBEHU1@@Z(wchar_t *this, wchar_t a2);

/// @ordinal 10022
/// @name ?compare@Unicode@@SIHU1@0@Z
/// @address 6fc11150
/// Not imported by any .dll
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10023
/// @name ?directionality@Unicode@@QAE?AW4Direction@1@XZ
/// @address 6fc11c50
/// Not imported by any .dll
int __thiscall ?directionality@Unicode@@QAE?AW4Direction@1@XZ(wchar_t *this);

/// @ordinal 10024
/// @name ?isASCII@Unicode@@QBEHXZ
/// @address 6fc11080
/// Not imported by any .dll
bool __thiscall ?isASCII@Unicode@@QBEHXZ(wchar_t *this);

/// @ordinal 10025
/// @name ?isAlpha@Unicode@@QBEHXZ
/// @address 6fc11090
/// Not imported by any .dll
bool __thiscall ?isAlpha@Unicode@@QBEHXZ(wchar_t *this);

/// @ordinal 10026
/// @name ?isLeftToRight@Unicode@@QBEHXZ
/// @address 6fc11a00
/// Not imported by any .dll
bool __thiscall ?isLeftToRight@Unicode@@QBEHXZ(wchar_t *this);

/// @ordinal 10027
/// @name ?isLineBreak@Unicode@@SIHPBU1@I@Z
/// @address 6fc11a30
/// Imported by ['D2Client.dll', 'D2Launch.dll', 'D2Win.dll']
/// @guessedtype int()

/// @ordinal 10028
/// @name ?isNewline@Unicode@@QBEHXZ
/// @address 6fc11050
/// Not imported by any .dll
bool __thiscall ?isNewline@Unicode@@QBEHXZ(wchar_t *this);

/// @ordinal 10029
/// @name ?isPipe@Unicode@@QBEHXZ
/// @address 6fc11060
/// Not imported by any .dll
int __thiscall ?isPipe@Unicode@@QBEHXZ(wchar_t *this);

/// @ordinal 10030
/// @name ?isWhitespace@Unicode@@QBEHXZ
/// @address 6fc11030
/// Not imported by any .dll
int __thiscall ?isWhitespace@Unicode@@QBEHXZ(wchar_t *this);

/// @ordinal 10031
/// @name ?isWordEnd@Unicode@@SIHPBU1@I@Z
/// @address 6fc11190
/// Not imported by any .dll
BOOL __fastcall ?isWordEnd@Unicode@@SIHPBU1@I@Z(const Unicode *str, size_t index);

/// @ordinal 10032
/// @name ?loadSysMap@Unicode@@SIHPAUHD2ARCHIVE__@@PBD@Z
/// @address 6fc123e0
/// Not imported by any .dll
signed int __fastcall ?loadSysMap@Unicode@@SIHPAUHD2ARCHIVE__@@PBD@Z(int a1, char *szFileName);

/// @ordinal 10033
/// @name ?sprintf@Unicode@@SAXHPAU1@PBU1@ZZ
/// @address 6fc11670
/// Imported by ['D2Client.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
void ?sprintf@Unicode@@SAXHPAU1@PBU1@ZZ(int buffer_size, wchar_t *buffer, const wchar_t *format, ...);

/// @ordinal 10034
/// @name ?strcat@Unicode@@SIPAU1@PAU1@PBU1@@Z
/// @address 6fc113f0
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
wchar_t *__fastcall ?strcat@Unicode@@SIPAU1@PAU1@PBU1@@Z(wchar_t *a1, const wchar_t *a2);

/// @ordinal 10035
/// @name ?strchr@Unicode@@SIPAU1@PBU1@U1@@Z
/// @address 6fc113c0
/// Imported by ['D2Client.dll']
Unicode *__fastcall ?strchr@Unicode@@SIPAU1@PBU1@U1@@Z(const Unicode *str, Unicode ch);

/// @ordinal 10036
/// @name ?strcmp@Unicode@@SIHPBU1@0@Z
/// @address 6fc11210
/// Imported by ['D2Launch.dll']
signed int __fastcall ?strcmp@Unicode@@SIHPBU1@0@Z(wchar_t *a1, wchar_t *a2);

/// @ordinal 10037
/// @name ?strcoll@Unicode@@SIHPBU1@0@Z
/// @address 6fc111e0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10038
/// @name ?strcpy@Unicode@@SIPAU1@PAU1@PBU1@@Z
/// @address 6fc114a0
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
wchar_t *__fastcall ?strcpy@Unicode@@SIPAU1@PAU1@PBU1@@Z(wchar_t *pDest, wchar_t *a2);

/// @ordinal 10039
/// @name ?stricmp@Unicode@@SIHPBU1@0@Z
/// @address 6fc112a0
/// Imported by ['D2Launch.dll']
int __fastcall ?stricmp@Unicode@@SIHPBU1@0@Z(wchar_t *a1, wchar_t *a2);

/// @ordinal 10040
/// @name ?strlen@Unicode@@SIHPBU1@@Z
/// @address 6fc114c0
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
int __fastcall ?strlen@Unicode@@SIHPBU1@@Z(wchar_t *a1);

/// @ordinal 10041
/// @name ?strncat@Unicode@@SIPAU1@PAU1@PBU1@H@Z
/// @address 6fc11420
/// Imported by ['D2Multi.dll']
int __fastcall ?strncat@Unicode@@SIPAU1@PAU1@PBU1@H@Z(wchar_t *a1, int a2, int a3);

/// @ordinal 10042
/// @name ?strncmp@Unicode@@SIHPBU1@0I@Z
/// @address 6fc11250
/// Imported by ['D2Win.dll']
int __fastcall ?strncmp@Unicode@@SIHPBU1@0I@Z(wchar_t *a1, wchar_t *a2, int a3);

/// @ordinal 10043
/// @name ?strncoll@Unicode@@SIHPBU1@0H@Z
/// @address 6fc122b0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10044
/// @name ?strncpy@Unicode@@SIPAU1@PAU1@PBU1@H@Z
/// @address 6fc11460
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Launch.dll', 'D2Win.dll']
void *__fastcall ?strncpy@Unicode@@SIPAU1@PAU1@PBU1@H@Z(wchar_t *a1, wchar_t *a2, int a3);

/// @ordinal 10045
/// @name ?strnicmp@Unicode@@SIHPBU1@0I@Z
/// @address 6fc11310
/// Imported by ['D2Win.dll']
signed int __fastcall ?strnicmp@Unicode@@SIHPBU1@0I@Z(wchar_t *a1, wchar_t *a2, int a3);

/// @ordinal 10046
/// @name ?strstr@Unicode@@SIPAU1@PBU1@0@Z
/// @address 6fc115f0
/// Imported by ['D2Client.dll', 'D2Multi.dll']
wchar_t *__fastcall ?strstr@Unicode@@SIPAU1@PBU1@0@Z(wchar_t *str, wchar_t *substr);

/// @ordinal 10047
/// @name ?strstri@Unicode@@SIPAU1@PBU1@0@Z
/// @address 6fc114e0
/// Not imported by any .dll
int __fastcall ?strstri@Unicode@@SIPAU1@PBU1@0@Z(wchar_t *a1, wchar_t *a2);

/// @ordinal 10048
/// @name ?sys2Unicode@Unicode@@SIPAU1@PAU1@PBDH@Z
/// @address 6fc12650
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10049
/// @name ?sysWidth@Unicode@@SIKPBU1@H@Z
/// @address 6fc128d0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10050
/// @name ?toLower@Unicode@@QBE?AU1@XZ
/// @address 6fc110e0
/// Not imported by any .dll
struct Unicode __thiscall ?toLower@Unicode@@QBE?AU1@XZ(Unicode *__hidden this);

/// @ordinal 10051
/// @name ?toUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z
/// @address 6fc12a40
/// Imported by ['D2Client.dll', 'D2Common.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
int __fastcall ?toUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z(wchar_t *a1, const char *a2, int a3);

/// @ordinal 10052
/// @name ?toUpper@Unicode@@QBE?AU1@XZ
/// @address 6fc110b0
/// Not imported by any .dll
/// @guessedtype struct Unicode __thiscall(Unicode *__hidden this)

/// @ordinal 10053
/// @name ?toUtf@Unicode@@SIPADPADPBU1@H@Z
/// @address 6fc12b60
/// Imported by ['D2Client.dll', 'D2Launch.dll', 'D2Multi.dll']
char *__fastcall ?toUtf@Unicode@@SIPADPADPBU1@H@Z(char *dest, const Unicode *src, int count);

/// @ordinal 10054
/// @name ?unicode2Sys@Unicode@@SIPADPADPBU1@H@Z
/// @address 6fc127c0
/// Not imported by any .dll
/// @guessedtype int __stdcall(int)

/// @ordinal 10055
/// @name ?unicode2Win@Unicode@@SIPADPADPBU1@H@Z
/// @address 6fc11c20
/// Imported by ['D2Common.dll', 'D2Game.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
int __fastcall ?unicode2Win@Unicode@@SIPADPADPBU1@H@Z(int a1, wchar_t *a2, signed int a3);

/// @ordinal 10056
/// @name ?unicodeWidth@Unicode@@SIKPBDH@Z
/// @address 6fc129b0
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10057
/// @name ?unicodenwidth@Unicode@@SIIPBDH@Z
/// @address 6fc12cd0
/// Imported by ['D2Client.dll']
/// @guessedtype int()

/// @ordinal 10058
/// @name ?unloadSysMap@Unicode@@SIXXZ
/// @address 6fc12370
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10059
/// @name ?utf8ToUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z
/// @address 6fc11b30
/// Imported by ['D2Multi.dll', 'D2Win.dll']
/// Failed to extract type

/// @ordinal 10060
/// @name ?utfnwidth@Unicode@@SIIPBU1@H@Z
/// @address 6fc12c30
/// Not imported by any .dll
/// @guessedtype int()

/// @ordinal 10061
/// @name ?utfwidth@Unicode@@QBEHXZ
/// @address 6fc12db0
/// Not imported by any .dll
signed int __thiscall ?utfwidth@Unicode@@QBEHXZ(wchar_t *this);

/// @ordinal 10062
/// @name ?win2Unicode@Unicode@@SIPAU1@PAU1@PBDH@Z
/// @address 6fc11bd0
/// Imported by ['D2Client.dll', 'D2Launch.dll', 'D2Multi.dll', 'D2Win.dll']
int __fastcall ?win2Unicode@Unicode@@SIPAU1@PAU1@PBDH@Z(wchar_t *a1, int a2, int a3);

