#include "Deck.h"
#include "Card.h"
#include "solitaire.h"

/** 
* A function that deals the cards for a game of solitaire. Creates the playing table
*/
void SolitaireBoard::deal_cards_solitaire (solitaire_playing_field& field){
    Deck playing_deck;
    playing_deck.initializeDeck();
    playing_deck.shuffleDeck();

    field.tabeleau_one_face_up.addCard(playing_deck.pullCard());


    field.tabeleau_two_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_three_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_four_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_five_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_six_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_seven_face_down.addCard(playing_deck.pullCard());

    field.tabeleau_two_face_up.addCard(playing_deck.pullCard());

    field.tabeleau_three_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_four_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_five_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_six_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_seven_face_down.addCard(playing_deck.pullCard());


    field.tabeleau_three_face_up.addCard(playing_deck.pullCard());

    field.tabeleau_four_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_five_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_six_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_seven_face_down.addCard(playing_deck.pullCard());

    field.tabeleau_four_face_up.addCard(playing_deck.pullCard());

    field.tabeleau_five_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_six_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_seven_face_down.addCard(playing_deck.pullCard());

    field.tabeleau_five_face_up.addCard(playing_deck.pullCard());

    field.tabeleau_six_face_down.addCard(playing_deck.pullCard());
    field.tabeleau_seven_face_down.addCard(playing_deck.pullCard());

    field.tabeleau_six_face_up.addCard(playing_deck.pullCard());

    field.tabeleau_seven_face_down.addCard(playing_deck.pullCard());

    field.tabeleau_seven_face_up.addCard(playing_deck.pullCard());

    field.stock_deck = playing_deck;
}

/**
 * Looks if the cards are the same color else it returns true
 * @param card_one 
 * @param card_two 
 * @return true or false depending on if the cards are differnt colors (i.e clubs and spades are black and hearts and diamonds are red) 
 */
bool differnt_color_suits (Card card_one, Card card_two){
    // Only checking if they're the same color for a flase return, else return true.
    if (card_one.suit == 0 && card_two.suit == 1 ){
        return false;
    }
    else if (card_one.suit == 1 && card_two.suit == 0 ){
        return false;
    }
    else if (card_one.suit == 2 && card_two.suit == 3 ){
        return false;
    }
    else if (card_one.suit == 3 && card_two.suit == 2 ){
        return false;
    }
    else{
        return true;
    }
}


/**
 * 
 * @return the final score of the game
 */
int solitaire_sim(){
    int score = 0;
    solitaire_playing_field playing_field;
    deal_cards_solitaire (playing_field);
    return score;
}

int main(){
    cout << "\n \n \n This code runs! \n \n \n" << endl;
    return 0;
}