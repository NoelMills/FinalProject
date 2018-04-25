#include "card.h"

using namespace std;

Card::Card(){
    name = "E404";
    manaCost = 0;
    attack = 0;
    defense = 0;
}

Card::Card(string n, int mana, int atk, int def){
    if(atk < 0){
        attack = 0;
    }
    else{
        attack =atk;
    }
    if(mana < 0){
        manaCost = 0;
    }
    else{
        manaCost = mana;
    }
    if(def < 0){
        defense = 0;
    }
    else{
        defense = def;
    }
    name = n;
}

string Card::render(int line){
    switch(line){
        case 0: return ".___________.";
        case 1: return "|           |";
        case 2: return "|           |";
        case 3: return "|           |";
        case 4: return "|           |";
        case 5: return "|           |";
        case 6: return "|           |";
        case 7: return "|___________|";
        default:
            return " ";
    }
}

string Card::getName(void){
    return name;
}

int Card::getManaCost(void){
    return manaCost;
}

int Card::getAttack(void){
    return attack;   
}

int Card::getDefense(void){
    return defense;
}

bool Card::isExhausted(void){
    
    return exhausted;
}//Needs Content

void Card::unExhaust(void){
    exhausted = false;
}//Needs Content