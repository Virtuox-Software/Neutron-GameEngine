#pragma once
#include "VulkanCore/Application.h"

using namespace GalaxyCloudEngine;

class Game : public MainApplication
{
public:
	Game();
	~Game();
private:
	void Update();
};