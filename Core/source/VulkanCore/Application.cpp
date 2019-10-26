#include <pch.h>
#include "CoreLog.h"
#include "Application.h"

using namespace GalaxyCloudEngine;

int main()
{
	MainApplication EngineApplication;

	try {
		EngineApplication.run();
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
		// Return FAILURE if the program gets an error.

		DontCloseConsole;

		// Close the program when an error occurs
		return EXIT_FAILURE;
	}

	DontCloseConsole;

	// Return SUCCES if the program can run.
	return EXIT_SUCCESS;
}

void MainApplication::Game()
{
	std::cout << "Banaan" << std::endl;
}
