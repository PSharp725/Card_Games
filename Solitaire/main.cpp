#include "Classes/Card/Card.h"
#include "Classes/Deck/Deck.h"

using namespace std;

int main(){

    Deck playingDeck;

    //playingDeck.initializeDeck();
    playingDeck.printDeck();
    playingDeck.shuffleDeck();
    playingDeck.printDeck();

    return 0;
}