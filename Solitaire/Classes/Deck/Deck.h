#ifndef DECK_H__
#define DECK_H__

#include <vector>

using std::string;

class Deck{
public:
    Deck();

    ~Deck();

    // Used to constructed the deck of cards
    void initializeDeck();

    // Prints indivual card info
    void printCard(const Card& card);

    // prints the card info for the whole deck
    void printDeck();

    // Shuffles the card order in the decj
    void shuffleDeck();

    // Function to pull the next card from the deck
    Card pullCard();

private:
    vector<Card> cards;
    string card_back;
};

#endif