#ifndef _WAR_H_
#define _WAR_H_

#include "deck.h"

class War{

public: 

    void dealHands();



private:

    Deck dealer_Hand;
    Deck player_Hand;
    Deck playing_Field;

};


#endif