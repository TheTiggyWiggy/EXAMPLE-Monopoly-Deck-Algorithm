#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

// Simulates randomized card draw
// Deletes "Get out of jail" card and reallocates it to a new container
// Can be implemented into final Monopoly game

void deckSim(vector<string>& myDeck, vector<string>& getOut) // Must pass by reference
{
	srand(time(0));

	for (int i = 0; i < 1; ++i)
	{
		int randCard = rand() % myDeck.size();
		cout << myDeck.at(randCard) << endl;

		if (myDeck.at(randCard) == myDeck.at(1))
		{
			cout << "Hold on to this!" << endl;
			getOut.push_back(myDeck.at(1));
			myDeck.erase(myDeck.begin() + 1);
		}
		else
		{
			break;
		}
	}
}

int main()
{
	vector<string> userDeck = { "Hello", "Get out of jail", "Goodbye" };
	vector<string> userGetOut(0);

	deckSim(userDeck, userGetOut);

	for (int i = 0; i < userGetOut.size(); ++i) // Proves proper data allocation
	{
		cout << userGetOut.at(i) << endl;
	}


	return 0;
}