#include <iostream>
#include "DecafComponent.h"
#include "MilkDecorator.h"
#include "DrinkComponent.h"
#include "EspressoComponent.h"
#include "WhipDecorator.h"
using namespace std;

int main(){
    DecafComponent decafDrink;
    DrinkComponent *decafWithMilk = new MilkDecorator(new DecafComponent());

    cout << "*Normal decaf" << endl;
    decafDrink.serveDrink();

    cout << "*Decaf With milk" << endl;
    decafWithMilk->serveDrink();

    DrinkComponent *espressoWithWhip = new WhipDecorator(new EspressoComponent());
    cout << "*Espresso with whip" << endl;
    espressoWithWhip->serveDrink();
    return 0;
}
