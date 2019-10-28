#pragma once
/* Link / References and Credits to other sources and information.
 * 
 * // TODO: INSERT SOURCE OF INFORMATION!
 */

/*
#include <pch.h>
#include "VulkanCore/Application.h"
#include "Game/GameFunctions.h"

void MainApplication::Game()
{
	std::cout << "The Game function in Game.cpp is empty or doesn't exist in there!" << std::endl;
}
*/

// Hazel way of Multi project code execution 
/*
#ifdef PLATFORM_WINDOWS

extern GalaxyCloudEngine::MainApplication* GalaxyCloudEngine::CreateApplication();

int main()
{
	GalaxyCloudEngine::Log::Init();
	auto app = GalaxyCloudEngine::CreateApplication();
	app->run();
	delete app;

	return 0;
}
*/

/*
#include "Application.h"

class Application : GalaxyCloudEngine::MainApplication
{
private:
	bool OverrideHasRun = false;
public:
	void run()
	{
		GalaxyCloudEngine::MainApplication::run();
	}

	//virtual void GameRun() { }
	virtual void Game() override
	{
		GameRun();
	}
};
*/