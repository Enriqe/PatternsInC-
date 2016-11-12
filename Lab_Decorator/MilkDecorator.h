#ifndef MILK_DECORATOR_H
#define MILK_DECORATOR_H

#include "CondimentDecorator.h"
#include <iostream>
using namespace std;

class MilkDecorator : public CondimentDecorator{
    public:
        MilkDecorator(DrinkComponent *drink) : CondimentDecorator(drink){};
        void serveDrink();
        void setMilk();
};

void MilkDecorator::serveDrink(){
    CondimentDecorator::serveDrink();
    setMilk();
}

void MilkDecorator::setMilk(){
    cout << "[MILK-DECOR] Serving milk to this drink" << endl;
}
#endif
