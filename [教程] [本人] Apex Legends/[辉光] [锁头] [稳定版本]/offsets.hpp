#pragma once
#include <Windows.h>

/*
APEX偏移
*/

namespace apex_offsets
{
	static DWORD64 TimeDateStamp = 0x5faee648;					// 时间戳
	static DWORD64 CheckSum = 0x201a31a;							// 校验和

	static DWORD64 ClientState = 0x127c0e0;							// 客户端状态
	static DWORD64 SignonState = 0x127c178;							// 登陆状态
	static DWORD64 LevelName = 0x127c290;							// 游戏版本

	static DWORD64 ViewRender = 0x4077bd8;						// 渲染视图
	static DWORD64 ViewMatrix = 0x1b3bd0;							// 矩阵视图
	static DWORD64 GlobalVars = 0x127bde0;							// 全局变量

	static DWORD64 LocalPlayer = 0x1c76fb8;							// 本地玩家
	static DWORD64 cl_entitylist = 0x18c7af8;							// 玩家列表

	// 游戏更新了需要修改上面的偏移,下面的很少情况需要改的
	//////////////////////////////////////////////////////////////////////////

	static DWORD64 m_ModelName = 0x0030;							// 模型名称
	static DWORD64 m_fFlags = 0x0098;									// 标识
	static DWORD64 m_vecAbsOrigin = 0x014c;						// abs原点
	static DWORD64 m_iTeamNum = 0x0430;							// 团队标识		97的时候是电脑人
	static DWORD64 m_iName = 0x0569;									// 名称标识		125780153691248的时候是玩家
	static DWORD64 m_vecVelocity = 0x0464;							// 速度
	static DWORD64 m_bConstrainBetweenEndpoints = 0x0f18;//骨骼
	static DWORD64 m_localOrigin = 0x0158;							// 本地原点
	static DWORD64 m_localAngles = 0x0164;							// 本地角度
	static DWORD64 m_vecPunchWeapon_Angle = 0x23c8;		// 后坐力

	static DWORD64 m_vecCamPos = 0x1E6C;							// 摄像机	40 57 48 83 EC 20 F3 0F 10 0A 48 8B F9 0F 2E 89
	static DWORD64 m_vecSwayAngle = 0x24a0 - 0x10;			// 交换角度
	static DWORD64 m_vecViewAngle = 0x24a0;						// 视图角度	m_ammoPoolCapacity - 0x14

	static DWORD64 m_shieldHealth = 0x0170;							// 护盾值
	static DWORD64 m_shieldHealthMax = 0x0174;					// 最大护盾值
	static DWORD64 m_iHealth = 0x0420;									// 血量
	static DWORD64 m_iMaxHealth = 0x0558;							// 最大血量
	static DWORD64 m_lifeState = 0x0778;								// 存活状态
	static DWORD64 m_bleedoutState = 0x2628;						// 流血状态
	static DWORD64 m_bleedoutStartTime = 0x262c;				// 流血时间

	static DWORD64 m_latestPrimaryWeapons = 0x1a0c;			// 当前武器
	static DWORD64 m_weaponNameIndex = 0x17b8;				// 武器名称索引
	static DWORD64 m_weaponClassIndex = 0x1604;				// 武器类别索引
	static DWORD64 m_customScriptInt = 0x1608;					// Item类别索引

	static DWORD64 m_highlightFunctionBits = 0x2A8;				// 辉光
	static DWORD64 m_highlight_t1 = 0x262;							// m_highlightFunctionBits - 0x46;
	static DWORD64 m_highlight_t2 = 0x2c4;							// m_highlightFunctionBits + 0x1C;
	static DWORD64 m_highlight_enable = 0x350;						// m_highlightFunctionBits + 0xA8;
	static DWORD64 m_highlight_wall = 0x360;							// m_highlight_enable + 0x10;
};