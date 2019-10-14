#include <pch.h>
#include "Application.h"

int main()
{
	MainApplication app;

	try {
		app.run();
	}
	catch (const std::exception& e) {
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