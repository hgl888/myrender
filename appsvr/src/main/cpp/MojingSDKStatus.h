﻿#pragma once
#include "Base/MojingTypes.h"
#include "Base/MojingString.h"

namespace Baofeng
{
	namespace Mojing
	{
		enum INIT_STATUS
		{
			INIT_NO = 0,
			INIT_NOW,
			INIT_DONE
		};
		enum SDK_VERIFY
		{
			VERIFY_OK = 0, 
			VERIFY_INVALID,
			VERIFY_VERSION_LOW	// SDK 版本过低
		};
		enum TRACKER_STATUS
		{
			TRACKER_STOP = 0,
			TRACKER_START,
			TRACKER_STOP_NOW,
			TRACKER_START_NOW
		};

		enum ENGINE_STATUS
		{
			ENGINE_NONE = 0,
			ENGINE_UNITY, 
			ENGINE_UNREAL,
			ENGINE_GEAR
		};

		enum DRAW_STATUS
		{
			DRAW_NO = 0,
			DRAW_NOW,
		};

		class MojingSDKStatus
		{
			void ParseVersion();
		public:
			MojingSDKStatus();
			virtual ~MojingSDKStatus();
			static MojingSDKStatus * GetSDKStatus();
			bool IsMojingSDKEnbaled();
			CLASS_MEMBER_STR(String, m_str, App); 
			CLASS_MEMBER_STR(String, m_str, SDKVersion);
			CLASS_MEMBER_STR(String, m_str, GlassesName);
			CLASS_MEMBER_STR(String, m_str, Engine);

			CLASS_MEMBER(uint64_t, m_ui64, SDKBuildNumber);
			CLASS_MEMBER(INIT_STATUS, m_, InitStatus);
			CLASS_MEMBER(ENGINE_STATUS, m_, EngineStatus);
			CLASS_MEMBER(TRACKER_STATUS, m_, TrackerStatus);
			CLASS_MEMBER(DRAW_STATUS, m_, DrawStatus);
			CLASS_MEMBER(SDK_VERIFY, m_, VerfiyStatus);

			CLASS_MEMBER(bool , m_b , ShowTimeWarpRange);

		};


	}
}