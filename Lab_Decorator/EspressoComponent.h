#include <iostream>
#include "DrinkComponent.h"
using namespace std;

class EspressoComponent : public DrinkComponent{
    public:
        EspressoComponent();
        void serveDrink();
};

void EspressoComponent::serveDrink(){
    cout << "[ESPRESSO-COMP] Serving an espresso drink" << endl;
}
