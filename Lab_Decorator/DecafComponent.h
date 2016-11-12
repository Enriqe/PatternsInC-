#ifndef DECAF_COMPONENT_H
#define DECAF_COMPONENT_H

#include <iostream>
#include "DrinkComponent.h"
using namespace std;

class DecafComponent : public DrinkComponent{
    public:
        DecafComponent(){};
        void serveDrink();
};

void DecafComponent::serveDrink(){
    cout << "[DECAF-COMP] Serving a decaf drink" << endl;
}

#endif
