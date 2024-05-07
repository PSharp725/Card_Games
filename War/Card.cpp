#include "Card.h"
#include <iostream>

Card::Card(Rank rank, Suit suit, std::string face){
	card_Rank = rank;
	card_Suit = suit;
	card_Face = face;
}

Rank Card::getCradRank(){
	return card_Rank;
}

Suit Card::getCardSuit(){
	return card_Suit;
}

std::string Card::getCardFace(){
	return card_Face;
}

std::string Card::buildCardFace(Rank rank, Suit suit){
	std::string card_Face = "assets/images/" 
}
