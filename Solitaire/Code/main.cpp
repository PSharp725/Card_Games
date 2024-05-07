#include "Deck.h"
#include <iostream>

// g++ --std=c++11 Card.cpp Deck.cpp main.cpp -o main

int main(){

    Deck playingDeck;

    std::cout << "Printing the unshuffled deck:\n";
    playingDeck.printDeck();
    playingDeck.shuffleDeck();
    std::cout << "Printing the shuffled deck:\n";
    playingDeck.printDeck();

    return 0;
}