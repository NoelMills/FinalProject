#ifndef GOBLIN_H
#define GOBLIN_H

#include <iostream>
#include "card.h"

using namespace std;

class Goblin : public Card {
    private:
    
    public:
    
    Goblin(void);
    virtual string render(int);
};

class Warrior : public Card{
    private:
    
    public:
    
    Warrior(void);
    virtual string render(int);
};

class Wizard : public Card{
    private:
    
    public:
    
    Wizard(void);
    virtual string render(int);
};

class Dragon : public Card{
    private:
    
    public:
    
    Dragon(void);
    virtual string render(int);
};

class Bear : public Card{
    private:
    
    public:
    
    Bear(void);
    virtual string render(int);
};

class Shue : public Card{
    private:
    
    public:
    
    Shue(void);
    virtual string render(int);
};

class Penguin : public Card{
    private:
    
    public:
    
    Penguin(void);
    virtual string render(int);
};

class BlueEyesWhiteDragon : public Card{
    private:
    
    public:
    
    BlueEyesWhiteDragon(void);
    virtual string render(int);
};

class Knight : public Card{
    private:
    
    public:
    
    Knight(void);
    virtual string render(int);
};

class Shaman : public Card{
    private:
    
    public:
    
    Shaman(void);
    virtual string render(int);
};
#endif