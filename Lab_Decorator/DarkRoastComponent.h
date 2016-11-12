#include <iostream>
#include "DrinkComponent.h"
using namespace std;

class DarkRoastComponent : public DrinkComponent{
    public:
        DarkRoastComponent();
        void serveDrink();
};

void DarkRoastComponent::serveDrink(){
    cout << "[DARK-ROAST-COMP] Serving a dark roast drink" << endl;
}
