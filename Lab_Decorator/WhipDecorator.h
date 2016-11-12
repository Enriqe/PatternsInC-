#ifndef WHIP_DECORATOR_H
#define WHIP_DECORATOR_H

#include "CondimentDecorator.h"
#include <iostream>
using namespace std;

class WhipDecorator : public CondimentDecorator{
    public:
        WhipDecorator(DrinkComponent *drink) : CondimentDecorator(drink){};
        void serveDrink();
        void setWhip();
};

void WhipDecorator::serveDrink(){
    CondimentDecorator::serveDrink();
    setWhip();
}

void WhipDecorator::setWhip(){
    cout << "[WHIP-DECOR] Serving whip to this drink..." << endl;
}

#endif
