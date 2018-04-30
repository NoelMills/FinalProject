#include "goblin.h"


string Goblin::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Goblin    1|";
        case 2: return "|   ^___^   |";
        case 3: return "|  ( . . )  |";
        case 4: return "|     v     |";
        case 5: return "|           |";
        case 6: return "|  200/100  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
} // Art Done

string Warrior::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Warrior   3|";
        case 2: return "| (\\    /)  |";
        case 3: return "| |_)//(_|  |";
        case 4: return "| |4\\_/4)(  |";
        case 5: return "|'( (_  -)D |";
        case 6: return "|  300/400  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
} // Art Done

string Shaman::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Shaman    5|";
        case 2: return "|    __/\\__ |";
        case 3: return "|._  \\\\''// |";
        case 4: return "|( )-/_||_\\ |";
        case 5: return "| |  \\_()_/ |";
        case 6: return "|  500/300  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
} //Art Done

string Dragon::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Dragon    6|";
        case 2: return "|   |\\/|    |";
        case 3: return "|   (oo)\\   |";
        case 4: return "|  //_/\\_\\  |";
        case 5: return "| @@/  |=\\  |";
        case 6: return "|  700/500  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
} //Art Done

string Bear::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Bear      2|";
        case 2: return "| ( )___( ) |";
        case 3: return "|  /__oo  \\ |";
        case 4: return "| ( \\/     )|";
        case 5: return "| | '=/    ||";
        case 6: return "|  200/300  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
} // Art Done

string Shue::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Dr.Shue  10|";
        case 2: return "|           |";
        case 3: return "|  ( ͡° ͜ʖ ͡°) |";
        case 4: return "|           |";
        case 5: return "|           |";
        case 6: return "|  1000/700 |";
        case 7: return "|___________|";
        default:
            return " ";
    }
} //Art Done

string Penguin::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Penguin   1|";
        case 2: return "|    __     |";
        case 3: return "| -=(o '.   |";
        case 4: return "|    '.-.\\  |";
        case 5: return "|   /|   \\\\ |";
        case 6: return "|  100/400  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
} //Art Done

string BlueEyesWhiteDragon::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|BEWD      8|";
        case 2: return "|   (@::@)  |";
        case 3: return "|    \\\\//   |";
        case 4: return "| )( (oo) )(|";
        case 5: return "|  )( VV )( |";
        case 6: return "|  900/800  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
}//Art Done

string Knight::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Knight    7|";
        case 2: return "|    .-.    |";
        case 3: return "|  __|=|__  |";
        case 4: return "| (_/'_'\\_) |";
        case 5: return "| //\\___/\\\\ |";
        case 6: return "|  800/600  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
}//Art Done

string Wizard::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Wizard    2|";
        case 2: return "|           |";
        case 3: return "|           |";
        case 4: return "|(∩｀-´)⊃━☆|";
        case 5: return "|           |";
        case 6: return "|  400/100  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
}//Art Done

Goblin::Goblin(void){
    Card("Goblin", 1, 200, 100);
}

Warrior::Warrior(void){
    Card("Warrior", 3, 300, 400);
}

Wizard::Wizard(void){
   Card("Wizard", 2, 400, 100); 
}

Dragon::Dragon(void){
    Card("Dragon", 6, 700, 500);
}

Bear::Bear(void){
    Card("Bear", 2, 200, 300);
}

Shue::Shue(void){
    Card("Shue", 10, 1000, 700);
}

Penguin::Penguin(void){
    Card("Penguin", 1, 100, 400);
}

BlueEyesWhiteDragon::BlueEyesWhiteDragon(void){
    Card("BlueEyesWhiteDragon", 8, 900, 800);
}

Knight::Knight(void){
    Card("Knight", 7, 800, 700);
}

Shaman::Shaman(void){
    Card("Shaman", 5, 500, 300);
}