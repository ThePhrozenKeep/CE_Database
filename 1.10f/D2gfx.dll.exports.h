// List of D2gfx.dll exports (base address 6faa0000)
// For each of the other .DLLs, here are the number of imports of the current module exports:
// (Note that this is not the number of uses/references, just the number of times the current module is listed in the import table)
// |- D2Client.dll     :  53
// |- D2Launch.dll     :   1
// |- D2Win.dll        :  32
// |- D2sound.dll      :   1
// |- Game.exe         :   6


/// @ordinal 10000
/// @name Initialize
/// @address 6faa3750
/// Imported by ['D2Win.dll']
BOOL __stdcall Initialize(HINSTANCE hInstance, WNDPROC pfWndProc, D2RenderMode nRenderMode, BOOL bWindowed);

/// @ordinal 10001
/// @name Release
/// @address 6faa39a0
/// Imported by ['D2Client.dll', 'Game.exe']
BOOL __stdcall Release();

/// @ordinal 10002
/// @name ReturnFalse
/// @address 6faa3990
/// Not imported by any .dll
BOOL __stdcall ReturnFalse();

/// @ordinal 10003
/// @name GetRenderMode
/// @address 6faa3ac0
/// Imported by ['D2Client.dll', 'D2Win.dll']
int __stdcall GetRenderMode();

/// @ordinal 10004
/// @name CheckWindowed
/// @address 6faa3ad0
/// Not imported by any .dll
BOOL __stdcall CheckWindowed();

/// @ordinal 10005
/// @name GetResolutionMode
/// @address 6faa3ae0
/// Imported by ['D2Client.dll']
int __stdcall GetResolutionMode();

/// @ordinal 10006
/// @name D2gfx_10047_HardwareAcceleratedRenderMode
/// @address 6faa3b20
/// Imported by ['D2Client.dll']
BOOL __stdcall D2gfx_10047_HardwareAcceleratedRenderMode();

/// @ordinal 10007
/// @name CheckUnitPerspective
/// @address 6faa3af0
/// Imported by ['D2Client.dll']
BOOL __stdcall CheckUnitPerspective();

/// @ordinal 10008
/// @name SetUnitPerspective
/// @address 6faa3b00
/// Imported by ['D2Client.dll']
void __stdcall SetUnitPerspective(BOOL bPerspective);

/// @ordinal 10009
/// @name TogglePerspective
/// @address 6faa3b30
/// Not imported by any .dll
BOOL __stdcall TogglePerspective();

/// @ordinal 10010
/// @name CheckPerspective
/// @address 6faa3b50
/// Imported by ['D2Client.dll']
BOOL __stdcall CheckPerspective();

/// @ordinal 10011
/// @name SetPerspective
/// @address 6faa3b70
/// Imported by ['D2Client.dll', 'Game.exe']
void __stdcall SetPerspective(BOOL bPerspective);

/// @ordinal 10012
/// @name ToggleBlendedShadows
/// @address 6faa3b80
/// Not imported by any .dll
BOOL __stdcall ToggleBlendedShadows();

/// @ordinal 10013
/// @name CheckBlendedShadows
/// @address 6faa3ba0
/// Not imported by any .dll
BOOL __stdcall CheckBlendedShadows();

/// @ordinal 10014
/// @name SetBlendShadows
/// @address 6faa3bb0
/// Imported by ['D2Client.dll']
void __stdcall SetBlendShadows(BOOL bBlendedShadows);

/// @ordinal 10015
/// @name ToggleLowQuality
/// @address 6faa3bc0
/// Imported by ['Game.exe']
BOOL __stdcall ToggleLowQuality();

/// @ordinal 10016
/// @name CheckLowQuality
/// @address 6faa3be0
/// Imported by ['D2Client.dll']
BOOL __stdcall CheckLowQuality();

/// @ordinal 10017
/// @name SetLowQuality
/// @address 6faa3bf0
/// Imported by ['D2Client.dll']
void __stdcall SetLowQuality(BOOL bLowQuality);

/// @ordinal 10018
/// @name SetGamma
/// @address 6faa3c00
/// Imported by ['D2Client.dll', 'Game.exe']
BOOL __stdcall SetGamma(DWORD dwGamma);

/// @ordinal 10019
/// @name CheckGamma
/// @address 6faa3c20
/// Imported by ['D2Client.dll']
BOOL __stdcall CheckGamma();

/// @ordinal 10020
/// @name EnableVSync
/// @address 6faa3c30
/// Imported by ['D2Client.dll', 'Game.exe']
void __stdcall EnableVSync();

/// @ordinal 10021
/// @name GetRenderStatistics
/// @address 6faa3c40
/// Imported by ['D2Client.dll']
DWORD *__stdcall GetRenderStatistics();

/// @ordinal 10022
/// @name SetViewMatrixAdjust
/// @address 6faa3c50
/// Imported by ['D2Client.dll']
void __fastcall SetViewMatrixAdjust(int nAdjust);

/// @ordinal 10023
/// @name CreateWindow
/// @address 6faa4450
/// Imported by ['D2Win.dll']
BOOL __stdcall CreateWindow(BOOL bWindowed, int nResolution);

/// @ordinal 10024
/// @name DestroyWindow
/// @address 6faa4820
/// Imported by ['D2Client.dll', 'D2Win.dll']
BOOL __stdcall DestroyWindow();

/// @ordinal 10025
/// @name SetPause
/// @address 6faa48b0
/// Imported by ['D2Win.dll']
void __stdcall SetPause(BOOL bPaused);

/// @ordinal 10026
/// @name GetWindowState
/// @address 6faa48c0
/// Imported by ['D2Client.dll', 'D2Win.dll']
BOOL __stdcall GetWindowState();

/// @ordinal 10027
/// @name GetWindow
/// @address 6faa49c0
/// Imported by ['D2Client.dll', 'D2Win.dll', 'D2sound.dll', 'Game.exe']
HWND __stdcall GetWindow();

/// @ordinal 10028
/// @name CheckFullScreen
/// @address 6faa4a80
/// Imported by ['D2Client.dll', 'D2Win.dll']
BOOL __stdcall CheckFullScreen();

/// @ordinal 10029
/// @name ShowCursor
/// @address 6faa4a10
/// Imported by ['D2Client.dll']
void __stdcall ShowCursor(BOOL bShow);

/// @ordinal 10030
/// @name ResizeWindow
/// @address 6faa4ae0
/// Imported by ['D2Win.dll']
BOOL __stdcall ResizeWindow(int nResolution, BOOL bForceResize);

/// @ordinal 10031
/// @name ClearCaches
/// @address 6faa4c60
/// Imported by ['D2Win.dll']
void __stdcall ClearCaches();

/// @ordinal 10032
/// @name BeginCutScene
/// @address 6faa4c70
/// Imported by ['D2Win.dll']
void __stdcall BeginCutScene();

/// @ordinal 10033
/// @name EndCutScene
/// @address 6faa4ca0
/// Imported by ['D2Win.dll']
void __stdcall EndCutScene(BOOL bForceResize);

/// @ordinal 10034
/// @name PlayCutScene
/// @address 6faa4de0
/// Imported by ['D2Client.dll', 'D2Launch.dll']
void __stdcall PlayCutScene(const char *szFile, int nResolution, void (__cdecl *pfFrame)());

/// @ordinal 10035
/// @name CheckCutScene
/// @address 6faa4e20
/// Imported by ['D2Win.dll']
BOOL __stdcall CheckCutScene();

/// @ordinal 10036
/// @name DecodeSmacker
/// @address 6faa4e50
/// Imported by ['D2Win.dll']
void __stdcall DecodeSmacker(const char *szSmacker, BYTE *pBuffer, int nVersion);

/// @ordinal 10037
/// @name PlayerSmacker
/// @address 6faa4e90
/// Imported by ['D2Win.dll']
void __stdcall PlayerSmacker(void *pContext);

/// @ordinal 10038
/// @name CloseSmacker
/// @address 6faa4ed0
/// Imported by ['D2Win.dll']
void __stdcall CloseSmacker(void *pContext);

/// @ordinal 10039
/// @name UpdateWindowPlacement
/// @address 6faa4f10
/// Not imported by any .dll
void __stdcall UpdateWindowPlacement();

/// @ordinal 10040
/// @name ShowAllWindows
/// @address 6faa4fa0
/// Imported by ['D2Client.dll']
void __stdcall ShowAllWindows();

/// @ordinal 10041
/// @name GetScreenSize
/// @address 6faa49d0
/// Imported by ['D2Win.dll']
int __stdcall GetScreenSize(int *pWidth, int *pHeight);

/// @ordinal 10042
/// @name SetOption
/// @address 6faa3c60
/// Imported by ['D2Client.dll']
BOOL __fastcall SetOption(int nOption, int nValue);

/// @ordinal 10043
/// @name ActivateWindow
/// @address 6faa4aa0
/// Not imported by any .dll
BOOL __stdcall ActivateWindow(BOOL bActive);

/// @ordinal 10044
/// @name BeginScene
/// @address 6faa3c90
/// Imported by ['D2Client.dll', 'D2Win.dll']
BOOL __stdcall BeginScene(BOOL bClear, BYTE nRed, BYTE nGreen, BYTE nBlue);

/// @ordinal 10045
/// @name EndScene
/// @address 6faa3cb0
/// Imported by ['D2Client.dll', 'D2Win.dll']
BOOL __stdcall EndScene();

/// @ordinal 10046
/// @name GetBackBuffer
/// @address 6faa3cd0
/// Imported by ['D2Win.dll']
BOOL __stdcall GetBackBuffer(BYTE *pBuffer);

/// @ordinal 10047
/// @name HardwareAcceleratedRenderMode
/// @address 6faa3b20
/// Imported by ['D2Client.dll', 'D2Win.dll']
BOOL __stdcall HardwareAcceleratedRenderMode();

/// @ordinal 10048
/// @name SetPalette
/// @address 6faa3e70
/// Imported by ['D2Win.dll']
void __stdcall SetPalette(LPPALETTEENTRY pPalette);

/// @ordinal 10049
/// @name SetPaletteTable
/// @address 6faa3eb0
/// Imported by ['D2Win.dll']
void __stdcall SetPaletteTable(PALETTEENTRY **pPaletteTable);

/// @ordinal 10050
/// @name SetGlobalLight
/// @address 6faa3ed0
/// Imported by ['D2Client.dll']
void __stdcall SetGlobalLight(BYTE nRed, BYTE nGreen, BYTE nBlue);

/// @ordinal 10051
/// @name DrawRect
/// @address 6faa3ce0
/// Not imported by any .dll
void __stdcall DrawRect(RECT *pRect, BYTE nPaletteIndex);

/// @ordinal 10052
/// @name DrawRectEx
/// @address 6faa3d00
/// Imported by ['D2Win.dll']
void __stdcall DrawRectEx(RECT *pRect, BYTE nPaletteIndex);

/// @ordinal 10053
/// @name DrawSolidRect
/// @address 6faa3d20
/// Not imported by any .dll
void __stdcall DrawSolidRect(RECT *pRect, BYTE nPaletteIndex);

/// @ordinal 10054
/// @name DrawSolidSquare
/// @address 6faa3d40
/// Not imported by any .dll
void __stdcall DrawSolidSquare(POINT *pPoint, BYTE nSize, BYTE nPaletteIndex);

/// @ordinal 10055
/// @name DrawSolidRectEx
/// @address 6faa3d60
/// Imported by ['D2Client.dll', 'D2Win.dll']
void __stdcall DrawSolidRectEx(int nXStart, int nYStart, int nXEnd, int nYEnd, DWORD dwColor, int nDrawMode);

/// @ordinal 10056
/// @name DrawSolidRectAlpha
/// @address 6faa3da0
/// Imported by ['D2Client.dll', 'D2Win.dll']
void __stdcall DrawSolidRectAlpha(int nXStart, int nYStart, int nXEnd, int nYEnd, DWORD dwColor, BYTE nAlpha);

/// @ordinal 10057
/// @name DrawLine
/// @address 6faa3de0
/// Imported by ['D2Client.dll']
void __stdcall DrawLine(int nXStart, int nYStart, int nXEnd, int nYEnd, BYTE nColor, BYTE nAlpha);

/// @ordinal 10058
/// @name ClearScreen
/// @address 6faa3e10
/// Imported by ['D2Client.dll', 'D2Win.dll']
void __stdcall ClearScreen(BOOL bPartial);

/// @ordinal 10059
/// @name UpdateScaleFactor
/// @address 6faa3f30
/// Imported by ['D2Client.dll']
void __stdcall UpdateScaleFactor();

/// @ordinal 10060
/// @name GetScaleFactor
/// @address 6faa3f50
/// Imported by ['D2Client.dll']
int __stdcall GetScaleFactor();

/// @ordinal 10061
/// @name SetDefaultScaleFactor
/// @address 6faa3f60
/// Imported by ['D2Client.dll']
void __stdcall SetDefaultScaleFactor();

/// @ordinal 10062
/// @name IncreaseScaleFactor
/// @address 6faa3f80
/// Not imported by any .dll
void __stdcall IncreaseScaleFactor();

/// @ordinal 10063
/// @name DecreaseScaleFactor
/// @address 6faa3fb0
/// Not imported by any .dll
void __stdcall DecreaseScaleFactor();

/// @ordinal 10064
/// @name SetPerspectiveScale
/// @address 6faa3fe0
/// Imported by ['D2Client.dll']
void __stdcall SetPerspectiveScale(int nXScale, int nYScale);

/// @ordinal 10065
/// @name CheckPerspectivePosition
/// @address 6faa4060
/// Imported by ['D2Client.dll']
BOOL __stdcall CheckPerspectivePosition(int nXpos, int nYpos);

/// @ordinal 10066
/// @name AdjustPerspectivePosition
/// @address 6faa4100
/// Imported by ['D2Client.dll']
void __stdcall AdjustPerspectivePosition(int nXpos, int nYpos, int nBais, int *pXAdjust, int *pYAdjust);

/// @ordinal 10067
/// @name PerspectiveScalePosition
/// @address 6faa4170
/// Imported by ['D2Client.dll']
void __stdcall PerspectiveScalePosition(int nXpos, int nYpos, int nAngle, int *pXpos, int *pYpos, BOOL bOrder);

/// @ordinal 10068
/// @name SetDefaultPerspectiveFactor
/// @address 6faa4200
/// Imported by ['D2Client.dll']
void __stdcall SetDefaultPerspectiveFactor();

/// @ordinal 10069
/// @name DrawString
/// @address 6faa3ef0
/// Imported by ['D2Client.dll']
void DrawString(int nXpos, int nYpos, const char *szFormat, ...);

/// @ordinal 10070
/// @name DrawLight
/// @address 6faa3f10
/// Imported by ['D2Client.dll']
void __stdcall DrawLight(DWORD *pLight, DWORD *pPlayerLight, int nXpos, int nYpos);

/// @ordinal 10071
/// @name DrawPerspectiveImage
/// @address 6faa4270
/// Imported by ['D2Client.dll']
void __stdcall DrawPerspectiveImage(D2GfxDataStrc *pData, int nXpos, int nYpos, DWORD dwGamma, int nDrawMode, int nScreenMode, BYTE *pPalette);

/// @ordinal 10072
/// @name DrawImage
/// @address 6faa42a0
/// Imported by ['D2Client.dll', 'D2Win.dll']
void __stdcall DrawImage(D2GfxDataStrc *pData, int nXpos, int nYpos, DWORD dwGamma, int nDrawMode, BYTE *pPalette);

/// @ordinal 10073
/// @name DrawShiftedImage
/// @address 6faa42d0
/// Imported by ['D2Client.dll', 'D2Win.dll']
void __stdcall DrawShiftedImage(D2GfxDataStrc *pData, int nXpos, int nYpos, DWORD dwGamma, int nDrawMode, int nGlobalPaletteShift);

/// @ordinal 10074
/// @name DrawVerticalCropImage
/// @address 6faa4300
/// Imported by ['D2Client.dll', 'D2Win.dll']
void __stdcall DrawVerticalCropImage(D2GfxDataStrc *pData, int nXpos, int nYpos, int nSkipLines, int nDrawLines, int nDrawMode);

/// @ordinal 10075
/// @name DrawShadow
/// @address 6faa4360
/// Imported by ['D2Client.dll', 'D2Win.dll']
void __stdcall DrawShadow(D2GfxDataStrc *pData, int nXpos, int nYpos);

/// @ordinal 10076
/// @name DrawImageFast
/// @address 6faa4380
/// Imported by ['D2Client.dll']
void __stdcall DrawImageFast(D2GfxDataStrc *pData, int nXpos, int nYpos, BYTE nPaletteIndex);

/// @ordinal 10077
/// @name DrawClippedImage
/// @address 6faa4330
/// Imported by ['D2Client.dll', 'D2Win.dll']
void __stdcall DrawClippedImage(D2GfxDataStrc *pData, int nXpos, int nYpos, void *pCropRect, int nDrawMode);

/// @ordinal 10078
/// @name DebugFillBackBuffer
/// @address 6faa43a0
/// Not imported by any .dll
void __stdcall DebugFillBackBuffer(int nXpos, int nYpos);

/// @ordinal 10079
/// @name DrawGroundTile
/// @address 6faa3e30
/// Imported by ['D2Client.dll']
BOOL __stdcall DrawGroundTile(D2TileLibraryEntryStrc *pTile, D2GfxLightExStrc *pLight, int nXpos, int nYpos, int nWorldXpos, int nWorldYpos, BYTE nAlpha, int nScreenPanels, void *pTileData);

/// @ordinal 10080
/// @name DrawWallTile
/// @address 6faa43c0
/// Imported by ['D2Client.dll']
BOOL __stdcall DrawWallTile(D2TileLibraryEntryStrc *pTile, int nXpos, int nYpos, D2GfxLightStrc *pLight, int nScreenPanels);

/// @ordinal 10081
/// @name DrawTransWallTile
/// @address 6faa43f0
/// Imported by ['D2Client.dll']
BOOL __stdcall DrawTransWallTile(D2TileLibraryEntryStrc *pTile, int nXpos, int nYpos, D2GfxLightStrc *pLight, int nScreenPanels, BYTE nAlpha);

/// @ordinal 10082
/// @name DrawShadowTile
/// @address 6faa4420
/// Imported by ['D2Client.dll']
BOOL __stdcall DrawShadowTile(D2TileLibraryEntryStrc *pTile, int nXpos, int nYpos, int nDrawMode, int nScreenPanels);

