#include <iostream>
#include<vector>
#include<string>
#include <cstdlib>

using namespace std;

enum Rank {TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};
enum Suit {SPADES, CLUBS, HEARTS, DIAMONDS};

struct Card
{
    Rank rank;
    Suit suit;
    int num_of_ranks = 13;
    int num_of_suits = 4;
};

struct Deck
{
    vector<Card> cards;
    string card_back;
    int deck_size = 52;
};

/**
 * function to creats a full deck of cards for play
 */
void initialize_deck(Deck& deck) 
{
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

void print_card(const Card& card)
{
    cout << card.rank << " " << card.suit << endl;
}

void print_deck(const Deck& deck)
{
    for (Card c: deck.cards)
    {
        print_card(c);
    }
}

/**
 * function to shuffle a deck of cards in a random order  
 */
void shuffle_deck(Deck& deck)
{
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
Card pull_card(Deck& deck)
{
    Card pull_card  = deck.cards[deck.cards.size() -1];
    deck.cards.pop_back();
    return pull_card;
}


int main()
{
    cout << "\n \n \n This code runs! \n \n \n" << endl;
    return 0;
}