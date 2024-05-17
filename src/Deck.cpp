//#include "Card.h"
#include "Deck.h"
#include <iostream>


Deck::Deck(){
    initializeDeck();
    card_back = "Back.png";
}



void Deck::initializeDeck(){
    Card card;
        for (int suit = 0; suit < num_of_suits; suit++)
        {
            for (int rank = 0; rank < num_of_ranks; rank++)
            {
                card.cardSuit = Suit(suit);
                card.cardRank = Rank(rank);
                card.setCardFace();
                cards.push_back(card);  // Updates the private cards member
            }
        }
}


void Deck::printCard(const Card& card){
    std::cout << card.cardRank << " " << card.cardSuit << std::endl;
}


void Deck::printDeck(){
    for (Card c: cards)
    {
        printCard(c);
    }
}


void Deck::shuffleDeck(){
    std::vector<Card> shuffledCards;
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

void Deck::addCard(Card card){
    cards.push_back(card);
}