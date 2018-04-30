#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <ctime>
#include "board.h"
#include "goblin.h"
#include "card.h"

using namespace std;

void getOpponentAction(Board&, Board&);
void renderBoard(Board&, Board&);

int main(int argc, char * arv[]){
    srand(time(0));
    int turn = 1;
    int order= rand ()% 1;
    vector<Card> deck_o;					// deck of objects
    vector<Card*> deck;					//vector that stores the players deck pointers
    int count = 0;
    int goblin_num = 0;					//These are counters that limit each card
    int war_num = 0;
    int wiz_num = 0;
    int drag_num = 0;
    int bear_num = 0;
    int shue_num = 0;
    int pen_num = 0;
    int blue_num = 0;
    int knight_num = 0;
    int sham_num = 0;
    int user_deck_input;
    cout << "You will now make your deck of 20 cards." << endl;
	cout << "Please enter the corresponding number to the desired monster." << endl;
	cout << "Limit: Only 3 cards of each type. " << endl;
	cout << "0: Goblin " << endl;
	cout << "1: Warrior " << endl;
	cout << "2: Wizard " << endl;
	cout << "3: Dragon " << endl;
	cout << "4: Bear " << endl;
	cout << "5: Shue " << endl;
	cout << "6: Penguin " << endl;
	cout << "7: Blue-Eyes White Dragon " << endl;
	cout << "8: Knight " << endl;
	cout << "9: Shaman " << endl;

    
    // Set up Player board
    Board pb;
    // Create player deck and draw initial hand here:
    while(count < 20){
	cin >> user_deck_input;										//User inputs a value 
	while(cin.fail()){										//checks to make sure cin doesnt fail
		cin.clear();
		cin.ignore(256, ' ');
		cout << "Invalid input. Please enter a number that is associated with a card.";
		cout << endl;
		cin >> user_deck_input;
	}
	switch(user_deck_input){									//Applies user input to add a card
		case 0 :
			if(goblin_num >= 3){								//Card limiter
				cout << "You have already reached max number of this card. " <<endl;
				cout << "Please enter another card type." << endl;
				break;
			}
			else{										//adds a card to the vector of objects
				deck_o.push_back(Goblin()); //Insert required constructor inputs
				pb.addToDeckList(&deck_o[count]);				//adds a pointer to the vector of pointers(deck)
				count++;
				goblin_num++;
				break;	
			}
		case 1 :
			if(war_num >= 3){
				cout << "You have already reached max number of this card. "<<endl;
				cout << "Please enter another card type." << endl;
				break;
			}
			else{
				deck_o.push_back(Warrior()); //Insert required constructor inputs
				pb.addToDeckList(&deck_o[count]);
				count++;
				war_num++;
				break;	
			}	
		case 2 :
			if(wiz_num >= 3){
				cout << "You have already reached max number of this card. "<<endl;
				cout << "Please enter another card type." << endl;
				break;
			}
			else{
				deck_o.push_back(Wizard()); //Insert required constructor inputs
				pb.addToDeckList(&deck_o[count]);
				count++;
				wiz_num++;
				break;	
			}	
		case 3 :
			if(drag_num >= 3){
				cout << "You have already reached max number of this card. "<<endl;
				cout << "Please enter another card type." << endl;
				break;
			}
			else{
				deck_o.push_back(Dragon()); //Insert required constructor inputs
				pb.addToDeckList(&deck_o[count]);
				count++;
				drag_num++;
				break;	
			}	
		case 4 :
			if(bear_num >= 3){
				cout << "You have already reached max number of this card. "<<endl;
				cout << "Please enter another card type." << endl;
				break;
			}
			else{
				deck_o.push_back(Bear()); //Insert required constructor inputs
				pb.addToDeckList(&deck_o[count]);
				count++;
				bear_num++;
				break;	
			}	
		case 5 :
			if(shue_num >= 3){
				cout << "You have already reached max number of this card. "<<endl;
				cout << "Please enter another card type." << endl;
				break;
			}
			else{
				deck_o.push_back(Shue()); //Insert required constructor inputs
				pb.addToDeckList(&deck_o[count]);
				count++;
				shue_num++;
				break;	
			}	
		case 6 :
			if(pen_num >= 3){
				cout << "You have already reached max number of this card. "<<endl;
				cout << "Please enter another card type." << endl;
				break;
			}
			else{
				deck_o.push_back(Penguin()); //Insert required constructor inputs
				pb.addToDeckList(&deck_o[count]);
				count++;
				pen_num++;
				break;	
			}	
		case 7 :
			if(blue_num >= 3){
				cout << "You have already reached max number of this card. "<<endl;
				cout << "Please enter another card type." << endl;
				break;
			}
			else{
				deck_o.push_back(BlueEyesWhiteDragon()); //Insert required constructor inputs
				pb.addToDeckList(&deck_o[count]);
				count++;
				blue_num++;
				break;	
			}
		case 8 :
			if(knight_num >= 3){
				cout << "You have already reached max number of this card. "<<endl;
				cout << "Please enter another card type." << endl;
				break;
			}
			else{
				deck_o.push_back(Knight()); //Insert required constructor inputs
				pb.addToDeckList(&deck_o[count]);
				count++;
				knight_num++;
				break;	
			}	
		case 9 :
			if(sham_num >= 3){
				cout << "You have already reached max number of this card. "<<endl;
				cout << "Please enter another card type." << endl;
				break;
			}
			else{
				deck_o.push_back(Shaman()); //Insert required constructor inputs
				pb.addToDeckList(&deck_o[count]); 
				count++;
				sham_num++;
				break;	
			}			

		default:
			cout << "Please enter a number between 0 and 9. " << endl;
			break;


	}
}


    // Set up opponent board
    Board ob;
    // Create opponent deck and draw initial hand here:
    
    while(pb.getHP() > 0 && ob.getHP() > 0){
        // Take turns here:
        if(order == 1){ //Player goes first
        }
        else{       //Opponent goes first
            
        }
        turn++;
    }
    
    
    return 0;
}

void renderBoard(Board & pb, Board & ob){
    // Render opponent field
    ob.renderField();
    cout << endl;
    // Render player field
    pb.renderField();
    pb.renderHand();
    
    pb.renderMana();
    cout << "HP: " << pb.getHP() << " Opponent's HP: " << ob.getHP() << endl;
    
    system ("clear(1)");
}

void getOpponentAction(Board & playerBoard, Board & opponentBoard){
    // Go through hand and play cards that the opponent can afford to play
    for(int i = 0; i < opponentBoard.getHandSize(); i++){
        if(opponentBoard.getCardInHand(i)->getManaCost() <= opponentBoard.getMana()){
            opponentBoard.playCardFromHand(i);
        }
        renderBoard(playerBoard, opponentBoard);
    }
   
    // Attack with all creatures not exhausted
    for(int i = 0; i < opponentBoard.getFieldSize(); i++){
        if(!opponentBoard.getCardOnField(i)->isExhausted()){
            // get target for attack
            // look through all cards on player's board. If the card is capable of killing one of those, it will chose the first one as its target
            int targetIndex = -1;
            for(int j = 0; j < playerBoard.getFieldSize(); j++){
                if(opponentBoard.getCardOnField(i)->getAttack() > opponentBoard.getCardOnField(j)->getDefense()){
                    targetIndex = j;
                    break;
                }
            }
            if(targetIndex != -1){
                // destory creature
                cout << "Opponent's " << opponentBoard.getCardOnField(i)->getName() << " destoryed your " << playerBoard.getCardOnField(targetIndex)->getName() << "!" << endl;
                playerBoard.discardCardFromField(targetIndex);
                renderBoard(playerBoard, opponentBoard);
            } else {
                // opponent's creature attacks player directly
                cout << "Opponent's " << opponentBoard.getCardOnField(i)->getName() << " attacks you directly for " << opponentBoard.getCardOnField(i)->getAttack() << " damage!" << endl;
                playerBoard.setHP(playerBoard.getHP() - opponentBoard.getCardOnField(i)->getAttack());
            }
        }
                
    }
}