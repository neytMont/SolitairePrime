#include "card.h"

card::card() {

}

card::card(string r, string s) {
	RANK = r;
	SUIT = s;
}

int card::getValue() { 
	if (RANK == "A") {
		return 1;
	}
	else if (RANK == "2") {
		return 2;
	}
	else if (RANK == "3") {
		return 3;
	}
	else if (RANK == "4") {
		return 4;
	}
	else if (RANK == "5") {
		return 5;
	}
	else if (RANK == "6") {
		return 6;
	}
	else if (RANK == "7") {
		return 7;
	}
	else if (RANK == "8") {
		return 8;
	}
	else if (RANK == "9") {
		return 9;
	}
	else if (RANK == "10") {
		return 10;
	}
	else if (RANK == "J") {
		return 10;
	}
	else if (RANK == "Q") {
		return 10;
	}
	else if (RANK == "K") {
		return 10;
	}
}

string card::showCard() {
	return (RANK + SUIT + " ");
	
}