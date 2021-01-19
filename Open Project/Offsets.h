#ifndef __Offsets_h__
#define __Offsets_h__

#include "Important.h"
#include "Features.h"

using namespace std;

//Int
int xtime;
int cfov;

//Funkcje
	bool toggleFov = false;
	bool toggleGlow = false;
	bool toggleTrigger = false;
	bool toggleBhop = false;
	bool toggleNoFlash = false;
	bool toggleAimbot = false;

//Offsety
struct Offsets {
	DWORD cs_gamerules_data = 0x0;
	DWORD m_ArmorValue = 0xB378;
	DWORD m_Collision = 0x320;
	DWORD m_CollisionGroup = 0x474;
	DWORD m_Local = 0x2FBC;
	DWORD m_MoveType = 0x25C;
	DWORD m_OriginalOwnerXuidHigh = 0x31C4;
	DWORD m_OriginalOwnerXuidLow = 0x31C0;
	DWORD m_SurvivalGameRuleDecisionTypes = 0x1328;
	DWORD m_SurvivalRules = 0xD00;
	DWORD m_aimPunchAngle = 0x302C;
	DWORD m_aimPunchAngleVel = 0x3038;
	DWORD m_angEyeAnglesX = 0xB37C;
	DWORD m_angEyeAnglesY = 0xB380;
	DWORD m_bBombPlanted = 0x9A5;
	DWORD m_bFreezePeriod = 0x20;
	DWORD m_bGunGameImmunity = 0x3944;
	DWORD m_bHasDefuser = 0xB388;
	DWORD m_bHasHelmet = 0xB36C;
	DWORD m_bInReload = 0x32A5;
	DWORD m_bIsDefusing = 0x3930;
	DWORD m_bIsQueuedMatchmaking = 0x74;
	DWORD m_bIsScoped = 0x3928;
	DWORD m_bIsValveDS = 0x7C;
	DWORD m_bSpotted = 0x93D;
	DWORD m_bSpottedByMask = 0x980;
	DWORD m_bStartedArming = 0x33F0;
	DWORD m_bUseCustomAutoExposureMax = 0x9D9;
	DWORD m_bUseCustomAutoExposureMin = 0x9D8;
	DWORD m_bUseCustomBloomScale = 0x9DA;
	DWORD m_clrRender = 0x70;
	DWORD m_dwBoneMatrix = 0x26A8;
	DWORD m_fAccuracyPenalty = 0x3330;
	DWORD m_fFlags = 0x104;
	DWORD m_flC4Blow = 0x2990;
	DWORD m_flCustomAutoExposureMax = 0x9E0;
	DWORD m_flCustomAutoExposureMin = 0x9DC;
	DWORD m_flCustomBloomScale = 0x9E4;
	DWORD m_flDefuseCountDown = 0x29AC;
	DWORD m_flDefuseLength = 0x29A8;
	DWORD m_flFallbackWear = 0x31D0;
	DWORD m_flFlashDuration = 0xA420;
	DWORD m_flFlashMaxAlpha = 0xA41C;
	DWORD m_flLastBoneSetupTime = 0x2924;
	DWORD m_flLowerBodyYawTarget = 0x3A90;
	DWORD m_flNextAttack = 0x2D70;
	DWORD m_flNextPrimaryAttack = 0x3238;
	DWORD m_flSimulationTime = 0x268;
	DWORD m_flTimerLength = 0x2994;
	DWORD m_hActiveWeapon = 0x2EF8;
	DWORD m_hMyWeapons = 0x2DF8;
	DWORD m_hObserverTarget = 0x338C;
	DWORD m_hOwner = 0x29CC;
	DWORD m_hOwnerEntity = 0x14C;
	DWORD m_iAccountID = 0x2FC8;
	DWORD m_iClip1 = 0x3264;
	DWORD m_iCompetitiveRanking = 0x1A84;
	DWORD m_iCompetitiveWins = 0x1B88;
	DWORD m_iCrosshairId = 0xB3E4;
	DWORD m_iEntityQuality = 0x2FAC;
	DWORD m_iFOV = 0x31E4;
	DWORD m_iFOVStart = 0x31E8;
	DWORD m_iGlowIndex = 0xA438;
	DWORD m_iHealth = 0x100;
	DWORD m_iItemDefinitionIndex = 0x2FAA;
	DWORD m_iItemIDHigh = 0x2FC0;
	DWORD m_iMostRecentModelBoneCounter = 0x2690;
	DWORD m_iObserverMode = 0x3378;
	DWORD m_iShotsFired = 0xA390;
	DWORD m_iState = 0x3258;
	DWORD m_iTeamNum = 0xF4;
	DWORD m_lifeState = 0x25F;
	DWORD m_nFallbackPaintKit = 0x31C8;
	DWORD m_nFallbackSeed = 0x31CC;
	DWORD m_nFallbackStatTrak = 0x31D4;
	DWORD m_nForceBone = 0x268C;
	DWORD m_nTickBase = 0x3430;
	DWORD m_rgflCoordinateFrame = 0x444;
	DWORD m_szCustomName = 0x303C;
	DWORD m_szLastPlaceName = 0x35B4;
	DWORD m_thirdPersonViewAngles = 0x31D8;
	DWORD m_vecOrigin = 0x138;
	DWORD m_vecVelocity = 0x114;
	DWORD m_vecViewOffset = 0x108;
	DWORD m_viewPunchAngle = 0x3020;
	DWORD anim_overlays = 0x2980;
	DWORD clientstate_choked_commands = 0x4D30;
	DWORD clientstate_delta_ticks = 0x174;
	DWORD clientstate_last_outgoing_command = 0x4D2C;
	DWORD clientstate_net_channel = 0x9C;
	DWORD convar_name_hash_table = 0x2F0F8;
	DWORD dwClientState = 0x58EFE4;
	DWORD dwClientState_GetLocalPlayer = 0x180;
	DWORD dwClientState_IsHLTV = 0x4D48;
	DWORD dwClientState_Map = 0x28C;
	DWORD dwClientState_MapDirectory = 0x188;
	DWORD dwClientState_MaxPlayer = 0x388;
	DWORD dwClientState_PlayerInfo = 0x52C0;
	DWORD dwClientState_State = 0x108;
	DWORD dwClientState_ViewAngles = 0x4D90;
	DWORD dwEntityList = 0x4DA2E74;
	DWORD dwForceAttack = 0x31D4404;
	DWORD dwForceAttack2 = 0x31D4410;
	DWORD dwForceBackward = 0x31D43BC;
	DWORD dwForceForward = 0x31D43C8;
	DWORD dwForceJump = 0x524CDD4;
	DWORD dwForceLeft = 0x31D43E0;
	DWORD dwForceRight = 0x31D43D4;
	DWORD dwGameDir = 0x62D7F8;
	DWORD dwGameRulesProxy = 0x52C00BC;
	DWORD dwGetAllClasses = 0xDB2D6C;
	DWORD dwGlobalVars = 0x58ECE8;
	DWORD dwGlowObjectManager = 0x52EB478;
	DWORD dwInput = 0x51F4458;
	DWORD dwInterfaceLinkList = 0x945A44;
	DWORD dwLocalPlayer = 0xD8B2AC;
	DWORD dwMouseEnable = 0xD90E50;
	DWORD dwMouseEnablePtr = 0xD90E20;
	DWORD dwPlayerResource = 0x31D2730;
	DWORD dwRadarBase = 0x51D7BEC;
	DWORD dwSensitivity = 0xD90CEC;
	DWORD dwSensitivityPtr = 0xD90CC0;
	DWORD dwSetClanTag = 0x8A1A0;
	DWORD dwViewMatrix = 0x4D94774;
	DWORD dwWeaponTable = 0x51F4F18;
	DWORD dwWeaponTableIndex = 0x325C;
	DWORD dwYawPtr = 0xD90AB0;
	DWORD dwZoomSensitivityRatioPtr = 0xD95D50;
	DWORD dwbSendPackets = 0xD73CA;
	DWORD dwppDirect3DDevice9 = 0xA7050;
	DWORD find_hud_element = 0x514EEED0;
	DWORD force_update_spectator_glow = 0x3AE2C2;
	DWORD interface_engine_cvar = 0x3E9EC;
	DWORD is_c4_owner = 0x3BAD80;
	DWORD m_bDormant = 0xED;
	DWORD m_flSpawnTime = 0xA370;
	DWORD m_pStudioHdr = 0x294C;
	DWORD m_pitchClassPtr = 0x51D7E88;
	DWORD m_yawClassPtr = 0xD90AB0;
	DWORD model_ambient_min = 0x59205C;
	DWORD set_abs_angles = 0x1E05B0;
	DWORD set_abs_origin = 0x1E03F0;

}Offsets;

// Globals
struct Entity {
	DWORD LocalPlayer = readMem<DWORD>(Base.clientBase + Offsets.dwLocalPlayer); // Gracz lokalny
	DWORD defaultFov = readMem<int>(LocalPlayer + Offsets.m_iFOV); // Fov gracza
	DWORD LocalPlayerFlag = readMem<DWORD>(LocalPlayer + Offsets.m_fFlags); // Local Flag (informacja o sytuacji gracza lokalnego)

}Entity;



#endif // __Offsets_h__
