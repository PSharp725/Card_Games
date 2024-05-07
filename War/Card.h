#fndef CARD_H_
#define CARD_H_

#include <string>

enum Rank {ACE, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

enum Suit {SPADE, HEARTS, CLUBS, DIAMONDS};

class Card {

	Card(Rank rank, Suit suit, std::string face);

	Rank getCardRank();

	Suit getCardSuit();

	std::string getCardFace();

	std::string buildCardFace(Rank rank, Suit suit);

private:

	Rank card_Rank;

	Suit card_Suit;

	std::string card_Face;

};

#endif
