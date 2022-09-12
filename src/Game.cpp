#include "Game.h"
#include "Includes.h"

Game::Game()
{

}

void Game::BeginRound()
{
	std::srand(time(0));
	target = std::rand() % 101;
	std::cout << "Hello!\nCurrent score: " << score << "\n";
}

void Game::GetGuess()
{
	std::cout << "Guess a number!\n";
	std::cin >> guess;
}

void Game::Run()
{

}