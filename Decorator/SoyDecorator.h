#ifndef SOY_DECORATOR_H
#define SOY_DECORATOR_H
#include "CondimentDecorator.h"
#include <iostream>
using namespace std;

class SoyDecorator : public CondimentDecorator{
    public:
        SoyDecorator(DrinkComponent *drink) : CondimentDecorator(drink){};
        void serveDrink();
        void setSoy();
};

void SoyDecorator::serveDrink(){
    CondimentDecorator::serveDrink();
    setSoy();
}

void SoyDecorator::setSoy(){
    cout << "[SOY-DECOR] Serving soy milk to this drink..." << endl;
}

#endif

