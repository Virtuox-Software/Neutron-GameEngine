#pragma once

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace VulkanCore
{
	class CoreLog
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define CORE_TRACE(...)::VulkanCore::Log::getCoreLogger()->trace(__VA_ARGS__)
#define CORE_INFO(...)::VulkanCore::Log::getCoreLogger()->info(__VA_ARGS__)
#define CORE_WARN(...)::VulkanCore::Log::getCoreLogger()->warn(__VA_ARGS__)
#define CORE_ERROR(...)::VulkanCore::Log::getCoreLogger()->error(__VA_ARGS__)
/*
#define DEBUG_TRACE(...)::VulkanCore::Log::getClientLogger()->trace(__VA_ARGS__)
#define DEBUG_INFO(...)::VulkanCore::Log::getClientLogger()->info(__VA_ARGS__)
#define DEBUG_WARN(...)::VulkanCore::Log::getClientLogger()->warn(__VA_ARGS__)
#define DEBUG_ERROR(...)::VulkanCore::Log::getClientLogger()->error(__VA_ARGS__)
*/