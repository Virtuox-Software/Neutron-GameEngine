#include "pch.h"
#include "Game.h"

Game::Game() { }
Game::~Game() { }

void Game::Awake()
{
	// This block of code gets executed first, It gets called once and before Start.
}

void Game::Start()
{
	// This is the start function, this block of code gets executed once, you can define new variables here.
}

void Game::Update() 
{
	// This is a way to test if the Game function is getting executed in the MainLoop.
	//std::cout << "Execute Game: It worked!" << std::endl;
}

void Game::LateUpdate()
{

}