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
// ROUND function that returns boolean
// BET function that handles a betting round

int main(){
    
    // menu for the player to start the game, read instructions, or quit
    // if the player needs instructions, print it out and give an option to return to menu
    // if the player doesn't quit, start the game
    
    
    // -----BASIC RULES------
    // blinds -> $10
    // AI always bets first
    
    // -----GAME VARIABLES---
    // player money
    // AI money
    // keep playing boolean
    
    // -----GAME START-------
    // ask the player how much money he wants to play with ( tell him the blinds )
    // give both the player and AI the same amount of starting money
    // set the keep playing boolean to true
    
    // -----ROUND START------
    // while the player still wants to play,
    // call the ROUND function
    // if the player has 0 or less dollars left, show a GAME OVER screen and tell the player he lost
    
    // -----GAME OVER-------
    // show the statistics of the games/ rounds
    // ask the player if he/she wants to try again
    // if YES, return to start of main
    // if NO, quit the application
    
    return 0;
    
}

// function to initialize a deck of 52 cards
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

// ROUND function with boolean return type
// boolean represents whether the player wants to keep playing or not
/*
    FUNCTION VARIABLES:
    - player cards
    - AI cards
    - river cards
    - pot
    
    1. start the game by dealing cards to the player and the AI
    2. deal the river cards
    3. call the bet function to handle player bets
        -> if the bet function returns a number that is 0 or bigger:
            - add the return value to the pot
        -> if the bet function returns a number below 0:
            - give the pot to the person who didn't fold and exit the loop
    4. if the game is still going on, deal the river cards
    5. check if the user and AI still have money to bet
        -> if yes: repeat step 3 two more times and deal river cards accordingly
        -> if no : deal the rest of the river cards and reveal the winner
    6. after revealing cards, show the winner and give the pot to the winners money
    7. ask the player whether he/she wants to keep playing 
    8. exit the function with true/false depending on player answer
    
*/



// BET function with an integer return type
// integer represents the amount of money that the player and AI bet
// if the return integer is negative, the player or AI has folded
// function parameters: player money*, AI money*
/*
    FUNCTION VARIABLES :
    - player money
    - AI money
    - return money
    
    1. see if the AI wants to raise -> TODO: Algorithm to help the AI decide on its betting
    2. add the money the AI bet to the return money
    3. ask the player if he wants to raise, call, fold, or all in
        -> if RAISE: the bot will either call or fold depending on how much the player raised
            -> if CALL: add the remaining money from the AI to return money and exit the function
            -> if FOLD: give the player the return money and exit the function with a negative number
        -> if CALL : add the player bet to the return money and exit the function
        -> if FOLD : exit the function and return a negative number, as well as giving the AI its money back
        -> if ALL IN:               -> TODO: Algorithm to help the AI decide whether to call or fold
            -> if CALL: add the remaining money from the AI to return money and exit the function
            -> if FOLD: give the player the return money and exit the function with a negative number
        
    all scenarios should have the function exit to this point, so return 0 in the end as an error

*/