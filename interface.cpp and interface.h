// interface.h
#pragma once

#include "stdafx.h"
#include "Import.h"
#include <functional>
#include "CustomJewelBank.h"

#define MAX_OBJECT			500
#define MAX_WIN_WIDTH		640
#define MAX_WIN_HEIGHT		480

enum ObjWindowsEx
{
	exWinNews			= 1,
	exWinReset			= 2,
	exWinGrandReset		= 3,
	exWinRanking		= 4,
	exWinDonate			= 5,
	exWinPremium		= 6,
	exWinMiniMenu		= 7,
	exWinSettings		= 8,
	exWinPTSearchMaster	= 9,
	exWinPTSearchUser	= 10,
	exWinPersonalSearch	= 12,
	exWinPersonalPrice	= 13,
	exWinNPCBuffer,
	exWinSmithy,
	exWinSmithyCheck,
	exWinCheckOffAfk,
	exWinMarriage,
	exWinAddPoints,
	exWinAddResetPoint,
	exWinCustomMenu,
	exWinCustomMenuChangeClass,
	exWinDungeonSiege,
	exWinTeamVsTeam,
	exWinTeamVsTeamStatistic,
	exWinAchievements,
	exWinAchievementsPower,
	exWinTeleport,
	exWinTeleportEvo,
	exWinResetRage,
	exWinDonateCheck,
	exWinPKClear,
	exWinAccWarning,
	exWinAccMenu,
	exWinAccOption,
	exWinAccPC,
	exWinAccMessage,
	exWinAccNumber,
	exWinReferralMenu,
	exWinReferralSystem,
	exWinReferralSystem2,
	exWinQuest,
	exWinLottery,
	exWinItemMarket,
	exWinItemMarket2,
	exWinMenuV3,
	exWinStatsAdvance,
};


enum ObjectID
{
		eFlag01=1,
		eFlag02,
		eFlag03,
		eFlag04,
		eFlag05,
		eFlag06,
		eFlag07,
		eFlag08,
		eFlag09,
		eFlag10,
		eFlag11,
		eFlag12,
		eFlag13,
		eFlag14,
		eFlag15,
		eFlag16,
		eFlag17,
		eFlag18,
		eFlag19,
		eFlag20,
		eFlag21,
		eFlag22,
		eTIME,
		eRankPANEL_MAIN,
		eRanking,
		eSAMPLEBUTTON,
		eSAMPLEBUTTON2,
		eVip_MAIN,
		eVip_TITLE,
		eVip_FRAME,
		eVip_FOOTER,
		eVip_DIV,
		eVip_CLOSE,
		eVip_BRONZE,
		eVip_SILVER,
		eVip_GOLD,
		eVip_PLATINUM,
		eVip_STATUS,
		eRanking_MAIN,
		eRanking_CLOSE,
		eLogo,
		eEventTimePANEL_MAIN,
		eEventTime_MAIN,
		eEventTime_CLOSE,
		eMenu,
		eMenuBG,
		eMenu_MAIN,
		eMenu_TITLE,
		eMenu_FRAME,
		eMenu_FOOTER,
		eMenu_DIV,
		eMenu_CLOSE,
		eMenu_OPT1,
		eMenu_OPT2,
		eMenu_OPT3,
		eMenu_OPT4,
		eMenu_OPT20,
		eMenu_OPT21,
		eMenu_OPT22,
		eLuckymenu,
		eLuckySpin,
		eLuckySpinRoll,
		eLuckySpinClose,
		eLuckyWheelPanel,
		eBXH,
		eQuaMocRSMain,
		eQuaMocRSNhan,
		eQuaMocRSPanel,
		eQuaMocRSNhan_CLOSE,
		eICONQUAMOCRS,
		eRock,
		ePaper,
		eScissors,
		eCommand_MAIN,
		eCommand_TITLE,
		eCommand_FRAME,
		eCommand_FOOTER,
		eCommand_DIV,
		eCommand_CLOSE,

		eCONFIRM_MAIN,
		eCONFIRM_BTN_OK,
		eCONFIRM_BTN_CANCEL,
		eCONFIRM_TITLE,
		eCONFIRM_FRAME,
		eCONFIRM_FOOTER,
		eCONFIRM_DIV,

		eNextCommand,
		ePrevCommand,

		eNextEvent,
		ePrevEvent,
			eSMITHY_MAIN,
	eSMITHY_MAIN1,
	eSMITHY_TITLE,
	eSMITHY_FRAME,
	eSMITHY_FOOTER,
	eSMITHY_DIV,
	eSMITHY_DIV2,
	eSMITHY_INFOBG,
	eSMITHY_CLOSE, 
	eSMITHY_BACK,
	eSMITHY_TEXT,
	eSMITHY_TEXT2, 
	eSMITHY_TEXT3, 
	eSMITHY_TEXT4, 
	eSMITHY_TEXT5, 
	eSMITHY_TEXT6, 
	eSMITHY_TEXT7, 
	eSMITHY_TEXT8, 
	eSMITHY_TEXT9, 
	eSMITHY_TEXT10,
	eSMITHY_L,
	eSMITHY_R,
	eSMITHY_INFOBG2,
	eSMITHY_INFOBG3,
	eSMITHY_LINE,
	eSMITHY_POINT, 
	eSMITHY_CHECK0,
	eSMITHY_CHECK1,
	eSMITHY_CHECK2,
	eSMITHY_CHECK3,
	eSMITHY_CHECK4,
	eSMITHY_CHECK5,
	eSMITHY_CHECK6,
	eSMITHY_CHECK7,
	eSMITHY_PAGEUP,
	eSMITHY_PAGEDN,
	eSMITHY_BT1,
	eSMITHY_BT2,
	eSMITHY_PAGEUP2,
	eSMITHY_PAGEDN2,
	eSMITHY_PAGEUP3,
	eSMITHY_PAGEDN3,
	eSMITHY_PAGEUP4,
	eSMITHY_PAGEDN4,
	eSMITHY_CHECKWIN_MAIN,
	eSMITHY_CHECKWIN_TITLE, 
	eSMITHY_CHECKWIN_FRAME, 
	eSMITHY_CHECKWIN_FOOTER,
	eSMITHY_CHECKWIN_DIV,
	eSMITHY_CHECKWIN_OK,
	eSMITHY_CHECKWIN_CLOSE, 

	eCHANGINGCLASS_MAIN,
	eCHANGINGCLASS_TITLE,
	eCHANGINGCLASS_FRAME,
	eCHANGINGCLASS_FOOTER,
	eCHANGINGCLASS_DIV,
	eCHANGINGCLASS_INFOBG,
	eCHANGINGCLASS_MONEYBG,
	eCHANGINGCLASS_CLOSE,
	eCHANGINGCLASS_DW,
	eCHANGINGCLASS_DK,
	eCHANGINGCLASS_ELF,
	eCHANGINGCLASS_MG,
	eCHANGINGCLASS_DL,
	eCHANGINGCLASS_SUM,
	eCHANGINGCLASS_RF,
	eUSERSPANEL_CHANGINGCLASS,

	eMenu1,

	eImgID_ACHIEVEMENTS_MAIN,
	eImgID_ACHIEVEMENTS_PROGRESS_LINE,
	eACHIEVEMENTS_PROGRESS_BG,
	eImgID_ACHIEVEMENTS_MISSION_1,
	eImgID_ACHIEVEMENTS_MISSION_2,
	eImgID_ACHIEVEMENTS_MISSION_3,
	eImgID_ACHIEVEMENTS_MISSION_4,
	eImgID_ACHIEVEMENTS_MISSION_5,
	eImgID_ACHIEVEMENTS_MISSION_6,
	eImgID_ACHIEVEMENTS_MISSION_7,
	eImgID_ACHIEVEMENTS_MISSION_8,
	eImgID_ACHIEVEMENTS_MISSION_9,
	eImgID_ACHIEVEMENTS_MISSION_10,
	eImgID_ACHIEVEMENTS_MISSION_11,
	eImgID_ACHIEVEMENTS_MISSION_12,
	eImgID_ACHIEVEMENTS_MISSION_13,
	eImgID_ACHIEVEMENTS_MISSION_14,
	eImgID_ACHIEVEMENTS_MISSION_15,
	eImgID_ACHIEVEMENTS_MISSION_16,
	eImgID_ACHIEVEMENTS_MISSION_17,
	eImgID_ACHIEVEMENTS_MISSION_18,
	eImgID_ACHIEVEMENTS_MISSION_19,
	eImgID_ACHIEVEMENTS_MISSION_20,
	eImgID_ACHIEVEMENTS_MISSION_21,
	eImgID_ACHIEVEMENTS_MISSION_22,
	eImgID_ACHIEVEMENTS_MISSION_23,
	eImgID_ACHIEVEMENTS_MISSION_24,
	eImgID_ACHIEVEMENTS_MISSION_25,
	eImgID_ACHIEVEMENTS_MISSION_26,
	eImgID_ACHIEVEMENTS_MISSION_27,
	eImgID_ACHIEVEMENTS_MISSION_28,
	eImgID_ACHIEVEMENTS_MISSION_29,
	eImgID_ACHIEVEMENTS_MISSION_30,
	eImgID_ACHIEVEMENTS_MISSION_31,
	eImgID_ACHIEVEMENTS_MISSION_32,
	eImgID_ACHIEVEMENTS_MISSION_33,
	eImgID_ACHIEVEMENTS_MISSION_34,
	eImgID_ACHIEVEMENTS_MISSION_35,
	eImgID_ACHIEVEMENTS_MISSION_36,
	eImgID_ACHIEVEMENTS_MISSION_37,
	eImgID_ACHIEVEMENTS_MISSION_38,
	eImgID_ACHIEVEMENTS_MISSION_39,
	eImgID_ACHIEVEMENTS_MISSION_40,
	eImgID_ACHIEVEMENTS_MISSION_41,
	eImgID_ACHIEVEMENTS_MISSION_42,
	eImgID_ACHIEVEMENTS_MISSION_43,
	eImgID_ACHIEVEMENTS_MISSION_44,
	eImgID_ACHIEVEMENTS_MISSION_45,
	eImgID_ACHIEVEMENTS_MISSION_46,
	eImgID_ACHIEVEMENTS_MISSION_47,
	eImgID_ACHIEVEMENTS_MISSION_48,
	eImgID_ACHIEVEMENTS_MISSION_49,
	eImgID_ACHIEVEMENTS_MISSION_50,
	OBJECT_ACHIEVEMENTS_MAIN,
	OBJECT_ACHIEVEMENTS_PROGRESS_BG,
	OBJECT_ACHIEVEMENTS_CLOSE,
	OBJECT_ACHIEVEMENTS_MISSIONS,
	OBJECT_ACHIEVEMENTS_PANEL,
	eACHIEVEMENTS_TITLE,
	eACHIEVEMENTS_FRAME,
	OBJECT_ACHIEVEMENTS_DAMAGE,
	OBJECT_ACHIEVEMENTS_DEFENSE,
	OBJECT_ACHIEVEMENTS_LIFE,
	OBJECT_ACHIEVEMENTS_EXCELLENT,
	OBJECT_ACHIEVEMENTS_CRITICAL,
	eACHIEVEMENTS_FOOTER,
	eACHIEVEMENTS_DIV,
	eACHIEVEMENTS_CLOSE,


		eRageSystem,
		eRageTable,
		eRageClose,
		eRagePointTable,
		eRageIcon1,
		eRageIcon2,
		eRageIcon3,
		eRageIcon4,
		eRageIcon5,
		eRageIcon6,
		eRageIcon7,
		eRageIcon8,
		eRageIcon9,
		eRageIcon10,
		eRageIcon11,
		eRageIcon12,
		eRageIcon13,
		eRageIcon14,
		eRageIcon15,
		eRageIcon16,
		eRageIcon17,
		eRageIcon18,
		eRageIcon19,
		eRageIcon20,
		eRageIcon21,
		eRageIcon22,
		eRageIcon23,
		eRageIcon24,
		eRageIcon25,
		eRageIcon26,
		eRageIcon27,
		eRageIcon28,
		eRageIcon29,
		eRageIcon30,
		eRageIcon31,
		eRageIcon32,
		eRageIcon33,
		eRageIcon34,
		eRageIcon35,
		eRageTeleport,
		eRagePet,
		eRageReset,


		eRAGERESET_MAIN,
		eRAGERESET_TITLE,
		eRAGERESET_FRAME,
		eRAGERESET_FOOTER,
		eRAGERESET_DIV,
		eRAGERESET_INFOBG,
		eRAGERESET_CLOSE,
		eRAGERESET_OK,
		eRAGERESET_POINT1,
		eRAGERESET_CHECK1,
		eRAGERESET_LINE1,
		eRAGERESET_POINT2,
		eRAGERESET_CHECK2,
		eRAGERESET_LINE2,


	eMINIMENU_MAIN,
	eMINIMENU_TITLE,
	eMINIMENU_FRAME,
	eMINIMENU_FOOTER,
	eMINIMENU_LINE,
	eMINIMENU_ARROW_L,
	eMINIMENU_ARROW_R,
	eMINIMENU_BT1,
	eMINIMENU_BT2,
	eMINIMENU_BT3,
	eMINIMENU_BT4,
	eMINIMENU_BT5,
	eMINIMENU_BT6,
	eMINIMENU_BT7,
	eMINIMENU_BT8,
	eMINIMENU_BT9,

	eMINIMENU_BT10,
	eMINIMENU_BT11,
	eMINIMENU_BT12,
	eMINIMENU_BT13,
	eMINIMENU_BT14,
	eMINIMENU_BT15,
	eMINIMENU_BT16,
	eMINIMENU_BT17,
	eMINIMENU_BT18,
	eMINIMENU_BT19,
	eMINIMENU_BT20,
	eMINIMENU_BT21,
	eMINIMENU_BT22,
	eMINIMENU_BT23,

	eCAMERA,
	eCAMERA_RESET,





	eCRAFT_MAIN,

	// -------------
	// ExQuest
	// -------------
	OBJECT_WIN_QUEST_MAIN,
	OBJECT_WIN_QUEST_TITLE,
	OBJECT_WIN_QUEST_FRAME,
	OBJECT_WIN_QUEST_FOOTER,
	OBJECT_WIN_QUEST_DIV,
	OBJECT_WIN_QUEST_CLOSE,
	OBJECT_WIN_QUEST_TAB,
	OBJECT_WIN_QUEST_TAB1,
	OBJECT_WIN_QUEST_TAB2,
	OBJECT_WIN_QUEST_TAB3,
	OBJECT_WIN_QUEST_FINISH,
	OBJECT_WIN_QUEST_COUNT1,
	OBJECT_WIN_QUEST_COUNT2,
	OBJECT_WIN_QUEST_COUNT3,
	OBJECT_WIN_QUEST_INFOBG,
	OBJECT_WIN_QUEST_INFOBG2,
	OBJECT_WIN_QUEST_LINE1,
	OBJECT_WIN_QUEST_POINT1,
	OBJECT_WIN_QUEST_INFO,
	OBJECT_WIN_QUEST_INFOBG3,

		//antilag
	//option new menu
	eOpMenu_MAINKG,
	eOpMenu_TITLEKG,
	eOpMenu_FRAMEKG,
	eOpMenu_FOOTERKG,
	eOpMenu_DIVKG,
	eOpMenu_CLOSEKG,
	eCheck,
	eUnCheck,
	eUSERSPANEL_OPTION,
	eUSERSPANEL_STATICEFFECT,
	eUSERSPANEL_DISABLEOBJECT,
	eUSERSPANEL_DISABLEWINGS,
	eUSERSPANEL_DISABLESKILL,



		eJewelBank_MAIN,
		eJewelBank_TITLE,
		eJewelBank_FRAME,
		eJewelBank_FOOTER,
		eJewelBank_DIV,
		eJewelBank_CLOSE,
		eJewelBank_NEXT,
		eJewelBank_PREV,
		eJewelBank_WITHDRAW,
};





struct InterfaceObject
{
	DWORD	ModelID;
	float	Width;
	float	Height;
	float	X;
	float	Y;
	float	MaxX;
	float	MaxY;
	DWORD	EventTick;
	bool	OnClick;
	bool	OnShow;
	BYTE	Attribute;

		long	OpenedValue;
	BYTE	Speed;
	char	StatValue[20];
	bool	ByClose;
	bool	FirstLoad;
	//int		Type;

	void Open()
	{
		this->OnShow = true; pSetCursorFocus = true;
		this->ByClose = false;
	};

	void Open(int Value, int Speed)
	{
		this->OnShow = true; pSetCursorFocus = true;
		this->OpenedValue = Value;
		this->Speed = Speed;
		this->ByClose = false;
		this->FirstLoad = true;
	};

	void Close()
	{ 
		this->OnShow = false; 
		pSetCursorFocus = false; 
		this->ByClose = false;
	};

	void Close(int Value, int Speed)
	{
		this->OnShow = false; pSetCursorFocus = false; 
		this->OpenedValue = Value;
		this->Speed = Speed;
		this->ByClose = false;
	}

	void CloseAnimated(int Speed)
	{
		pSetCursorFocus = false;
		//this->OpenedValue = Value;
		this->Speed = Speed;
		this->ByClose = true;
	}

	bool Check()
	{
		return this->OnShow;
	}
};


//퀘스트
struct INTERFACE_OBJECT_INFO
{
	short	ObjectID;
	DWORD	ModelID;
	float	Width;
	float	Height;
	float	X;
	float	Y;
	char	FileName[100];
	DWORD	EventTick;
	bool	OnClick;
	bool	OnShow;
	DWORD	Attribute;
	char	StatValue[20];
	bool	FirstLoad;

	void Open()
	{
		this->OnShow = true;
		this->FirstLoad = true;
	};
};
////

class Interface
{
public:
	//Interface();
	// DPS 관련 변수
     // DPS 시스템을 위한 멤버 변수
    unsigned long lastDpsUpdateTick;
    unsigned long totalDamage;
    
    float currentDPS;
    bool showDPS;

public:
    void AddDamage(unsigned long damage);
    void UpdateDPS();
    void DrawDPS();
	////


	void ImageLoad(char* folder, int code, int arg3, int arg4, int arg5, int arg6);

	void		Load();
	static void	LoadImages();
	static void	Work();
	void Run();
	void		BindObject(short ObjectID, DWORD ModelID, float Width, float Height, float X, float Y);
	void		DrawGUI(short ObjectID, float PosX, float PosY);
	void	    DrawGUI1(short ObjectID);
	void		DrawTimeUI();
	int			DrawFormat(DWORD Color, int PosX, int PosY, int Width, int Align, int Bold, LPCSTR Text, ...);
	void		DrawFormatEx(DWORD Color, int PosX, int PosY, int Width, int Align, LPCSTR Text, ...); //퀘스트
	void		DrawIMG(short ObjectID, float PosX, float PosY, float ScaleX, float ScaleY);

	bool		WindowEx[100];
	bool		IsWorkZone(float X, float Y, float MaxX, float MaxY);
	bool		IsWorkZone(short ObjectID);
	void		ResetDrawIMG(short ObjectID);
	int			DrawMessage(int Mode, LPCSTR Text, ...);

	void		DrawColorGUI(int MainID, int X, int Y, int Width, int Height, DWORD Color);

	static bool	AllowGUI();

	void		OpenWindowEx(int WindowID);
	void		CloseWindowEx(int WindowID);
	bool		CheckWindowEx(int WindowID);

	bool		CheckWindow(int WindowID);
	int			CloseWindow(int WindowID);
	int			OpenWindow(int WindowID);

	float		GetResizeX(short ObjectID);
	int			DrawToolTip(int X, int Y, LPCSTR Text, ...);
	float		DrawRepeatGUI(short MonsterID, float X, float Y, int Count);
	void		DrawColoredGUI(short ObjectID, float X, float Y, DWORD Color);
	void		DrawColoredGUI22(short ObjectID, DWORD Color);
	void		DrawButton(short ObjectID, float PosX, float PosY, float ScaleX, float ScaleY);
	void		PartUPandDNEx(int PointID, int UpID, int DownID, int LineID, float X, float Y, DWORD Color, int Value, char* Text);
	void		DrawAnimatedButton(short ObjectID, float PosX, float PosY, float ScaleX, float ScaleY);
	void		DrawAnimatedGUI(short ObjectID, float X, float Y);
	void		DrawBarForm(float PosX,float PosY,float Width,float Height,GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	void		DrawCheckLineEx(bool isChecked, int PointID, int CheckID, int LineID, float X, float Y, DWORD Color, char* Text);
	void		TextDraw(int PosX, int PosY, int Width, int Arg5, int Color, int Arg7, int Align, HGDIOBJ Font, LPCTSTR Format, ...);
	void		MiniButtonDraw(int BtnID, float X, float Y, bool isHover, char* Text);
	bool		ButtonEx(DWORD Event, int ButtonID, bool Type);
	void		DrawButtonGUI(short ObjectID, float PosX, float PosY, float Width, float Height, float ScaleX, float ScaleY,bool ScaleSize, bool ScalePosition, bool ScaleAlpha);
	void		DrawItem(float PosX, float PosY, float Width, float Height, int ItemID, int Level, int Excl, int Anc, bool OnMouse);


	//Vip Window
	void		OpenVipWindow() { this->Data[eVip_MAIN].OnShow = true; pSetCursorFocus = true; };
	void		CloseVipWindow() { this->Data[eVip_MAIN].OnShow = false; pSetCursorFocus = false; };
	bool		CheckVipWindow() { return this->Data[eVip_MAIN].OnShow; };
	void		DrawVipWindow();
	bool		EventVipWindow_Main(DWORD Event);
	bool		EventVipWindow_Close(DWORD Event);
	bool		EventVipWindow_Bronze(DWORD Event);
	bool		EventVipWindow_Silver(DWORD Event);
	bool		EventVipWindow_Gold(DWORD Event);
	bool		EventVipWindow_Platinum(DWORD Event);
	bool		EventVipWindow_StatusVip(DWORD Event);

	static void		DisableName();

	//Menu
	void		DrawMenu();
	bool		EventDrawMenu_Open(DWORD Event);
	void		OpenMenuWindow() { this->Data[eMenu_MAIN].OnShow = true; pSetCursorFocus = true; };
	void		CloseMenuWindow() { this->Data[eMenu_MAIN].OnShow = false; pSetCursorFocus = false; };
	bool		CheckMenuWindow() { return this->Data[eMenu_MAIN].OnShow; };
	void		DrawMenuOpen();
	bool		EventDrawMenu_Close(DWORD Event);
	bool		EventDrawMenu_Op0(DWORD Event);
	bool		EventDrawMenu_Op1(DWORD Event);
	bool		EventDrawMenu_Op2(DWORD Event);
	bool		EventDrawMenu_Op3(DWORD Event);
	bool		EventDrawMenu_Op4(DWORD Event);
	bool		EventDrawMenu_Op20(DWORD Event);
	bool		EventDrawMenu_Op21(DWORD Event);
	bool		EventDrawMenu_Op22(DWORD Event);
	bool		EventDrawMenu_Op23(DWORD Event);
	bool		EventRagesystems(DWORD Event);

	void		DrawQuaMocRS();
	void		EventQuaMocRS_Main(DWORD Event);
	void		QuaMocRSState(){(Data[eQuaMocRSMain].OnShow == true)? Data[eQuaMocRSMain].Close():Data[eQuaMocRSMain].Open();};
	void		QuaMocRSStateclose() { Data[eQuaMocRSMain].OnShow = false; pSetCursorFocus = false; };

	void		DrawCameraButton();
	bool		EventDrawCamera(DWORD Event);
	void		DrawCameraResetButton();
	bool		EventDrawCameraReset(DWORD Event);

	void		DrawRPS();
	void		EventRPS_Main(DWORD Event);


	void		OpenChangingClassWindow() { this->Data[eCHANGINGCLASS_MAIN].OnShow = true; pSetCursorFocus = true; };
	void		CloseChangingClassWindow() { this->Data[eCHANGINGCLASS_MAIN].OnShow = false; pSetCursorFocus = false; };
	bool		CheckChangingClassWindow() { return this->Data[eCHANGINGCLASS_MAIN].OnShow; };

	//void SwitchJewelBank(){ (this->Data[eJEWELBANK_MAIN].OnShow == true) ? this->Data[eJEWELBANK_MAIN].Close() : this->Data[eJEWELBANK_MAIN].Open(); };

	static void DrawItem2(float PosX, float PosY, float Width, float Height, int ItemID, int Level, int Excl, int Anc, bool OnMouse);
	void DrawWindow(int ObjMain, int ObjTitle, int ObjFrame, int ObjFooter, int Repeat, float X, float Y, char* Text);

	void		CloseAllCustomWindow();
	void		DrawChangingClassWindow();
	bool		EventChangingClassWindow_Main(DWORD Event);
	bool		EventChangingClassWindow_Close(DWORD Event);	
	bool		EventChangingClassWindow_DW(DWORD Event);
	bool		EventChangingClassWindow_DK(DWORD Event);
	bool		EventChangingClassWindow_ELF(DWORD Event);
	bool		EventChangingClassWindow_MG(DWORD Event);
	bool		EventChangingClassWindow_DL(DWORD Event);
	bool		EventChangingClassWindow_SUM(DWORD Event);
	bool		EventChangingClassWindow_RF(DWORD Event);

	//AntilagSystem
	bool Antilagclose(DWORD Event);
	void DrawOpAntiLag();
	bool EventUsersPanelAntiLag_EFFECTSTATIC(DWORD Event);
	bool EventUsersPanelAntiLag_OBJECT(DWORD Event);
	bool EventUsersPanelAntiLag_WINGS(DWORD Event);
	bool EventUsersPanelAntiLag_SKILL(DWORD Event);
	int DisableEffectStatic; //effectstatic
	int DisableObject; //object
	int Disablewings; //wings
	int Disableskill;//skill
	DWORD       MenuAntlagDelayClick;	
	void		OpenOpMenuAntiLag() { this->Data[eOpMenu_MAINKG].OnShow = true; pSetCursorFocus = true; };
	void		CloseOpMenuAntiLag() { this->Data[eOpMenu_MAINKG].OnShow = false; pSetCursorFocus = false; };
	bool		CheckOpMenuAntiLag() { return this->Data[eOpMenu_MAINKG].OnShow; };
	//Draw Confirm window
	void		DrawConfirmOpen();
	bool		EventConfirm_OK(DWORD Event);
	bool		EventConfirm_CANCEL(DWORD Event);

			//----- FPS
	int			lastReport;
	int			frameCount;
	int			frameRate;
	char		FPS_REAL[30];
	void		UPDATE_FPS();
	void		guiMonitore();
//------------------------ ping RTT:
	int			iniciador;
	int			msPing;
	int			lastSend;
	int			validar;
	char		ServerPing[50];
	char		ultimoPing[50];
	int			ultimo_Ping;
	char		ServerRTT[50];
	char		ultimoRTT[50];
	int			ultimo_RTT;
	void		DrawPing();
	void		SendPingRecv();

	void		DrawAutoCtrl();
	void		DrawAutoCtrl1();
	void		DrawAutoCtrl2();
	void		DrawAutoCtrl3();
	void        DrawM();
	void		DrawAutoChange();
	void		DrawOffExp();
	void		DrawGuildAttack();
	void		DrawLogo(bool active);
	void		CloseCustomWindow();

	int timehpbar;
	int hpbarresult;

	int			ConfirmSlot;
	InterfaceObject Data[MAX_OBJECT];

	bool CheckInQueue(std::string name); //퀘스트
	void AddToQueue(std::string name, void(Interface::* func)());
	void DelFromQueue(std::string name);
	//bool ButtonEx(DWORD Event, int ButtonID, bool Type);
	void DrawQuestSystemWindow(); //ExQuest
	
	bool ShowInfoUser;
	bool ShowEffects;
	void SwitchShowInfoUser();
	void SwitchShowEffects();
	DWORD AutoControlDelay;
	int varTestCntrl;
	void AutoPVP();
	void DrawText(DWORD Color, int PosX, int PosY, int Width, int Align, LPCSTR Text, ...);
	bool IsWorkZone2(float X, float Y, float MaxX, float MaxY);

	std::map<std::string, std::function<void()>> m_InterfaceQueue; //퀘스트
private:
	std::map<int, struct INTERFACE_OBJECT_INFO> m_InterfaceInfo; //퀘스트
	
};
extern Interface gInterface;

///////////////////end






////////////////interface.cpp
#include "stdafx.h"
#include "CustomBuyVip.h"
#include "CustomCommandInfo.h"
#include "CustomEventTime.h"
#include "CustomMessage.h"
#include "CustomRanking.h"
#include "Defines.h"
#include "Interface.h"
#include "Import.h"
#include "Offset.h"
#include "PrintPlayer.h"
#include "Protect.h"
#include "Util.h"
#include "User.h"
#include "Reconnect.h"
#include "Smithy.h"
#include "ChangeClass.h"
#include "Common.h"
#include "Achievements.h"
#include "ServerInfo.h"
#include "LuckyWheel.h"
#include "Camera.h"
#include "Protocol.h"
#include "CustomJewelBank.h"
#include "RageSystem.h"
#include "CustomComboEffect.h"
#include "EmojiSystem.h"

Interface	gInterface;


void Interface::Load()
{
    // 초기화 플래그 설정
    this->ShowInfoUser = true;

    // BindObject 호출을 배열과 루프로 최적화
    struct FlagData {
        short id;
        DWORD model;
    };
    const FlagData flags[] = {
        {eFlag01, 0x17880}, {eFlag02, 0x17881}, {eFlag03, 0x17882},
        {eFlag04, 0x17883}, {eFlag05, 0x17884}, {eFlag06, 0x17885},
        {eFlag07, 0x17886}, {eFlag08, 0x17887}, {eFlag09, 0x17888},
        {eFlag10, 0x17889}
    };
    for (int i = 0; i < sizeof(flags) / sizeof(flags[0]); i++) {
        this->BindObject(flags[i].id, flags[i].model, 78, 78, -1, -1);
    }

    // 개별 UI 요소 바인딩
    this->BindObject(eCAMERA, 0x10036, 15, 15, -1, -1);
    this->BindObject(eCAMERA_RESET, 0x10037, 15, 15, -1, -1);
    this->BindObject(eRanking, 0x8322, 179, 27, -1, -1);
    this->BindObject(eSAMPLEBUTTON, 0x8323, 25, 40, -1, -1);
    this->BindObject(eSAMPLEBUTTON2, 0x8324, 25, 40, -1, -1);
    this->BindObject(eLogo, 0x8325, 150, 114, -1, -1);

    // VIP 시스템 UI 바인딩
    this->BindObject(eVip_MAIN, 0x7A5A, 222, 250, -1, -1);
    this->BindObject(eVip_TITLE, 0x7A63, 230, 67, -1, -1);
    this->BindObject(eVip_FRAME, 0x7A58, 230, 15, -1, -1);
    this->BindObject(eVip_FOOTER, 0x7A59, 230, 50, -1, -1);
    this->BindObject(eVip_DIV, 0x7A62, 223, 21, -1, -1);
    this->BindObject(eVip_CLOSE, 0x7FD2, 36, 29, -1, -1);
    this->BindObject(eVip_BRONZE, 0x7A5E, 108, 29, -1, -1);
    this->BindObject(eVip_SILVER, 0x7A5E, 108, 29, -1, -1);
    this->BindObject(eVip_GOLD, 0x7A5E, 108, 29, -1, -1);
    this->BindObject(eVip_PLATINUM, 0x7A5E, 108, 29, -1, -1);
    this->BindObject(eVip_STATUS, 0x7A5E, 108, 29, -1, -1);

    // JewelBank UI 바인딩
    this->BindObject(eJewelBank_MAIN, 0x7A5A, 222, 240, -1, -1);
    this->BindObject(eJewelBank_TITLE, 0x7A63, 230, 67, -1, -1);
    this->BindObject(eJewelBank_FRAME, 0x7A58, 230, 15, -1, -1);
    this->BindObject(eJewelBank_FOOTER, 0x7A59, 230, 50, -1, -1);
    this->BindObject(eJewelBank_DIV, 0x7A62, 223, 21, -1, -1);
    this->BindObject(eJewelBank_CLOSE, 0x7FD2, 36, 29, -1, -1);
    this->BindObject(eJewelBank_NEXT, 0x50002, 25, 40, -1, -1);
    this->BindObject(eJewelBank_PREV, 0x50003, 25, 40, -1, -1);
    for (int i = 0; i < 50; i++) {
        this->BindObject(eJewelBank_WITHDRAW + i, 0x7BFE, 16, 32, -1, -1);
    }

    // 메뉴 UI 바인딩
    this->BindObject(eMenu1, 60000, 118, 54, -1, -1);
    this->BindObject(eMenu_MAIN, 0x7A5A, 222, 300, -1, -1);
    this->BindObject(eMenu_TITLE, 0x7A63, 230, 67, -1, -1);
    this->BindObject(eMenu_FRAME, 0x7A58, 230, 15, -1, -1);
    this->BindObject(eMenu_FOOTER, 0x7A59, 230, 50, -1, -1);
    this->BindObject(eMenu_DIV, 0x7A62, 223, 21, -1, -1);
    this->BindObject(eMenu_CLOSE, 0x7FD2, 36, 29, -1, -1);
    this->BindObject(eMenu_OPT1, 0x7A5E, 106, 29, -1, -1);
    this->BindObject(eMenu_OPT2, 0x7A5E, 106, 29, -1, -1);
    this->BindObject(eMenu_OPT3, 0x7A5E, 106, 29, -1, -1);
    this->BindObject(eMenu_OPT4, 0x7A5E, 106, 29, -1, -1);
    this->BindObject(eMenu_OPT20, 0x7A5E, 106, 29, -1, -1);
    this->BindObject(eMenu_OPT21, 0x7A5E, 106, 29, -1, -1);
    this->BindObject(eMenu_OPT22, 0x7A5E, 106, 29, -1, -1);

    // 기타 UI 바인딩
    this->BindObject(eCHANGINGCLASS_MAIN, 0x7A5A, 222, 300, -1, -1);
    this->BindObject(eCHANGINGCLASS_TITLE, 0x7A63, 230, 67, -1, -1);
    this->BindObject(eCHANGINGCLASS_FRAME, 0x7A58, 230, 15, -1, -1);
    this->BindObject(eCHANGINGCLASS_FOOTER, 0x7A59, 230, 50, -1, -1);
    this->BindObject(eCHANGINGCLASS_DIV, 0x7A62, 223, 21, -1, -1);
    this->BindObject(eCHANGINGCLASS_CLOSE, 0x7FD2, 36, 29, -1, -1);
    this->BindObject(eCHANGINGCLASS_INFOBG, 0x7AA3, 170, 21, -1, -1);
    this->BindObject(eCHANGINGCLASS_MONEYBG, 0x7A89, 170, 26, -1, -1);
    const short classButtons[] = {
        eCHANGINGCLASS_DW, eCHANGINGCLASS_DK, eCHANGINGCLASS_ELF,
        eCHANGINGCLASS_MG, eCHANGINGCLASS_DL, eCHANGINGCLASS_SUM,
        eCHANGINGCLASS_RF, eUSERSPANEL_CHANGINGCLASS
    };
    for (int i = 0; i < sizeof(classButtons) / sizeof(classButtons[0]); i++) {
        this->BindObject(classButtons[i], 0x7A5E, 106, 29, -1, -1);
    }

    // 커맨드 및 기타 UI 바인딩
    this->BindObject(eCommand_MAIN, 0x7A5A, 222, 300, -1, -1);
    this->BindObject(eCommand_TITLE, 0x7A63, 230, 67, -1, -1);
    this->BindObject(eCommand_FRAME, 0x7A58, 230, 15, -1, -1);
    this->BindObject(eCommand_FOOTER, 0x7A59, 230, 50, -1, -1);
    this->BindObject(eCommand_DIV, 0x7A62, 223, 21, -1, -1);
    this->BindObject(eCommand_CLOSE, 0x7FD2, 36, 29, -1, -1);

    this->BindObject(eRanking_MAIN, 0x7A5A, 222, 300, -1, -1);
    this->BindObject(eRanking_CLOSE, 0x7FD2, 36, 29, -1, -1);

    this->BindObject(eEventTime_MAIN, 0x7A5A, 222, 225, -1, -1);
    this->BindObject(eEventTime_CLOSE, 0x7FD2, 36, 29, -1, -1);

    // 확인 창 UI 바인딩
    this->BindObject(eCONFIRM_MAIN, 0x7A5A, 222, 120, -1, -1);
    this->BindObject(eCONFIRM_TITLE, 0x7A63, 230, 67, -1, -1);
    this->BindObject(eCONFIRM_FRAME, 0x7A58, 230, 15, -1, -1);
    this->BindObject(eCONFIRM_FOOTER, 0x7A59, 230, 50, -1, -1);
    this->BindObject(eCONFIRM_DIV, 0x7A62, 223, 21, -1, -1);
    this->BindObject(eCONFIRM_BTN_OK, 0x7A5B, 54, 30, -1, -1);
    this->BindObject(eCONFIRM_BTN_CANCEL, 0x7A5C, 54, 30, -1, -1);

    this->BindObject(eNextCommand, 0x8323, 25, 40, -1, -1);
    this->BindObject(ePrevCommand, 0x8324, 25, 40, -1, -1);
    this->BindObject(eNextEvent, 0x8323, 25, 40, -1, -1);
    this->BindObject(ePrevEvent, 0x8324, 25, 40, -1, -1);

    // 추가 UI 요소
    this->BindObject(eMenu, 80000, 13, 15, -1, -1);
    this->BindObject(eLuckymenu, 0x7A5E, 106, 29, -1, -1);
    this->BindObject(eLuckySpinRoll, 0x50000, 108, 30, -1, -1);
    this->BindObject(eLuckySpinClose, 0x7FD2, 36, 29, -1, -1);
    this->BindObject(eQuaMocRSNhan, 0x50001, 108, 30, -1, -1);
    this->BindObject(eQuaMocRSMain, 0x9331, 222, 300, -1, -1);
    this->BindObject(eQuaMocRSPanel, 0x9332, 100, 100, -1, -1);
    this->BindObject(eQuaMocRSNhan_CLOSE, 0x7FD2, 36, 29, -1, -1);
    this->BindObject(eRock, 0x9323, 36, 28, -1, -1);
    this->BindObject(ePaper, 0x9324, 36, 28, -1, -1);
    this->BindObject(eScissors, 0x9325, 36, 28, -1, -1);

    // 옵션 메뉴 UI 바인딩
    this->BindObject(eOpMenu_MAINKG, 0x7A5A, 222, 333, -1, -1);
    this->BindObject(eOpMenu_TITLEKG, 0x7A63, 230, 67, -1, -1);
    this->BindObject(eOpMenu_CLOSEKG, 0x7EC5, 36, 29, -1, -1);
    this->BindObject(eOpMenu_FRAMEKG, 0x7A58, 230, 15, -1, -1);
    this->BindObject(eOpMenu_FOOTERKG, 0x7A59, 230, 50, -1, -1);
    this->BindObject(eOpMenu_DIVKG, 0x7A62, 223, 21, -1, -1);
    this->BindObject(eUSERSPANEL_OPTION, 0x7B68, 10, 10, -1, -1);
    this->BindObject(eCheck, 0x9991, 15, 15, -1, -1);
    this->BindObject(eUnCheck, 0x9992, 15, 15, -1, -1);
    const short optionButtons[] = {
        eUSERSPANEL_STATICEFFECT, eUSERSPANEL_DISABLEOBJECT,
        eUSERSPANEL_DISABLEWINGS, eUSERSPANEL_DISABLESKILL
    };
    for (int i = 0; i < sizeof(optionButtons) / sizeof(optionButtons[0]); i++) {
        this->BindObject(optionButtons[i], 0x9991, 15, 15, -1, -1);
    }

    // 후크 및 초기화
    SetCompleteHook(0xE8, oLoadSomeForm_Call, &this->LoadImages);
    SetCompleteHook(0xE8, oDrawInterface_Call, &this->Work);

    lastReport = GetTickCount();
    frameCount = 0;
    iniciador = 1;
}



void Interface::ImageLoad(char * Folder, int Code, int Arg3, int Arg4, int Arg5, int Arg6)
{
	char path[255];
	strcpy(path, ".\\Data\\");

	strcat(path, Folder);

	std::string Buffer = path;

	size_t pos = Buffer.find("jpg");

	if (pos != std::string::npos)
	{
		Buffer.replace(pos,3,"ozj");
	}
	else
	{
		pos = Buffer.find("tga");

		if (pos != std::string::npos)
		{
			Buffer.replace(pos,3,"ozt");
		}
		else
		{
			//ErrorMessageBox("[%s] Load error! Pos = %d", Buffer, pos);
		}
	}

	if (FileExist(Buffer.c_str()) == false)
	{
		//ErrorMessageBox("[%s] - NOT FOUND", Buffer.c_str());
	}

	pLoadImage(Folder,Code,Arg3,Arg4,Arg5,Arg6);
}

void Interface::LoadImages()
{

	BindObject(eTopDamage_MAIN, 0x7A5A, 150, 120, -1, -1);
    BindObject(eTopDamage_TITLE, 0x7A63, 150, 30, -1, -1);
    BindObject(eTopDamage_CLOSE, 0x7FD2, 36, 29, -1, -1);

    topDamageVisible = true;
    topDamages.clear();
    currentBossIndex = -1;

    // DPS 초기화
    totalDamage = 0;
    lastDpsUpdateTick = GetTickCount();
    currentDPS = 0;

	//float MainWidth = 138.0;
    //float MainHeight = 265.0; 

	//MessageBox(NULL,"#7","Warning!",NULL);
	
	//pLoadImage("Custom\\Interface\\TimeBar.tga", 0x8200, 0x2601, 0x2901, 1, 0);

	/*pLoadImage("Custom\\Interface\\Rank01.tga", 0x8300, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank02.tga", 0x8299, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank03.tga", 0x8302, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank04.tga", 0x8303, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank05.tga", 0x8304, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank06.tga", 0x8305, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank07.tga", 0x8306, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank08.tga", 0x8307, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank09.tga", 0x8308, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank10.tga", 0x8309, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank11.tga", 0x8310, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank12.tga", 0x8311, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank13.tga", 0x8312, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank14.tga", 0x8313, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank15.tga", 0x8314, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank16.tga", 0x8315, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank17.tga", 0x8316, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank18.tga", 0x8317, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank19.tga", 0x8318, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank20.tga", 0x8319, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank21.tga", 0x8320, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank22.tga", 0x8321, 0x2601, 0x2901, 1, 0);*/


	gEmojis.LoadImages(); // Emoji System

	pLoadImage("Custom\\Interface\\Rank010.tga", 0x17880, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank020.tga", 0x17881, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank030.tga", 0x17882, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank040.tga", 0x17883, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank050.tga", 0x17884, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank060.tga", 0x17885, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank070.tga", 0x17886, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank080.tga", 0x17887, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank090.tga", 0x17888, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Rank100.tga", 0x17889, 0x2601, 0x2901, 1, 0);


	pLoadImage("Custom\\Interface\\camera.tga", 0x10036,  0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\camerareset.tga", 0x10037,  0x2601, 0x2901, 1, 0);

	//pLoadImage("Custom\\Interface\\main.tga", 90000, 0x2601, 0x2901, 1, 0);

	pLoadImage("Custom\\Interface\\Ranking.tga", 0x8322, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Next.tga", 0x8323, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Previous.tga", 0x8324, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\MU-logo.tga", 0x8325, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\Menu1.tga", 80000, 0x2601, 0x2901, 1, 0);
	pLoadImage("Custom\\Interface\\check.jpg", 0x9991, 0x2601, 0x2900, 1, 0);
	pLoadImage("Custom\\Interface\\uncheck.jpg", 0x9992, 0x2601, 0x2900, 1, 0);
 if (gInterface.ShowInfoUser)
 {
	pLoadImage("Custom\\Interface\\character_ex.tga",  60000, GL_LINEAR, 0x2901, 1, 0);
	//this->BindObject(eMenu1, 60000, 118, 54, -1, -1);
 	gInterface.ShowInfoUser = true;
 }
 else
 {
	gInterface.ShowInfoUser = false;	
 }


	pLoadImage("Custom\\Interface\\ui_dialog_d.tga", 0x9326, 0x2601, 0x2900, 1, 0);
	pLoadImage("Custom\\Interface\\itembackpanel.tga", 0x9327, GL_LINEAR, GL_CLAMP, 1, 0);
	pLoadImage("Custom\\interface\\topmenutabbt1.tga", 0x788E, 0x2601, 0x2900, 1, 0);

	pLoadImage("Custom\\interface\\ui_dialog_e.tga", 0x9331, 0x2601, 0x2900, 1, 0);
	pLoadImage("Custom\\interface\\QuaMoc.tga", 0x9332, 0x2601, 0x2900, 1, 0);

	pLoadImage("Custom\\Interface\\IconQua.tga", 0x9B62, 0x2601, 0x2900, 1, 0);

	pLoadImage("Custom\\Interface\\op2_b_all.tga", 0x50000, 0x2601, 0x2900, 1, 0);
	pLoadImage("Custom\\Interface\\op1_b_all.tga", 0x50001, 0x2601, 0x2900, 1, 0);

	pLoadImage("Custom\\interface\\RPSMode\\rock.tga", 0x9323, 0x2601, 0x2900, 1, 0);
	pLoadImage("Custom\\interface\\RPSMode\\paper.tga", 0x9324, 0x2601, 0x2900, 1, 0);
	pLoadImage("Custom\\interface\\RPSMode\\scissors.tga", 0x9325, 0x2601, 0x2900, 1, 0);


	pLoadImage("Custom\\interface\\Next.tga", 0x50002, 0x2601, 0x2900, 1, 0);
	pLoadImage("Custom\\interface\\Previous.tga", 0x50003, 0x2601, 0x2900, 1, 0);

	pLoadImage("Effect\\flare01.jpg", 52002, GL_LINEAR, GL_REPEAT, 1, 0); //32002
	pLoadImage("Effect\\JointLaser01.jpg", 52224, GL_LINEAR, GL_REPEAT, 1, 0); //32486
	pLoadImage("Effect\\hikorora.jpg", 52379, GL_LINEAR, GL_REPEAT, 1, 0); //32644
	pLoadImage("Effect\\flareBlue.jpg", 52229, GL_LINEAR, GL_REPEAT, 1, 0); //32492
	pLoadImage("Effect\\shiny06.jpg", 32587, GL_LINEAR, GL_REPEAT, 1, 0); //32838
	pLoadImage("Effect\\bostar3_R.jpg", 32614, GL_LINEAR, GL_REPEAT, 1, 0); //32831


	//gSmithy.LoadImg();
	gAchievements.LoadImages();
	gRageSystem.LoadImages();
	// ----
	pLoadSomeForm();

}

void Interface::Run()
{
	this->AutoPVP();
}

void Interface::BindObject(short MonsterID, DWORD ModelID, float Width, float Height, float X, float Y)
{
	this->Data[MonsterID].EventTick	= 0;
	this->Data[MonsterID].OnClick	= false;
	this->Data[MonsterID].OnShow	= false;
	this->Data[MonsterID].ModelID	= ModelID;
	this->Data[MonsterID].Width		= Width;
	this->Data[MonsterID].Height	= Height;
	this->Data[MonsterID].X			= X;
	this->Data[MonsterID].Y			= Y;
	this->Data[MonsterID].MaxX		= X + Width;
	this->Data[MonsterID].MaxY		= Y + Height;
	this->Data[MonsterID].Attribute	= 0;
}

void Interface::ResetDrawIMG(short ObjectID)
{
	if( this->Data[ObjectID].X != -1 || this->Data[ObjectID].Y != -1 )
	{
		this->Data[ObjectID].X		= -1;
		this->Data[ObjectID].Y		= -1;
		this->Data[ObjectID].MaxX	= -1;
		this->Data[ObjectID].MaxY	= -1;
	}
}

//퀘스트
bool Interface::CheckInQueue(std::string name)
{
	if (this->m_InterfaceQueue.find(name) != this->m_InterfaceQueue.end())
	{
		return true;
	}

	return false;
}

void Interface::DelFromQueue(std::string name)
{
	if (!this->CheckInQueue(name))
	{
		return;
	}

	this->m_InterfaceQueue.erase(name);
	
}

void Interface::AddToQueue(std::string name, void(Interface::*func)())
{
	if (this->CheckInQueue(name))
	{
		return;
	}

	this->m_InterfaceQueue[name] = std::bind(func, this);
}

//퀘스트

bool Interface::CheckWindowEx(int WindowID)
{
	return this->Data[WindowID].OnShow;
	//return pCheckWindow(pWindowThis(), WindowID);
}




void Interface::OpenWindowEx(int WindowID)
{
	//업적
	if(WindowID == eMenu_OPT21)
	{
		if(this->CheckWindowEx(ObjWindowsEx::exWinAchievements))
		{
			this->CloseWindowEx(ObjWindowsEx::exWinAchievements);
		}

		if(this->CheckWindowEx(ObjWindowsEx::exWinAchievementsPower))
		{
			this->CloseWindowEx(ObjWindowsEx::exWinAchievementsPower);
		}
	}

	this->WindowEx[WindowID] = 1;
	Data[WindowID].Open();
}

void Interface::CloseWindowEx(int WindowID)
{
	Data[WindowID].Close();
}


//룰렛
void testfunc()
{
	glMatrixMode(0x1700u);
	glPopMatrix();
	glMatrixMode(0x1701u);
	glPopMatrix();
}

void Interface::AutoPVP()
{
	if (showPVPon == 1)
	{
		return;
	}

	DrawInterfaceText("PVP MODE ON", MAX_WIN_WIDTH - 50, 2, eRed, 0, 0, 30.0f, 1);
}

void Interface::DrawItem2(float PosX, float PosY, float Width, float Height, int ItemID, int Level, int Excl, int Anc, bool OnMouse) // code hien thi item
{
 
    glMatrixMode(0x1701);
    glPushMatrix();
    glLoadIdentity();
 
    sub_62FB2C_Addr(0, 0, *(GLsizei*)MAIN_RESOLUTION_X, *(GLsizei*)MAIN_RESOLUTION_Y);
    float v2 = *(float*)MAIN_RESOLUTION_X / *(float*)MAIN_RESOLUTION_Y;
   // sub_62EF4E_Addr(1.0, v2, *(float*)0xE61E38, *(float*)0xE61E3C);
	sub_62EF4E_Addr(1.0, v2, *(float*)0x118EE18, *(float*)0x118EE1C);
 
    glMatrixMode(0x1700);
    glPushMatrix();
    glLoadIdentity();
 
	sub_62EEF1_Addr((LPVOID)0x8B15680); //S8 0x08B15680
	sub_62F5AF_Addr();
	sub_62F5F3_Addr();

	pDrawItemModel(PosX, PosY, Width, Height, ItemID, Level, Excl, Anc, OnMouse);
   
    testfunc();
 
    glColor3f(1,1,1);
	pSetBlend(false);
}
////

void Interface::DrawWindow(int ObjMain, int ObjTitle, int ObjFrame, int ObjFooter, int Repeat, float X, float Y, char* Text)
{
	float StartY = Y;
	float StartX = X;

	gInterface.DrawGUI(ObjMain, StartX, StartY + 2);
	gInterface.DrawGUI(ObjTitle, StartX, StartY);
	StartY = gInterface.DrawRepeatGUI(ObjFrame, StartX, StartY + 67.0, Repeat);
	gInterface.DrawGUI(ObjFooter, StartX, StartY);

	gInterface.DrawFormat(eGold, StartX + 10, Y + 10, 210, 3, 0, Text);
}


void Interface::DrawAnimatedGUI(short ObjectID, float PosX, float PosY)
{
	this->Data[ObjectID].X		= PosX;
	this->Data[ObjectID].Y		= PosY;
	this->Data[ObjectID].MaxX	= PosX + this->Data[ObjectID].Width;
	this->Data[ObjectID].MaxY	= PosY + this->Data[ObjectID].Height;
	// ----
	pDrawGUI(this->Data[ObjectID].ModelID, PosX, PosY, 
		this->Data[ObjectID].Width, this->Data[ObjectID].Height);
}

void Interface::DrawGUI(short ObjectID, float PosX, float PosY)
{
	if( this->Data[ObjectID].X == -1 || this->Data[ObjectID].Y == -1 )
	{
		this->Data[ObjectID].X		= PosX;
		this->Data[ObjectID].Y		= PosY;
		this->Data[ObjectID].MaxX	= PosX + this->Data[ObjectID].Width;
		this->Data[ObjectID].MaxY	= PosY + this->Data[ObjectID].Height;
	}

	pDrawGUI(this->Data[ObjectID].ModelID, PosX, PosY,this->Data[ObjectID].Width, this->Data[ObjectID].Height);
}

void Interface::DrawGUI1(short ObjectID)
{
	pDrawGUI(this->Data[ObjectID].ModelID, this->Data[ObjectID].X, this->Data[ObjectID].Y,
		this->Data[ObjectID].Width, this->Data[ObjectID].Height);
}

void Interface::DrawIMG(short ObjectID, float PosX, float PosY, float ScaleX, float ScaleY)
{
	if( this->Data[ObjectID].X == -1 || this->Data[ObjectID].Y == -1 )
	{
		this->Data[ObjectID].X		= PosX;
		this->Data[ObjectID].Y		= PosY;
		this->Data[ObjectID].MaxX	= PosX + this->Data[ObjectID].Width;
		this->Data[ObjectID].MaxY	= PosY + this->Data[ObjectID].Height;
	}

	pDrawImage(this->Data[ObjectID].ModelID, PosX, PosY,this->Data[ObjectID].Width, this->Data[ObjectID].Height,0,0,ScaleX,ScaleY,1,1,0);
}

void Interface::DrawAnimatedButton(short ObjectID, float PosX, float PosY, float ScaleX, float ScaleY)
{
	//if (this->Data[ObjectID].X == -1 || this->Data[ObjectID].Y == -1)
	//{
		this->Data[ObjectID].X = PosX;
		this->Data[ObjectID].Y = PosY;
		this->Data[ObjectID].MaxX = PosX + this->Data[ObjectID].Width;
		this->Data[ObjectID].MaxY = PosY + this->Data[ObjectID].Height;
	//}
	// ----
	pDrawButton(this->Data[ObjectID].ModelID, PosX, PosY,
	this->Data[ObjectID].Width, this->Data[ObjectID].Height, ScaleX, ScaleY);
}
// ----------------------------------------------------------------------------------------------

bool checkBtn(int obj)
{
	if (gObjUser.m_CursorX < gInterface.Data[obj].X || gObjUser.m_CursorX > gInterface.Data[obj].MaxX || 
		gObjUser.m_CursorY < gInterface.Data[obj].Y || gObjUser.m_CursorY > gInterface.Data[obj].MaxY)
	{
		//g_Console.AddMessage(5,"false!");
		return false;
	}
	return true;
}

void Interface::DrawButtonGUI(short ObjectID, float PosX, float PosY, float Width, float Height, float ScaleX, float ScaleY,bool ScaleSize, bool ScalePosition, bool ScaleAlpha)
{
	if( this->Data[ObjectID].X == -1 || this->Data[ObjectID].Y == -1 )
	{
		this->Data[ObjectID].X		= PosX;
		this->Data[ObjectID].Y		= PosY;
		this->Data[ObjectID].MaxX	= PosX + this->Data[ObjectID].Width;
		this->Data[ObjectID].MaxY	= PosY + this->Data[ObjectID].Height;
	}
	pDrawImage(this->Data[ObjectID].ModelID, PosX,PosY,Width,Height,0.0,0.0,ScaleX,ScaleY,1,1,0.0);
}
//퀘스트
void Interface::DrawFormatEx(DWORD Color, int PosX, int PosY, int Width, int Align, LPCSTR Text, ...)
{
	char Buff[2048];
	int BuffLen	= sizeof(Buff)-1;
	ZeroMemory(Buff, BuffLen);
	
	va_list args;
	va_start(args, Text);
	int Len	= vsprintf_s(Buff, BuffLen, Text, args);
	va_end(args);
	
	pDrawColorText(Buff, PosX, PosY, Width, 0, Color, 0, Align);
}
//퀘스트

void Interface::DrawBarForm(float PosX,float PosY,float Width,float Height,GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	pSetBlend(1);
	glColor4f(red, green, blue, alpha);
	pDrawBarForm(PosX,PosY,Width,Height,0.0f, 0);
	pGLSwitchBlend();
	pGLSwitch();
	glColor3f(1.0, 1.0, 1.0);
}


void Interface::DrawCheckLineEx(bool isChecked, int PointID, int CheckID, int LineID, float X, float Y, DWORD Color, char* Text)
{
	this->DrawAnimatedGUI(PointID, X+20 , Y-4); // Point
	this->DrawFormat(eWhite, X+50, Y+1, 200, 1,0, Text);

	if (isChecked)
	{
		this->DrawAnimatedButton(CheckID, X+190, Y-6, 0, 0);
	}
	else
	{
		this->DrawAnimatedButton(CheckID, X+190, Y-6, 0, 15);
	}

	this->DrawAnimatedGUI(LineID, X+33, Y+10);
}


/*
bool Interface::AllowGUI()
{
	if( gInterface.Data[eCHANGINGCLASS_MAIN].Check())
	{
		return false;
	}
	// ----
	return pAllowGUI();
}*/


void Interface::TextDraw(int PosX, int PosY, int Width, int Arg5, int Color, int Arg7, int Align, HGDIOBJ Font, LPCTSTR Format, ...)
{
	char TextBuff[1024] = {0};
	va_list va;
	va_start(va, Format);
	vsprintf_s(TextBuff, Format, va);
	va_end(va);

	int v13; // ST1C_4@1
	int v15; // ST20_4@1
	pSetFont(pTextThis(), (int)Font);
	v13 = sub_41FFE0_Addr(pTextThis());
	v15 = sub_420010_Addr(pTextThis());
	SetTextColorByHDC(pTextThis(), Color);
	sub_4200F0_Addr(pTextThis(), Arg7);
	pSetBkColor(pTextThis(),255,255,255,0);
	pDrawText(pTextThis(), PosX, PosY, TextBuff, Width, Arg5, (int*)Align, 0);
	SetTextColorByHDC(pTextThis(), v13);
	sub_4200F0_Addr(pTextThis(), v15);
}

void Interface::MiniButtonDraw(int BtnID, float X, float Y, bool isHover, char* Text)
{
	//int x = GetPrivateProfileIntA("Custom", "X", -35, "./Settings.ini");
	//int y = GetPrivateProfileIntA("Custom", "Y", 60, "./Settings.ini");

	if (isHover)
	{
		this->DrawAnimatedButton(BtnID, X, Y, 0, 29);
	}
	else
	{
		this->DrawAnimatedButton(BtnID, X, Y, 0, 0);
	}
	this->DrawFormat(eWhite, X+7, Y+9, 50, 3,0, Text);
	//this->DrawGUI(LineID, X+33, Y+10);
}

bool Interface::ButtonEx(DWORD Event, int ButtonID, bool Type)
{
	//g_Console.AddMessage(5,"ENTER");
	//if( !this->IsWorkZone(ButtonID) )
	//g_Console.AddMessage(5,"%f - %f | %f - %f", this->Data[ButtonID].X, this->Data[ButtonID].MaxX,this->Data[ButtonID].Y, this->Data[ButtonID].MaxY );
	//if (!this->IsWorkZone(this->Data[ButtonID].X, this->Data[ButtonID].MaxX,this->Data[ButtonID].Y, this->Data[ButtonID].MaxY))
	if (!checkBtn(ButtonID))
	{
		//g_Console.AddMessage(3,"return because its shit");
		return false;
	}

	if( Type == true )
	{
		if( !this->Data[ButtonID].Attribute )
		{
			//g_Console.AddMessage(3,"return2");
			return false;
		}
	}

	// ----
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[ButtonID].EventTick);
	// ----

	if( Event == WM_LBUTTONDOWN  && this->Data[ButtonID].OnClick == false)
	{
		this->Data[ButtonID].OnClick = true;
		//return true;
	}
	if (Event != WM_LBUTTONUP)
	{
		return false;
	}
	/*if(Event == WM_LBUTTONUP && this->Data[ButtonID].OnClick == true)
	{
		this->Data[ButtonID].OnClick = false;
		return true;
	}*/
	// ----
	if( Delay < 500 )
	{
		//g_Console.AddMessage(3,"return3");
		return false;
	}
	// ----
	this->Data[ButtonID].OnClick = false;
	// ----
	this->Data[ButtonID].EventTick = GetTickCount();
	// ----
	//g_Console.AddMessage(3,"return successfully");
	return true;
}


void Interface::PartUPandDNEx(int PointID, int UpID, int DownID, int LineID, float X, float Y, DWORD Color, int Value, char* Text)
{
	this->DrawAnimatedGUI(PointID, X+20 , Y-4); // Point

	this->DrawFormat(eWhite, X+50, Y+1, 200, 1,0, Text);

	this->DrawAnimatedButton(DownID, X+150, Y-6, 0, 0); // 

	if(checkBtn(DownID) )
	{
		//g_Console.AddMessage(3," %d ", this->Data[DownID].OnClick);
		if( this->Data[DownID].OnClick )
		{
			//g_Console.AddMessage(3,"CLICK!");
			this->DrawAnimatedButton(DownID, X+150, Y-6, 0, 16);
		}
	}

	//this->DrawToolTip(X+x, Y+y, "%d", Value);
	pSetBlend(true);
	this->DrawBarForm(X+168, Y-5,19,13,0.0,0.0,0.0,1.0);//ReqItems
	glColor3f(1,1,1);
	pSetBlend(false);
	char szText[10];
	sprintf(szText,"%d",Value);
	this->TextDraw(X+128, Y-2, 100, 1, eWhite, 0, 3, 0 ,"%d",Value);
	//TestDrawText(szText, X+128, Y-2, 100, 1, eWhite, 0, 3,pFontNormal);
	//this->DrawBarForm(X+x, Y+y,w,h,0.04,0.34,0.0,1.0);//ReqItems

	this->DrawAnimatedButton(UpID, X+190, Y-6, 0, 0); // 

	if(checkBtn(UpID) )
	{
		//g_Console.AddMessage(3," %d ", this->Data[UpID].OnClick);
		if( this->Data[UpID].OnClick )
		{
			//g_Console.AddMessage(3,"CLICK!");
			this->DrawAnimatedButton(UpID, X+190, Y-6, 0, 16);
		}
	}



	this->DrawGUI(LineID, X+33, Y+10);
}

//int __thiscall sub_9150DF(void *this)





int ItemDevBack = 0;

//워크
void Interface::Work()
{
	/*if( GetForegroundWindow() == pGameWindow )
	{

		if (GetKeyState(VK_SNAPSHOT) < 0) 
		{
			gInterface.DrawLogo(1); 
		}
		if (GetKeyState(VK_END) & 0x4000) 
		{
			if((GetTickCount()-gInterface.Data[eVip_MAIN].EventTick) > 300)
			{
				if (gInterface.CheckVipWindow())
				{
					gInterface.Data[eVip_MAIN].EventTick = GetTickCount();
					gInterface.CloseVipWindow();
				}
				else
				{
					gInterface.Data[eVip_MAIN].EventTick = GetTickCount();
					gInterface.CloseCustomWindow();
					gInterface.OpenVipWindow();
				}
			}
		}
		//if (GetKeyState('H') & 0x4000) 
		//{
		//	gCustomEventTime.OpenWindow();
		//}
		if (GetKeyState(VK_F8) & 0x4000) 
		{
			gCustomRanking.OpenWindow();
		}
		if (GetKeyState(VK_ESCAPE) < 0) 
		{
			if (gInterface.Data[eCommand_MAIN].OnShow == true)
			{
				gInterface.Data[eCommand_MAIN].OnShow = false;
				pSetCursorFocus = false;
			}

			if (gInterface.Data[eRankPANEL_MAIN].OnShow == true)
			{
				gInterface.Data[eRankPANEL_MAIN].OnShow = false;
				pSetCursorFocus = false;
			}

			if (gInterface.Data[eEventTimePANEL_MAIN].OnShow == true)
			{
				gInterface.Data[eEventTimePANEL_MAIN].OnShow = false;
				pSetCursorFocus = false;
			}

			if (gInterface.CheckVipWindow())
			{
				gInterface.CloseVipWindow();
			}

			if (gInterface.CheckMenuWindow())
			{
				gInterface.CloseMenuWindow();
			}
		}
	} */

	//jewellsbank
	gCustomJewelBank.DrawJewelBankWindow();
	
	gObjUser.Refresh();
	gCustomRanking.DrawRankPanelWindow();
	gCustomEventTime.DrawEventTimePanelWindow();
	gInterface.DrawLogo(0);
	ReconnectMainProc();
	//gInterface.DrawTimeUI();
	gInterface.DrawVipWindow();
	gInterface.DrawMenu();
	gInterface.DrawMenuOpen();
	gInterface.DrawConfirmOpen();
	gCustomCommandInfo.DrawCommandWindow();
	//gSmithy.Draw();
	gInterface.DrawChangingClassWindow(); //변생

	gInterface.DrawOpAntiLag();

	//gInterface.guiMonitore();
	gInterface.SendPingRecv();
	gInterface.UPDATE_FPS();

	//gInterface.DrawAutoCtrl1();
	gInterface.DrawAutoCtrl2();
	//gInterface.DrawAutoCtrl3();

	gAchievements.Draw();
	//g_Achievements.Draw(); //업적k

	gAchievements.DrawPanel();

	gRageSystem.rDrawInterface();
	//gRageSystem.ResetRageDraw();


	gInterface.DrawQuaMocRS();

	gInterface.DrawRPS(); //가위바위

	gInterface.DrawCameraButton();
	gInterface.DrawCameraResetButton();

	//gInterface.DrawAutoChange();
	//gInterface.DrawOffExp();
	gLuckySpin.Draw();
	pDrawInterface();
	if( GetForegroundWindow() == pGameWindow )
	{
		if (GetKeyState(VK_INSERT) & 0x4000) 
		{
			gInterface.ShowInfoUser = true;
		}
		if (GetKeyState(VK_F6) & 0x4000 && GetTickCount() >= gInterface.MenuAntlagDelayClick + 250) 
		{
			if (pCheckWindowNew(WindowID(ObjWindowNew::_ChatWindow)))//if (!gInterface.CheckWindow(ObjWindow::ChatWindow))
			{
			    if (gInterface.CheckOpMenuAntiLag())
				{
		            gInterface.CloseOpMenuAntiLag();
	            }
				else
				{
		            gInterface.OpenOpMenuAntiLag();
				}
			}
			gInterface.MenuAntlagDelayClick = GetTickCount();
		}
		if (GetKeyState(VK_DELETE) & 0x4000) 
		{
			gInterface.ShowInfoUser = false;
		}
		if (GetKeyState(VK_F8) & 0x4000 && GetTickCount() >= gInterface.AutoControlDelay + 250) {
			if(gInterface.varTestCntrl == 0){
				SetByte(0x005A064D+2,0);
				SetByte(0x0059FE7F+2,0);
				//gInterface.DrawMessage(1, "Autro Control [ON]");
				gInterface.varTestCntrl = 1;
			}else{
				SetByte(0x005A064D+2,1);
				SetByte(0x0059FE7F+2,1);
				//gInterface.DrawMessage(1, "Autro Control [OFF]");
				gInterface.varTestCntrl = 0;
			}
			gInterface.AutoControlDelay = GetTickCount();
		}
	}

	

	
	return;
}


void Interface::DrawAutoCtrl()
{

	if(gServerInfo.m_AutoCtrl == false)
	{
		gServerInfo.m_AutoCtrl = true;

		USERBUTTON_REQ pRequest;
		pRequest.Head.set(0xFF,0x0C,sizeof(pRequest));
		DataSend((BYTE*)&pRequest,pRequest.Head.size);
		SetByte(0x005A064D+2,0);
		SetByte(0x0059FE7F+2,0);
		
	}
	else
	{
		gServerInfo.m_AutoCtrl = false;

		USERBUTTON_REQ pRequest;
		pRequest.Head.set(0xFF,0x0C,sizeof(pRequest));
		DataSend((BYTE*)&pRequest,pRequest.Head.size);
		keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
		SetByte(0x005A064D+2,1);
		SetByte(0x0059FE7F+2,1);
	}

}

void Interface::DrawAutoChange()
{

	if (gServerInfo.m_AutoChange == false) 
	{
		gServerInfo.m_AutoChange = true;
		USERBUTTON_REQ1 pRequest;
		pRequest.Head.set(0xFF,0x0E,sizeof(pRequest));
		DataSend((BYTE*)&pRequest,pRequest.Head.size);
	}
	else
	{
		gServerInfo.m_AutoChange = false;
		USERBUTTON_REQ1 pRequest;
		pRequest.Head.set(0xFF,0x0E,sizeof(pRequest));
		DataSend((BYTE*)&pRequest,pRequest.Head.size);

	}

}

//길드어택
void Interface::DrawGuildAttack()
{

	if (gServerInfo.m_AutoGuildAttack == false) 
	{
		gServerInfo.m_AutoGuildAttack = true;
		USERBUTTON_REQ2 pRequest;
		pRequest.Head.set(0xFF,0x0D,sizeof(pRequest));
		DataSend((BYTE*)&pRequest,pRequest.Head.size);
	}
	else
	{
		gServerInfo.m_AutoGuildAttack = false;
		USERBUTTON_REQ2 pRequest;
		pRequest.Head.set(0xFF,0x0D,sizeof(pRequest));
		DataSend((BYTE*)&pRequest,pRequest.Head.size);

	}


}
void Interface::DrawOffExp()
{

	if (gServerInfo.m_AutoExp == false) 
	{
		gServerInfo.m_AutoExp = true;
		USERBUTTON_REQ3 pRequest;
		pRequest.Head.set(0xFF,0x0F,sizeof(pRequest));
		DataSend((BYTE*)&pRequest,pRequest.Head.size);
	}
	else
	{
		gServerInfo.m_AutoExp = false;
		USERBUTTON_REQ3 pRequest;
		pRequest.Head.set(0xFF,0x0F,sizeof(pRequest));
		DataSend((BYTE*)&pRequest,pRequest.Head.size);

	}


}


void Interface::DrawAutoCtrl2()
{
 if (gInterface.ShowInfoUser)
 {
	//this->DrawGUI(eMenu1, 2, 140);

	//this->DrawFormat(eShinyGreen1, 43, 30, 100, 1,1, "포인트정보");

	this->DrawFormat(eWhite, 10, 148, 100, 1,1, "캐시:");
    this->DrawFormat(eGold, 30, 148, 100, 1,1, "%d", Coin1);

	this->DrawFormat(eWhite, 10, 163, 100, 1,1, "알씨:");
    this->DrawFormat(eGold, 30, 163, 100, 1,1, "%d", Coin2);

	this->DrawFormat(eWhite, 10, 177, 100, 1,1, "고포:");
    this->DrawFormat(eGold, 30, 177, 100, 1,1, "%d", Coin3);

	gInterface.ShowInfoUser = true;	
 }
 else
 {
	gInterface.ShowInfoUser = false;	
 }
	return;
}

void Interface::DrawAutoCtrl3()
{
	this->DrawFormat(eWhite, 250, 4, 400, 1,1, "[F5]메뉴 [F7]창고 [F8]상점 [F12]클라숨김");
	return;
}


void Interface::DrawTimeUI()
{

	//MessageBox(NULL,"#7","Warning!",NULL);
	if( !this->Data[eTIME].OnShow )
	{
		return;
	}
	// ----
	/*if( this->CheckWindow(ObjWindow::ChatWindow) || this->CheckWindow(ObjWindow::CashShop)
	|| this->CheckWindow(ObjWindow::FullMap) || this->CheckWindow(ObjWindow::SkillTree)
	|| this->CheckWindow(ObjWindow::MoveList) || gObjUser.m_MapNumber == 34 || gObjUser.m_MapNumber == 30 )*/
	//if(this->CheckWindow(ObjWindow::CashShop)|| this->CheckWindow(ObjWindow::FullMap) || this->CheckWindow(ObjWindow::ChatWindow) || this->CheckWindow(ObjWindow::SkillTree)
	//	|| this->CheckWindow(ObjWindow::MoveList) || pMapNumber == 34 || pMapNumber == 30 )
	//{
	//	return;
	//}
	// ----
	//this->DrawGUI(eTIME, 0, -3);

	this->DrawGUI(eTIME, this->Data[eTIME].X, this->Data[eTIME].Y);
	this->DrawGUI(eTIME, this->Data[eTIME].X, this->Data[eTIME].Y+22);
	// -----
	time_t TimeServer, TimeLocal;
	struct tm * ServerT, * LocalT;
	time(&TimeServer);
	time(&TimeLocal);
	// ----
	ServerT = gmtime(&TimeServer);
	// ----
	char ServerTimeName[25] = "Server:";
	char ServerTime[30];

	sprintf(ServerTime, "%2d:%02d:%02d", (ServerT->tm_hour)%24, ServerT->tm_min, ServerT->tm_sec);
	// -----
	LocalT = localtime(&TimeLocal); 
	// -----
	char LocalTimeName[25] = "Local:";
	char LocalTime[30];
	sprintf(LocalTime, "%2d:%02d:%02d", LocalT->tm_hour, LocalT->tm_min, LocalT->tm_sec);
	// -----
	this->DrawFormat(eGold, 5, 391, 50, 1, 0, ServerTimeName);
	this->DrawFormat(eWhite, 55, 391, 100, 1, 0, ServerTime);
	// ----
	this->DrawFormat(eGold, 5, 413, 50, 1, 0, LocalTimeName);
	this->DrawFormat(eWhite, 55, 413, 100, 1, 0, LocalTime);

	pDrawColorText("Teste", 5, 300, 50, 0, eGold, 0, 1);
}

int Interface::DrawFormat(DWORD Color, int PosX, int PosY, int Width, int Align, int Bold, LPCSTR Text, ...)
{
	char Buff[2048];
	int BuffLen	= sizeof(Buff)-1;
	ZeroMemory(Buff, BuffLen);
	
	va_list args;
	va_start(args, Text);
	int Len	= vsprintf_s(Buff, BuffLen, Text, args);
	va_end(args);
	
	int LineCount = 0;
	
	char * Line = strtok(Buff, "\n");
	
	while( Line != NULL )
	{
		pDrawColorText(Line, PosX, PosY, Color, 1, Align, Width, Bold);
		PosY += 10;
		Line = strtok(NULL, "\n");
	}
	
	return PosY;
}

bool Interface::CheckWindow(int WindowID)
{
	return pCheckWindow(pWindowThis(), WindowID);
}
int Interface::CloseWindow(int WindowID)
{
	return pCloseWindow(pWindowThis(), WindowID);
}
int Interface::OpenWindow(int WindowID)
{
	return pOpenWindow(pWindowThis(), WindowID);
}


bool Interface::IsWorkZone(float X, float Y, float MaxX, float MaxY)
{
	if( (pCursorX < X || pCursorX > MaxX) 
		|| (pCursorY < Y || pCursorY > MaxY) )
	{
		return false;
	}
	// ----
	return true;
}

bool Interface::IsWorkZone(short ObjectID)
{
	if( (gObjUser.m_CursorX < this->Data[ObjectID].X || gObjUser.m_CursorX > this->Data[ObjectID].MaxX) || (gObjUser.m_CursorY < this->Data[ObjectID].Y || gObjUser.m_CursorY > this->Data[ObjectID].MaxY) )
		return false;

	return true;
}

float Interface::GetResizeX(short ObjectID)
{
	//if( pWinWidth == 800 )
	//{
	//	return this->Data[ObjectID].X + 16.0;
	//}
	//else if( pWinWidth != 1024 )
	//{
	//	return this->Data[ObjectID].X - 16.0;
	//}
	//
	//return this->Data[ObjectID].X;

	return 0;
}

int Interface::DrawToolTip(int X, int Y, LPCSTR Text, ...)
{
	char Buff[2048];
	int BuffLen	= sizeof(Buff);
	ZeroMemory(Buff, BuffLen);
	
	va_list args;
	va_start(args, Text);
	int Len	= vsprintf_s(Buff, BuffLen, Text, args);
	va_end(args);
	
	return pDrawToolTip(X, Y, Buff);
}

int Interface::DrawMessage(int Mode, LPCSTR Text, ...)
{
	char Buff[2048];
	int BuffLen	= sizeof(Buff);
	ZeroMemory(Buff, BuffLen);
	// ----
	va_list args;
	va_start(args, Text);
	int Len	= vsprintf_s(Buff, BuffLen, Text, args);
	va_end(args);
	// ----
	//return pDrawMessage(Buff, Mode);
}


void Interface::DrawVipWindow()
{

	if( !this->Data[eVip_MAIN].OnShow )
	{
		return;
	}

	if( gProtect.m_MainInfo.EnableVipShop != 1 )
	{
		this->CloseVipWindow();
		return;
	}

	//SetCompleteHook(0xE8,0x62EB8D,&this->DisableName);

	// ----
	float MainWidth			= 230.0;
	float MainHeight		= 180.0;
	float StartBody			= 80.0;
	float StartY			= 80.0;
	float StartX			= (MAX_WIN_WIDTH / 2) - (MainWidth / 2) + 200;
	float MainCenter		= StartX + (MainWidth / 3);
	float ButtonX			= MainCenter - (float)(29.0 / 2);
	// ----
	this->DrawGUI(eVip_MAIN, StartX, StartY + (float)2.0);
	this->DrawGUI(eVip_TITLE, StartX, StartY);
	StartY = this->DrawRepeatGUI(eVip_FRAME, StartX, StartY + (float)15.0, 13);
	this->DrawGUI(eVip_FOOTER, StartX, StartY);
	this->DrawGUI(eVip_CLOSE, StartX + MainWidth - this->Data[eVip_CLOSE].Width, StartBody);
	// ----
	if (this->IsWorkZone(eVip_CLOSE))
	{
		DWORD Color = eGray100;
		// ----
		if (this->Data[eVip_CLOSE].OnClick)
		{
			Color = eGray150;
		}
		// ----
		this->DrawColoredGUI(eVip_CLOSE, this->Data[eVip_CLOSE].X, StartBody, Color);
		this->DrawToolTip((int)this->Data[eVip_CLOSE].X + 5, StartBody + 25, "닫기");
	}
	// ----
	this->DrawFormat(eGold, (int)StartX + 10, (int)StartBody + 10, 210, 3, 1, gCustomMessage.GetMessage(5));
	int LineY = this->DrawFormat(eWhite, (int)StartX + 30, (int)StartBody + 35, 210, 1, 0, gCustomMessage.GetMessage(6), gObjUser.lpPlayer->Name);
	LineY = this->DrawFormat(eGold, (int)StartX + 30, (int)LineY, 210, 1, 1, gCustomMessage.GetMessage(14));
	LineY = this->DrawFormat(eWhite, (int)StartX + 30, (int)LineY, 210, 1, 1, gCustomMessage.GetMessage(7));
	LineY = this->DrawFormat(eWhite, (int)StartX + 30, (int)LineY, 210, 1, 1, gCustomMessage.GetMessage(8));
	// ----
	this->DrawGUI(eVip_DIV, StartX, StartBody + 70);
	this->DrawFormat(eGold, (int)StartX + 30, (int)StartBody + 95 - 2, 210, 1, 1, "버프");
	this->DrawFormat(eGold, (int)StartX + 80, (int)StartBody + 95 - 2 , 210, 1, 1, "경험치");
	this->DrawFormat(eGold, (int)StartX + 130, (int)StartBody + 95 - 2, 210, 1, 1, "드랍율");
	this->DrawFormat(eGold, (int)StartX + 170, (int)StartBody + 95 - 2, 210, 1, 1, "시간");
	// ----
	if (gProtect.m_MainInfo.VipTypes < 1 || gProtect.m_MainInfo.VipTypes > 3)
	{
		gProtect.m_MainInfo.VipTypes = 3;
	}

	for( int i = 0; i < gProtect.m_MainInfo.VipTypes; i++ )
	{
		this->DrawFormat(eWhite, (int)StartX + 30, (int)StartBody + 110 + (12 * i) - 5, 210, 1, 1, gCustomBuyVip.m_CustomBuyVipInfo[i].VipName);
		// ----
		this->DrawFormat(eWhite, (int)StartX + 80, (int)StartBody + 110 + (12 * i) - 5, 210, 1, 1, "+%d%%", gCustomBuyVip.m_CustomBuyVipInfo[i].Exp);
		// ----
		this->DrawFormat(eWhite, (int)StartX + 130, (int)StartBody + 110 + (12 * i) - 5, 210, 1, 1, "+%d%%", gCustomBuyVip.m_CustomBuyVipInfo[i].Drop);
		// ----
		this->DrawFormat(eWhite, (int)StartX + 170, (int)StartBody + 110 + (12 * i) - 5, 210, 1, 1, "%d일", gCustomBuyVip.m_CustomBuyVipInfo[i].Days);

		pDrawGUI(0x7B5E, StartX + 30, StartBody + 110 + (12 * i) + 9 - 5, 82.0, 2.0);
		pDrawGUI(0x7B5E, StartX + 30 + 82, StartBody + 110 + (12 * i) + 9 - 5, 82.0, 2.0);
	}

	if (gProtect.m_MainInfo.VipTypes > 0)
	{
	// ---- bronze start 
	if (IsWorkZone(eVip_BRONZE))
	{
		if (this->Data[eVip_BRONZE].OnClick)
			this->DrawButton(eVip_BRONZE, StartX + 64, 230, 0, 58);
		else
			this->DrawButton(eVip_BRONZE, StartX + 64, 230, 0, 29);
		// ----
		this->DrawFormat(eGold, (int)StartX + 30, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(10));
		this->DrawFormat(eGold, (int)StartX + 70, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(11), gCustomBuyVip.m_CustomBuyVipInfo[0].Coin1);
		this->DrawFormat(eGold, (int)StartX + 120, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(12), gCustomBuyVip.m_CustomBuyVipInfo[0].Coin2);
		this->DrawFormat(eGold, (int)StartX + 160, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(13), gCustomBuyVip.m_CustomBuyVipInfo[0].Coin3);
	}
	else
		this->DrawButton(eVip_BRONZE, StartX + 64, 230, 0, 0);
	// ----
	this->DrawFormat(eWhite, (int)StartX + 90, 230 + 9, 160, 1, 1, gCustomMessage.GetMessage(9),gCustomBuyVip.m_CustomBuyVipInfo[0].VipName);
	// ---- bronze end ------------------------------------
	}

	if (gProtect.m_MainInfo.VipTypes > 1)
	{
	// ---- Silver start ------------------------------------
	if (IsWorkZone(eVip_SILVER))
	{
		if (this->Data[eVip_SILVER].OnClick)
			this->DrawButton(eVip_SILVER, StartX + 64, 260, 0, 58);
		else
			this->DrawButton(eVip_SILVER, StartX + 64, 260, 0, 29);
		// ----
		this->DrawFormat(eGold, (int)StartX + 30, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(10));
		this->DrawFormat(eGold, (int)StartX + 70, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(11), gCustomBuyVip.m_CustomBuyVipInfo[1].Coin1);
		this->DrawFormat(eGold, (int)StartX + 120, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(12), gCustomBuyVip.m_CustomBuyVipInfo[1].Coin2);
		this->DrawFormat(eGold, (int)StartX + 160, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(13), gCustomBuyVip.m_CustomBuyVipInfo[1].Coin3);
	}
	else
		this->DrawButton(eVip_SILVER, StartX + 64, 260, 0, 0);

	this->DrawFormat(eWhite, (int)StartX + 90, 260 + 9, 160, 1, 1, gCustomMessage.GetMessage(9),gCustomBuyVip.m_CustomBuyVipInfo[1].VipName);
	// ---- silver end ------------------------------------
	}

	if (gProtect.m_MainInfo.VipTypes > 2)
	{
	// ---- gold start ------------------------------------
	if (IsWorkZone(eVip_GOLD))
	{
		if (this->Data[eVip_GOLD].OnClick)
			this->DrawButton(eVip_GOLD, StartX + 64, 290, 0, 58);
		else
			this->DrawButton(eVip_GOLD, StartX + 64, 290, 0, 29);
		// ----
		this->DrawFormat(eGold, (int)StartX + 30, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(10));
		this->DrawFormat(eGold, (int)StartX + 70, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(11), gCustomBuyVip.m_CustomBuyVipInfo[2].Coin1);
		this->DrawFormat(eGold, (int)StartX + 120, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(12), gCustomBuyVip.m_CustomBuyVipInfo[2].Coin2);
		this->DrawFormat(eGold, (int)StartX + 160, (int)StartBody + 142, 210, 1, 1, gCustomMessage.GetMessage(13), gCustomBuyVip.m_CustomBuyVipInfo[2].Coin3);
	}
	else
		this->DrawButton(eVip_GOLD, StartX + 64, 290, 0, 0);

	this->DrawFormat(eWhite, (int)StartX + 90, 290 + 9, 160, 1, 1, gCustomMessage.GetMessage(9),gCustomBuyVip.m_CustomBuyVipInfo[2].VipName);
	// ---- gold end ------------------------------------
	}
}

bool Interface::EventVipWindow_Close(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eVip_CLOSE].EventTick);
	// ----
	if (!this->Data[eVip_MAIN].OnShow || !IsWorkZone(eVip_CLOSE))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eVip_CLOSE].OnClick = true;
		return true;
	}
	// ----
	this->Data[eVip_CLOSE].OnClick = false;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eVip_CLOSE].EventTick = GetTickCount();
	this->CloseVipWindow();
	// ----
	return false;
}
// ----------------------------------------------------------------------------------------------

bool Interface::EventVipWindow_Bronze(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eVip_BRONZE].EventTick);
	// ----
	if (!this->Data[eVip_MAIN].OnShow || !IsWorkZone(eVip_BRONZE))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eVip_BRONZE].OnClick = true;
		return true;
	}
	// ----
	this->Data[eVip_BRONZE].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eVip_BRONZE].EventTick = GetTickCount();
	gCustomBuyVip.BuyStatus(1);
	this->CloseVipWindow();
	// ----
	return false;
}
// ----------------------------------------------------------------------------------------------

bool Interface::EventVipWindow_Silver(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eVip_SILVER].EventTick);
	// ----
	if (!this->Data[eVip_MAIN].OnShow || !IsWorkZone(eVip_SILVER))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eVip_SILVER].OnClick = true;
		return true;
	}
	// ----
	this->Data[eVip_SILVER].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eVip_SILVER].EventTick = GetTickCount();
	gCustomBuyVip.BuyStatus(2);
	this->CloseVipWindow();
	// ----
	return false;
}

// ----------------------------------------------------------------------------------------------
bool Interface::EventVipWindow_Gold(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eVip_GOLD].EventTick);
	// ----
	if (!this->Data[eVip_MAIN].OnShow || !IsWorkZone(eVip_GOLD))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eVip_GOLD].OnClick = true;
		return true;
	}
	// ----
	this->Data[eVip_GOLD].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eVip_GOLD].EventTick = GetTickCount();
	gCustomBuyVip.BuyStatus(3);
	this->CloseVipWindow();
	// ----
	return false;
}
// ----------------------------------------------------------------------------------------------

bool Interface::EventVipWindow_Main(DWORD Event)
{
	this->EventVipWindow_Close(Event);
	this->EventVipWindow_Bronze(Event);
	this->EventVipWindow_Silver(Event);
	this->EventVipWindow_Gold(Event);
	// ----
	return true;
}

float Interface::DrawRepeatGUI(short MonsterID, float X, float Y, int Count)
{
	float StartY = Y;
	// ----
	for( int i = 0; i < Count; i++ )
	{
		pDrawGUI(this->Data[MonsterID].ModelID, X, StartY,
			this->Data[MonsterID].Width, this->Data[MonsterID].Height);
		// ----
		StartY += this->Data[MonsterID].Height;
	}
	// ----
	return StartY;
}

void Interface::DrawButton(short ObjectID, float PosX, float PosY, float ScaleX, float ScaleY)
{
	if (this->Data[ObjectID].X == -1 || this->Data[ObjectID].Y == -1)
	{
		this->Data[ObjectID].X = PosX;
		this->Data[ObjectID].Y = PosY;
		this->Data[ObjectID].MaxX = PosX + this->Data[ObjectID].Width;
		this->Data[ObjectID].MaxY = PosY + this->Data[ObjectID].Height;
	}
	// ----
	pDrawButton(this->Data[ObjectID].ModelID, PosX, PosY,
		this->Data[ObjectID].Width, this->Data[ObjectID].Height, ScaleX, ScaleY);
}

void Interface::DrawColorGUI(int MainID, int X, int Y, int Width, int Height, DWORD Color)
{
	pDrawColorButton(MainID, X, Y, Width, Height, 0, 0, Color);
}


void Interface::DrawColoredGUI(short ObjectID, float X, float Y, DWORD Color)
{
	if( this->Data[ObjectID].X == -1 || this->Data[ObjectID].Y == -1 )
	{
		this->Data[ObjectID].X		= X;
		this->Data[ObjectID].Y		= Y;
		this->Data[ObjectID].MaxX	= X + this->Data[ObjectID].Width;
		this->Data[ObjectID].MaxY	= Y + this->Data[ObjectID].Height;
	}
	// ----
	pDrawColorButton(this->Data[ObjectID].ModelID, X, Y, 
		this->Data[ObjectID].Width, this->Data[ObjectID].Height, 0, 0, Color);
}

void Interface::DrawColoredGUI22(short ObjectID, DWORD Color)
{
	pDrawColorButton(this->Data[ObjectID].ModelID, this->Data[ObjectID].X, this->Data[ObjectID].Y,
		this->Data[ObjectID].Width, this->Data[ObjectID].Height, 0, 0, Color);
}

void Interface::DisableName()
{
	static DWORD AAddress1 = 0x0062EB95;

	_asm
	{
		mov     eax, 0
		movzx   eax, byte ptr [eax+73h]
		leave
		Jmp [AAddress1]
	}
}

void Interface::DrawLogo(bool active)
{
	if (gProtect.m_MainInfo.PrintLogo != 0)
	{

		if (active == 1)
		{
			this->Data[eLogo].EventTick = GetTickCount()+1500;
		}
		if (gInterface.Data[eLogo].EventTick > GetTickCount())
		{
			if (gProtect.m_MainInfo.PrintLogo == 1)
			{
				this->DrawGUI(eLogo, 10, 10);
			}

			if (gProtect.m_MainInfo.PrintLogo == 2)
			{
				this->DrawGUI(eLogo, MAX_WIN_WIDTH - 160, 10);

			}

			if (gProtect.m_MainInfo.PrintLogo == 3)
			{
				this->DrawGUI(eLogo, 10, MAX_WIN_HEIGHT - 164);
			}

			if (gProtect.m_MainInfo.PrintLogo == 4)
			{
				this->DrawGUI(eLogo, MAX_WIN_WIDTH - 160, MAX_WIN_HEIGHT - 164);
			}

			if (gProtect.m_MainInfo.PrintLogo == 5)
			{
				this->DrawGUI(eLogo, (MAX_WIN_WIDTH/2)-(150/2), (MAX_WIN_HEIGHT/2)-(114/2));
			}
		}
	}
}

//메뉴
void Interface::DrawMenu()
{
	if (gProtect.m_MainInfo.CustomMenuSwitch != 1)
	{
		return;
	}

	if(pCheckWindowNew(WindowID(_MoveCommand))) //
	{
		return;
	}

	if (this->Data[eMenu].OnShow)
	{
		this->Data[eMenu].OnShow = false;
	}


	float StartX = 4;
	float StartY = 455;
	

	if (IsWorkZone(eMenu))
		{
			this->DrawToolTip(StartX+2, StartY-14, "커스텀 메뉴");

		if (this->Data[eMenu].OnClick)
		{
			this->Data[eMenu].OnShow = true;
			return;
		}
		pSetBlend(true);
		this->DrawButtonGUI(eMenu, StartX, StartY, 13.0,15.0,1.0, 1.0,1,1,0.0);
	}
	else
	{	
		pSetBlend(true);
		this->DrawButtonGUI(eMenu, StartX, StartY, 14.0,16.0,1.0, 1.0,1,1,0.0);
	}

	this->Data[eMenu].OnShow = true;
	
}

bool Interface::EventDrawMenu_Open(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eMenu].EventTick);
	// ----
	if (!this->Data[eMenu].OnShow || !IsWorkZone(eMenu))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		pSetCursorFocus = true;
		this->Data[eMenu].OnClick = true;
		return true;
	}
	// ----
	this->Data[eMenu].OnClick = false;
	// ----
	if (Delay < 200)
	{
		return false;
	}
	
	// ----
	this->Data[eMenu].EventTick = GetTickCount();
	
	if (CheckMenuWindow())
	{
		CloseMenuWindow();
	}
	else
	{
		CloseCustomWindow();
		OpenMenuWindow();
	}
	// ----
	return false;
}

void Interface::DrawMenuOpen()
{
	if (gProtect.m_MainInfo.CustomMenuSwitch != 1)
	{
		return;
	}

	if( !this->Data[eMenu_MAIN].OnShow )
	{
		return;
	}

	sub_62FBBB_Addr(0, 0, *(GLsizei*)MAIN_RESOLUTION_X+(GLsizei)1000, *(GLsizei*)MAIN_RESOLUTION_Y+(GLsizei)1000);

	sub_630E06_Addr();
	
	
	float MainWidth			= 230.0;
	float MainHeight		= 180.0;
	float StartBody			= 80.0;
	float StartY			= 80.0;
	float StartX			= (MAX_WIN_WIDTH / 2) - (MainWidth / 2) + 200;
	float MainCenter		= StartX + (MainWidth / 3);
	float ButtonX			= MainCenter - (float)(29.0 / 2);
	// ----
	this->DrawGUI(eMenu_MAIN, StartX, StartY + (float)2.0);
	this->DrawGUI(eMenu_TITLE, StartX, StartY);
	StartY = this->DrawRepeatGUI(eCHANGINGCLASS_FRAME, StartX, StartY + (float)15.0, 18);


	this->DrawGUI(eMenu_FOOTER, StartX, StartY);
	this->DrawGUI(eMenu_CLOSE, StartX + MainWidth - this->Data[eVip_CLOSE].Width, StartBody);
	// ----
	if (this->IsWorkZone(eMenu_CLOSE))
	{
		DWORD Color = eGray100;
		// ----
		if (this->Data[eMenu_CLOSE].OnClick)
		{
			Color = eGray150;
		}
		// ----
		this->DrawColoredGUI(eVip_CLOSE, this->Data[eMenu_CLOSE].X, StartBody, Color);
		this->DrawToolTip((int)this->Data[eMenu_CLOSE].X + 5, StartBody + 25, "닫기");
	} 

	this->DrawFormat(eGold, (int)StartX + 10, (int)StartBody + 20, 210, 3,1, "커스텀 메뉴");


/*	if(gProtect.m_MainInfo.EnableCoinStatus == 1)
	{
		this->DrawFormat(eGold, (int)StartX + 10, (int)StartBody + 35, 210, 3,1, gCustomMessage.GetMessage(50));

		this->DrawFormat(eWhite, (int)StartX + 25, (int)StartBody + 50, 40, 1,1, gCustomMessage.GetMessage(51));
		this->DrawFormat(eGold, (int)StartX + 50, (int)StartBody + 50, 40, 1,1, "%d",Coin1);

		this->DrawFormat(eWhite, (int)StartX + 90, (int)StartBody + 50, 40, 1,1, gCustomMessage.GetMessage(52));
		this->DrawFormat(eGold, (int)StartX + 115, (int)StartBody + 50, 40, 1,1, "%d",Coin2);

		this->DrawFormat(eWhite, (int)StartX + 153, (int)StartBody + 50, 40, 1,1, gCustomMessage.GetMessage(53));
		this->DrawFormat(eGold, (int)StartX + 176, (int)StartBody + 50, 40, 1,1, "%d",Coin3);
	}
	else
	{
		this->DrawFormat(eGold, (int)StartX + 10, (int)StartBody + 45, 210, 3,1, gCustomMessage.GetMessage(54));
	} */

	//this->DrawGUI(eVip_DIV, StartX, StartBody + 60);

	int BtCount		= 0;
	int BtStart		= StartBody + 56;
	int BtDistance	= 33;

	if (gProtect.m_MainInfo.EnableEventTimeButton == 1)
	{
		BtCount++;
	}
	else
	{	
		BtStart	-= 33;
	}
	if (gProtect.m_MainInfo.EnableVipShopButton == 1)
	{
		BtCount++;
	}
	if (gProtect.m_MainInfo.EnableRankingButton == 1)
	{
		BtCount++;
	}
	if (gProtect.m_MainInfo.EnableCommandButton == 1)
	{
		BtCount++;
	}
	if (gProtect.m_MainInfo.EnableOptionButton == 1)
	{
		BtCount++;
	}

	if (BtCount == 4)
	{
		BtStart		+= 15;
	}
	if (BtCount == 3)
	{
		BtStart		+= 30;
	}
	if (BtCount == 2)
	{
		BtStart		+= 45;
	}
	if (BtCount == 1)
	{
		BtStart		+= 60;
	}


	if (gProtect.m_MainInfo.EnableCommandButton == 1)
	{
	//Commandos

	if (IsWorkZone(eMenu_OPT4))
	{
		if (this->Data[eMenu_OPT4].OnClick)
			this->DrawButton(eMenu_OPT4, StartX +60, BtStart, 0, 58);
		else
			this->DrawButton(eMenu_OPT4, StartX + 60, BtStart, 0, 29);
		// ----
	}
	else
		this->DrawButton(eMenu_OPT4, StartX + 60, BtStart, 0, 0);

	this->DrawFormat(eWhite, (int)StartX + 60, BtStart + 9, 108, 3,0, "게임 명령어");
	}

	//Horario eventos
	if (gProtect.m_MainInfo.EnableEventTimeButton == 1)
	{
	BtStart += BtDistance;
	
	if (IsWorkZone(eMenu_OPT1))
	{
		if (this->Data[eMenu_OPT1].OnClick)
			this->DrawButton(eMenu_OPT1, StartX + 60, BtStart, 0, 58);
		else
			this->DrawButton(eMenu_OPT1, StartX + 60, BtStart, 0, 29);
		// ----
	}
	else
		this->DrawButton(eMenu_OPT1, StartX + 60, BtStart, 0, 0);

	this->DrawFormat(eWhite, (int)StartX + 60, BtStart + 9, 108, 3,0, "이벤트 시간");
	}

	//Comprar vip
	/*if (gProtect.m_MainInfo.EnableVipShopButton == 1)
	{
	
	BtStart += BtDistance;

	if (IsWorkZone(eMenu_OPT2))
	{
		if (this->Data[eMenu_OPT2].OnClick)
			this->DrawButton(eMenu_OPT2, StartX + 63, BtStart, 0, 58);
		else
			this->DrawButton(eMenu_OPT2, StartX + 63, BtStart, 0, 29);
		// ----
	}
	else
		this->DrawButton(eMenu_OPT2, StartX + 63, BtStart, 0, 0);

	this->DrawFormat(eWhite, (int)StartX + 63, BtStart + 9, 108, 3,1, gCustomMessage.GetMessage(26));
	}*/

	//Ranking
	if (gProtect.m_MainInfo.EnableRankingButton == 1)
	{
	BtStart += BtDistance;

	if (IsWorkZone(eMenu_OPT3))
	{
		if (this->Data[eMenu_OPT3].OnClick)
			this->DrawButton(eMenu_OPT3, StartX + 60, BtStart, 0, 58);
		else
			this->DrawButton(eMenu_OPT3, StartX + 60, BtStart, 0, 29);
		// ----
	}
	else
		this->DrawButton(eMenu_OPT3, StartX + 60, BtStart, 0, 0);

	this->DrawFormat(eWhite, (int)StartX + 60, BtStart + 9, 108, 3,0, "원피스 랭킹");
	}


/*
	if (gProtect.m_MainInfo.EnableCommandButton == 1)
	{
	//Commandos
	BtStart += BtDistance;

	if (IsWorkZone(eMenu_OPT4))
	{
		if (this->Data[eMenu_OPT4].OnClick)
			this->DrawButton(eMenu_OPT4, StartX + 64, BtStart, 0, 58);
		else
			this->DrawButton(eMenu_OPT4, StartX + 64, BtStart, 0, 29);
		// ----
	}
	else
		this->DrawButton(eMenu_OPT4, StartX + 64, BtStart, 0, 0);

	this->DrawFormat(eWhite, (int)StartX + 64, BtStart + 9, 108, 3,1, gCustomMessage.GetMessage(28));
	} */


	/*if (gProtect.m_MainInfo.EnableOptionButton == 1)
	{
	//Op寤es
	BtStart += BtDistance;

	if (IsWorkZone(eMenu_OPT20))
	{
		if (this->Data[eMenu_OPT20].OnClick)
			this->DrawButton(eMenu_OPT20, StartX + 64, BtStart, 0, 58);
		else
			this->DrawButton(eMenu_OPT20, StartX + 64, BtStart, 0, 29);
		// ----
	}
	else
		this->DrawButton(eMenu_OPT20, StartX + 64, BtStart, 0, 0);

	this->DrawFormat(eWhite, (int)StartX + 64, BtStart + 9, 108, 3,0, gCustomMessage.GetMessage(44));
	} */

	if (gProtect.m_MainInfo.EnableOptionButton == 1)
	{
	
	BtStart += BtDistance;

	if (IsWorkZone(eUSERSPANEL_CHANGINGCLASS))
	{
		if (this->Data[eUSERSPANEL_CHANGINGCLASS].OnClick)
			this->DrawButton(eUSERSPANEL_CHANGINGCLASS, StartX + 60, BtStart, 0, 58);
		else
			this->DrawButton(eUSERSPANEL_CHANGINGCLASS, StartX + 60, BtStart, 0, 29);
		// ----
	}
	else
		this->DrawButton(eUSERSPANEL_CHANGINGCLASS, StartX + 60, BtStart, 0, 0);
		this->DrawFormat(eWhite, (int)StartX + 60, BtStart + 9, 108, 3,0, "캐릭터 변생");

		
	}


	if (gProtect.m_MainInfo.EnableOptionButton == 1)
	{
	
	BtStart += BtDistance;

	if (IsWorkZone(eMenu_OPT22))
	{
		if (this->Data[eMenu_OPT22].OnClick)
			this->DrawButton(eMenu_OPT22, StartX + 60, BtStart, 0, 58);
		else
			this->DrawButton(eMenu_OPT22, StartX + 60, BtStart, 0, 29);
		// ----
	}
	else
		this->DrawButton(eMenu_OPT22, StartX + 60, BtStart, 0, 0);
		this->DrawFormat(eWhite, (int)StartX + 60, BtStart + 9, 108, 3,0, "레벨보상");
	
   }


	if (gProtect.m_MainInfo.EnableOptionButton == 1)
	{
	
	BtStart += BtDistance;

	if (IsWorkZone(eMenu_OPT21))
	{
		if (this->Data[eMenu_OPT21].OnClick)
			this->DrawButton(eMenu_OPT21, StartX +60, BtStart, 0, 58);
		else
			this->DrawButton(eMenu_OPT21, StartX + 60, BtStart, 0, 29);
		// ----
	}
	else
		this->DrawButton(eMenu_OPT21, StartX + 60, BtStart, 0, 0);
		this->DrawFormat(eWhite, (int)StartX + 60, BtStart + 9, 108, 3,1, "악마의능력");

		
	}

	//룰렛
	if (gProtect.m_MainInfo.EnableOptionButton == 1)
	{
	
	BtStart += BtDistance;

	if (IsWorkZone(eLuckymenu))
	{
		if (this->Data[eLuckymenu].OnClick)
			this->DrawButton(eLuckymenu, StartX +60, BtStart, 0, 58);
		else
			this->DrawButton(eLuckymenu, StartX + 60, BtStart, 0, 29);
		// ----
	}
	else
		this->DrawButton(eLuckymenu, StartX + 60, BtStart, 0, 0);
		this->DrawFormat(eWhite, (int)StartX + 60, BtStart + 9, 108, 3,1, "행운룰렛");

		
	} 

}

bool Interface::EventDrawMenu_Close(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eMenu_CLOSE].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eMenu_CLOSE))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eMenu_CLOSE].OnClick = true;
		return true;
	}
	// ----
	this->Data[eMenu_CLOSE].OnClick = false;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eMenu_CLOSE].EventTick = GetTickCount();
	this->CloseMenuWindow();
	// ----
	return false;
}
// ----------------------------------------------------------------------------------------------


//몬스터업적
/*
void Interface::EventDrawMenu_Op21(DWORD Event)
{

	//if(!gInterface.CheckWindowEx(ObjWindowsEx::exWinMiniMenu))
	//{
	//	return;
	//}

	if(gInterface.ButtonEx(Event, eMenu_OPT21, false))
	{
		g_Achievements.CGWindowOpen();
		//gInterface.CloseWindowEx(exWinMiniMenu);
		this->CloseMenuWindow();
	}

	if(gInterface.ButtonEx(Event, eMenu_OPT22, false))
	{
		//gInterface.CloseWindowEx(exWinMiniMenu);	
		this->CloseMenuWindow();

		if(gInterface.CheckWindowEx(exWinAchievementsPower))
		{
			gInterface.CloseWindowEx(exWinAchievementsPower);
		}
		else
		{
			gInterface.OpenWindowEx(exWinAchievementsPower);
		}
	}

} */

//업적
bool Interface::EventDrawMenu_Op21(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eMenu_OPT21].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eMenu_OPT21))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eMenu_OPT21].OnClick = true;
		return true;
	}
	// ----
	this->Data[eMenu_OPT21].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eMenu_OPT21].EventTick = GetTickCount();

	this->CloseMenuWindow();

	this->Data[OBJECT_ACHIEVEMENTS_PANEL].Open();
	// ----
	return false;
}

bool Interface::EventDrawMenu_Op0(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eSMITHY_MAIN1].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eSMITHY_MAIN1))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eSMITHY_MAIN1].OnClick = true;
		return true;
	}
	// ----
	this->Data[eSMITHY_MAIN1].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eSMITHY_MAIN1].EventTick = GetTickCount();

	this->CloseMenuWindow();

	gSmithy.SwitchSmithyWindowState();
	// ----
	return false;
}

bool Interface::EventDrawMenu_Op1(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eMenu_OPT1].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eMenu_OPT1))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eMenu_OPT1].OnClick = true;
		return true;
	}
	// ----
	this->Data[eMenu_OPT1].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eMenu_OPT1].EventTick = GetTickCount();

	this->CloseMenuWindow();

	gCustomEventTime.OpenWindow();
	// ----
	return false;
}

bool Interface::EventDrawMenu_Op2(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eMenu_OPT2].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eMenu_OPT2))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eMenu_OPT2].OnClick = true;
		return true;
	}
	// ----
	this->Data[eMenu_OPT2].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eMenu_OPT2].EventTick = GetTickCount();

	this->CloseCustomWindow();

	this->OpenVipWindow();
	// ----
	return false;
}

bool Interface::EventDrawMenu_Op3(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eMenu_OPT3].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eMenu_OPT3))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eMenu_OPT3].OnClick = true;
		return true;
	}
	// ----
	this->Data[eMenu_OPT3].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eMenu_OPT3].EventTick = GetTickCount();

	this->CloseMenuWindow();

	gCustomRanking.OpenWindow();
	// ----
	return false;
}

bool Interface::EventDrawMenu_Op4(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eMenu_OPT4].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eMenu_OPT4))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eMenu_OPT4].OnClick = true;
		return true;
	}
	// ----
	this->Data[eMenu_OPT4].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eMenu_OPT4].EventTick = GetTickCount();

	this->CloseMenuWindow();

	gCustomCommandInfo.OpenCommandWindow();
	// ----
	return false;
}

//변생
bool Interface::EventDrawMenu_Op20(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eUSERSPANEL_CHANGINGCLASS].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eUSERSPANEL_CHANGINGCLASS))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eUSERSPANEL_CHANGINGCLASS].OnClick = true;
		return true;
	}
	// ----
	this->Data[eUSERSPANEL_CHANGINGCLASS].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eUSERSPANEL_CHANGINGCLASS].EventTick = GetTickCount();

	this->Data[eMenu_MAIN].Close();

	this->Data[eCHANGINGCLASS_MAIN].Open();
	//변생
	// ----
	return false;
	//return true;
}

/*

bool Interface::EventDrawMenu_Op20(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eMenu_OPT20].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eMenu_OPT20))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eMenu_OPT20].OnClick = true;
		return true;
	}
	// ----
	this->Data[eMenu_OPT20].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eMenu_OPT20].EventTick = GetTickCount();

	this->CloseMenuWindow();

	this->OpenWindow(ObjWindow::Options);
	// ----
	return false;
}*/


//레벨보상
bool Interface::EventDrawMenu_Op22(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eMenu_OPT22].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eMenu_OPT22))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eMenu_OPT22].OnClick = true;
		return true;
	}
	// ----
	this->Data[eMenu_OPT22].OnClick = false;
	// ----
	if (Delay < 3000)
	{
		return false;
	}
	// ----
	this->Data[eMenu_OPT22].EventTick = GetTickCount();

	this->CloseMenuWindow();

	//this->Data[eMenu_MAIN].Close();

	//gInterface.Data[eQuaMocRSMain].Open();

	gInterface.QuaMocRSState();
	// ----
	return false;
} 


//행운룰렛
bool Interface::EventDrawMenu_Op23(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eLuckymenu].EventTick);
	// ----
	if (!this->Data[eMenu_MAIN].OnShow || !IsWorkZone(eLuckymenu))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eLuckymenu].OnClick = true;
		return true;
	}
	// ----
	this->Data[eLuckymenu].OnClick = false;

	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eLuckymenu].EventTick = GetTickCount();

	this->CloseMenuWindow();

	//if (GetForegroundWindow() == pGameWindow)
	//{
		gLuckySpin.SwitchLuckySpinWindowState();
		//gInterface.Data[eLuckySpin].Open();
	//}

	// ----
	return false;
} 


//종료
void Interface::CloseCustomWindow()
{
	this->CloseMenuWindow();
	this->CloseVipWindow();
	this->Data[eRankPANEL_MAIN].OnShow		= false;
	this->Data[eEventTimePANEL_MAIN].OnShow = false;
	this->Data[eCommand_MAIN].OnShow		= false;
	gInterface.Data[eCHANGINGCLASS_MAIN].OnShow = false;
	//gInterface.Data[eACHIEVEMENTS_PANEL].OnShow= false;
	gInterface.Data[OBJECT_ACHIEVEMENTS_PANEL].OnShow = false;
	gInterface.Data[OBJECT_ACHIEVEMENTS_MAIN].OnShow = false;
	gInterface.Data[eQuaMocRSMain].OnShow= false;
	this->Data[eCAMERA].OnShow		= false;
	this->Data[eCAMERA_RESET].OnShow		= false;
	this->Data[eLuckySpin].OnShow		= false;
	//this->Data[eImgID_ACHIEVEMENTS_MAIN].OnShow = false;

	pSetCursorFocus = false;
}

void Interface::DrawConfirmOpen()
{
	//if(!this->CheckWindow(Shop) && this->Data[eCONFIRM_MAIN].OnShow == true)
	//{
	//	this->Data[eCONFIRM_MAIN].OnShow = false;
	//	pSetCursorFocus = false;
	//}

	if ((GetTickCount() - this->Data[eCONFIRM_BTN_OK].EventTick) < 100)
	{
		this->Data[eCONFIRM_MAIN].OnShow = false;
		pSetCursorFocus = false;
	}

	if ((GetTickCount() - this->Data[eCONFIRM_BTN_CANCEL].EventTick) < 100)
	{
		this->Data[eCONFIRM_MAIN].OnShow = false;
		pSetCursorFocus = false;
	}

	if( !this->Data[eCONFIRM_MAIN].OnShow )
	{
		return;
	}

	//this->Data[eCONFIRM_MAIN].EventTick = GetTickCount();

	float MainWidth			= 230.0;
	float MainHeight		= 130.0;
	float StartBody			= 150.0;
	float StartY			= 150.0;
	float StartX			= (MAX_WIN_WIDTH / 2) - (MainWidth / 2);
	float MainCenter		= StartX + (MainWidth / 3);
	float ButtonX			= MainCenter - (float)(29.0 / 2);

	gInterface.DrawGUI(eCONFIRM_MAIN, StartX, StartY + (float)2.0);
	gInterface.DrawGUI(eVip_TITLE, StartX, StartY);
	StartY = gInterface.DrawRepeatGUI(eVip_FRAME, StartX, StartY + (float)5.0, 5);
	gInterface.DrawGUI(eVip_FOOTER, StartX, StartY);

		this->DrawFormat(eGold, (int)StartX + 10, (int)StartBody + 10, 210, 3, 0, gCustomMessage.GetMessage(66));

		this->DrawFormat(eGold, (int)StartX + 10, (int)StartBody + 40, 210, 3, 0, gCustomMessage.GetMessage(67));

		this->DrawButton(eCONFIRM_BTN_OK, (int)StartX+40, (int)StartBody + 70, 0, 0);

		if( this->IsWorkZone(eCONFIRM_BTN_OK) )
		{
			int ScaleY = 30;
			// ----
			if( this->Data[eCONFIRM_BTN_OK].OnClick )
			{
				ScaleY = 60;
			}
			// ----
			this->DrawButton(eCONFIRM_BTN_OK, (int)StartX+40, (int)StartBody + 70, 0, ScaleY);
		}

		this->DrawButton(eCONFIRM_BTN_CANCEL, (int)StartX+140, (int)StartBody + 70, 0, 0);

		if( this->IsWorkZone(eCONFIRM_BTN_CANCEL) )
		{
			int ScaleY = 30;
			// ----
			if( this->Data[eCONFIRM_BTN_CANCEL].OnClick )
			{
				ScaleY = 60;
			}
			// ----
			this->DrawButton(eCONFIRM_BTN_CANCEL, (int)StartX+140, (int)StartBody + 70, 0, ScaleY);
		}

}

bool Interface::EventConfirm_OK(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eCONFIRM_BTN_OK].EventTick);
	// ----
	if (!this->Data[eCONFIRM_MAIN].OnShow || !IsWorkZone(eCONFIRM_BTN_OK))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eCONFIRM_BTN_OK].OnClick = true;
		return true;
	}
	// ----
	this->Data[eCONFIRM_BTN_OK].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eCONFIRM_BTN_OK].EventTick = GetTickCount();

	PMSG_ITEM_BUY_RECV pMsg;

	pMsg.header.set(0xF3, 0xED,sizeof(pMsg));

	pMsg.slot = this->ConfirmSlot;

	DataSend((BYTE*)&pMsg,pMsg.header.size);

	this->Data[eCONFIRM_MAIN].OnShow = false;
	pSetCursorFocus = false;
	// ----
	return false;
}

bool Interface::EventConfirm_CANCEL(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eCONFIRM_BTN_CANCEL].EventTick);
	// ----
	if (!this->Data[eCONFIRM_MAIN].OnShow || !IsWorkZone(eCONFIRM_BTN_CANCEL))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		this->Data[eCONFIRM_BTN_CANCEL].OnClick = true;
		return true;
	}
	// ----
	this->Data[eCONFIRM_BTN_CANCEL].OnClick = false;;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	this->Data[eCONFIRM_BTN_CANCEL].EventTick = GetTickCount();

	this->Data[eCONFIRM_MAIN].OnShow = false;
	pSetCursorFocus = false;
	// ----
	return false;
}



//변생

void Interface::DrawChangingClassWindow()
{
	if( !this->Data[eCHANGINGCLASS_MAIN].OnShow )
	{
		return;
	}


	//DWORD ItemNameColor		= eWhite;
	float MainWidth			= 230.0;
	float MainHeight		= 180.0;
	float StartBody			= 80.0;
	float StartY			= 80.0;
	float StartX			= (MAX_WIN_WIDTH / 2) - (MainWidth / 2) + 200;
	float MainCenter		= StartX + (MainWidth / 3);
	float ButtonX			= MainCenter - (34.0 / 2);
	// ----
	this->DrawGUI(eCHANGINGCLASS_MAIN, StartX, StartY + (float)2.0);
	this->DrawGUI(eCHANGINGCLASS_TITLE, StartX, StartY);
	StartY = this->DrawRepeatGUI(eCHANGINGCLASS_FRAME, StartX, StartY + (float)15.0, 16);
	this->DrawGUI(eCHANGINGCLASS_FOOTER, StartX, StartY);
	this->DrawGUI(eCHANGINGCLASS_CLOSE, StartX + MainWidth - this->Data[eCHANGINGCLASS_CLOSE].Width, StartBody);
	// ----

	if( this->IsWorkZone(eCHANGINGCLASS_CLOSE) )
	{
		DWORD Color = eGray100;
		// ----
		if( this->Data[eCHANGINGCLASS_CLOSE].OnClick )
		{
			Color = eGray150;
		}
		// ----
		this->DrawColoredGUI(eCHANGINGCLASS_CLOSE, this->Data[eCHANGINGCLASS_CLOSE].X, StartBody, Color);
		this->DrawToolTip(this->Data[eCHANGINGCLASS_CLOSE].X + 5, StartBody + 25, "닫기");
	}
	// ----

	this->DrawFormat(eGold, StartX + 10, (int)StartBody + 20, 210, 3,0, "캐릭터 변생");

	// ----
	/*if (gChangeClass.m_PriceType == 0)
	{
		this->DrawFormat(eShinyGreen, StartX + 82, 343, 210, 1,0, "변생시 필요 금액: 30만 고포");
	}
	else if (gChangeClass.m_PriceType == 1)
	{
		this->DrawFormat(eShinyGreen, StartX + 82, 343, 210, 1,0, "변생시 필요 금액: 30만 캐시");
	}
	else if (gChangeClass.m_PriceType == 2)
	{
		this->DrawFormat(eShinyGreen, StartX + 82, 343, 210, 1,0, "변생시 필요 금액: 30만 루드");
	}
	else if (gChangeClass.m_PriceType == 3)
	{
		this->DrawFormat(eShinyGreen, StartX + 82, 343, 210, 1,0, "변생시 필요 금액: 30만 고포");
	}
	else if (gChangeClass.m_PriceType == 4)
	{
		this->DrawFormat(eShinyGreen, StartX + 82, 343, 210, 1,0, "변생시 필요 금액: 30만 크레딧");
	} */

	//this->DrawFormat(eGold, StartX + 70, 355, 210, 1,1, "%d",Coin1);

	/*this->DrawFormat(eRed, StartX + 10, 330, 210, 3, "Warning!", MoneyBuff, MoneyBuff2);
	this->DrawFormat(eBlue, StartX + 10, 338, 210, 3, "Before make changing class need remove all items from inventory", MoneyBuff, MoneyBuff2);*/
	// ----
	//this->DrawGUI(eCHANGINGCLASS_DW, ButtonX - 57, this->Data[eCHANGINGCLASS_MAIN].Y + 30);
	//this->DrawFormat(eWhite, StartX - 45, this->Data[eCHANGINGCLASS_MAIN].Y + 40, 210, 3, "%s class",pGetTextLine(pTextLineThis,20));
	this->DrawGUI(eCHANGINGCLASS_DW, ButtonX, this->Data[eCHANGINGCLASS_MAIN].Y + 45);
	this->DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 55, 210, 3,0, "%s",pGetTextLine(pTextLineThis,20));
	//pGetTextLine
	// ----
//	this->DrawGUI(eCHANGINGCLASS_DK, ButtonX + 52, this->Data[eCHANGINGCLASS_MAIN].Y + 30);
//	this->DrawFormat(eWhite, StartX + 62, this->Data[eCHANGINGCLASS_MAIN].Y + 40, 210, 3, "%s class",pGetTextLine(pTextLineThis,21));

	this->DrawGUI(eCHANGINGCLASS_DK, ButtonX, this->Data[eCHANGINGCLASS_MAIN].Y + 75);
	this->DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 85, 210, 3,0, "%s",pGetTextLine(pTextLineThis,21));
	// ----
//	this->DrawGUI(eCHANGINGCLASS_ELF, ButtonX - 57, this->Data[eCHANGINGCLASS_MAIN].Y + 60);
//	this->DrawFormat(eWhite, StartX - 45, this->Data[eCHANGINGCLASS_MAIN].Y + 70, 210, 3, "%s class",pGetTextLine(pTextLineThis,22));

	this->DrawGUI(eCHANGINGCLASS_ELF, ButtonX, this->Data[eCHANGINGCLASS_MAIN].Y + 105);
	this->DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 115, 210, 3,0, "%s",pGetTextLine(pTextLineThis,22));
	// ----
	//this->DrawGUI(eCHANGINGCLASS_MG, ButtonX + 52, this->Data[eCHANGINGCLASS_MAIN].Y + 60);
	//this->DrawFormat(eWhite, StartX + 62, this->Data[eCHANGINGCLASS_MAIN].Y + 70, 210, 3, "%s class",pGetTextLine(pTextLineThis,23));
	this->DrawGUI(eCHANGINGCLASS_MG, ButtonX, this->Data[eCHANGINGCLASS_MAIN].Y + 135);
	this->DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 145, 210, 3,0, "%s",pGetTextLine(pTextLineThis,23));

	// ----

	//this->DrawGUI(eCHANGINGCLASS_DL, ButtonX - 57, this->Data[eCHANGINGCLASS_MAIN].Y + 90);
	//this->DrawFormat(eWhite, StartX - 45, this->Data[eCHANGINGCLASS_MAIN].Y + 100, 210, 3, "%s class",pGetTextLine(pTextLineThis,24));

	this->DrawGUI(eCHANGINGCLASS_DL, ButtonX, this->Data[eCHANGINGCLASS_MAIN].Y + 165);
	this->DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 175, 210, 3,0, "%s",pGetTextLine(pTextLineThis,24));
	// ----
	if (7>=6)
	{
		//this->DrawGUI(eCHANGINGCLASS_SUM, ButtonX + 52, this->Data[eCHANGINGCLASS_MAIN].Y + 90);
		//this->DrawFormat(eWhite, StartX + 62, this->Data[eCHANGINGCLASS_MAIN].Y + 100, 210, 3, "%s class",pGetTextLine(pTextLineThis,1687));

		this->DrawGUI(eCHANGINGCLASS_SUM, ButtonX, this->Data[eCHANGINGCLASS_MAIN].Y + 195);
		this->DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 205, 210, 3,0, "%s",pGetTextLine(pTextLineThis,1687));
	}
	// ----
	if (7>=7)
	{
		this->DrawGUI(eCHANGINGCLASS_RF, ButtonX, this->Data[eCHANGINGCLASS_MAIN].Y + 225);
		this->DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 235, 210, 3,0, "%s",pGetTextLine(pTextLineThis,3150));
	}
	// ----
	//this->DrawGUI(eCHANGINGCLASS_DIV, StartX, this->Data[eCHANGINGCLASS_MAIN].Y + 212);
	// ----
	this->Data[eCHANGINGCLASS_DW].Attribute = true;
	this->Data[eCHANGINGCLASS_DK].Attribute = true;
	this->Data[eCHANGINGCLASS_ELF].Attribute = true;
	this->Data[eCHANGINGCLASS_MG].Attribute = true;
	this->Data[eCHANGINGCLASS_DL].Attribute = true;
	this->Data[eCHANGINGCLASS_SUM].Attribute = true;
	this->Data[eCHANGINGCLASS_RF].Attribute = true;
	// ----
	if( IsWorkZone(eCHANGINGCLASS_DW) )
	{

		if (this->Data[eCHANGINGCLASS_DW].OnClick)
			this->DrawButton(eCHANGINGCLASS_DW, this->Data[eCHANGINGCLASS_DW].X, this->Data[eCHANGINGCLASS_DW].Y, 0, 58);
		else
			this->DrawButton(eCHANGINGCLASS_DW,this->Data[eCHANGINGCLASS_DW].X, this->Data[eCHANGINGCLASS_DW].Y, 0, 29);

		gInterface.DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 55, 210, 3,0, "흑마법사");

	}
	if( IsWorkZone(eCHANGINGCLASS_DK) )
	{
		if (this->Data[eCHANGINGCLASS_DK].OnClick)
			this->DrawButton(eCHANGINGCLASS_DK, this->Data[eCHANGINGCLASS_DK].X, this->Data[eCHANGINGCLASS_DK].Y, 0, 58);
		else
			this->DrawButton(eCHANGINGCLASS_DK,this->Data[eCHANGINGCLASS_DK].X, this->Data[eCHANGINGCLASS_DK].Y, 0, 29);

		gInterface.DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 85, 210, 3,0, "흑기사");
	}
	if( IsWorkZone(eCHANGINGCLASS_ELF) )
	{
		if (this->Data[eCHANGINGCLASS_ELF].OnClick)
			this->DrawButton(eCHANGINGCLASS_ELF, this->Data[eCHANGINGCLASS_ELF].X, this->Data[eCHANGINGCLASS_ELF].Y, 0, 58);
		else
			this->DrawButton(eCHANGINGCLASS_ELF,this->Data[eCHANGINGCLASS_ELF].X, this->Data[eCHANGINGCLASS_ELF].Y, 0, 29);

		gInterface.DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 115, 210, 3,0, "요정");
	}
	if( IsWorkZone(eCHANGINGCLASS_MG) )
	{
		if (this->Data[eCHANGINGCLASS_MG].OnClick)
			this->DrawButton(eCHANGINGCLASS_MG, this->Data[eCHANGINGCLASS_MG].X, this->Data[eCHANGINGCLASS_MG].Y, 0, 58);
		else
			this->DrawButton(eCHANGINGCLASS_MG,this->Data[eCHANGINGCLASS_MG].X, this->Data[eCHANGINGCLASS_MG].Y, 0, 29);

		gInterface.DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 145, 210, 3,0, "마검사");
	}
	if( IsWorkZone(eCHANGINGCLASS_DL) )
	{
		if (this->Data[eCHANGINGCLASS_DL].OnClick)
			this->DrawButton(eCHANGINGCLASS_DL, this->Data[eCHANGINGCLASS_DL].X, this->Data[eCHANGINGCLASS_DL].Y, 0, 58);
		else
			this->DrawButton(eCHANGINGCLASS_DL,this->Data[eCHANGINGCLASS_DL].X, this->Data[eCHANGINGCLASS_DL].Y, 0, 29);

		gInterface.DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 175, 210, 3,0, "다크로드");
	}
	if( IsWorkZone(eCHANGINGCLASS_SUM) )
	{

		if (this->Data[eCHANGINGCLASS_SUM].OnClick)
			this->DrawButton(eCHANGINGCLASS_SUM, this->Data[eCHANGINGCLASS_SUM].X, this->Data[eCHANGINGCLASS_SUM].Y, 0, 58);
		else
			this->DrawButton(eCHANGINGCLASS_SUM,this->Data[eCHANGINGCLASS_SUM].X, this->Data[eCHANGINGCLASS_SUM].Y, 0, 29);

		gInterface.DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 205, 210, 3,0, "소환술사");
	}
	if( IsWorkZone(eCHANGINGCLASS_RF) )
	{
		if (this->Data[eCHANGINGCLASS_RF].OnClick)
			this->DrawButton(eCHANGINGCLASS_RF, this->Data[eCHANGINGCLASS_RF].X, this->Data[eCHANGINGCLASS_RF].Y, 0, 58);
		else
			this->DrawButton(eCHANGINGCLASS_RF,this->Data[eCHANGINGCLASS_RF].X, this->Data[eCHANGINGCLASS_RF].Y, 0, 29);

		gInterface.DrawFormat(eWhite, StartX + 8, this->Data[eCHANGINGCLASS_MAIN].Y + 235, 210, 3,0, "레이지파이터");
	}

}
// ----------------------------------------------------------------------------------------------

bool Interface::EventChangingClassWindow_Main(DWORD Event)
{
	this->EventChangingClassWindow_Close(Event);
	this->EventChangingClassWindow_DW(Event);
	this->EventChangingClassWindow_DK(Event);
	this->EventChangingClassWindow_ELF(Event);
	this->EventChangingClassWindow_MG(Event);
	this->EventChangingClassWindow_DL(Event);
	this->EventChangingClassWindow_SUM(Event);
	this->EventChangingClassWindow_RF(Event);
	return true;
	//return false;
}
// ----------------------------------------------------------------------------------------------

bool Interface::EventChangingClassWindow_Close(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eCHANGINGCLASS_CLOSE].EventTick);
	// ----
	if( !this->Data[eCHANGINGCLASS_MAIN].OnShow || !IsWorkZone(eCHANGINGCLASS_CLOSE) )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eCHANGINGCLASS_CLOSE].OnClick = true;
		return true;
	}
	// ----
	this->Data[eCHANGINGCLASS_CLOSE].OnClick = false;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eCHANGINGCLASS_CLOSE].EventTick = GetTickCount();
	this->Data[eCHANGINGCLASS_MAIN].Close();
	//pSetCursorFocus = false;
	//this->CloseChangingClassWindow();
	// ----
	return false;
}
// ----------------------------------------------------------------------------------------------

bool Interface::EventChangingClassWindow_DW(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eCHANGINGCLASS_DW].EventTick);

	DWORD DelayUserPanel = (GetTickCount() - this->Data[eUSERSPANEL_CHANGINGCLASS].EventTick);
	if (DelayUserPanel < 500)
	{
		/////console.Log("", "return");
		return false;
	}
	// ----
	if( !this->Data[eCHANGINGCLASS_MAIN].OnShow || !IsWorkZone(eCHANGINGCLASS_DW) 
		|| !this->Data[eCHANGINGCLASS_DW].Attribute )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eCHANGINGCLASS_DW].OnClick = true;
		return true;
	}
	// ----
	this->Data[eCHANGINGCLASS_DW].OnClick = false;;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eCHANGINGCLASS_DW].EventTick = GetTickCount();
	//gChangingClassSystem.ReqResetFinishDW();
	gChangeClass.SendChangeClass(0);
	// ----
	return false;
}
bool Interface::EventChangingClassWindow_DK(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eCHANGINGCLASS_DK].EventTick);

	DWORD DelayUserPanel = (GetTickCount() - this->Data[eUSERSPANEL_CHANGINGCLASS].EventTick);
	if (DelayUserPanel < 500)
	{
		////console.Log("", "return");
		return false;
	}
	// ----
	if( !this->Data[eCHANGINGCLASS_MAIN].OnShow || !IsWorkZone(eCHANGINGCLASS_DK) 
		|| !this->Data[eCHANGINGCLASS_DK].Attribute )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eCHANGINGCLASS_DK].OnClick = true;
		return true;
	}
	// ----
	this->Data[eCHANGINGCLASS_DK].OnClick = false;;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eCHANGINGCLASS_DK].EventTick = GetTickCount();
	//gChangingClassSystem.ReqResetFinishDK();
	gChangeClass.SendChangeClass(16);
	this->CloseChangingClassWindow();
	// ----
	return false;
}
bool Interface::EventChangingClassWindow_ELF(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eCHANGINGCLASS_ELF].EventTick);

	DWORD DelayUserPanel = (GetTickCount() - this->Data[eUSERSPANEL_CHANGINGCLASS].EventTick);
	if (DelayUserPanel < 500)
	{
		////console.Log("", "return");
		return false;
	}
	// ----
	if( !this->Data[eCHANGINGCLASS_MAIN].OnShow || !IsWorkZone(eCHANGINGCLASS_ELF) 
		|| !this->Data[eCHANGINGCLASS_ELF].Attribute )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eCHANGINGCLASS_ELF].OnClick = true;
		return true;
	}
	// ----
	this->Data[eCHANGINGCLASS_ELF].OnClick = false;;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eCHANGINGCLASS_ELF].EventTick = GetTickCount();
	//gChangingClassSystem.ReqResetFinishELF();
	gChangeClass.SendChangeClass(32);
	// ----
	return false;
}
bool Interface::EventChangingClassWindow_MG(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eCHANGINGCLASS_MG].EventTick);


	DWORD DelayUserPanel = (GetTickCount() - this->Data[eUSERSPANEL_CHANGINGCLASS].EventTick);
	if (DelayUserPanel < 500)
	{
		////console.Log("", "return");
		return false;
	}

	// ----
	if( !this->Data[eCHANGINGCLASS_MAIN].OnShow || !IsWorkZone(eCHANGINGCLASS_MG) 
		|| !this->Data[eCHANGINGCLASS_MG].Attribute )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eCHANGINGCLASS_MG].OnClick = true;
		return true;
	}
	// ----
	this->Data[eCHANGINGCLASS_MG].OnClick = false;;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eCHANGINGCLASS_MG].EventTick = GetTickCount();
	//gChangingClassSystem.ReqResetFinishMG();
	gChangeClass.SendChangeClass(48);
	// ----
	return false;
}
bool Interface::EventChangingClassWindow_DL(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eCHANGINGCLASS_DL].EventTick);
	// ----

	DWORD DelayUserPanel = (GetTickCount() - this->Data[eUSERSPANEL_CHANGINGCLASS].EventTick);
	if (DelayUserPanel < 500)
	{
		////console.Log("", "return");
		return false;
	}

	if( !this->Data[eCHANGINGCLASS_MAIN].OnShow || !IsWorkZone(eCHANGINGCLASS_DL) 
		|| !this->Data[eCHANGINGCLASS_DL].Attribute )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eCHANGINGCLASS_DL].OnClick = true;
		return true;
	}
	// ----
	this->Data[eCHANGINGCLASS_DL].OnClick = false;;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eCHANGINGCLASS_DL].EventTick = GetTickCount();
	//gChangingClassSystem.ReqResetFinishDL();
	gChangeClass.SendChangeClass(64);
	this->CloseChangingClassWindow();
	// ----
	return false;
}
bool Interface::EventChangingClassWindow_SUM(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eCHANGINGCLASS_SUM].EventTick);


	// ----
	if (7<6)
	{
		return false;
	}
	// ----
	DWORD DelayUserPanel = (GetTickCount() - this->Data[eUSERSPANEL_CHANGINGCLASS].EventTick);
	if (DelayUserPanel < 500)
	{
		////console.Log("", "return");
		return false;
	}

	if( !this->Data[eCHANGINGCLASS_MAIN].OnShow || !IsWorkZone(eCHANGINGCLASS_SUM) 
		|| !this->Data[eCHANGINGCLASS_SUM].Attribute )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eCHANGINGCLASS_SUM].OnClick = true;
		return true;
	}
	// ----
	this->Data[eCHANGINGCLASS_SUM].OnClick = false;;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eCHANGINGCLASS_SUM].EventTick = GetTickCount();
	//gChangingClassSystem.ReqResetFinishSUM();
	gChangeClass.SendChangeClass(80);
	// ----
	return false;
}
bool Interface::EventChangingClassWindow_RF(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eCHANGINGCLASS_RF].EventTick);
	// ----
	if (7<7)
	{
		return false;
	}
	// ----

	DWORD DelayUserPanel = (GetTickCount() - this->Data[eUSERSPANEL_CHANGINGCLASS].EventTick);
	if (DelayUserPanel < 500)
	{
		////console.Log("", "return");
		return false;
	}

	if( !this->Data[eCHANGINGCLASS_MAIN].OnShow || !IsWorkZone(eCHANGINGCLASS_RF) 
		|| !this->Data[eCHANGINGCLASS_RF].Attribute )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eCHANGINGCLASS_RF].OnClick = true;
		return true;
	}
	// ----
	this->Data[eCHANGINGCLASS_RF].OnClick = false;;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eCHANGINGCLASS_RF].EventTick = GetTickCount();
	//gChangingClassSystem.ReqResetFinishRF();
	gChangeClass.SendChangeClass(96);
	// ----
	return false;
}
// ---------------------------------------------------------------------------------------------

void Interface::CloseAllCustomWindow()
{
	//this->Data[eWAREHOUSE_MAIN].Close();
	//this->Data[eUSERSPANEL_MAIN].Close();
	this->Data[eCHANGINGCLASS_MAIN].Close();
	//this->Data[eRESET_MAIN].Close();
	//this->Data[eGRESET_MAIN].Close();
	//this->Data[eNEWS_MAIN].Close();
	//this->Data[eVIP_MAIN].Close();
	//this->Data[eOFFTRADE_MAIN].Close();
	//this->Data[eSETTINGS_MAIN].Close();
	//this->Data[eJEWEL_MAIN].Close();
	//this->Data[eDIABLO_MAIN].Close();
	//this->Data[ePARTYSETTINGS_MAIN].Close();
	//this->Data[ePARTYSEARCH_MAIN].Close();
	//this->Data[eTELEPORTPANEL_MAIN].Close();
	//this->Data[eOFFEXP_MAIN].Close();
}

void Interface::UPDATE_FPS() {
 if (gInterface.ShowInfoUser)
 {
	gInterface.frameCount++;
	if (GetTickCount() - gInterface.lastReport >= 1000)
	{
		gInterface.frameRate = gInterface.frameCount / ((GetTickCount() - gInterface.lastReport) / 1000);
		//sprintf(gInterface.FPS_REAL, "FPS: %d", gInterface.frameRate +40);
		gInterface.lastReport = GetTickCount();
		gInterface.frameCount = 0;
	}

	if ( this->CheckWindow(FullMap) || this->CheckWindow(FriendList) || this->CheckWindow(SkillTree) || this->CheckWindow(CashShop) )
	{
		return;
	}

	this->DrawFormat(eGold, 600, 15, 100, 1, 1, gInterface.FPS_REAL);
	gInterface.ShowInfoUser = true;
 }
 else
 {
	gInterface.ShowInfoUser = false;	
 }
}

/*void Interface::guiMonitore() {
 if (gInterface.ShowInfoUser)
 {
	if (this->CheckWindow(FullMap) || this->CheckWindow(FriendList) || this->CheckWindow(SkillTree) || this->CheckWindow(CashShop))
	{
		return;
	}
	pSetBlend(true);
	glColor4f((GLfloat)0.0, (GLfloat)0.0, (GLfloat)0.0, (float)0.8);
	//pDrawBarForm(460.0, 0.0, 180.0, 20.0, 0.0f, 0);
	//pDrawBarForm(220.0, 0.0, 450.0, 17.0, 0.0f, 0);
	pDrawBarForm(0.0, 0.0, 650.0, 16.0, 0.0f, 0);

	pGLSwitchBlend();
	pGLSwitch();
	glColor3f(1.0, 1.0, 1.0);
	pSetBlend(false);
	gInterface.ShowInfoUser = true;
 }
 else
 {
	gInterface.ShowInfoUser = false;	
 }
}*/

void Interface::DrawPing()
{
 if (gInterface.ShowInfoUser)
 {
	gInterface.msPing = GetTickCount() - gInterface.lastSend;
	gInterface.iniciador = 3;
	gInterface.ShowInfoUser = true;
 }
 else
 {
	gInterface.ShowInfoUser = false;	
 }
}

struct PMSG_PING
{
	PBMSG_HEAD h;
};

void Interface::SendPingRecv()
{
 if (gInterface.ShowInfoUser)
 {
	if(gInterface.iniciador == 1)
	{
		PMSG_PING pMsgPing;
		pMsgPing.h.set(0xFE,sizeof(pMsgPing));
		gInterface.lastSend = GetTickCount();
		DataSend((BYTE*)&pMsgPing,sizeof(pMsgPing));
		gInterface.iniciador=2;
	}
	else if(gInterface.iniciador == 3)
	{
		if (GetTickCount() >= gInterface.lastSend + 1000){
			PMSG_PING pMsgPing;
			pMsgPing.h.set(0xFE,sizeof(pMsgPing));
			gInterface.lastSend = GetTickCount();
			DataSend((BYTE*)&pMsgPing,sizeof(pMsgPing));
			gInterface.iniciador=2;
		}
	}

	if (this->CheckWindow(FullMap) || this->CheckWindow(FriendList) || this->CheckWindow(SkillTree) || this->CheckWindow(CashShop))
	{
		return;
	}
	//sprintf(gInterface.ServerRTT, "RTT: %d ms", gInterface.msPing);
	sprintf(gInterface.ServerPing, "%d ping", (gInterface.msPing/2));
	// ----
	gInterface.validar=0;

	if(gInterface.msPing > 0){
		//----
		//this->DrawFormat(eShinyGreen1, 540, 5, 120, 1, 1, gInterface.ServerRTT);
		this->DrawFormat(eShinyGreen1, 610, 5, 120, 1, 1, gInterface.ServerPing);
		//--
		sprintf(gInterface.ultimoRTT, gInterface.ServerRTT);
		sprintf(gInterface.ultimoPing, gInterface.ServerPing);
		//--
		gInterface.ultimo_RTT = gInterface.msPing;
		gInterface.validar=1;
	}

	if(gInterface.validar==0)
	{
		if(gInterface.ultimo_RTT > 0)
		{
			//this->DrawFormat(eShinyGreen1, 540, 5, 120, 1, 1,gInterface.ultimoRTT);
			this->DrawFormat(eShinyGreen1, 610, 5, 120, 1, 1,gInterface.ultimoPing);
		}
		else
		{
			//this->DrawFormat(eShinyGreen1, 540, 5, 120, 1, 0,gInterface.ServerRTT);
			this->DrawFormat(eShinyGreen1, 610, 5, 120, 1, 0,gInterface.ServerPing);
		}
	}
	
	//this->DrawFormat(eWhite, 140, 5, 300, 1, 0,"【F11】EXP",gServerInfo.Experience,gServerInfo.NextExperience);

	if (gServerInfo.m_AutoExp == false)
	
	{
		this->DrawFormat(eWhite, 260, 5, 120, 1, 0,"【F6】렉");
	}
	else
	{

	this->DrawFormat(eBlue, 260, 5, 120, 1, 0,"【F6】");

	}

	if (gServerInfo.m_AutoGuildAttack == false)
	{
		this->DrawFormat(eWhite, 330, 5, 120, 1, 0,"【F7】길드○");
	}
	else
	{
		this->DrawFormat(eShinyGreen1, 330, 5, 120, 1, 0,"【F7】길드●");
	}

	if (gInterface.varTestCntrl == 0)
	{
		this->DrawFormat(eWhite, 400, 5, 120, 1, 0,"【F8】피케이○");
	}
	else
	{
		this->DrawFormat(eShinyGreen1, 400, 5, 120, 1, 0,"【F8】피케이●");
	}

	if (gServerInfo.m_AutoChange == false)
	{
		this->DrawFormat(eWhite, 470, 5, 120, 1, 0, "【F9】환전○");
	}
	else
	{
		this->DrawFormat(eShinyGreen1, 470, 5, 120, 1, 0, "【F9】환전●");
	}

	if (gServerInfo.m_jbank == false)
	{
		this->DrawFormat(eWhite, 540, 5, 120, 1, 0,"【F10】보석");
	}
	else
	{

	this->DrawFormat(eBlue, 540, 5, 120, 1, 0,"【F10】");

	}


	gInterface.ShowInfoUser = true;
 }
 else
 {
	gInterface.ShowInfoUser = false;	
 }
	
}

//선물
void Interface::DrawQuaMocRS()
{
	if (!this->Data[eQuaMocRSMain].OnShow)
	{
		return;
	}


//	float MainWidth			= 237.0;
//	float MainHeight		= 313.0;
//	float StartY			= 100.0;
//	float StartX			= (MAX_WIN_WIDTH / 2) - (MainWidth / 2);
	//
	//pDrawGUI(0x9328, 165, 55, 312, 292); //1
	//
	//DrawGUI(eQuaMocRSPanel,273,105);

	float MainWidth			= 230.0;
	float MainHeight		= 180.0;
	float StartBody			= 80.0;
	float StartY			= 80.0;
	float StartX			= (MAX_WIN_WIDTH / 2) - (MainWidth / 2) + 200;
	float MainCenter		= StartX + (MainWidth / 3);
	float ButtonX			= MainCenter - (float)(29.0 / 2);
	// ----
	this->DrawGUI(eMenu_MAIN, StartX, StartY + (float)2.0);
	this->DrawGUI(eMenu_TITLE, StartX, StartY);
	StartY = gInterface.DrawRepeatGUI(eCHANGINGCLASS_FRAME, StartX, StartY + (float)15.0, 16);
	this->DrawGUI(eMenu_FOOTER, StartX, StartY);
	gInterface.DrawGUI(eQuaMocRSNhan_CLOSE, StartX + MainWidth - gInterface.Data[eQuaMocRSNhan_CLOSE].Width, StartBody);

	this->DrawFormat(eGold, (int)StartX + 10, (int)StartBody + 20, 210, 3, 0,"레벨 보상");

	//DrawGUI(eICONQUAMOCRS,275,250);

	gInterface.DrawFormat(eWhite, 413, 140, 210, 3,0, "레벨보상은 해당 레벨달성시 받으실수 있습니다");
	gInterface.DrawFormat(eWhite, 413, 155, 210, 3,0, "[1000레벨, 1500레벨, 2000레벨, 2500레벨, 3000레벨] 보상지급");
	gInterface.DrawFormat(eRed, 413, 170, 210, 3,0, "＃각 캐릭터당 1회만 보상 받을수 있습니다＃");
	gInterface.DrawFormat(eBlue250, 413, 185, 210, 3,0, "＃스텟은 캐릭터로 저장 됩니다＃");

	gInterface.DrawFormat(eYellow, 413, 225, 210, 3,0, "1000레벨 보상: 스텟 +1000, 팬더펫 3일");
	gInterface.DrawFormat(eYellow, 413, 240, 210, 3,0, "1500레벨 보상: 스텟 +1000, 팬더변반 3일");
	gInterface.DrawFormat(eYellow, 413, 255, 210, 3,0, "2000레벨 보상: 스텟 +1500, 스켈펫 3일");
	gInterface.DrawFormat(eYellow, 413, 270, 210, 3,0, "2500레벨 보상: 스텟 +2000, 스켈변반 3일");
	gInterface.DrawFormat(eYellow, 413, 285, 210, 3,0, "3000레벨 보상: 스텟 +2500, 핑크팬더변반 3일");

	//this->DrawToolTip(245, 220, "메세지",0);
	//this->DrawToolTip(245, 235, "메세지",0);
	//this->DrawToolTip(245, 250, "메세지",0);
	//this->DrawToolTip(245, 265, "메세지",0);

	// ----
	if( this->IsWorkZone(eQuaMocRSNhan_CLOSE) )
	{
		DWORD Color = eGray100;
		// ----
		if( this->Data[eQuaMocRSNhan_CLOSE].OnClick )
		{
			Color = eGray150;
		}
		// ----
		this->DrawColoredGUI(eQuaMocRSNhan_CLOSE, this->Data[eQuaMocRSNhan_CLOSE].X, this->Data[eQuaMocRSNhan_CLOSE].Y, Color);
		this->DrawToolTip(this->Data[eQuaMocRSNhan_CLOSE].X + 5, this->Data[eQuaMocRSNhan_CLOSE].Y + 25, "닫기");
	}
	// ----

	if (gInterface.IsWorkZone(eQuaMocRSNhan))
	{
		if (gInterface.Data[eQuaMocRSNhan].OnClick)
		{
			gInterface.DrawButton(eQuaMocRSNhan, 464 ,306, 0, 30);
		}
		else
			gInterface.DrawButton(eQuaMocRSNhan, 464 ,306, 0, 90);

	}
	else
		gInterface.DrawButton(eQuaMocRSNhan, 464 ,306, 0, 0);
		gInterface.DrawFormat(eYellow, 466, 318, 108, 3, 0,"▶ 레벨달성 선물 받기 ◀");

}


//가위바위
void Interface::EventQuaMocRS_Main(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();

	if (!this->Data[eQuaMocRSMain].OnShow)
	{
		return;
	}

	if (this->IsWorkZone(eQuaMocRSNhan))
	{
		DWORD Delay = (CurrentTick - this->Data[eQuaMocRSNhan].EventTick);
		// ----
		if (Event == WM_LBUTTONDOWN)
		{
			this->Data[eQuaMocRSNhan].OnClick = true;
			return;
		}
		// ----
		this->Data[eQuaMocRSNhan].OnClick = false;
		this->Data[eQuaMocRSNhan].EventTick = GetTickCount();

		//Func
		UP_TUCHAN_REQ pMsg;
		pMsg.h.set(0xFD, 0x18, sizeof(pMsg));
		DataSend((BYTE*)&pMsg, pMsg.h.size);
	}

	if (this->IsWorkZone(eQuaMocRSNhan_CLOSE))
	{
		DWORD Delay = (CurrentTick - this->Data[eQuaMocRSNhan_CLOSE].EventTick);
		// ----
		if (Event == WM_LBUTTONDOWN)
		{
			this->Data[eQuaMocRSNhan_CLOSE].OnClick = true;
			return;
		}
		// ----
		this->Data[eQuaMocRSNhan_CLOSE].OnClick = false;
		this->Data[eQuaMocRSNhan_CLOSE].EventTick = GetTickCount();
		//Func
		gInterface.QuaMocRSStateclose();
	}
}


//가위바위
void Interface::DrawRPS()
{
 	//if(pCheckWindowNew(WindowID(_WearInventory))) //
	//{
	//	return;
	//}

	float MainWidth = 230.0;
	float MainHeight = 313.0;
	float StartY = 100.0;
	float StartX = (MAX_WIN_WIDTH / 2) - (MainWidth / 2);

	if(pCheckWindowNew(WindowID(_Trade))) //

	{
		//this->DrawGUI(eRock, StartX + 80, StartY + 85);
		//this->DrawGUI(ePaper, StartX + 120, StartY + 85);
		//this->DrawGUI(eScissors, StartX + 160, StartY + 85);

		//this->DrawGUI(eRock, StartX + 23, StartY + 40);
		//this->DrawGUI(ePaper, StartX + 23, StartY + 70);
		//this->DrawGUI(eScissors, StartX + 23, StartY + 100);


		this->DrawGUI(eRock, StartX + 55, StartY + 300);
		this->DrawGUI(ePaper, StartX + 95, StartY + 300);
		this->DrawGUI(eScissors, StartX + 135, StartY + 300);

		//gInterface.Data[eRock].Attribute = 0;
		//gInterface.Data[ePaper].Attribute = 0;
		//gInterface.Data[eScissors].Attribute = 0;

		if (this->IsWorkZone(eRock))
		{
			DWORD Color = eGray100;
			// ----
			if (this->Data[eRock].OnClick)
			{
				Color = eGray150;
			}
			// ----
			this->DrawColoredGUI(eRock, this->Data[eRock].X, this->Data[eRock].Y, Color);
		}
		if (this->IsWorkZone(ePaper))
		{
			DWORD Color = eGray100;
			// ----
			if (this->Data[ePaper].OnClick)
			{
				Color = eGray150;
			}
			// ----
			this->DrawColoredGUI(ePaper, this->Data[ePaper].X, this->Data[ePaper].Y, Color);
		}
		if (this->IsWorkZone(eScissors))
		{
			DWORD Color = eGray100;
			// ----
			if (this->Data[eScissors].OnClick)
			{
				Color = eGray150;
			}
			// ----
			this->DrawColoredGUI(eScissors, this->Data[eScissors].X, this->Data[eScissors].Y, Color);
		}
		if (this->Data[eRock].Attribute == 1)
		{
			DWORD Color = eYellow;
			gInterface.DrawColoredGUI(eRock, gInterface.Data[eRock].X, gInterface.Data[eRock].Y, Color);
		}
		if (this->Data[ePaper].Attribute == 1)
		{
			DWORD Color = eYellow;
			gInterface.DrawColoredGUI(ePaper, gInterface.Data[ePaper].X, gInterface.Data[ePaper].Y, Color);
		}
		if (this->Data[eScissors].Attribute == 1)
		{
			DWORD Color = eYellow;
			gInterface.DrawColoredGUI(eScissors, gInterface.Data[eScissors].X, gInterface.Data[eScissors].Y, Color);
		}
	}
}

void Interface::EventRPS_Main(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();

	if(!pCheckWindowNew(WindowID(_Trade))) //
	{
		return;
	}

	if (this->IsWorkZone(eRock))
	{
		DWORD Delay = (CurrentTick - this->Data[eRock].EventTick);
		// ----
		if (Event == WM_LBUTTONDOWN)
		{
			this->Data[eRock].OnClick = true;
			pSetCursorFocus = true;
			return;
		}
		// ----
		this->Data[eRock].OnClick = false;
		pSetCursorFocus = false;
		// ----
		if (Delay < 500)
		{
			return;
		}
		// ----
		this->Data[eRock].EventTick = GetTickCount();
		//Func
		RPSMode(1);
		//pDrawMessage("Ban chon bua",1);
		this->Data[eRock].Attribute = 1;
		this->Data[ePaper].Attribute = 0;
		this->Data[eScissors].Attribute = 0;
	}
	//
	else if (this->IsWorkZone(ePaper))
	{
		DWORD Delay = (CurrentTick - this->Data[ePaper].EventTick);
		// ----
		if (Event == WM_LBUTTONDOWN)
		{
			this->Data[ePaper].OnClick = true;
			pSetCursorFocus = true;
			return;
		}
		// ----
		this->Data[ePaper].OnClick = false;
		pSetCursorFocus = false;
		// ----
		if (Delay < 500)
		{
			return;
		}
		// ----
		this->Data[ePaper].EventTick = GetTickCount();
		//Func
		RPSMode(2);
		//pDrawMessage("Ban chon bao",1);
		this->Data[eRock].Attribute = 0;
		this->Data[ePaper].Attribute = 1;
		this->Data[eScissors].Attribute = 0;
	}
	//
	else if (this->IsWorkZone(eScissors))
	{
		DWORD Delay = (CurrentTick - this->Data[eScissors].EventTick);
		// ----
		if (Event == WM_LBUTTONDOWN)
		{
			this->Data[eScissors].OnClick = true;
			pSetCursorFocus = true;
			return;
		}
		// ----
		this->Data[eScissors].OnClick = false;
		pSetCursorFocus = false;
		// ----
		if (Delay < 500)
		{
			return;
		}
		// ----
		this->Data[eScissors].EventTick = GetTickCount();
		//Func
		this->Data[eRock].Attribute = 0;
		this->Data[ePaper].Attribute = 0;
		this->Data[eScissors].Attribute = 1;
		RPSMode(3);
		//pDrawMessage("Ban chon keo",1);
	}
}


void Interface::DrawCameraButton()
{

	if(pCheckWindowNew(WindowID(_MoveCommand))) //
	{
		return;
	}

	if (this->Data[eCAMERA].OnShow)
	{
		this->Data[eCAMERA].OnShow = false;
	}


	float StartX = 24;
	float StartY = 455;

	if (IsWorkZone(eCAMERA))
	{
		this->DrawToolTip(StartX+2, StartY-14, "3D카메라 [ON/OFF]");

		if (this->Data[eCAMERA].OnClick)
		{
			this->Data[eCAMERA].OnShow = true;

			return;
		}
		pSetBlend(true);
		this->DrawButtonGUI(eCAMERA, StartX, StartY, 13.0,15.0,1.0, 1.0,1,1,0.0);
		//this->DrawToolTip(StartX+2, 102, "3D카메라 [켜짐]");

	}
	else
	{	
		pSetBlend(true);
		this->DrawButtonGUI(eCAMERA, StartX, StartY, 14.0,16.0,1.0, 1.0,1,1,0.0);
		//this->DrawToolTip(StartX+2, 102, "3D카메라 [꺼짐]");

	}

	this->Data[eCAMERA].OnShow = true;
}



bool Interface::EventDrawCamera(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eCAMERA].EventTick);
	// ----
	if (!this->Data[eCAMERA].OnShow || !IsWorkZone(eCAMERA))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		pSetCursorFocus = true;
		this->Data[eCAMERA].OnClick = true;
		return true;
	}
	// ----
		pSetCursorFocus = false;
	this->Data[eCAMERA].OnClick = false;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	
	// ----
	this->Data[eCAMERA].EventTick = GetTickCount();
	
	gCamera.Toggle();
	// ----
	return false;
}


void Interface::DrawCameraResetButton()
{

	if(pCheckWindowNew(WindowID(_MoveCommand)))
	{
		return;
	}

	if (this->Data[eCAMERA_RESET].OnShow)
	{
		this->Data[eCAMERA_RESET].OnShow = false;
	}


	float StartX = 44;
	float StartY = 455;
	
	if (IsWorkZone(eCAMERA_RESET))
	{
		this->DrawToolTip(StartX+2, StartY-14, "3D카메라 [RESET]");

		if (this->Data[eCAMERA_RESET].OnClick)
		{
			this->Data[eCAMERA_RESET].OnShow = true;
			return;
		}
		pSetBlend(true);
		this->DrawButtonGUI(eCAMERA_RESET, StartX, StartY, 13.0,15.0,1.0, 1.0,1,1,0.0);
	}
	else
	{	
		pSetBlend(true);
		this->DrawButtonGUI(eCAMERA_RESET, StartX, StartY, 14.0,16.0,1.0, 1.0,1,1,0.0);
	}

	this->Data[eCAMERA_RESET].OnShow = true;
}


bool Interface::EventDrawCameraReset(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - this->Data[eCAMERA_RESET].EventTick);
	// ----
	if (!this->Data[eCAMERA_RESET].OnShow || !IsWorkZone(eCAMERA_RESET))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		pSetCursorFocus = true;
		this->Data[eCAMERA_RESET].OnClick = true;
		return true;
	}
	// ----
	pSetCursorFocus = false;
	this->Data[eCAMERA_RESET].OnClick = false;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	
	// ----
	this->Data[eCAMERA_RESET].EventTick = GetTickCount();
	
	gCamera.Restore();

	// ----
	return false;
}

void Interface::SwitchShowInfoUser()
{
	if(gInterface.ShowInfoUser) 
	{
		gInterface.ShowInfoUser = false;
	}
    else
	{
		gInterface.ShowInfoUser = true;
	}
}


bool Interface::Antilagclose(DWORD Event)
{
	DWORD CurrentTick = GetTickCount();
	DWORD Delay = (CurrentTick - gInterface.Data[eJewelBank_CLOSE].EventTick);
	// ----
	if (!gInterface.Data[eOpMenu_MAINKG].OnShow || !gInterface.IsWorkZone(eMenu_CLOSE))
	{
		return false;
	}
	// ----
	if (Event == WM_LBUTTONDOWN)
	{
		gInterface.Data[eMenu_CLOSE].OnClick = true;
		return true;
	}
	// ----
	gInterface.Data[eMenu_CLOSE].OnClick = false;
	// ----
	if (Delay < 500)
	{
		return false;
	}
	// ----
	gInterface.Data[eMenu_CLOSE].EventTick = GetTickCount();
	gInterface.Data[eOpMenu_MAINKG].OnShow = false;
	pSetCursorFocus = false;
	// ----
	return false;
}


void Interface::DrawOpAntiLag()
{
    if (!this->Data[eOpMenu_MAINKG].OnShow)
    {
        return;
    }

    sub_62FBBB_Addr(0, 0, *(GLsizei*)MAIN_RESOLUTION_X + (GLsizei)1000, *(GLsizei*)MAIN_RESOLUTION_Y + (GLsizei)1000);
    sub_630E06_Addr();

    float MainWidth = 230.0;
    float MainHeight = 180.0;
    float StartBody = 80.0;
    float StartY = 80.0;
    float StartX = (MAX_WIN_WIDTH / 2) - (MainWidth / 2) + 200;
    float MainCenter = StartX + (MainWidth / 3);
    float ButtonX = MainCenter - (float)(29.0 / 2);

    this->DrawGUI(eOpMenu_MAINKG, StartX, StartY + (float)2.0);
    this->DrawGUI(eOpMenu_TITLEKG, StartX, StartY);
    StartY = this->DrawRepeatGUI(eCHANGINGCLASS_FRAME, StartX, StartY + (float)15.0, 18);

    this->DrawGUI(eMenu_FOOTER, StartX, StartY);
    this->DrawGUI(eMenu_CLOSE, StartX + MainWidth - this->Data[eVip_CLOSE].Width, StartBody);

    if (this->IsWorkZone(eMenu_CLOSE))
    {
        DWORD Color = eGray100;
        if (this->Data[eMenu_CLOSE].OnClick)
        {
            Color = eGray150;
        }
        this->DrawColoredGUI(eVip_CLOSE, this->Data[eMenu_CLOSE].X, StartBody, Color);
        this->DrawToolTip((int)this->Data[eMenu_CLOSE].X + 5, StartBody + 25, "창닫기 [F6]");
    }

    this->DrawFormat(eGold, (int)StartX + 10, (int)StartBody + 20, 210, 3, 1, "렉감소 시스템");

    float opLine, opStart, opSO, opTxt;
    opSO = ButtonX + 110;  // 체크박스 위치
    opStart = StartX + 35; // 옵션 시작점
    opLine = StartX + 35;  // 구분선 위치
    opTxt = StartX + 50;   // 텍스트 위치

    // ---- 이펙트 (EffectStatic)
    this->DrawGUI(eUSERSPANEL_STATICEFFECT, opSO, this->Data[eOpMenu_MAINKG].Y + 62);
    this->DrawGUI(eUSERSPANEL_OPTION, opStart, this->Data[eOpMenu_MAINKG].Y + 63);
    this->DrawFormat(eGold, opTxt, this->Data[eOpMenu_MAINKG].Y + 65, 125, 1, 0, "이펙트");
    if (DisableEffectStatic == 1)
    {
        this->DrawGUI(eCheck, opSO, this->Data[eOpMenu_MAINKG].Y + 62); // 체크된 상태
    }
    else
    {
        this->DrawGUI(eUnCheck, opSO, this->Data[eOpMenu_MAINKG].Y + 62); // 체크 안 된 상태
    }

    // ---- 맵 객체 (DisableObject)
    this->DrawGUI(eUSERSPANEL_DISABLEOBJECT, opSO, this->Data[eOpMenu_MAINKG].Y + 82);
    this->DrawGUI(eUSERSPANEL_OPTION, opStart, this->Data[eOpMenu_MAINKG].Y + 83);
    this->DrawFormat(eGold, opTxt, this->Data[eOpMenu_MAINKG].Y + 85, 145, 1, 0, "맵");
    if (DisableObject == 1)
    {
        this->DrawGUI(eCheck, opSO, this->Data[eOpMenu_MAINKG].Y + 82);
    }
    else
    {
        this->DrawGUI(eUnCheck, opSO, this->Data[eOpMenu_MAINKG].Y + 82);
    }

    // ---- 날개 (DisableWings)
    this->DrawGUI(eUSERSPANEL_DISABLEWINGS, opSO, this->Data[eOpMenu_MAINKG].Y + 102);
    this->DrawGUI(eUSERSPANEL_OPTION, opStart, this->Data[eOpMenu_MAINKG].Y + 103);
    this->DrawFormat(eGold, opTxt, this->Data[eOpMenu_MAINKG].Y + 105, 165, 1, 0, "날개");
    if (Disablewings == 1)
    {
        this->DrawGUI(eCheck, opSO, this->Data[eOpMenu_MAINKG].Y + 102);
    }
    else
    {
        this->DrawGUI(eUnCheck, opSO, this->Data[eOpMenu_MAINKG].Y + 102);
    }

    // ---- 스킬 (DisableSkill)
    this->DrawGUI(eUSERSPANEL_DISABLESKILL, opSO, this->Data[eOpMenu_MAINKG].Y + 122);
    this->DrawGUI(eUSERSPANEL_OPTION, opStart, this->Data[eOpMenu_MAINKG].Y + 123);
    this->DrawFormat(eGold, opTxt, this->Data[eOpMenu_MAINKG].Y + 125, 185, 1, 0, "스킬");
    if (Disableskill == 1)
    {
        this->DrawGUI(eCheck, opSO, this->Data[eOpMenu_MAINKG].Y + 122);
    }
    else
    {
        this->DrawGUI(eUnCheck, opSO, this->Data[eOpMenu_MAINKG].Y + 122);
    }
}



bool Interface::EventUsersPanelAntiLag_EFFECTSTATIC(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eUSERSPANEL_STATICEFFECT].EventTick);
	// ----
	if( !this->Data[eOpMenu_MAINKG].OnShow || !IsWorkZone(eUSERSPANEL_STATICEFFECT) )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eUSERSPANEL_STATICEFFECT].OnClick = true;
		pSetCursorFocus = true;
		return true;
	}
	// ----
	this->Data[eUSERSPANEL_STATICEFFECT].OnClick = false;
	pSetCursorFocus = true;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eUSERSPANEL_STATICEFFECT].EventTick = GetTickCount();
	if (DisableEffectStatic!=0)
	{
	    SetByte(0x00786D35,0x55); //Static
        SetByte(0x0075CCB9,0x55); //Dynamic
		DisableEffectStatic = 0;
	}
    else
	{
		SetByte(0x00786D35,0xC3); //Static
        SetByte(0x0075CCB9,0xC3); //Dynamic
	  
		DisableEffectStatic = 1;
	}
	return true;
}

bool Interface::EventUsersPanelAntiLag_OBJECT(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eUSERSPANEL_DISABLEOBJECT].EventTick);
	// ----
	if( !this->Data[eOpMenu_MAINKG].OnShow || !IsWorkZone(eUSERSPANEL_DISABLEOBJECT) )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eUSERSPANEL_DISABLEOBJECT].OnClick = true;
		pSetCursorFocus = true;
		return true;
	}
	// ----
	this->Data[eUSERSPANEL_DISABLEOBJECT].OnClick = false;
	pSetCursorFocus = true;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eUSERSPANEL_DISABLEOBJECT].EventTick = GetTickCount();
	if (DisableObject!=0)
	{
	   SetByte(0x005D2B21+6,0); //Objetos
		DisableObject = 0;
	}
    else
	{
	   SetByte(0x005D2B21+6,1); //Objetos
		DisableObject = 1;
	}
	return true;
}

bool Interface::EventUsersPanelAntiLag_WINGS(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eUSERSPANEL_DISABLEWINGS].EventTick);
	// ----
	if( !this->Data[eOpMenu_MAINKG].OnShow || !IsWorkZone(eUSERSPANEL_DISABLEWINGS) )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eUSERSPANEL_DISABLEWINGS].OnClick = true;
		pSetCursorFocus = true;
		return true;
	}
	// ----
	this->Data[eUSERSPANEL_DISABLEWINGS].OnClick = false;
	pSetCursorFocus = true;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eUSERSPANEL_DISABLEWINGS].EventTick = GetTickCount();
	if (Disablewings!=0)
	{
	    SetOp((LPVOID)0x005927EC,(LPVOID)0x0056B799,ASM::CALL); //Wings and Capes
        SetByte(0x00528D0D,0x55); //Wings and Capes
        SetByte(0x00528E44,0x55); //Wings and Capes
		Disablewings = 0;
	}
    else
	{
	   MemorySet(0x005927EC,0x90,0x5); //Wings and Capes
        SetByte(0x00528D0D,0xC3); //Wings and Capes
        SetByte(0x00528E44,0xC3); //Wings and Capes
		Disablewings = 1;
	}
	return true;
}

bool Interface::EventUsersPanelAntiLag_SKILL(DWORD Event)
{
	DWORD CurrentTick	= GetTickCount();
	DWORD Delay			= (CurrentTick - this->Data[eUSERSPANEL_DISABLESKILL].EventTick);
	// ----
	if( !this->Data[eOpMenu_MAINKG].OnShow || !IsWorkZone(eUSERSPANEL_DISABLESKILL) )
	{
		return false;
	}
	// ----
	if( Event == WM_LBUTTONDOWN )
	{
		this->Data[eUSERSPANEL_DISABLESKILL].OnClick = true;
		pSetCursorFocus = true;
		return true;
	}
	// ----
	this->Data[eUSERSPANEL_DISABLESKILL].OnClick = false;
	pSetCursorFocus = true;
	// ----
	if( Delay < 500 )
	{
		return false;
	}
	// ----
	this->Data[eUSERSPANEL_DISABLESKILL].EventTick = GetTickCount();
	if (Disableskill!=0)
	{
	    SetByte(0x0061DE55,0x55); //Skill
        SetByte(0x0073C1AE,0x55); //Skill
		Disableskill = 0;
	}
    else
	{
		SetByte(0x0061DE55,0xC3); //Skill
        SetByte(0x0073C1AE,0xC3); //Skill
		Disableskill = 1;
	}
	return true;
}






#define sub_6363D0_Addr ((void(__cdecl*)(GLint x, int a2, GLsizei width, GLsizei height)) 0x6363D0) //  62FB2C

#define sub_6358A0_Addr ((int(__cdecl*)(float a1, float a2, float a3, float a4)) 0x6358A0) // 62EF4E

#define sub_635830_Addr ((void(__cdecl*)(LPVOID a1)) 0x635830) // 62EEF1


#define sub_635DE0_Addr ((void(*)()) 0x635DE0) // 635DE0
#define sub_635E40_Addr ((void(*)()) 0x635E40)  // 62F5AF
#define sub_637770_Addr ((void(*)()) 0x637770) // 62F5F3

#define sub_6359B0_Addr ((int(__cdecl*)(int a1, int a2, int a3, char a4)) 0x006359B0)

#define sub_5CA0D0_Addr		((void(__cdecl*)(signed int a1, signed int a2, int a3, int a4, int a5, int a6, char a7)) 0x786D35) // funcion 9
#define sub_636720_Addr ((int(*)())0x636720) // 62FE3A



void Interface::DrawItem(float PosX, float PosY, float Width, float Height, int ItemID, int Level, int Excl, int Anc, bool OnMouse)
{

	/*
	if (this->CheckWindow(ObjWindow::MoveList) || this->CheckWindow(ObjWindow::CashShop) || this->CheckWindow(ObjWindow::SkillTree) || this->CheckWindow(ObjWindow::FullMap)
		|| (this->CheckWindow(Inventory)
			&& this->CheckWindow(ExpandInventory)
			&& this->CheckWindow(Store))
		|| (this->CheckWindow(Inventory)
			&& this->CheckWindow(Warehouse)
			&& this->CheckWindow(ExpandWarehouse)))
	{
		return;
	}

	pSetBlend(true);
	glMatrixMode(0x1701);
	glPushMatrix();
	glLoadIdentity();
	// 
	sub_6363D0_Addr(0, 0, *(GLsizei*)MAIN_RESOLUTION_X, *(GLsizei*)MAIN_RESOLUTION_Y);

	float v2 = *(float*)MAIN_RESOLUTION_X / *(float*)MAIN_RESOLUTION_Y;

	if (ItemID == 406)
	{
		sub_6358A0_Addr(0.4, v2, *(float*)0xE61E38, *(float*)0xE61E3C); //tamanho do bmd
	}
	else if (ItemID == 407)
	{
		sub_6358A0_Addr(0.5, v2, *(float*)0xE61E38, *(float*)0xE61E3C); //tamanho do bmd
	}
	else
	{
		sub_6358A0_Addr(0.7, v2, *(float*)0xE61E38, *(float*)0xE61E3C); //tamanho do bmd
	}

	glMatrixMode(0x1700);
	glPushMatrix();
	glLoadIdentity();

	sub_635830_Addr((LPVOID)0x87933A0);
	sub_635DE0_Addr();
	sub_635E40_Addr();

	//posX 
	//posY
	//Width
	//Height
	//unk
	// 1 - Excellent Effect
	// 1 - Aura +7
	// 1 - original size
	glClear(0x100);

	//pDrawItemModel(PosX, PosY, Width, Height, ItemID, Level, Excl, Anc, OnMouse);

	 // int v31 = pTest((double)PosY);
	  //int v32 = pTest((double)PosX);

	VAngle v45;

	unsigned __int8 v44 = 1; //0 = parado / 1 = girando
	*/
	//sub_6359B0_Addr(PosX, PosY, (int)&v45, 0); //posi豫o do bmd
	/*
	sub_636720_Addr();

	glMatrixMode(0x1700);
	glPopMatrix();
	glMatrixMode(0x1701);
	glPopMatrix();

	sub_637770_Addr();

	glColor3f(1, 1, 1);

	*/
	pSetBlend(false);
}

void Interface::DrawText(DWORD Color, int PosX, int PosY, int Width, int Align, LPCSTR Text, ...) // OK
{
	char Buff[2048];
	const int BuffLen = sizeof(Buff) - 1;
	ZeroMemory(Buff, BuffLen);

	va_list args;
	va_start(args, Text);
	vsprintf_s(Buff, BuffLen, Text, args);
	va_end(args);

	char * Line = strtok(Buff, "\n");

	while (Line != nullptr)
	{
		DrawInterfaceText(Line, PosX, PosY, Width, 0, Color, 0, Align);
		PosY += 10;
		Line = strtok(NULL, "\n");
	}
}

bool Interface::IsWorkZone2(float X, float Y, float MaxX, float MaxY)
{
	if ((gObjUser.m_CursorX < X || gObjUser.m_CursorX > MaxX)
		|| (gObjUser.m_CursorY < Y || gObjUser.m_CursorY > MaxY))
	{
		return false;
	}
	// ----
	return true;
}
