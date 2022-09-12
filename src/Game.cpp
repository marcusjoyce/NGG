#include "Game.h"
#include "Includes.h"

Game::Game()
{

}

void Game::BeginRound()
{
	std::srand(time(0));
	target = std::rand() % 101;
	std::cout << "Hello, Guess number!\nCurrent score: " << score << "\n";
}

void Game::Run()
{

}