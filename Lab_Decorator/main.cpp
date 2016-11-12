#include <iostream>
#include "DrinkComponent.h"
#include "DecafComponent.h"
#include "MilkDecorator.h"
#include "EspressoComponent.h"
#include "WhipDecorator.h"
#include "HouseBlendComponent.h"
#include "SoyDecorator.h"
using namespace std;

int main(){

    cout << "*NORMAL DECAF" << endl;
    DecafComponent decafDrink;
    decafDrink.serveDrink();

    cout << "*DECAF WITH MILK" << endl;
    DrinkComponent *decafWithMilk = new MilkDecorator(new DecafComponent());
    decafWithMilk->serveDrink();

    cout << "*ESPRESSO WITH WHIP" << endl;
    DrinkComponent *espressoWithWhip = new WhipDecorator(new EspressoComponent());
    espressoWithWhip->serveDrink();

    cout << "**HOUSE BLEND WITH SOY MILK" << endl;
    DrinkComponent *houseBlendWithSoyMilk = new SoyDecorator(new HouseBlendComponent());
    houseBlendWithSoyMilk->serveDrink();
    return 0;
}
