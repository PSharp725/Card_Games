#include <iostream>
#include <cmath>
#include<vector>
#include<string>
#include <algorithm>
#include <random>

using namespace std;

struct Card
{
    char card_value;
    char card_suit;
};

// Establishing the stock deck, waste deck, tabeleau, and foundation as the struct of the playing table for solitaire
    struct solitaire_playing_field
    {
    vector<Card> stock_deck;
    vector<Card> waste_deck;
    vector<Card> tabeleau_one_face_up;
    vector<Card> tabeleau_two_face_up;
    vector<Card> tabeleau_two_face_down;
    vector<Card> tabeleau_three_face_up;
    vector<Card> tabeleau_three_face_down;
    vector<Card> tabeleau_four_face_up;
    vector<Card> tabeleau_four_face_down;
    vector<Card> tabeleau_five_face_up;
    vector<Card> tabeleau_five_face_down;
    vector<Card> tabeleau_six_face_up;
    vector<Card> tabeleau_six_face_down;
    vector<Card> tabeleau_seven_face_up;
    vector<Card> tabeleau_seven_face_down;
    vector<Card> foundation_one;
    vector<Card> foundation_two;
    vector<Card> foundation_three;
    vector<Card> foundation_four;
    };

/**
 * function to return a full deck of card for play
 * @return const vector<Card> Returns a full deck of cards
 */
vector<Card> full_52_card_deck() 
{
   return
    {
    {'A', 'S'},
    {'2', 'S'},
    {'3', 'S'},
    {'4', 'S'},
    {'5', 'S'},
    {'6', 'S'},
    {'7', 'S'},
    {'8', 'S'},
    {'9', 'S'},
    {'0', 'S'},
    {'J', 'S'},
    {'Q', 'S'},
    {'K', 'S'},
    {'A', 'D'},
    {'2', 'D'},
    {'3', 'D'},
    {'4', 'D'},
    {'5', 'D'},
    {'6', 'D'},
    {'7', 'D'},
    {'8', 'D'},
    {'9', 'D'},
    {'0', 'D'},
    {'J', 'D'},
    {'Q', 'D'},
    {'K', 'D'},
    {'A', 'C'},
    {'2', 'C'},
    {'3', 'C'},
    {'4', 'C'},
    {'5', 'C'},
    {'6', 'C'},
    {'7', 'C'},
    {'8', 'C'},
    {'9', 'C'},
    {'0', 'C'},
    {'J', 'C'},
    {'Q', 'C'},
    {'K', 'C'},
    {'A', 'H'},
    {'2', 'H'},
    {'3', 'H'},
    {'4', 'H'},
    {'5', 'H'},
    {'6', 'H'},
    {'7', 'H'},
    {'8', 'H'},
    {'9', 'H'},
    {'0', 'H'},
    {'J', 'H'},
    {'Q', 'H'},
    {'K', 'H'}
    };    
}

/**
 * function to shuffle a deck of cards in a random order
 * @param card_deck 
 * @return vector<Card> 
 */
vector<Card> shuffle_deck(vector<Card>& card_deck)
{
    srand(unsigned(time(NULL)));
    random_shuffle(card_deck.begin(), card_deck.end());
    return card_deck;
}

/**
 * Function to return a new shuffled deck
 * @return vector<Card> 
 */
vector<Card> new_deck()
{
    vector<Card> deck = full_52_card_deck();
    deck = shuffle_deck(deck);
    return deck;
}

/**
 * This function deals the cards for the start of a solitaire game
 * @return solitaire_playing_field 
 */
solitaire_playing_field deal_cards_solitaire ()
{
    solitaire_playing_field cards;
    cards.stock_deck = new_deck();
    int end_index = 51;


    cards.tabeleau_one_face_up.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_two_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_three_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_four_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_five_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_six_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_seven_face_down.push_back(cards.stock_deck[end_index]); 
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_two_face_up.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_three_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_four_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_five_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_six_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_seven_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;


    cards.tabeleau_three_face_up.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_four_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_five_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_six_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_seven_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_four_face_up.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_five_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_six_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_seven_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_five_face_up.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_six_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;
    cards.tabeleau_seven_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_six_face_up.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_seven_face_down.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    cards.tabeleau_seven_face_up.push_back(cards.stock_deck[end_index]);
    cards.stock_deck.pop_back();
    end_index--;

    return cards;
}


int solitaire_sim()
{
    int score = 0;
    solitaire_playing_field solitaire_cards = deal_cards_solitaire();
    return score;
}

int main()
{
    int score = solitaire_sim();
    cout << "\n \n \n This code runs! \n \n \n" << endl;
    return 0;
}