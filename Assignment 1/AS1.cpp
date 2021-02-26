// Rock paper scissor assignment 1
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	//declare variables
	const string name[4] = { " ", "rock", "paper", "scissors" };
	string username;
	string previousUsername;
	ofstream outputFile;
	ifstream inputFile;
	bool gameover = false;
	char yn;
	int choice;
	int cpuChoice;
	int points = 0;
	int cpuPoints = 0;
	int  previousPoints = 0;
	unsigned seed = time(0);
	srand(seed);
	int computerChoice,
		playerChoice,
		computerPoints = 0,   // Point accumulators
		playerPoints = 0;


	//Greet player and get username
	cout << "Howdy y'all are you ready for an intenses, EXTREME game of Rock Paper Scissors(RPS for short)!\n";
	cout << "Woah slow your horse partner, we cant get started until you insert a username.\n";
	getline(cin, username);

	//
	outputFile.open("username.txt"); //create file if it doesnt previously exist
	outputFile.close();


	inputFile.open("username.txt"); //get previous info
	getline(inputFile, previousUsername);
	cout << previousUsername;
	if (previousUsername == username)
	{
		inputFile >> previousPoints;
	}
	inputFile.close();
	

	cout << "Welcome " << username << "\nYour previous record is " << previousPoints << endl;;
	cout << "The first player to score 3 points wins.\nAnd remember if you don't know how to play you still have the same odds of winning!\n";
	cout << "Now get ready for a duel\n\n";

	do
	{	// Generate a random number 1 to 3 to simulate computer choice.
		computerChoice = 1 + rand() % 3;

		// Get player's choice
		cout << "Pick 1 (rock), 2 (paper), or 3 (scissors): ";
		cin >> playerChoice;

		if (computerChoice == playerChoice)                      // Tie
		{
			cout << "I chose " << name[computerChoice]
				<< " too, so we tied.\n\n";
		}
		else if ((playerChoice == 1 && computerChoice == 2) ||   // Computer 
			(playerChoice == 2 && computerChoice == 3) ||   // wins
			(playerChoice == 3 && computerChoice == 1))
		{
			cout << "I chose " << name[computerChoice] << ", so I win! "
				<< name[computerChoice] << " beats "
				<< name[playerChoice] << ".\n\n";
			computerPoints++;
		}                                                        // Player
		else                                                     // wins
		{
			cout << "I chose " << name[computerChoice] << ", so you win! "
				<< name[playerChoice] << " beats "
				<< name[computerChoice] << ".\n\n";
			playerPoints++;
		}
	} while (playerPoints < 5 && computerPoints < 5);
	/*
	cout << "Let's see how you did :\n"
		<< "You won " << playerPoints << " points and I won "
		<< computerPoints << " points.\n";

	if (playerPoints == 5)
		cout << "Congratulations! You're the champ!\n";
	else
		cout << "Hurray for me! I'm the champ!\n";

	//Play the game
	do
	{
		int cpuPoints = 0;
		int  previousPoints = 0;
		
			//Computer makes its choice.
			cpuChoice = 1 + rand() % 3;

			cout << "Pick 1 (rock), 2 (paper), or 3 (scissors): ";
			cin >> choice;
			cout << "3\n 2\n 1\n .\n .\n .\n Shoot!\n";
			if (cpuChoice == choice)
			{
				cout << "I chose " << name[cpuChoice]
					<< " too, so we tied.\n\n";
			}
			else if ((choice == 1 && cpuChoice == 2) || (choice == 2 && cpuChoice == 3) || (choice == 3 && cpuChoice == 1))
			{
				cout << "I chose " << name[cpuChoice] << ", so I win! "
					<< name[cpuChoice] << " beats "
					<< name[choice] << ".\n\n";
				cpuPoints++;
			}
			{
				cout << "I chose " << name[cpuChoice] << ", so you win! "
					<< name[choice] << " beats "
					<< name[cpuChoice] << ".\n\n";
				points++;

			}
	}while (playerPoints < 5 && computerPoints < 5);
	*/	
		cout << "Let's see how you did :\n"
			<< "You won " << points << " points and I won "
			<< cpuPoints << " points.\n";

		if (points == 3)
			cout << "Congratulations! You're the champ!\n";
		else
			cout << "Hurray for me! I'm the champ!\n";
		cout << "Want to play again? Y/N\n";
		cin >> yn;
		yn = toupper(yn);
		if (yn == 'Y')
		{
			if (points > cpuPoints)
			{
				cout << "You win this time partner but I'll next you this time!\n";
			}
			else
			{
				cout << "Looking for a rematch? Lucky I'm feeling generous today!\n";
			}
		}
		else
		{
			cout << "See ya around!\n";
			gameover = true;
		}
	} 
	outputFile.open("username.txt");
	outputFile << username << points << cpuPoints;
	outputFile.close();
	cout << "whats wrong?";
	
	return 0;
}