#include <iostream>
#include<vector>
#include<string>
#include <cstdlib>

using namespace std;

enum Rank {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
enum Suit {SPADES, CLUBS, HEARTS, DIAMONDS};

struct Card{
    Rank rank;
    Suit suit;
    int num_of_ranks = 13;
    int num_of_suits = 4;
};

struct Deck{
    vector<Card> cards;
    string card_back;
    int deck_size = 52;
};

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

/**
 * function to creats a full deck of cards for play
 */
void initialize_deck(Deck& deck) {
        Card card;
        for (int suit = 0; suit < card.num_of_suits; suit++)
        {
            for (int rank = 0; rank < card.num_of_ranks; rank++)
            {
                card.suit = Suit(suit);
                card.rank = Rank(rank);
                deck.cards.push_back(card);
            }
        }
}

void print_card(const Card& card){
    cout << card.rank << " " << card.suit << endl;
}

void print_deck(const Deck& deck){
    for (Card c: deck.cards)
    {
        print_card(c);
    }
}

/**
 * function to shuffle a deck of cards in a random order  
 */
void shuffle_deck(Deck& deck){
    Deck shuffled;
    srand(unsigned(time(NULL)));
    while (!deck.cards.empty())
    {
        size_t rand_index = rand() % deck.cards.size();
        shuffled.cards.push_back(deck.cards[rand_index]);
        deck.cards.erase(deck.cards.begin() + rand_index);
    }
    deck = shuffled;
}

/**
 * pulls a card from the given deck, removes that card from the deck, then returns that card as the pulled card
 * @param deck from which a crad should be pulled from
 * @return Card that was pulled from the deck
 */
Card pull_card(Deck& deck){
    Card pull_card  = deck.cards[deck.cards.size() -1];
    deck.cards.pop_back();
    return pull_card;
}

/** 
 * A function that deals the cards for a game of solitaire. Creates the playing table
 */
void deal_cards_solitaire (solitaire_playing_field& field){
    Deck playing_deck;
    initialize_deck(playing_deck);
    shuffle_deck(playing_deck);

    field.tabeleau_one_face_up.cards.push_back(pull_card(playing_deck));
   

    field.tabeleau_two_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_three_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_four_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_five_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_six_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_seven_face_down.cards.push_back(pull_card(playing_deck));

    field.tabeleau_two_face_up.cards.push_back(pull_card(playing_deck));

    field.tabeleau_three_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_four_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_five_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_six_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_seven_face_down.cards.push_back(pull_card(playing_deck));


    field.tabeleau_three_face_up.cards.push_back(pull_card(playing_deck));

    field.tabeleau_four_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_five_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_six_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_seven_face_down.cards.push_back(pull_card(playing_deck));

    field.tabeleau_four_face_up.cards.push_back(pull_card(playing_deck));

    field.tabeleau_five_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_six_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_seven_face_down.cards.push_back(pull_card(playing_deck));

    field.tabeleau_five_face_up.cards.push_back(pull_card(playing_deck));

    field.tabeleau_six_face_down.cards.push_back(pull_card(playing_deck));
    field.tabeleau_seven_face_down.cards.push_back(pull_card(playing_deck));

    field.tabeleau_six_face_up.cards.push_back(pull_card(playing_deck));

    field.tabeleau_seven_face_down.cards.push_back(pull_card(playing_deck));

    field.tabeleau_seven_face_up.cards.push_back(pull_card(playing_deck));

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