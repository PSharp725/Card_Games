#ifndef DECK_H__
#define DECK_H__

#include "Card.h"
#include <vector>



class Deck{
public:

    const int num_of_ranks = 13;
    const int num_of_suits = 4;
    const int deckSize = 52;

    Deck();

    /**
    * function to creats a full deck of cards for play
    */
    void initializeDeck();

    // Prints indivual card info
    void printCard(const Card& card);

    // prints the card info for the whole deck
    void printDeck();

    /**
    * function to shuffle a deck of cards in a random order  
    */
    void shuffleDeck();

    /**
    * pulls a card from the given deck, removes that card from the deck, then returns that card as the pulled card
    * @param deck from which a card should be pulled from
    * @return Card that was pulled from the deck
    */
    Card pullCard();

    void addCard(Card card);

private:
    std::vector<Card> cards;
    std::string card_back;
};

#endif