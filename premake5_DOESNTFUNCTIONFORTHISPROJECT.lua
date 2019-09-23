workspace "ReGenGameEngine"
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
	IncludeDir["GLFW"] = "ReGenGameEngine/vendor/GLFW/include"
  IncludeDir["Glad"] = "ReGenGameEngine/vendor/Glad/include"
	--IncludeDir["ImGui"] = "ReGenGameEngine/vendor/imgui"
	
	include "ReGenGameEngine/vendor/GLFW"
	include "ReGenGameEngine/vendor/Glad"
	
	project "ReGenGameEngine"
		location "ReGenGameEngine"
		kind "SharedLib"
		language "C++"
		staticruntime "off"
		targetdir ("bin/" .. outputdir .. "/%{prj.name}")
		objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

		pchheader "rgpch.h"
		pchsource "ReGenGameEngine/src/rgpch.cpp"										   

		files
		{
			"%{prj.name}/src/**.h",
			"%{prj.name}/src/**.cpp"
		}
		
		includedirs
		{
			"%{prj.name}/vendor/spdlog/include",
			"%{prj.name}/src",
			"%{IncludeDir.GLFW}", 
			"%{IncludeDir.Glad}",
			--%{IncludeDir.ImGui}--
		}
		
		links
		{
			"GLFW",
			"Glad",
			--"ImGui",
			"opengl32.lib"
		}

		filter "system:windows"
			cppdialect "C++17"
			systemversion "latest"
			
			defines
			{
				"RG_PLATFORM_WINDOWS",
				"RG_BUILD_DLL",
				"GLFW_INCLUDE_NONE"
			}
			
			postbuildcommands
			{
				("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Game")
			}
		
		filter "configurations:Debug"
			defines "RG_DEBUG"
			runtime "Debug"
			symbols "On"
		
		filter "configurations:Release"
			defines "RG_RELEASE"
			runtime "Release"
			optimize "On"
		
		filter "configurations:Dist"
			defines "RG_DIST"
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
		    "%{prj.name}/src/**.h",
		    "%{prj.name}/src/**.cpp"
		}
		
		includedirs
		{
			"ReGenGameEngine/vendor/spdlog/include",
			"ReGenGameEngine/src"
		}
		
		links				
		{
			"ReGenGameEngine"
		}
		
		filter "system:windows"
			cppdialect "C++17"
			systemversion "latest"

			defines
			{
				"RG_PLATFORM_WINDOWS"
			}
			
		filter "configurations:Debug"
			defines "RG_DEBUG"
			runtime "Debug"
			symbols "On"

		filter "configurations:Release"
			defines "RG_RELEASE"
			runtime "Release"
			optimize "On"

		filter "configurations:Dist"
			defines "RG_DIST"
			runtime "Release"
			optimize "On"