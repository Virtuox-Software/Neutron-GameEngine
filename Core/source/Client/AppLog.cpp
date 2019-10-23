#include <pch.h>
#include "AppLog.h"
#include "spdlog/sinks/stdout_color_sinks.h" 

namespace VulkanCore
{
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] \n: %v%$");
		s_ClientLogger = spdlog::stdout_color_mt("APPLICATION");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}