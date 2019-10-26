#pragma once

// Include Directories and Libraries
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cstdint>
#include <optional>
#include <set>

#include "VulkanCore/CoreLog.h"

#pragma region Simple Functionality
	#if false
	///<summary>Prevent the user from closing the console automaticaly. Press Enter to Exit.</summary>
	#define DontCloseConsole std::cout << "Press Enter to Exit the program!" << std::endl; std::cin.get();
	#else
	///<summary>
	///Prevent the user from closing the console automaticaly. 
	///DontCloseConsole is Disabled, go to pch.h to enable this if you need this functionality.
	///</summary>
	#define DontCloseConsole
	#endif

#pragma endregion