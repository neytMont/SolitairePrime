#include "deck.h"
#include <iostream>
#include <cstdlib>

using namespace std;

string RANK[] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
string SUIT[] = { "H","D","C","S" };

deckOfCards::deckOfCards() {
	deck = new card[CARDS_ON_DECK];

	currCard = 0;
	for (int count = 0; count < CARDS_ON_DECK; count++)
		deck[count] = card(RANK[count % 13], SUIT[count / 13]);
}

void deckOfCards::refreshDeck() {

	deck = new card[CARDS_ON_DECK];

	currCard = 0;
	for (int count = 0; count < CARDS_ON_DECK; count++)
		deck[count] = card(RANK[count % 13], SUIT[count / 13]);
}

card deckOfCards::deal() {
	if (currCard > CARDS_ON_DECK) {
		shuffle();
	}
	else if (currCard < CARDS_ON_DECK) {
		return (deck[currCard++]);
	}
	return (deck[0]);
}

void deckOfCards::shuffle() {
	currCard = 0;
	
	for (int i = 0; i < CARDS_ON_DECK; i++) {
		card temp = deck[i];
		int j = (rand() + time(0)) % CARDS_ON_DECK;
		deck[i] = deck[j];
		deck[j] = temp;
	}
}

void deckOfCards::showDeck() {
	cout << left;
	for (int i = 0; i < CARDS_ON_DECK; i++) {
		cout <<deck[i].showCard();
		if ((i + 1) % 13 == 0) {
			cout << endl;
		}
	}
}