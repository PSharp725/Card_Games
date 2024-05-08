#include "Card.h"
#include <iostream>


Card::Card(){
    cardFace = "";
}

Card::Card(Rank rank, Suit suit, std::string face){
    cardRank = rank;
    cardSuit = suit;
    cardFace = face;
}

Card::~Card(){ 
}

Suit Card::getCardSuit(){
    return cardSuit;
}

Rank Card::getCardRank(){
    return cardRank;
}

void Card::setCardFace(){
    if (cardSuit == Suit(SPADES)){
        if (cardRank == Rank(ACE)){
            cardFace = "Card_Assets/Ace of Spades.png";
        }
        else if (cardRank == Rank(TWO)){
            cardFace = "Card_Assets/2 of Spades.png";
        }
        else if (cardRank == Rank(THREE)){
            cardFace = "Card_Assets/3 of Spades.png";
        }
        else if (cardRank == Rank(FOUR)){
            cardFace = "Card_Assets/4 of Spades.png";
        }
        else if (cardRank == Rank(FIVE)){
            cardFace = "Card_Assets/5 of Spades.png";
        }
        else if (cardRank == Rank(SIX)){
            cardFace = "Card_Assets/6 of Spades.png";
        }
        else if (cardRank == Rank(SEVEN)){
            cardFace = "Card_Assets/7 of Spades.png";
        }
        else if (cardRank == Rank(EIGHT)){
            cardFace = "Card_Assets/8 of Spades.png";
        }
        else if (cardRank == Rank(NINE)){
            cardFace = "Card_Assets/9 of Spades.png";
        }
        else if (cardRank == Rank(TEN)){
            cardFace = "Card_Assets/10 of Spades.png";
        }
        else if (cardRank == Rank(JACK)){
            cardFace = "Card_Assets/Jack of Spades.png";
        }
        else if (cardRank == Rank(QUEEN)){
            cardFace = "Card_Assets/Queen of Spades.png";
        }
        else if (cardRank == Rank(KING)){
            cardFace = "Card_Assets/King of Spades.png";
        }
    }
    else if (cardSuit == Suit(CLUBS)){
        if (cardRank == Rank(ACE)){
            cardFace = "Card_Assets/Ace of Clubs.png";
        }
        else if (cardRank == Rank(TWO)){
            cardFace = "Card_Assets/2 of Clubs.png";
        }
        else if (cardRank == Rank(THREE)){
            cardFace = "Card_Assets/3 of Clubs.png";
        }
        else if (cardRank == Rank(FOUR)){
            cardFace = "Card_Assets/4 of Clubs.png";
        }
        else if (cardRank == Rank(FIVE)){
            cardFace = "Card_Assets/5 of Clubs.png";
        }
        else if (cardRank == Rank(SIX)){
            cardFace = "Card_Assets/6 of Clubs.png";
        }
        else if (cardRank == Rank(SEVEN)){
            cardFace = "Card_Assets/7 of Clubs.png";
        }
        else if (cardRank == Rank(EIGHT)){
            cardFace = "Card_Assets/8 of Clubs.png";
        }
        else if (cardRank == Rank(NINE)){
            cardFace = "Card_Assets/9 of Clubs.png";
        }
        else if (cardRank == Rank(TEN)){
            cardFace = "Card_Assets/10 of Clubs.png";
        }
        else if (cardRank == Rank(JACK)){
            cardFace = "Card_Assets/Jack of Clubs.png";
        }
        else if (cardRank == Rank(QUEEN)){
            cardFace = "Card_Assets/Queen of Clubs.png";
        }
        else if (cardRank == Rank(KING)){
            cardFace = "Card_Assets/King of Clubs.png";
        }
    }
    else if (cardSuit == Suit(HEARTS)){
        if (cardRank == Rank(ACE)){
            cardFace = "Card_Assets/Ace of Hearts.png";
        }
        else if (cardRank == Rank(TWO)){
            cardFace = "Card_Assets/2 of Hearts.png";
        }
        else if (cardRank == Rank(THREE)){
            cardFace = "Card_Assets/3 of Hearts.png";
        }
        else if (cardRank == Rank(FOUR)){
            cardFace = "Card_Assets/4 of Hearts.png";
        }
        else if (cardRank == Rank(FIVE)){
            cardFace = "Card_Assets/5 of Hearts.png";
        }
        else if (cardRank == Rank(SIX)){
            cardFace = "Card_Assets/6 of Hearts.png";
        }
        else if (cardRank == Rank(SEVEN)){
            cardFace = "Card_Assets/7 of Hearts.png";
        }
        else if (cardRank == Rank(EIGHT)){
            cardFace = "Card_Assets/8 of Hearts.png";
        }
        else if (cardRank == Rank(NINE)){
            cardFace = "Card_Assets/9 of Hearts.png";
        }
        else if (cardRank == Rank(TEN)){
            cardFace = "Card_Assets/10 of Hearts.png";
        }
        else if (cardRank == Rank(JACK)){
            cardFace = "Card_Assets/Jack of Hearts.png";
        }
        else if (cardRank == Rank(QUEEN)){
            cardFace = "Card_Assets/Queen of Hearts.png";
        }
        else if (cardRank == Rank(KING)){
            cardFace = "Card_Assets/King of Hearts.png";
        }
    }
    else if (cardSuit == Suit(DIAMONDS)){
        if (cardRank == Rank(ACE)){
            cardFace = "Card_Assets/Ace of Diamonds.png";
        }
        else if (cardRank == Rank(TWO)){
            cardFace = "Card_Assets/2 of Diamonds.png";
        }
        else if (cardRank == Rank(THREE)){
            cardFace = "Card_Assets/3 of Diamonds.png";
        }
        else if (cardRank == Rank(FOUR)){
            cardFace = "Card_Assets/4 of Diamonds.png";
        }
        else if (cardRank == Rank(FIVE)){
            cardFace = "Card_Assets/5 of Diamonds.png";
        }
        else if (cardRank == Rank(SIX)){
            cardFace = "Card_Assets/6 of Diamonds.png";
        }
        else if (cardRank == Rank(SEVEN)){
            cardFace = "Card_Assets/7 of Diamonds.png";
        }
        else if (cardRank == Rank(EIGHT)){
            cardFace = "Card_Assets/8 of Diamonds.png";
        }
        else if (cardRank == Rank(NINE)){
            cardFace = "Card_Assets/9 of Diamonds.png";
        }
        else if (cardRank == Rank(TEN)){
            cardFace = "Card_Assets/10 of Diamonds.png";
        }
        else if (cardRank == Rank(JACK)){
            cardFace = "Card_Assets/Jack of Diamonds.png";
        }
        else if (cardRank == Rank(QUEEN)){
            cardFace = "Card_Assets/Queen of Diamonds.png";
        }
        else if (cardRank == Rank(KING)){
            cardFace = "Card_Assets/King of Diamonds.png";
        }
    }
}

std::string Card::getCardFace(){
    return cardFace;
}

