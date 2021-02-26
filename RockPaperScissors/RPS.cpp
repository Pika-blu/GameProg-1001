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
	string fileName;
	string prevName;
	ofstream outputFile;
	ifstream inputFile;
	bool gameover = true;
	char yn;
	int choice;
	int cpuChoice;
	int points = 0;
	int cpuPoints = 0;
	int  previousPoints = 0;
	unsigned seed = time(0);
	srand(seed);

	//Greet player and get username
	cout << "Howdy y'all are you ready for an intenses, EXTREME game of Rock Paper Scissors(RPS for short)!\n";
	cout << "Woah slow your horse partner, we cant get started until you insert a username.\n";
	getline(cin, username);
	
	//Check if name exists prior  and if so inform last score
	fileName = username + ".txt";
	inputFile.open(fileName);
	getline(inputFile, prevName);
	cout << prevName << endl;

	cout << "The first player to score 3 points wins.\nAnd remember if you don't know how to play you still have the same odds of winning!\n";
	cout << "Now get ready for a duel\n\n";
	
	while (gameover)
	{
		while (points < 3 && cpuPoints < 3)
		{
			//Display score 
			cout << "\nYour score is :" << points << " and mine is :" << cpuPoints << endl;
			cout << "Remember first to 3 wins!\nLets start the next round!\n\n\n";
			//Generate the Computers choice

			cpuChoice = 1 + rand() % 3;

			//Recieve playes choice
			cout << "Pick '1' for rock, '2' for paper or '3' for scissors\n";
			cin >> choice;
			cout << "Rock.\n.\nPaper.\n.\nScissor.\n.\nShoot!!!\n";

			// If invalid number
			if (choice < 1 || choice > 3)
			{
				cout << "Stop yer horsing around! Thats an invalid input. Try again! \n";
				cout << "Pick '1' for rock, '2' for paper or '3' for scissors\n";
				cin >> choice;
			}

			// Result for draw
			else if (choice == cpuChoice)
			{
				cout << "A wise choice. I also choose " << name[choice] << ". Better luck next time partner.\n";
			}

			//Player wins
			else if ((choice == 1 && cpuChoice == 3) ||  (choice == 3 && cpuChoice == 2) ||  (choice = 2 && cpuChoice == 1))
		    {
			 cout << "OOF!, I choose " << name[cpuChoice] << ", you got me cowboy!\n";
		     points++;
			}
			
			//Player loses
			else if ((choice == 1 && cpuChoice == 2) || (choice == 3 && cpuChoice == 1) || (choice = 2 && cpuChoice == 3))

			{
				cout << "POW!, I choose " << name[cpuChoice] << ", you'll never be the Sherif with shoots like that!!\n";
				cpuPoints++;
		    }
			
		
		}
		
		//Declare a winner
		if (points == 3)
		{
			cout << "You're a winner!\n";
		}
		if (cpuPoints == 3)
		{
			cout << "They say practice makes perfect, but it may be best for you to give up on your dreams of becoming a Sherif.\n ";
		}
		
		//Ask if they want to play again
		cout << "Want to play again? (Y/N)\n";
		cin >> yn;
		yn = toupper(yn);
		if (yn == 'Y')
		{
			if (points == 3)
			{
				cout << "The winner wants more? Bring it on, but I won't go easy on you this time!\n";
			}
			else
			{
				cout << "A rematch eh? Good cause I'm just getting started!\n";
			}
			points = 0;
			cpuPoints = 0;
		}
		else if(yn == 'N')
		{
			cout << "I'll see you around, have a good one!\n";
			gameover = false;
		}
		else
		{
			cout << "I'll take that as a No, have a good one!\n";
			gameover = false;
		}
		
	
	
	}
	//Save game info when they're done
	cout << "Saving data, please do not turn off console\n.\n.\n.\n.\n";
	outputFile.open(fileName);
	outputFile << "Welcome back " << username << ", your previous score is " << "  " <<  points << "  " << cpuPoints;
	outputFile.close();
	cout << "Save successful";
	
	
	return 0;
}