#include "../Card/Card.h"
#include "Deck.h"
#include <iostream>

using std::cout;

Deck::Deck(){
    initializeDeck();
    card_back = "Back.png";
}

Deck::~Deck(){  
}


void Deck::initializeDeck(){
    int num_of_ranks = 13;
    int num_of_suits = 4;
    Card card;
        for (int suit = 0; suit < num_of_suits; suit++)
        {
            for (int rank = 0; rank < num_of_suits; rank++)
            {
                card.cardSuit = Suit(suit);
                card.cardRank = Rank(rank);
                card.setCardFace();
                cards.push_back(card);  // Updates the private cards member
            }
        }
}


void Deck::printCard(const Card& card){
    cout << card.cardRank << " " << card.cardSuit << endl;
}


void Deck::printDeck(){
    for (Card c: cards)
    {
        printCard(c);
    }
}


void Deck::shuffleDeck(){
    vector<Card> shuffledCards;
    srand(unsigned(time(NULL)));
    while (!cards.empty())
    {
        size_t rand_index = rand() % cards.size();
        shuffledCards.push_back(cards[rand_index]);
        cards.erase(cards.begin() + rand_index);
    }
    cards = shuffledCards;
}

Card Deck::pullCard(){
    Card pullCard  = cards[cards.size() -1];
    cards.pop_back();
    return pullCard;
}