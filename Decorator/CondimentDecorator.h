#ifndef CONDIMENT_DECORATOR_H
#define CONDIMENT_DECORATOR_H
#include "DrinkComponent.h"

using namespace std;

class CondimentDecorator : public DrinkComponent{
    protected:
        DrinkComponent *decoratedDrink;
    public:
        CondimentDecorator(DrinkComponent *decoDrink);
        void serveDrink();
};

CondimentDecorator::CondimentDecorator(DrinkComponent *decoDrink){
    decoratedDrink = decoDrink;
}

void CondimentDecorator::serveDrink(){
    decoratedDrink->serveDrink();
}

#endif
