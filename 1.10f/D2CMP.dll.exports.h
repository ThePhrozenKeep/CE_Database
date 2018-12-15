// List of D2CMP.dll exports (base address 6fdf0000)


/// @ordinal 10000
/// @name CreateD2Palette
/// @address 6fdf90e0
PL2File *__stdcall CreateD2Palette(BYTE *__attribute__((__org_arrdim(0,256))) pPal);

/// @ordinal 10001
/// @name D2CreatePL2File
/// @address 6fdfaaf0
PL2File *__stdcall D2CreatePL2File(BYTE pPalette[256], size_t *pPL2Size);

/// @ordinal 10002
/// @name D2FreePL2
/// @address 6fdfab10
int __stdcall D2FreePL2(PL2File *pPL2);

/// @ordinal 10003
/// @name D2CalculatePL2ScreenPalette
/// @address 6fdf8f60
void __fastcall D2CalculatePL2ScreenPalette(PL2File *pPL2);

/// @ordinal 10004
/// @name D2GetNearestPaletteIndex
/// @address 6fdfab20
BYTE __stdcall D2GetNearestPaletteIndex(BYTE *pPalette, int nPaletteSize, int nRed, int nGreen, int nBlue);

/// @ordinal 10005
/// @name D2GetFarthestPaletteIndex
/// @address 6fdfaba0
BYTE __stdcall D2GetFarthestPaletteIndex(BYTE *pPalette, int nPaletteSize, int nRed, int nGreen, int nBlue);

/// @ordinal 10006
/// @name D2SetToolPaletteFromFile
/// @address 6fdfac50
BOOL __stdcall D2SetToolPaletteFromFile(const char *szPCXOrRBGFile, size_t nStartIndex, size_t nEndIndex);

/// @ordinal 10007
/// @name D2GetNearestToolPaletteIndex
/// @address 6fdfafe0
BYTE __stdcall D2GetNearestToolPaletteIndex(int nRed, int nGreen, int nBlue);

/// @ordinal 10008
/// @name D2ConvertToToolPalette
/// @address 6fdfb0d0
BOOL __stdcall D2ConvertToToolPalette(BYTE *pRGBPalette, BYTE *pCalculatedPalette, size_t nPaletteSize, BYTE (__stdcall *pfMapColor)(int nRed, int nGreen, int nBlue));

/// @ordinal 10009
/// @name D2SetToolPaletteAlphaKeyColor
/// @address 6fdfac20
DWORD __stdcall D2SetToolPaletteAlphaKeyColor(DWORD dwRGB);

/// @ordinal 10010
/// @name D2SetToolPaletteAlphaKeying
/// @address 6fdfafd0
void __stdcall D2SetToolPaletteAlphaKeying(BOOL bEnabled);

/// @ordinal 10011
/// @name D2SetToolPaletteBlackOverride
/// @address 6fdfb170
void __stdcall D2SetToolPaletteBlackOverride(BOOL bEnabled);

/// @ordinal 10012
/// @name D2SetToolPalette
/// @address 6fdfb180
void __stdcall D2SetToolPalette(BYTE pPalette[256]);

/// @ordinal 10013
/// @name CelCompressCreate
/// @address 6fdf14e0
int __stdcall CelCompressCreate(CELFORMAT format, unsigned int dwNumDirections, BYTE **palette, BOOL b24Bits);

/// @ordinal 10014
/// @name CelCompressDestroy
/// @address 6fdf17e0
void __stdcall CelCompressDestroy(int nIndex);

/// @ordinal 10015
/// @name CelCompressAddImage
/// @address 6fdf1670
void __stdcall CelCompressAddImage(int slot, BYTE *pUnknow, unsigned int dwImageByteStride, int dwPixelHeight, unsigned int dwPixelWidth, int a6, int a7, int a8);

/// @ordinal 10016
/// @name CelCompressCreateCelFile
/// @address 6fdf18d0
HRESULT __stdcall CelCompressCreateCelFile(int a1, int *ppCellFile);

/// @ordinal 10017
/// @name CelNormalDirToFileDir
/// @address 6fdf11d0
int __stdcall CelNormalDirToFileDir(int nNormalDirection, int nNumberOfDirections);

/// @ordinal 10018
/// @name CelGameDirToFileDir
/// @address 6fdf11f0
int __stdcall CelGameDirToFileDir(int nDirection, int nFrame);

/// @ordinal 10019
/// @name CelConvertDir
/// @address 6fdf1210
int __stdcall CelConvertDir(int nDirection, int nStartDirs, DWORD dwAsyncFlag, int nDirectionStep);

/// @ordinal 10020
/// @name CelConvertBlock
/// @address 6fdf12b0
BOOL __stdcall CelConvertBlock(int nDirection, DWORD dwAsyncFlag);

/// @ordinal 10021
/// @name CelGameDirToShadowGameDir
/// @address 6fdf1300
int __stdcall CelGameDirToShadowGameDir(unsigned int nGameDirection, unsigned int nLevelOfRotation);

/// @ordinal 10022
/// @name CelGameDirToNormalDir
/// @address 6fdf1400
int __cdecl CelGameDirToNormalDir(int nGameDirection, unsigned int nLevelOfRotation);

/// @ordinal 10023
/// @name CelFileSerialize
/// @address 6fdf1d30
BOOL __stdcall CelFileSerialize(CelFile *pCellFile, _DWORD *ppOutNodes, int *pOutSize);

/// @ordinal 10024
/// @name CelFileNormalize
/// @address 6fdf1ea0
void __stdcall CelFileNormalize(CelFile *pFile, CelFile **ppOutFile, const char *szFile, int nLine, int nSpecVersion);

/// @ordinal 10025
/// @name CelFileConvert24To8
/// @address 6fdf1a30
BOOL __stdcall CelFileConvert24To8(CelFile *pFile, CelFile **ppOutCelFile, int (__stdcall *colorToIndexFunc)(int, int, int), int a4);

/// @ordinal 10026
/// @name CelFileIteratePixels
/// @address 6fdf1cc0
unsigned int __stdcall CelFileIteratePixels(CelFile *pFile, void (__stdcall *pfParse)(DWORD dwColor));

/// @ordinal 10027
/// @name CelFileFree
/// @address 6fdf1fe0
int __stdcall CelFileFree(CelFile *pCelFile);

/// @ordinal 10028
/// @name D2FreeSerializedCellFile
/// @address 6fdf1fa0
void *__stdcall D2FreeSerializedCellFile(CelFile *pSerializedFile);

/// @ordinal 10029
/// @name CelFileHalve
/// @address 6fdf1a00
void __stdcall CelFileHalve(HANDLE hFile, CelFile *pCelFile);

/// @ordinal 10030
/// @name CelFileConvertOldToNew
/// @address 6fdf1ad0
int *__stdcall CelFileConvertOldToNew(CelFile *pOldFile, CelFile **pOutHeaderPtr, int *pOutFileSize);

/// @ordinal 10031
/// @name CelFileTransform
/// @address 6fdf2030
void __stdcall CelFileTransform(CelFile *pCelFile, byte *pTransformData);

/// @ordinal 10032
/// @name CelFileFreeHardware
/// @address 6fdf2750
BOOL __stdcall CelFileFreeHardware(CelFile *ptFile);

/// @ordinal 10033
/// @name CelDraw
/// @address 6fdf20a0
int __stdcall CelDraw(CelInstance *pCelInstance, int offsetX, int offsetY, int nDestClampXMin, int a5, int pDestSurface, int surfaceHeight, int surfaceStride, int a9, int a10, const BYTE *pPalette);

/// @ordinal 10034
/// @name CelDrawEx
/// @address 6fdf22c0
char *__stdcall CelDrawEx(CelInstance *pCelInstance, int a2, int a3, int a4, int a5, int pDestSurface, int surfaceHeight, unsigned int surfaceStride, int a9, int a10, int a11, int a12, int a13);

/// @ordinal 10035
/// @name CelDrawShadow
/// @address 6fdf2410
int __stdcall CelDrawShadow(CelInstance *pCelInstance, int arg_4, int arg_8, int XClipMin, int XClipMax, int pDestSurface, int destSurfaceHeight, int destSurfaceStride, int a9, char a10);

/// @ordinal 10036
/// @name CelGetHandle
/// @address 6fdf2540
int __stdcall CelGetHandle(CelContext *pCelContext);

/// @ordinal 10037
/// @name CelGetWidth
/// @address 6fdf25e0
int __stdcall CelGetWidth(struct_pCel *pCel);

/// @ordinal 10038
/// @name CelGetHeight
/// @address 6fdf2610
int __stdcall CelGetHeight(struct_pCel *pCel);

/// @ordinal 10039
/// @name CelGetOffsetX
/// @address 6fdf2640
int __stdcall CelGetOffsetX(struct_pCel *pCel);

/// @ordinal 10040
/// @name CelGetOffsetY
/// @address 6fdf2670
int __stdcall CelGetOffsetY(struct_pCel *pCel);

/// @ordinal 10041
/// @name CelGetControlData
/// @address 6fdf26a0
char *__stdcall CelGetControlData(struct_pCel *ptCell);

/// @ordinal 10042
/// @name CelGetRawData
/// @address 6fdf2210
BOOL __stdcall CelGetRawData(CelFile *pCelFile, int nGameDirection, int nFrameIdx, void *pDestBuffer);

/// @ordinal 10043
/// @name CelGetHardwareData
/// @address 6fdf2820
DC6Frame *__stdcall CelGetHardwareData(struct_pCel *ptCell);

/// @ordinal 10044
/// @name CelSetHardwareFreeCallback
/// @address 6fdf2730
void __stdcall CelSetHardwareFreeCallback(void (__fastcall *pfCallback)(void *pGFXCell));

/// @ordinal 10045
/// @name CelGetHardwareFreeCallback
/// @address 6fdf2740
/// @guessedtype int()

/// @ordinal 10046
/// @name CelFileGetCelsPerDirection
/// @address 6fdf2700
int __stdcall CelFileGetCelsPerDirection(CelFile *pFile);

/// @ordinal 10047
/// @name CelFileGetNumDirections
/// @address 6fdf26d0
int __stdcall CelFileGetNumDirections(CelFile *pFile);

/// @ordinal 10048
/// @name CmpDoLensEffect
/// @address 6fdf7fb0
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10049
/// @name D2ToggleDC6DecodeMode
/// @address 6fdf7a80
BOOL __stdcall D2ToggleDC6DecodeMode();

/// @ordinal 10050
/// @name D2FormatCellFilePath
/// @address 6fdfb950
void __stdcall D2FormatCellFilePath(char *szBuffer, const char *szFormat, char *szFileName, va_list va_list);

/// @ordinal 10051
/// @name GetGfxFileExtension
/// @address 6fdfb930
const char *__stdcall GetGfxFileExtension(int nFormat);

/// @ordinal 10052
/// @name D2InitSpriteCache
/// @address 6fdfb9f0
int __stdcall D2InitSpriteCache(void *pMemPool, int dwSpriteCacheSize, int dwSize, unsigned int dwMemoryOverride);

/// @ordinal 10053
/// @name D2FlushSpriteCache
/// @address 6fdfbbf0
void __stdcall D2FlushSpriteCache(BOOL realloc);

/// @ordinal 10054
/// @name D2SetCompressedDataMode
/// @address 6fdfb9c0
void __stdcall D2SetCompressedDataMode(BOOL bUseRegistry);

/// @ordinal 10055
/// @name D2CacheCurrentCell_sFindCel
/// @address 6fdfbd40
BOOL __stdcall D2CacheCurrentCell_sFindCel(CelContext *ptCelContext, BOOL bAsyncWait, BOOL bAsyncLoad);

/// @ordinal 10056
/// @name D2CacheCurrentCellFast
/// @address 6fdfd600
char *__stdcall D2CacheCurrentCellFast(CelContext *pCelContext);

/// @ordinal 10057
/// @name D2CMPSpriteNumAsyncLoads
/// @address 6fdfdf10
/// @guessedtype int()

/// @ordinal 10058
/// @name D2CMPSpriteFindAsynchSiblings
/// @address 6fdfdf70
BOOL __stdcall D2CMPSpriteFindAsynchSiblings(DWORD dwHash, DWORD dwTag, DWORD dwTagEx);

/// @ordinal 10059
/// @name unknown_libname_1
/// @address 6fdfd7d0
/// @guessedtype int()

/// @ordinal 10060
/// @name D2GetSpriteCacheMemory
/// @address 6fdfd7e0
DWORD __cdecl D2GetSpriteCacheMemory();

/// @ordinal 10061
/// @name D2GetMaxSpriteCacheMemory
/// @address 6fdfd830
/// @guessedtype int()

/// @ordinal 10062
/// @name unknown_libname_2
/// @address 6fdfd840
/// @guessedtype int()

/// @ordinal 10063
/// @name D2GetCelDataMemory
/// @address 6fdfd850
/// @guessedtype int()

/// @ordinal 10064
/// @name D2GetMaxCelDataMemory
/// @address 6fdfd860
/// @guessedtype int()

/// @ordinal 10065
/// @name TileListAlloc
/// @address 6fdfe8d0
struct_ptBlock *__stdcall TileListAlloc(int lpData, int dwMaxAllocated);

/// @ordinal 10066
/// @name TileFlushList
/// @address 6fdfe930
void *__stdcall TileFlushList(_DWORD ptList);

/// @ordinal 10067
/// @name D2CreateTile
/// @address 6fdfe9d0
int __stdcall D2CreateTile(struct_ptBlock *ptList, __int16 a2, __int16 a3, int a4, int a5, int a6, int a7, int a8, const void *a9);

/// @ordinal 10068
/// @name D2CMP_10068
/// @address 6fdfeaa0
void __stdcall D2CMP_10068(_DWORD hTileAdd, char *ptImage, int dwImageByteStride, signed int nOffsetX, signed int nOffsetY);

/// @ordinal 10069
/// @name AddNewTileFromImage
/// @address 6fdfecb0
_BYTE __stdcall AddNewTileFromImage(_DWORD ptTileAdd, _DWORD ptImage);

/// @ordinal 10070
/// @name D2CMP_10070
/// @address 6fdfef60
HRESULT __stdcall D2CMP_10070(struct_ptBlock *ptTileList, struct_ptTileProject **pOutptProject);

/// @ordinal 10071
/// @name D2CMP_10071
/// @address 6fdff380
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 10072
/// @name D2LoadLocalTileProject
/// @address 6fdff670
void __stdcall D2LoadLocalTileProject(struct_ptTileProject *ptProject, char *szLibraryName, DWORD *dwTileOffsetBase);

/// @ordinal 10073
/// @name D2FreeTileProject
/// @address 6fdff220
void *__stdcall D2FreeTileProject(struct_ptTileProject *ptProject, void *a2);

/// @ordinal 10074
/// @name TileProjectIteratePixels
/// @address 6fdff950
int __stdcall TileProjectIteratePixels(struct_ptTileProject *ptProject, void (__stdcall *a2)(DWORD dwRGB));

/// @ordinal 10075
/// @name D2Load24BitTileProject
/// @address 6fdffa60
int __stdcall D2Load24BitTileProject(struct_ptTileProject *ptProject24, struct_ptTileProject **ppOutTileProject, BYTE (__stdcall *isColor)(int nRed, int nGreen, int nBlue));

/// @ordinal 10076
/// @name D2SetLRUHardwareFreeCallback
/// @address 6fdffdd0
void __stdcall D2SetLRUHardwareFreeCallback(void (__fastcall *a1)(struct_ptTile *pTile));

/// @ordinal 10077
/// @name D2GetTileOrientation
/// @address 6fdfff00
int __stdcall D2GetTileOrientation(struct_ptTile *hTile);

/// @ordinal 10078
/// @name D2GetTileIndex
/// @address 6fdfff30
int __stdcall D2GetTileIndex(struct_ptTile *hTile);

/// @ordinal 10079
/// @name D2GetTileFlags
/// @address 6fdfff60
int __stdcall D2GetTileFlags(struct_ptTile *hTile);

/// @ordinal 10080
/// @name D2GetTileWidth
/// @address 6fdfff90
int __stdcall D2GetTileWidth(struct_ptTile *hTile);

/// @ordinal 10081
/// @name D2GetTileFrame
/// @address 6fdfffc0
int __stdcall D2GetTileFrame(struct_ptTile *hTile);

/// @ordinal 10082
/// @name D2GetTileSubIndex
/// @address 6fdffff0
int __stdcall D2GetTileSubIndex(struct_ptTile *hTile);

/// @ordinal 10083
/// @name D2GetTileDirection
/// @address 6fe00020
int __stdcall D2GetTileDirection(struct_ptTile *hTile);

/// @ordinal 10084
/// @name D2GetTileHeight
/// @address 6fe00050
int __stdcall D2GetTileHeight(struct_ptTile *hTile);

/// @ordinal 10085
/// @name D2GetTileFlagArray
/// @address 6fe00080
int __stdcall D2GetTileFlagArray(struct_ptTile *hTile);

/// @ordinal 10086
/// @name D2GetTileUnknown
/// @address 6fe000b0
int __stdcall D2GetTileUnknown(struct_ptTile *hTile);

/// @ordinal 10087
/// @name D2LoadTileLibrarySlot
/// @address 6fdffde0
struct_ptTileProject *__stdcall D2LoadTileLibrarySlot(D2TileLibraryHashStrc **ptTileLibrary, const char *szName);

/// @ordinal 10088
/// @name D2GetTileSize
/// @address 6fdffe70
int __stdcall D2GetTileSize(D2TileLibraryHashStrc **__attribute__((__org_arrdim(0,32))) ptTileLibrary, int nOrientation, int nIndex, int nSubIndex, void *pTileList, int nSize);

/// @ordinal 10089
/// @name D2InitTileCache
/// @address 6fdfe600
int __stdcall D2InitTileCache(void *pMemPool, DWORD dwSize);

/// @ordinal 10090
/// @name D2FreeTileCache
/// @address 6fdfe640
void __stdcall D2FreeTileCache(BOOL bFreeLRU);

/// @ordinal 10091
/// @name D2CacheTile
/// @address 6fdfe6d0
BOOL __stdcall D2CacheTile(struct_ptTileProject *pTile, BOOL bAsyncWait, BOOL bAsyncLoad);

/// @ordinal 10092
/// @name D2CMP_10092
/// @address 6fdfe7f0
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 10093
/// @name D2CMP_10093
/// @address 6fdfe850
/// @guessedtype int()

/// @ordinal 10094
/// @name D2FreeTileLibraries
/// @address 6fe00140
void __cdecl D2FreeTileLibraries();

/// @ordinal 10095
/// @name D2LoadTileLibrary
/// @address 6fe001a0
struct_ptTileProject *__stdcall D2LoadTileLibrary(D2TileLibraryHashStrc **pOuthFindTile, const char *szLibraryName);

/// @ordinal 10096
/// @name D2CreateItemPaletteCache
/// @address 6fdfb1b0
/// @guessedtype int()

/// @ordinal 10097
/// @name D2SetActPaletteIndex
/// @address 6fdfb740
signed int __stdcall D2SetActPaletteIndex(signed int nIndex);

/// @ordinal 10098
/// @name D2CMPPalShiftGetTransform
/// @address 6fdfb760
const BYTE *__stdcall D2CMPPalShiftGetTransform(signed int eClass, signed int eTransform);

/// @ordinal 10099
/// @name D2FlushAsyncData
/// @address 6fdfe000
/// @guessedtype int()

/// @ordinal 10100
/// @name D2GetTileRoofHeight
/// @address 6fe000e0
__int16 __stdcall D2GetTileRoofHeight(struct_ptTile *hTile);

/// @ordinal 10101
/// @name D2GetLibraryName
/// @address 6fe00110
const char *__stdcall D2GetLibraryName(struct_ptTile *hTile);

/// @ordinal 10102
/// @name D2FreeDT1LRU
/// @address 6fdfe860
/// @guessedtype int()

/// @ordinal 10103
/// @name unknown_libname_1
/// @address 6fdf3ed0
/// Failed to extract type

/// @ordinal 10104
/// @name unknown_libname_1
/// @address 6fdf3ed0
/// Failed to extract type

/// @ordinal 10105
/// @name D2CMP_10105
/// @address 6fdfe8c0
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10106
/// @name unknown_libname_1
/// @address 6fdf3ed0
/// Failed to extract type

