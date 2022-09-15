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
	std::cout << "Current score: " << score << "\n\n";
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
		std::cout << "\nCorrect!\n";
		return true;
	}
	
	if (guess > target)
	{
		std::cout << "\nYour guess is too high!\n";
		return false;
	}

	if (guess < target)
	{
		std::cout << "\nYour guess is too low!\n";
		return false;
	}
}

bool Game::EndRound()
{
	if (guesses)
	{
		score += guesses;
		std::cout << "You earned " << guesses << " points, your score is now " << score << "\n";
		return false;
	}
	else
	{
		return true;
	}
}

void Game::Introduction()
{
	std::cout << "Hello! A number will be generated between 0 and 100 (including both 0 and 100), try to guess it in 10 guesses.\n\n";
}

bool Game::GoAgain()
{
	char ans;
	std::cout << "\nGame over!\n\nYou got a final score of " << score << ".\nDo you wish to try again? (y/n): ";
	std::cin >> ans;
	
	return (ans == 'y');
}

void Game::Run()
{
	Introduction();
	while (true)
	{
		BeginRound();

		while (guesses > 0)
		{
			GetGuess();

			std::cout << "\x1B[2J\x1B[H";
			std::cout << guess << std::endl;

			if (CheckGuess())
			{
				break;
			}
			else
			{
				guesses--;
			}
		}

		if (EndRound())
		{
			if (!GoAgain())
			{
				break;
			}

			score = 0;
		}
	}
	
}
