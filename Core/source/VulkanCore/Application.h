#pragma once

#pragma region Headers and Libraries
// Precompiled header
#include <pch.h>
// Vulkan Header files and Libraries
#include <vulkan/vulkan.h>
// Default Libraries
#include <stdexcept>
#include <cstdlib>

// GLFW Header files and Libraries
#include <GLFW/glfw3.h>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
//GLFW Defines
#define GLFW_INCLUDE_VULKAN
#define GLM_FORCE_RADIANS
#define GLM_FORCE_ZERO_TO_ONE

#pragma endregion

/* Information about the progress I have made
*
*
*/
class MainApplication
{
public:
	void Run() {
		initWindow();
		initVulkan();
		mainLoop();
		cleanUp();
	}

private:
	const int WindowWidth = 1280;
	const int WindowHeight = 720;
	// Instance of GLFW window.
	GLFWwindow* window;
	// Vulkan instance
	VkInstance VulkanInstance;

	// Functions to run a window
	void initWindow() {
		// Initialize GLFW.
		glfwInit();

		// Send information to GLFW with the way we want a window to be created.
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		// Create a window with GLFW.
		window = glfwCreateWindow(WindowWidth, WindowHeight, "VulkanWindow", nullptr, nullptr);
	}
	void initVulkan() {
		createInstance();
	}
	void mainLoop() {
		while (!glfwWindowShouldClose(window)) {
			glfwPollEvents();
		}
	}
	void cleanUp() {
		// Destroy the Window we created
		glfwDestroyWindow(window);
		// Terminate the GLFW instance completely including all memory.
		glfwTerminate();
	}
	// information about the Vulkan Application.
	void createInstance() {
		// App Info
		VkApplicationInfo appinfo = {};
		appinfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
		appinfo.pApplicationName = "Vulkan API Engine";
		appinfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
		appinfo.pEngineName = "Cold Galaxy Engine";
		appinfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
		appinfo.apiVersion = VK_API_VERSION_1_0;
		// Create Info
		VkInstanceCreateInfo createInfo = {};
		createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
		createInfo.pApplicationInfo = &appinfo;

		uint32_t glfwExtensionCount = 0;
		const char** glfwExtensions;

		glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

		createInfo.enabledExtensionCount = glfwExtensionCount;
		createInfo.ppEnabledExtensionNames = glfwExtensions;

		createInfo.enabledLayerCount = 0;

		VkResult result = vkCreateInstance(&createInfo, nullptr, &VulkanInstance);
	}
};