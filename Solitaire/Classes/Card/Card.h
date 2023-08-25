#ifndef CARD_H__
#define CARD_H__

#include <string>

using namespace std;

enum Rank {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
enum Suit {SPADES, CLUBS, HEARTS, DIAMONDS};

class Card {

public:

    Card();

    Card(Rank rank, Suit suit, string face);

    ~Card();

    Suit getCardSuit();
    
    Rank getCardRank();

    void setCardFace();

    Rank cardRank;
    Suit cardSuit;
    string cardFace;

};

#endif