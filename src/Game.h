#pragma once

class Game {
public:
	Game();

	void Run();

private:
	void BeginRound();
	void GetGuess();
	bool CheckGuess();

	int wins = 0;
	int score = 0;
	int highscore = 0;
	int guess = 0;
	int target = 0;
	int guesses = 10;
};
