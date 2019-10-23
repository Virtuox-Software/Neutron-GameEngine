#include <gpch.h>
#include <Engine.h>

class Game : public VulkanCore::Application
{
	Game() {
		DEBUG_INFO("Game Start");
	}

	~Game() {
		DEBUG_INFO("Game End");
	}
};