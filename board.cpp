#include "board.h"

using namespace std;

Board::Board(void){
    hp = 2000;
    maxMana = 15;
}

Card* Board::getCardInHand(int i){
    return hand[i];
}

Card* Board::getCardOnField(int i){
    return field[i];
}

void Board::setHP(int health){ 
    if(health < 0){
        hp = 0;
    }
    else{
        hp = health;
    }
}

int Board::getHP(void){
    return hp;
}

int Board::getHandSize(void){
    return hand.size();
}

int Board::getFieldSize(void){
    return field.size();
}

void Board::setMana(int turn){
    mana = turn + mana;
    if(mana > maxMana){
        mana = maxMana;
    }
}

int Board::getMana(void){
    
    return mana;
}

void Board::shuffleDeck(void){
    Card * temp;
    int numOfShuffles = 100;
    int idx1, idx2;
    for(int i = 0; i < numOfShuffles; i++){
        idx1 = rand() % deck.size();
        idx2 = rand() % deck.size();
        temp = deck[idx1];
        deck[idx1] = deck[idx2];
        deck[idx2] = temp;
    }
}

void Board::addToDeckList(Card* character){
    deck.push_back(character);
}

void Board::draw(int index){
    for(int i = 0; i < index; i++){
        if(deck.size() ==5){
            deck = discard;
            discard.clear();
            shuffleDeck();
    }
    hand.push_back(deck[deck.size()-1]);
    deck.pop_back();
    }
}

void Board::renderMana(void){
    cout << "MANA: ";
    for(int i = 1; i <= maxMana; i++){
        if(i <= mana)
            cout << "@ ";
        else
            cout << "O ";
    }
        
    cout << endl;
}

void Board::renderHand(void){
    if(hand.size() > 0){
        for(int i = 0; i <= 7; i++){
            for(int j = 0; j < hand.size(); j++){
                cout << hand[j]->render(i) << " ";
            }
            cout << endl;
        }
    } else {
        for(int i = 0; i <= 7; i++)
            cout << endl;
    }
}

void Board::renderField(void){
    if(field.size() > 0){
        for(int i = 0; i <= 7; i++){
            for(int j = 0; j < field.size(); j++){
                cout << field[j]->render(i) << " ";
            }
            cout << endl;
        }
    } else {
        for(int i = 0; i <= 7; i++)
            cout << endl;
    }
}

void Board::playCardFromHand(int i){
    if(i >= 0 && i < hand.size()){
        cout << "Not enoug mana!" << endl;
        return;
    }
    else{
     mana -= hand[i]->getManaCost();
     field.push_back(hand[i]);
     hand.erase(hand.begin()+i);
    }
} 

void Board::discardCardFromField(int card){
    discard.push_back(field[card]);
    field.erase(field.begin() + card);
}

void Board::unExhaustField(void){
    for(int i = 0; i < field.size(); i++){
        field[i]->unExhaust();
    }
}