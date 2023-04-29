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

int main()
{
    vector<Card> playing_deck = full_52_card_deck();
    playing_deck = shuffle_deck(playing_deck);
    cout << "\n \n \n This code runs! \n \n \n" << endl;
    return 0;
}