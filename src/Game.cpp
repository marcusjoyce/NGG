#include "Game.h"
#include "Includes.h"

Game::Game()
{

}

void Game::BeginRound()
{
	std::srand(time(0));
	target = std::rand() % 101;
	guesses = 10;
	std::cout << "Hello!\nCurrent score: " << score << "\n";
}

void Game::GetGuess()
{
	std::cout << "Guess a number!\n";
	std::cin >> guess;
}

bool Game::CheckGuess()
{
	if (guess == target)
	{
		std::cout << "Correct!\n";
		return true;
	}
	
	if (guess > target)
	{
		std::cout << "Your guess is too high!\n";
		return false;
	}

	if (guess < target)
	{
		std::cout << "Your guess is too low!\n";
		return false;
	}
}

void Game::Run()
{
	while (true)
	{
		BeginRound();

		while (true)
		{
			GetGuess();

			if (CheckGuess())
			{
				break;
			}
			else
			{
				guesses--;
			}
		}
	}
}