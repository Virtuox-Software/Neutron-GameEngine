#pragma once

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace GalaxyCloudEngine
{
	class Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

///<summary>TRACE for User Application debugging</summary>
#define DEBUG_TRACE(...)::VulkanCore::Log::getClientLogger()->trace(__VA_ARGS__)
///<summary>INFO for User Application debugging</summary>
#define DEBUG_INFO(...)::VulkanCore::Log::getClientLogger()->info(__VA_ARGS__)
///<summary>WARN for User Application debugging</summary>
#define DEBUG_WARN(...)::VulkanCore::Log::getClientLogger()->warn(__VA_ARGS__)
///<summary>ERROR for User Application debugging</summary>
#define DEBUG_ERROR(...)::VulkanCore::Log::getClientLogger()->error(__VA_ARGS__)
