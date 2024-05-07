#ifndef SOLITAIRE_H__
#define SOLITAIRE_H__

#include "Deck.h"

struct solitaire_playing_field{
        Deck stock_deck;
        Deck waste_deck;
        Deck tabeleau_one_face_up;
        Deck tabeleau_two_face_up;
        Deck tabeleau_two_face_down;
        Deck tabeleau_three_face_up;
        Deck tabeleau_three_face_down;
        Deck tabeleau_four_face_up;
        Deck tabeleau_four_face_down;
        Deck tabeleau_five_face_up;
        Deck tabeleau_five_face_down;
        Deck tabeleau_six_face_up;
        Deck tabeleau_six_face_down;
        Deck tabeleau_seven_face_up;
        Deck tabeleau_seven_face_down;
        Deck foundation_one;
        Deck foundation_two;
        Deck foundation_three;
        Deck foundation_four;
};


class SolitaireBoard {

public:

void deal_cards_solitaire (solitaire_playing_field& field);

};

#endif