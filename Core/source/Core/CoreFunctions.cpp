#include "pch.h"
#include "CoreFunctions.h"

#define STRINGIFY(x) #x

#define GETSTRING(x) STRINGIFY(x)

namespace VirtuoxSoftware
{
	NeutronCore::NeutronCore() { }
	NeutronCore::~NeutronCore() { }

	std::string NeutronCore::GetPath()
	{
		std::string s = GETSTRING(GetProjectPath);
		s.erase(0, 1); // erase the first quote
		s.erase(s.size() - 2); // erase the last quote and the dot
		return s;
	}
}