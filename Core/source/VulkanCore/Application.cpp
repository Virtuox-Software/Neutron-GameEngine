#include <pch.h>
#include "Application.h"

int main()
{
	MainApplication application;

	try {
		application.Run();
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
		// Return FAILURE if the program gets an error.
		return EXIT_FAILURE;
	}
	// Return SUCCES if the program can run.
	return EXIT_SUCCESS;
}