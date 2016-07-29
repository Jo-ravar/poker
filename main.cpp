#include <iostream>
#include <string>
#include <vector>

// enumeration for the four different suits of cards
enum suits{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

// structure that holds info for each card
struct card{
    int num;
    suits suit;
};

// function declarations
std::vector<card> initDeck();

int main(){
    
    std::vector<card> deck = initDeck();
    
    for(int i = 0; i < deck.size(); i++){
        std::cout << deck.at(i).suit << " : " << deck.at(i).num << std::endl;
    }
    
    return 0;
    
}

// initializes a deck of cards
std::vector<card> initDeck(){
    
    // vector to return for the function
    std::vector<card> deck;
    
    // loop through the four suits
    for(int curSuit = 0; curSuit < 4; curSuit++){
        // loop through the 13 numbers starting at 1
        for(int curNum = 1; curNum <= 13; curNum++){
            // make a card based on the current suit and number and push it to the deck
            if(curSuit == 0){
                card temp = {curNum, CLUBS};
                deck.push_back(temp);
            }
            if(curSuit == 1){
                card temp = {curNum, DIAMONDS};
                deck.push_back(temp);
            }
            if(curSuit == 2){
                card temp = {curNum, HEARTS};
                deck.push_back(temp);
            }
            if(curSuit == 3){
                card temp = {curNum, SPADES};
                deck.push_back(temp);
            }
        }
    }
    
    // return the final deck with all the cards in it
    return deck;
    
}