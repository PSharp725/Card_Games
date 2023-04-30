#include <iostream>
#include<vector>
#include<string>
#include <cstdlib>

using namespace std;

enum Rank {TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};
enum Suit {SPADES, HEARTS, DIAMONDS, CLUBS};

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

    struct solitaire_playing_field
    {
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
 * A function that deals the cards for a game of solitaire. Creats the playing table
 */
void deal_cards_solitaire (solitaire_playing_field& field)
{
    Deck playing_deck;
    initialize_deck(playing_deck);
    shuffle_deck(playing_deck);

    int end_index = 51;

    field.tabeleau_one_face_up.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_two_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_three_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_four_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_five_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_six_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_seven_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_two_face_up.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_three_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_four_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_five_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_six_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_seven_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_three_face_up.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_four_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_five_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_six_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_seven_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_four_face_up.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_five_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_six_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_seven_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_five_face_up.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_six_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;
    field.tabeleau_seven_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_six_face_up.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_seven_face_down.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.tabeleau_seven_face_up.cards.push_back(playing_deck.cards[end_index]);
    playing_deck.cards.pop_back();
    end_index --;

    field.stock_deck = playing_deck;
}

int solitaire_sim()
{
    int score = 0;
    solitaire_playing_field playing_field;
    deal_cards_solitaire (playing_field);
    return score;
}

int main()
{
    cout << "\n \n \n This code runs! \n \n \n" << endl;
    return 0;
}