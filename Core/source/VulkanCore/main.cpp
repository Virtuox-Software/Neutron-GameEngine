#include <pch.h>

/*
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include "Application.h"

int main()
{
	MainApplication application;

	try {
		application.Run();
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
		// Return FAILURE if the program gets an error.
		return EXIT_FAILURE;
	}
	// Return SUCCES if the program can run.
	return EXIT_SUCCESS;
}
*/

// GLFW Window
/*
int main()
{
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

	// Create a window with GLFW.
	GLFWwindow* window = glfwCreateWindow(1280, 720, "VulkanWindow", nullptr, nullptr);

	uint32_t extensionCount = 0;
	vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

	std::cout << extensionCount << " Extensions Supported." << std::endl;

	glm::mat4x4 matrix;
	glm::vec4 vec;
	auto test = matrix * vec;

	// Keep the GLFW Window open as long as it's not being closed by the user.
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	// Destroy the Window created by GLFW.
	glfwDestroyWindow(window);
	glfwTerminate();

	// Return 0 to end the Console app.
	return 0;
}
*/