#include <iostream>
#include <list>
#include <sstream>

using namespace std;

enum Suite{Spades, Clubs, Hearts, Diamonds};

class Card{
    private:
        int numVal;
        Suite suite;
    public:
        void setNumVal(int val){
            numVal = val;
        }
        
        void setSuite(Suite s){
            suite=s;
        }
        
        string printName(void){
            stringstream ss;
            switch(suite){
                    case Spades:
                        ss << numVal << " of  Spades" <<  endl;
                        break;
                    case Clubs:
                         ss << numVal << " of  Clubs" << endl;
                         break;
                    case Hearts:
                         ss << numVal << " of  Hearts" << endl;
                         break;
                    case Diamonds:
                         ss << numVal << " of  Diamonds" << endl;
                         break;
            }
            
            return ss.str();
        }
        
};

int main(int argc, char * argv[]){
    
    list<Card*> deck;
    list<Card*>::iterator iter;
    
    for(int i =0; i< 4; i++){
        for(int j =1; j<= 13; j++){
            deck.push_back(new Card);
            iter = deck.begin();
            advance(iter, deck.size() -1);
            (*iter)->setNumVal(j);
            switch(i){
                case 0: //Spades
                    (*iter)->setSuite(Spades);
                    break;
                case 1: //
                    (*iter)->setSuite(Clubs);
                    break;
                case 2:
                    (*iter)->setSuite(Hearts);
                    break;
                case 3:
                    (*iter)->setSuite(Diamonds);
                    break;
                default:
                    break;
            }
            
        }
        
    }
    srand(time(0));
    int idx1, idx2;
    Card* temp;
    list<Card*>:: iterator iter2= deck.begin();
    for(int i =0; i < 200; i++){
        idx1 = rand() % deck.size();
        idx2 = rand() % deck.size();
        
        iter = deck.begin();
        advance(iter, idx1);
        temp = *iter;
        
        advance(iter2, idx2);
        *iter = *iter2;
        *iter2 = temp;
    }
    list<Card*> hand;
    iter = deck.begin();
    
    for(int i = 0; i < 7; i++){
        hand.push_back(*iter);
        iter = deck.erase(iter);
    
    }
    
    for(iter = hand.begin(); iter != hand.end(); iter ++){
        cout << (*iter)-> printName() << endl;
    }
    return 0;
}