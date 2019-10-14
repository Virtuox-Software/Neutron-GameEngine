#pragma once

/*
#include <sstream>
#include <iostream>
#include <functional>
#include <optional>
#include <vector>
#include <algorithm>

#include <string>
#include <cstring>

#include <stdexcept>
#include <cstdlib>
#include <cstdint>

#include <map>
#include <set>
*/

#include <iostream>
#include <optional>
#include <vector>
#include <algorithm>

#include <stdexcept>

#include <cstring>
#include <cstdlib>
#include <cstdint>

#include <set>

// Define floot(Spoken as 'floet') as float.
typedef float floot;

#pragma region Simple Functionality
	#if true
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