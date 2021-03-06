#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser016_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser016_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser016_GetSteamID(void *);
extern int cppISteamUser_SteamUser016_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser016_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser016_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser016_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser016_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser016_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser016_GetAvailableVoice(void *, uint32 *, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser016_GetVoice(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser016_DecompressVoice(void *, const void *, uint32, void *, uint32, uint32 *, uint32);
extern uint32 cppISteamUser_SteamUser016_GetVoiceOptimalSampleRate(void *);
extern HAuthTicket cppISteamUser_SteamUser016_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamUser_SteamUser016_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamUser_SteamUser016_EndAuthSession(void *, CSteamID);
extern void cppISteamUser_SteamUser016_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamUser_SteamUser016_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamUser_SteamUser016_BIsBehindNAT(void *);
extern void cppISteamUser_SteamUser016_AdvertiseGame(void *, CSteamID, uint32, uint16);
extern SteamAPICall_t cppISteamUser_SteamUser016_RequestEncryptedAppTicket(void *, void *, int);
extern bool cppISteamUser_SteamUser016_GetEncryptedAppTicket(void *, void *, int, uint32 *);
#ifdef __cplusplus
}
#endif
