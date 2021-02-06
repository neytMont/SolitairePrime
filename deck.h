#pragma once
#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <cstdlib>
#include <ctime>

using namespace std;

const int CARDS_ON_DECK = 52;

class deckOfCards {

private:
	card *deck; // private variable card contains a pointer to the deck
	int currCard; // current card to check the cards in the deck

public:
	deckOfCards();	//constructor wich creates a deck of 52 cards
	void refreshDeck(); // reset the deck so it looks like a new deck
	card deal(); //deal a card from the top of the deck
	void shuffle(); // shuffle cards in the deck
	void showDeck(); // show all the cards in the deck (13 col and 4 row)
};

#endif
