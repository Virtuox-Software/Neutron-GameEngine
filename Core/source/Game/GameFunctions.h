#pragma once
// ADD YOUR SCRIPT HEADER FILES HERE...

#include "Game/Scripts/Game.h"

// IN THE NEXT CODE, ONLY ADD YOUR FUNCTIONS IN THE GAMEFUNCTIONS VOID. (SEE EXAMPLE...).
class GameFunctions
{
private:
	Game game; // Declare the class here and insert in the Update function;
public:
	void Init();
	// Game functions for executing the Game Code.
	void Awake();
	void Start();
	void Update();
	void LateUpdate();
};