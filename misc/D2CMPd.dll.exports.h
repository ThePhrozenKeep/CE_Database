// List of D2CMPd.dll exports (base address 6fc70000)


/// @ordinal 1
/// @name D2CMPTileCacheGroupTileLoads
/// @address 6fc712a3
/// @guessedtype int()

/// @ordinal 2
/// @name D2CMPTileCacheIndividualTileLoads
/// @address 6fc710d2
/// @guessedtype int()

/// @ordinal 3
/// @name D2CMPTileCacheMarkTileForPreLoad
/// @address 6fc7144c
/// @guessedtype int __stdcall(int, int)

/// @ordinal 4
/// @name D2CMPTileCachePreLoadMarkedTiles
/// @address 6fc71104
/// @guessedtype int()

/// @ordinal 5
/// @name CelCheckHardwareMemory
/// @address 6fc715cd
/// @guessedtype int()

/// @ordinal 6
/// @name CelCompressAddImage
/// @address 6fc7140b
/// @guessedtype int __stdcall(int a1, int a2, unsigned int dwImageByteStride, int dwPixelHeight, unsigned int dwPixelWidth, int a6, int a7, int a8)

/// @ordinal 7
/// @name CelCompressCreate
/// @address 6fc714d8
/// @guessedtype int __stdcall(signed int format, unsigned int dwNumDirections, _DWORD *a3, int a4)

/// @ordinal 8
/// @name CelCompressCreateCelFile
/// @address 6fc71235
/// @guessedtype int __stdcall(int a1, int)

/// @ordinal 9
/// @name CelCompressDestroy
/// @address 6fc715af
/// @guessedtype int __stdcall(int a1)

/// @ordinal 10
/// @name CelConvertBlock
/// @address 6fc716cc
/// @guessedtype signed int __stdcall(int nDirection, int dwAsyncFlag)

/// @ordinal 11
/// @name CelConvertDir
/// @address 6fc7103c
/// @guessedtype int __stdcall(unsigned int nDirection, unsigned int nStartDirs, int dwAsyncFlag, int a4)

/// @ordinal 12
/// @name CelDraw
/// @address 6fc716f4
/// @guessedtype int __stdcall(CelInstance *pCelInstance, int offsetX, int offsetY, char *dstData, int a5, int pDestSurface, int a7, int a8, int a9, int a10, int a11)

/// @ordinal 13
/// @name CelDrawEx
/// @address 6fc711cc
/// @guessedtype int __stdcall(CelInstance *pCelInstance, int nDestPosX, int a3, int nDestClampXMin, int nDestClampXMax, int pDestSurface, int surfaceHeight, int dwStride, int a9, int a10, int destStartY, int nLinesToDraw, int a11)

/// @ordinal 14
/// @name CelDrawShadow
/// @address 6fc7171c
/// @guessedtype int __stdcall(CelInstance *pCelInstance, int arg_4, int arg_8, int XClipMin, int XClipMax, int pDestSurface, int destSurfaceHeight, int destSurfaceStride, int a9, int a10)

/// @ordinal 15
/// @name CelFileConvert24To8
/// @address 6fc713d4
/// @guessedtype BOOL __stdcall(CelFile *pFile, CelFile **ppOutCelFile, int (__stdcall *colorToIndexFunc)(int, int, int), int a4)

/// @ordinal 16
/// @name CelFileConvertOldToNew
/// @address 6fc71037
/// @guessedtype int __stdcall(CelFile *pOldFile, int *a2, int *a3)

/// @ordinal 17
/// @name CelFileFree
/// @address 6fc7170d
/// @guessedtype int __stdcall(CelFile *pCelFile)

/// @ordinal 18
/// @name CelFileFreeHardware
/// @address 6fc710e1
/// @guessedtype MACRO_FALSE __stdcall(CelFile *ptFile)

/// @ordinal 19
/// @name CelFileFreeSerialized
/// @address 6fc710ff
/// @guessedtype int __stdcall(int pSerializedFile)

/// @ordinal 20
/// @name CelFileGetCelsPerDirection
/// @address 6fc71389
/// @guessedtype int __stdcall(CelFile *pFile)

/// @ordinal 21
/// @name CelFileGetNumDirections
/// @address 6fc71514
/// @guessedtype int __stdcall(CelFile *a1)

/// @ordinal 22
/// @name CelFileHalve
/// @address 6fc716b8
/// @guessedtype void __stdcall(int hFile, int a2)

/// @ordinal 23
/// @name CelFileIteratePixels
/// @address 6fc7155f
/// @guessedtype unsigned int __stdcall(CelFile *pFile, void (__stdcall *pfParse)(DWORD dwColor))

/// @ordinal 24
/// @name CelFileNormalize
/// @address 6fc711b3
int __stdcall CelFileNormalize(int, int, int, int, int, char *);

/// @ordinal 25
/// @name CelFileSerialize
/// @address 6fc712c1
/// @guessedtype signed int __stdcall(CelFile *pCelFile, CelFile **ppOutNodes, int *pOutSize)

/// @ordinal 26
/// @name CelFileTransform
/// @address 6fc71640
/// @guessedtype void __stdcall(CelFile *pCelFile, byte *pTransformData)

/// @ordinal 27
/// @name CelGameDirToFileDir
/// @address 6fc71019
DWORD __stdcall CelGameDirToFileDir(int nGameDirection, int nLevelOfRotation);

/// @ordinal 28
/// @name CelGameDirToNormalDir
/// @address 6fc71023
/// @guessedtype int __stdcall(unsigned int nGameDirection, unsigned int nLevelOfRotation)

/// @ordinal 29
/// @name CelGameDirToShadowGameDir
/// @address 6fc7112c
/// @guessedtype int __stdcall(unsigned int nGameDirection, unsigned int nLevelOfRotation)

/// @ordinal 30
/// @name CelGetControlData
/// @address 6fc7164a
/// @guessedtype int32_t *__stdcall(struct_pCel *ptCell)

/// @ordinal 31
/// @name CelGetHandle
/// @address 6fc710b4
struct_pCel *__stdcall CelGetHandle(CelContext *ptCelContext);

/// @ordinal 32
/// @name CelGetHardwareData
/// @address 6fc710b9
char *__stdcall CelGetHardwareData(int a1);

/// @ordinal 33
/// @name CelGetHardwareFreeCallback
/// @address 6fc7122b
void (__thiscall *__cdecl CelGetHardwareFreeCallback())(_DWORD);

/// @ordinal 34
/// @name CelGetHeight
/// @address 6fc713d9
int __stdcall CelGetHeight(struct_pCel *pCel);

/// @ordinal 35
/// @name CelGetOffsetX
/// @address 6fc714b0
int __stdcall CelGetOffsetX(struct_pCel *a1);

/// @ordinal 36
/// @name CelGetOffsetY
/// @address 6fc7155a
/// @guessedtype int __stdcall(struct_pCel *a1)

/// @ordinal 37
/// @name CelGetRawData
/// @address 6fc7139d
BOOL __stdcall CelGetRawData(CelFile *pCelFile, int nGameDirection, int a3, void *pDestBuffer);

/// @ordinal 38
/// @name CelGetWidth
/// @address 6fc71339
int __stdcall CelGetWidth(struct_pCel *pCel);

/// @ordinal 39
/// @name CelNormalDirToFileDir
/// @address 6fc7166d
/// @guessedtype int __stdcall(unsigned int nNormalDirection, unsigned int nNumberOfDirections)

/// @ordinal 40
/// @name CelSetHardwareFreeCallback
/// @address 6fc71127
void __fastcall CelSetHardwareFreeCallback(void (__fastcall *callback)(TileHeader *pTile));

/// @ordinal 41
/// @name CmpDoLensEffect
/// @address 6fc715e1
/// @guessedtype int __stdcall(int, int)

/// @ordinal 42
/// @name CreateD2Palette
/// @address 6fc71230
int __stdcall CreateD2Palette(void *);

/// @ordinal 43
/// @name CreateD2PaletteByteStream
/// @address 6fc71168
/// @guessedtype int __stdcall(void *, int)

/// @ordinal 44
/// @name D2CMPBuildFileName
/// @address 6fc71109
int __stdcall D2CMPBuildFileName(char *, int, char *, va_list);

/// @ordinal 45
/// @name D2CMPCelDataCacheDumpHashTableStats
/// @address 6fc71578
/// @guessedtype int()

/// @ordinal 46
/// @name D2CMPCelDataCacheGetMaxMemory
/// @address 6fc71587
/// @guessedtype int()

/// @ordinal 47
/// @name D2CMPCelDataCacheGetUsedMemory
/// @address 6fc71302
/// @guessedtype int()

/// @ordinal 48
/// @name D2CMPDestroyTileHeaders
/// @address 6fc71663
/// @guessedtype int()

/// @ordinal 49
/// @name D2CMPFindTileProject
/// @address 6fc71618
/// @guessedtype int __stdcall(int)

/// @ordinal 50
/// @name D2CMPGetFindTile
/// @address 6fc715b9
/// @guessedtype D2TileLibraryHashStrc *__stdcall(char *szFilename)

/// @ordinal 51
/// @name D2CMPGetGfxFileExtension
/// @address 6fc71177
/// @guessedtype const char *__stdcall(int a1)

/// @ordinal 52
/// @name D2CMPGetTileCacheHits
/// @address 6fc711bd
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 53
/// @name D2CMPIterateAllTiles
/// @address 6fc71532
/// @guessedtype int __stdcall(int, int)

/// @ordinal 54
/// @name D2CMPLoadProjectRecord
/// @address 6fc712e4
TileProjectHeader *__stdcall D2CMPLoadProjectRecord(D2TileLibraryHashStrc **a1, char *szName);

/// @ordinal 55
/// @name D2CMPPalShiftGetTransform
/// @address 6fc71708
/// @guessedtype char *__stdcall(signed int eClass, signed int eTransform)

/// @ordinal 56
/// @name D2CMPPalShiftInit
/// @address 6fc71492
/// @guessedtype int()

/// @ordinal 57
/// @name D2CMPPalShiftSetAct
/// @address 6fc71645
/// @guessedtype int __stdcall(int)

/// @ordinal 58
/// @name D2CMPResetTileCacheHits
/// @address 6fc71118
/// @guessedtype int()

/// @ordinal 59
/// @name D2CMPSetNoCompress
/// @address 6fc7148d
/// @guessedtype int __stdcall(int)

/// @ordinal 60
/// @name D2CMPSpriteCacheDestroy
/// @address 6fc713de
/// @guessedtype int __stdcall(int)

/// @ordinal 61
/// @name D2CMPSpriteCacheDumpHashTableStats
/// @address 6fc71690
/// @guessedtype int()

/// @ordinal 62
/// @name D2CMPSpriteCacheGetMaxMemory
/// @address 6fc714dd
/// @guessedtype int()

/// @ordinal 63
/// @name D2CMPSpriteCacheGetUsedMemory
/// @address 6fc713ca
/// @guessedtype int()

/// @ordinal 64
/// @name D2CMPSpriteCacheInit
/// @address 6fc71087
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 65
/// @name D2CMPSpriteFindAsynchSiblings
/// @address 6fc71316
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 66
/// @name D2CMPSpriteFreeAsyncLoads
/// @address 6fc71005
/// @guessedtype int()

/// @ordinal 67
/// @name D2CMPSpriteNumAsyncLoads
/// @address 6fc71249
/// @guessedtype int()

/// @ordinal 68
/// @name D2CMPSpriteRequest
/// @address 6fc711ea
/// @guessedtype BOOL __stdcall(CelContext *ptCelContext)

/// @ordinal 69
/// @name D2CMPSpriteValidate
/// @address 6fc710dc
/// @guessedtype int __stdcall(CelContext *ptCelContext, int, int a6)

/// @ordinal 70
/// @name D2CMPTileCacheDestroy
/// @address 6fc716d1
/// @guessedtype int __stdcall(int)

/// @ordinal 71
/// @name D2CMPTileCacheInit
/// @address 6fc71267
/// @guessedtype int __stdcall(int, int)

/// @ordinal 72
/// @name D2CMPTileFreeAsyncLoads
/// @address 6fc71776
/// @guessedtype int()

/// @ordinal 73
/// @name D2CMPTileValidate
/// @address 6fc714f6
/// @guessedtype signed int __stdcall(TileHeader *ptTile, int a2, int a3)

/// @ordinal 74
/// @name D2CMPToggleCelDrawMode
/// @address 6fc7117c
/// @guessedtype int()

/// @ordinal 75
/// @name D2CMPVerifyGfxHashTable
/// @address 6fc713c0
/// @guessedtype int()

/// @ordinal 76
/// @name DestroyD2Palette
/// @address 6fc711d1
/// @guessedtype int __stdcall(int)

/// @ordinal 77
/// @name GetClosestColor
/// @address 6fc712b2
char __stdcall GetClosestColor(Color32Bit *pSrcPalette, int nPaletteSize, int red, int blue, int green);

/// @ordinal 78
/// @name GetFurthestColor
/// @address 6fc714f1
/// @guessedtype int __stdcall(int, int, int, int, int)

/// @ordinal 79
/// @name Palette24BitTo8BitImage
/// @address 6fc71159
/// @guessedtype int __stdcall(int, int, int, int)

/// @ordinal 80
/// @name Palette24BitTo8BitPixel
/// @address 6fc7137f
/// @guessedtype int __stdcall(int, int, int)

/// @ordinal 81
/// @name PaletteFixBlack
/// @address 6fc7104b
/// @guessedtype int __stdcall(int)

/// @ordinal 82
/// @name PaletteInit
/// @address 6fc7132f
int __stdcall PaletteInit(LPCSTR lpString, int, int);

/// @ordinal 83
/// @name PaletteSetMask
/// @address 6fc71311
int __stdcall PaletteSetMask(void *);

/// @ordinal 84
/// @name PaletteSetTransparency
/// @address 6fc71262
/// @guessedtype int __stdcall(char)

/// @ordinal 85
/// @name PaletteTestBackground
/// @address 6fc71415
/// @guessedtype int __stdcall(int)

/// @ordinal 86
/// @name TileAddAddFloorTile
/// @address 6fc714fb
/// @guessedtype TileComp *__stdcall(void *ptTileAdd, Color24Bit *ptImage)

/// @ordinal 87
/// @name TileAddAddSubTile
/// @address 6fc710af
/// @guessedtype TileListTile *__stdcall(TileListTile *hTileAdd, Color24Bit *ptImage, int dwStride, signed int nOffsetX, signed int nOffsetY)

/// @ordinal 88
/// @name TileGetCollisionInfo
/// @address 6fc715f0
/// @guessedtype _DWORD *__stdcall(TileHeader *hTile)

/// @ordinal 89
/// @name TileGetFilename
/// @address 6fc7178a
/// @guessedtype char *__stdcall(TileHeader *hTile)

/// @ordinal 90
/// @name TileGetFlags
/// @address 6fc71186
/// @guessedtype int __stdcall(TileHeader *hTile)

/// @ordinal 91
/// @name TileGetHeightToBottom
/// @address 6fc7129e
/// @guessedtype int __stdcall(TileHeader *a1)

/// @ordinal 92
/// @name TileGetRarity
/// @address 6fc711d6
/// @guessedtype DWORD __stdcall(TileHeader *hTile)

/// @ordinal 93
/// @name TileGetRoofHeight
/// @address 6fc71794
__int16 __stdcall TileGetRoofHeight(TileHeader *hTile);

/// @ordinal 94
/// @name TileGetSequence
/// @address 6fc71631
/// @guessedtype int __stdcall(TileHeader *hTile)

/// @ordinal 95
/// @name TileGetStyle
/// @address 6fc710aa
/// @guessedtype int __stdcall(TileHeader *hTile)

/// @ordinal 96
/// @name TileGetTileLight
/// @address 6fc71424
/// @guessedtype int __stdcall(TileHeader *hTile)

/// @ordinal 97
/// @name TileGetTotalHeight
/// @address 6fc713b6
/// @guessedtype int __stdcall(TileHeader *hTile)

/// @ordinal 98
/// @name TileGetType
/// @address 6fc7153c
/// @guessedtype DWORD __stdcall(TileHeader *hTile)

/// @ordinal 99
/// @name TileGetWidth
/// @address 6fc713a7
/// @guessedtype int __stdcall(TileHeader *hTile)

/// @ordinal 100
/// @name TileLibraryAddProject
/// @address 6fc712b7
/// @guessedtype TileProjectHeader *__stdcall(TileLibrary *ptTileLibrary, char *szName)

/// @ordinal 101
/// @name TileLibraryGetTiles
/// @address 6fc71762
/// @guessedtype int __stdcall(TileLibrary *ptTileLibrary, int tileType, int tileStyle, int tileSequence, void **hTileList, int hTileListSize)

/// @ordinal 102
/// @name TileLibraryReleaseProject
/// @address 6fc7169f
/// @guessedtype void __stdcall(TileLibrary *ptTileLibrary, int a2)

/// @ordinal 103
/// @name TileListAddTile
/// @address 6fc7118b
TileListTile *__stdcall TileListAddTile(TileList *pTileList, __int16 a2, __int16 a3, int a4, int a5, int a6, int a7, int a8, void *a9);

/// @ordinal 104
/// @name TileListCreate
/// @address 6fc71131
/// @guessedtype TileList *__stdcall(char *ptData, int transparentColorRGB24)

/// @ordinal 105
/// @name TileListCreateProject
/// @address 6fc71447
signed int __stdcall TileListCreateProject(TileList *ptTileList, TileProjectHeader **a2);

/// @ordinal 106
/// @name TileListDestroy
/// @address 6fc71474
int __stdcall TileListDestroy(TileList *ptList);

/// @ordinal 107
/// @name TileProjectConvert24To8
/// @address 6fc7109b
/// @guessedtype TileProjectHeader *__stdcall(TileProjectHeader *ptProject24, _DWORD *a2, int (__stdcall *pFindClosestColorIndex)(int, int, int))

/// @ordinal 108
/// @name TileProjectDestroy
/// @address 6fc71299
void __stdcall TileProjectDestroy(TileProjectHeader *ptProject, int a2);

/// @ordinal 109
/// @name TileProjectIteratePixels
/// @address 6fc71028
TileProjectHeader *__stdcall TileProjectIteratePixels(TileProjectHeader *ptProject, int a2);

/// @ordinal 110
/// @name TileProjectNormalize
/// @address 6fc71433
int __stdcall TileProjectNormalize(int, int, char *);

/// @ordinal 111
/// @name TileProjectSerialize
/// @address 6fc71668
_DWORD *__stdcall TileProjectSerialize(TileProjectHeader *ptProject, int a2, int a3);

/// @ordinal 112
/// @name TileSetHardwareFreeCallback
/// @address 6fc71096
/// @guessedtype int __stdcall(int (__stdcall *)())

/// @ordinal 113
/// @name UpdateD2TransparencyTable
/// @address 6fc71780
/// @guessedtype int __stdcall(int, int)

