#ifndef MOCHA_DECORATOR_H
#define MOCHA_DECORATOR_H
#include "CondimentDecorator.h"
#include <iostream>
using namespace std;

class MochaDecorator : public CondimentDecorator{
    public:
        MochaDecorator(DrinkComponent * drink) : CondimentDecorator(drink){};
        void serveDrink();
        void setMocha();
};

void MochaDecorator::serveDrink(){
    CondimentDecorator::serveDrink();
    setMocha();
}

void MochaDecorator::setMocha(){
    cout << "[MOCHA-DECOR] Serving mocha to this drink..." << endl;
}

#endif
