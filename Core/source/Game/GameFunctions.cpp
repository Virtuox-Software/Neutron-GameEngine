#include "pch.h"
#include "GameFunctions.h"

void GameFunctions::Init()
{
	game = Game();
}

/* 
 * ADD YOUR FUNCTIONS HERE THAT YOU NEED TO BE EXECUTED
 * MAKE SURE THEY ARE IN THE CORRECT ORDER YOU WANT YOUR FUNCTIONS TO RUN AT,
 * IF YOU DO IT IN THE WRONG ORDER YOUR CODE MIGHT BREAK!  
*/
void GameFunctions::Awake()
{
	game.Awake();

	// ADD YOUR OWN AWAKE FUNCTIONS HERE
}

void GameFunctions::Start()
{
	game.Start();

	// ADD YOUR OWN START FUNCTIONS HERE
}

void GameFunctions::Update()
{
	game.Update(); // The Exec Game function as a show case of the way U (The user) needs to call functions for them to work in the Engine.

	// ADD YOUR FUNCTIONS HERE
}

void GameFunctions::LateUpdate()
{
	game.LateUpdate();

	// ADD YOUR OWN LATEUPDATE FUNCTIONS HERE
}