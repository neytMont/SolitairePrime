#pragma once
#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

using namespace std;

class card {
	
private:
	string RANK;
	string SUIT;

public:
	card();//create a "blank" card
	card(string r, string s); //constructor to create a card
	int getValue(); //return the point value of the card
	string showCard(); //print cards using 2 fields (ex. AS,10D)
};


#endif