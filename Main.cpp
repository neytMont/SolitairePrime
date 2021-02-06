//Nathaniel Monte de Ramos
//CECS 282-07
//Proj 1 - Solitaire Prime
//Sept 18, 2019

#include "deck.h"

using namespace std;
int isPrime(int sum);

int main() {
	cout << "Welcome to Solitaire Prime!" << endl;
	cout << "1) New Deck" << endl;
	cout << "2) Display Deck" << endl;
	cout << "3) Shuffle Deck" << endl;
	cout << "4) Play Solitaire Prime" << endl;
	cout << "5) Exit" << endl;

	deckOfCards deck;
	card currCard;
	int choice;
	while (1) {
		cin >> choice;
		switch (choice) {
		case 1:
			deck.refreshDeck();
			cout << "NEW DECK" << endl;
			break;
		case 2:
			deck.showDeck();
			break;
		case 3:
			deck.shuffle();
			cout << endl << endl;
			deck.showDeck();
			break;
		case 4:{
			cout << "Playing Solitaire Prime!!!" << endl;
			int num_piles = 0;
			int sum = 0;
			int numOfCardsLeft = 52;

			while (numOfCardsLeft > 0){
				currCard = deck.deal();
				numOfCardsLeft--;
				cout << currCard.showCard();
				cout << ", ";

				sum += currCard.getValue();
				if (isPrime(sum)) {
					cout << "Prime: " << sum << endl;
					sum = 0;
					num_piles++;
				}
			}
			if (sum != 0) {
				cout << "YOU LOSE!" << endl;
			}
			else {
				cout << "WINNER!!!! in just " << num_piles << " hands!" << endl;
			}
			break;
		}
		case 5:
			exit(0);
		default:
			cout << " Incorrect Choice\n";
			break;
		}
		
	}
	system("PAUSE");
	return 0;
}

int isPrime(int sum)
{
	if (sum == 1)
		return 0;
	for (int i = 2; i < sum; i++)
	{
		if (sum % i == 0)
			return 0;
	}
}