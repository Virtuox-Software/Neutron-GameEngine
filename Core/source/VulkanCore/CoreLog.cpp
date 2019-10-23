#include <pch.h>
#include "CoreLog.h"
#include "spdlog/sinks/stdout_color_sinks.h" 

namespace VulkanCore
{
	std::shared_ptr<spdlog::logger> CoreLog::s_CoreLogger;
	/*
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;
	*/

	void CoreLog::Init()
	{
		spdlog::set_pattern("%^[%T] \n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("ENGINE");
		s_CoreLogger->set_level(spdlog::level::trace);
		/*
		s_ClientLogger = spdlog::stdout_color_mt("APPLICATION");
		s_ClientLogger->set_level(spdlog::level::trace);
		*/
	}
}