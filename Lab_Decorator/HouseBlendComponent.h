#include <iostream>
#include "DrinkComponent.h"
using namespace std;

class HouseBlendComponent : public DrinkComponent{
    public:
        HouseBlendComponent();
        void serveDrink();
};

void HouseBlendComponent::serveDrink(){
    cout << "[HOUSE-BLEND-COMP] Serving a house blend drink" << endl;
}

