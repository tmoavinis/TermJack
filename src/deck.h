#include <iostream>
#include <time.h>
#include <stack>
#include "card.h"

class deck
{

private:
    std::stack<card> cardDeck;
    card utilCardArray[4][13];
    // std::string art[4];

    void swap_card(card A, card B){

    }

public:
    deck(std::string cardArt[4])
    {
        for (int i = 0; i < 4; i++)
        {
            // making the ace
            utilCardArray[i][0] = card('a', cardArt[i]);
            // cards 2 - 9
            for (int j = 1; j < 8; j++)
            {
                char ch = '0' + j; // ch is now ‘5’
                utilCardArray[i][j] = card(ch, cardArt[i]);
            }
            // making the 10 and the figure cards
            utilCardArray[i][9] = card('t', cardArt[i]);
            utilCardArray[i][10] = card('j', cardArt[i]);
            utilCardArray[i][11] = card('q', cardArt[i]);
            utilCardArray[i][12] = card('k', cardArt[i]);
        }
    }

    void shuffleDeck()
    {
        std::cout << "Shuffle Shuffle Shuffle\n";

        srand(time(NULL));
        // 52 cards, 52 -1 = 51
        for (int i = 51; i > 0; i--)
        {
            // Pick a random index from 0 to i
            int j = rand() % (i + 1);

            // Swap arr[i] with the element
            // at random index
            //swap(&arr[i], &arr[j]);
        }
    }

    card drawCard()
    {
        card drawnCard = cardDeck.top(); // save the card on top
        cardDeck.pop();                  // because pop method returns void
        return drawnCard;                // return the saved card
    }
};