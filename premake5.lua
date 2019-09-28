workspace "VulkanApi"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"													 

	-- Include directories relative to root folder
	IncludeDir = {}
	IncludeDir["GLFW"] = "Core/vendor/GLFW/include"
  IncludeDir["glm"] = "Core/vendor/glm"
	
	include "Core/vendor/GLFW"
	include "Core/vendor/glm"
	
	project "Core"
		location "Core"
		kind "ConsoleApp"
		language "C++"
		staticruntime "off"
		targetdir ("bin/" .. outputdir .. "/%{prj.name}")
		objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

		pchheader "pch.h"
		pchsource "Core/source/pch.cpp"										   

		files
		{
			"%{prj.name}/source/**.h",
			"%{prj.name}/source/**.cpp"
		}
		
		includedirs
		{
			"%{IncludeDir.GLFW}", 
			"%{IncludeDir.glm}",
			"%{prj.name}/source"
		}
		
		links
		{
			"GLFW",
			"glm"
		}

		filter "system:windows"
			cppdialect "C++17"
			systemversion "latest"
			
			defines
			{
				"GLFW_INCLUDE_VULKAN"
			}
			
			--postbuildcommands
			--{
				--("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Game")
			--}
		
		filter "configurations:Debug"
			defines "DEBUG"
			runtime "Debug"
			symbols "On"
		
		filter "configurations:Release"
			defines "RELEASE"
			runtime "Release"
			optimize "On"
		
		filter "configurations:Dist"
			defines "DIST"
			runtime "Release"
			optimize "On"
		
	project "Game"
		location "Game"
		kind "ConsoleApp"
		language "C++"
		staticruntime "off"

		targetdir ("bin/" .. outputdir .. "/%{prj.name}")
		objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

		files
		{
		    "%{prj.name}/source/**.h",
		    "%{prj.name}/source/**.cpp"
		}
		
		includedirs
		{
			"Core/source"
		}
		
		links				
		{
			"Core"
		}
		
		filter "system:windows"
			cppdialect "C++17"
			systemversion "latest"

			defines
			{
				"PLATFORM_WINDOWS"
			}
			
		filter "configurations:Debug"
			defines "DEBUG"
			runtime "Debug"
			symbols "On"

		filter "configurations:Release"
			defines "RELEASE"
			runtime "Release"
			optimize "On"

		filter "configurations:Dist"
			defines "DIST"
			runtime "Release"
			optimize "On"