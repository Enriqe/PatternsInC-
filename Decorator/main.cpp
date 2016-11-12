#include <iostream>
#include "DrinkComponent.h"
#include "DecafComponent.h"
#include "EspressoComponent.h"
#include "HouseBlendComponent.h"
#include "DarkRoastComponent.h"
#include "MilkDecorator.h"
#include "WhipDecorator.h"
#include "SoyDecorator.h"
#include "MochaDecorator.h"
using namespace std;

int main(){

    cout << "*NORMAL DECAF" << endl;
    DecafComponent decafDrink;
    decafDrink.serveDrink();
    cout << endl;

    cout << "*DECAF WITH MILK" << endl;
    DrinkComponent *decafWithMilk = new MilkDecorator(new DecafComponent());
    decafWithMilk->serveDrink();
    cout << endl;

    cout << "*ESPRESSO WITH WHIP" << endl;
    DrinkComponent *espressoWithWhip = new WhipDecorator(new EspressoComponent());
    espressoWithWhip->serveDrink();
    cout << endl;

    cout << "**HOUSE BLEND WITH SOY MILK" << endl;
    DrinkComponent *houseBlendWithSoyMilk = new SoyDecorator(new HouseBlendComponent());
    houseBlendWithSoyMilk->serveDrink();
    cout << endl;

    cout << "**DARK ROAST MOCHA" << endl;
    DrinkComponent *darkRoastMocha = new MochaDecorator(new DarkRoastComponent());
    darkRoastMocha->serveDrink();
    cout << endl;
    return 0;
}
