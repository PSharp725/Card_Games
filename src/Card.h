#ifndef CARD_H__
#define CARD_H__

#include <string>


enum Rank {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
enum Suit {SPADES, CLUBS, HEARTS, DIAMONDS};

class Card {

public:

    // Constructor that intializes the cards suit, rank, and face (image)
    Card(Rank rank, Suit suit, std::string face);

    // Returns a card's suit
    Suit getCardSuit();
    
    // Returns a card's rank
    Rank getCardRank();

    // Set the cards face
    void setCardFace();

    // returns a cards face
    std::string getCardFace();

private:

    // Cards face image address
    std::string cardFace;
    // The cards rank/suit
    Rank cardRank;
    Suit cardSuit;

};

#endif
