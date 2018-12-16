// List of D2sound.dll exports (base address 6f980000)


/// @ordinal 10000
/// @name OpenSoundSystem
/// @address 6f9810e0
/// @guessedtype int()

/// @ordinal 10001
/// @name CloseSoundSystem
/// @address 6f9821c0
/// @guessedtype int()

/// @ordinal 10002
/// @name GetDirectSound
/// @address 6f9822b0
/// @guessedtype int()

/// @ordinal 10003
/// @name CheckSoundAvailable
/// @address 6f9822c0
/// @guessedtype int()

/// @ordinal 10004
/// @name CheckSoundHasBuffers
/// @address 6f9822d0
/// @guessedtype int()

/// @ordinal 10005
/// @name ReturnFalse
/// @address 6f9822e0
/// @guessedtype int()

/// @ordinal 10006
/// @name D2sound_10006
/// @address 6f9823c0
/// @guessedtype int()

/// @ordinal 10007
/// @name CreateSoundSample
/// @address 6f9836b0
void *__fastcall CreateSoundSample(int nFlags);

/// @ordinal 10008
/// @name DestroySoundSample
/// @address 6f9838f0
void __thiscall DestroySoundSample(SoundSample *ptSample);

/// @ordinal 10009
/// @name D2sound_10009
/// @address 6f983a30
void __usercall D2sound_10009(SoundSample *ptSample@<ecx>, double a2@<st0>);

/// @ordinal 10010
/// @name D2sound_10010
/// @address 6f983cb0
signed int __fastcall D2sound_10010(SoundSample *ptSample, int pbWaveData, unsigned int dwWaveSize);

/// @ordinal 10011
/// @name D2sound_10011
/// @address 6f983da0
signed int __thiscall D2sound_10011(SoundSample *ptSample);

/// @ordinal 10012
/// @name D2sound_10012
/// @address 6f983e10
void __thiscall D2sound_10012(SoundSample *ptSample);

/// @ordinal 10013
/// @name D2sound_10013
/// @address 6f983ee0
int __thiscall D2sound_10013(SoundSample *this);

/// @ordinal 10014
/// @name D2sound_10014
/// @address 6f983f80
int __fastcall D2sound_10014(SoundSample *a1, int a2);

/// @ordinal 10015
/// @name D2sound_10015
/// @address 6f984020
int __thiscall D2sound_10015(SoundSample *this);

/// @ordinal 10016
/// @name D2sound_10016
/// @address 6f984050
int __fastcall D2sound_10016(SoundSample *ptSample, signed int a2);

/// @ordinal 10017
/// @name D2sound_10017
/// @address 6f9840f0
int __thiscall D2sound_10017(SoundSample *ptSample, int a2, int a3, int a4);

/// @ordinal 10018
/// @name D2sound_10018
/// @address 6f984140
unsigned int __thiscall D2sound_10018(SoundSample *ptSample);

/// @ordinal 10019
/// @name D2sound_10019
/// @address 6f9841c0
void __fastcall D2sound_10019(SoundSample *ptSample, int a2);

/// @ordinal 10020
/// @name SetSampleLoopBlockStart
/// @address 6f9841f0
void __fastcall SetSampleLoopBlockStart(SoundSample *ptSample, int dwLoopBlockStart);

/// @ordinal 10021
/// @name D2sound_10021
/// @address 6f984220
void __thiscall D2sound_10021(SoundSample *ptSample, float a2);

/// @ordinal 10022
/// @name D2sound_10022
/// @address 6f9842c0
int __thiscall D2sound_10022(SoundSample *ptSample, float arg_8);

/// @ordinal 10023
/// @name HasStreamFile
/// @address 6f9843a0
BOOL __thiscall HasStreamFile(SoundSample *ptSample);

/// @ordinal 10024
/// @name D2sound_10024
/// @address 6f9845b0
void __fastcall D2sound_10024(SoundSample *ptSample, int a2, int a3);

/// @ordinal 10025
/// @name D2sound_10025
/// @address 6f9847a0
/// @guessedtype int __stdcall(int, int)

/// @ordinal 10026
/// @name D2sound_10026
/// @address 6f984870
void __thiscall D2sound_10026(SoundSample *ptSample);

/// @ordinal 10027
/// @name SetVolume
/// @address 6f984630
void __fastcall SetVolume(signed int nVolume);

/// @ordinal 10028
/// @name GetVolume
/// @address 6f984780
/// @guessedtype int()

/// @ordinal 10029
/// @name D2sound_10029
/// @address 6f9843d0
void __fastcall D2sound_10029(int nDuration);

/// @ordinal 10030
/// @name D2sound_10030
/// @address 6f984930
/// @guessedtype int()

/// @ordinal 10031
/// @name D2sound_10031
/// @address 6f9849a0
/// @guessedtype int()

/// @ordinal 10032
/// @name D2sound_10032
/// @address 6f984a00
/// @guessedtype int()

/// @ordinal 10033
/// @name D2sound_10033
/// @address 6f984a20
/// @guessedtype int()

/// @ordinal 10034
/// @name Stream_?
/// @address 6f984d60
/// @guessedtype int()

/// @ordinal 10035
/// @name D2sound_10035
/// @address 6f984e20
/// @guessedtype int()

/// @ordinal 10036
/// @name InitSoundFast
/// @address 6f982630
/// @guessedtype int()

/// @ordinal 10037
/// @name DestroySoundFast
/// @address 6f9826a0
/// @guessedtype int()

/// @ordinal 10038
/// @name Fast_???
/// @address 6f982750
/// @guessedtype int()

/// @ordinal 10039
/// @name D2sound_10039
/// @address 6f982800
/// @guessedtype int()

/// @ordinal 10040
/// @name D2sound_10040
/// @address 6f9828f0
/// @guessedtype int()

/// @ordinal 10041
/// @name D2sound_10041
/// @address 6f982920
/// @guessedtype int()

/// @ordinal 10042
/// @name D2sound_10042
/// @address 6f982950
/// @guessedtype int()

/// @ordinal 10043
/// @name InitSoundSettings
/// @address 6f9829a0
void __fastcall InitSoundSettings(int nDefaultValue);

/// @ordinal 10044
/// @name GetSoundMixer
/// @address 6f982ad0
/// @guessedtype int()

/// @ordinal 10045
/// @name SetSoundMixer
/// @address 6f982ae0
void __fastcall SetSoundMixer(DWORD dwNewSoundMixer);

/// @ordinal 10046
/// @name GetMasterVolume
/// @address 6f982b00
/// @guessedtype int()

/// @ordinal 10047
/// @name SetMasterVolume
/// @address 6f982b10
void __fastcall SetMasterVolume(DWORD dwNewMasterVolume);

/// @ordinal 10048
/// @name GetMusicVolume
/// @address 6f982b30
/// @guessedtype int()

/// @ordinal 10049
/// @name SetMusicVolume
/// @address 6f982b40
void __thiscall SetMusicVolume(DWORD dwNewMusicVolume);

/// @ordinal 10050
/// @name GetPositionalBias
/// @address 6f982b60
/// @guessedtype int()

/// @ordinal 10051
/// @name SetPositionalBias
/// @address 6f982b70
void __fastcall SetPositionalBias(DWORD dwNewPositionalBias);

/// @ordinal 10052
/// @name GetNPCSpeech
/// @address 6f982b90
/// @guessedtype int()

/// @ordinal 10053
/// @name SetNPCSpeech
/// @address 6f982ba0
void __fastcall SetNPCSpeech(DWORD dwNewNPCSpeech);

/// @ordinal 10054
/// @name GainToDirectSoundDecibel
/// @address 6f984e30
long double __stdcall GainToDirectSoundDecibel(float fMinVolume, float fMaxVolume, float fValue);

/// @ordinal 10055
/// @name D2sound_10055
/// @address 6f984eb0
int __stdcall D2sound_10055(float);

/// @ordinal 10056
/// @name D2sound_10056
/// @address 6f984f60
/// @guessedtype int __stdcall(int)

/// @ordinal 10057
/// @name D2sound_10057
/// @address 6f985050
int __stdcall D2sound_10057(float, float, float);

/// @ordinal 10058
/// @name CreateSoundInstance
/// @address 6f985140
void __fastcall CreateSoundInstance(SoundInstance **pOutpSoundInstance, SoundSample *ptSoundSample);

/// @ordinal 10059
/// @name DestroySampleInstances
/// @address 6f985180
void __fastcall DestroySampleInstances(SoundInstance **ptSoundInstancesHead, SoundSample *ptSampleToDestroy);

/// @ordinal 10060
/// @name SampleHasInstance
/// @address 6f9851d0
BOOL __fastcall SampleHasInstance(SoundInstance *ptSoundInstance, SoundSample *ptSample);

/// @ordinal 10061
/// @name CountNbSoundInstances
/// @address 6f9851f0
int __fastcall CountNbSoundInstances(SoundInstance *ptSoundInstance);

/// @ordinal 10062
/// @name DestroyAllSoundInstances
/// @address 6f985200
void __thiscall DestroyAllSoundInstances(SoundInstance **ptptSoundInstancesHead);

/// @ordinal 10063
/// @name AddNewInstanceToList
/// @address 6f985250
SoundInstance *__fastcall AddNewInstanceToList(SoundInstance **pInOutSoundInstance, SoundSample *a2);

/// @ordinal 10064
/// @name D2sound_10064
/// @address 6f983f10
int __thiscall D2sound_10064(SoundSample *this);

/// @ordinal 10065
/// @name D2sound_10065
/// @address 6f9849d0
/// @guessedtype int()

/// @ordinal 10066
/// @name CheckSoundFastInitialized
/// @address 6f982990
/// @guessedtype int()

/// @ordinal 10067
/// @name D2sound_10068_Noop
/// @address 6f9848e0
/// @guessedtype int()

/// @ordinal 10068
/// @name Noop
/// @address 6f9848e0
/// @guessedtype int()

/// @ordinal 10069
/// @name CheckOptionsMusicEnabled
/// @address 6f982bc0
BOOL __cdecl CheckOptionsMusicEnabled();

/// @ordinal 10070
/// @name SetOptionsMusicEnabled
/// @address 6f982bd0
void __fastcall SetOptionsMusicEnabled(BOOL newOptionsMusic);

