#include <iostream>
#include "DecafComponent.h"
#include "MilkDecorator.h"
#include "DrinkComponent.h"
using namespace std;

int main(){
    DecafComponent decafDrink;
    DrinkComponent *decafWithMilk = new MilkDecorator(new DecafComponent());

    cout << "*Normal decaf" << endl;
    decafDrink.serveDrink();

    cout << "*Decaf With milk" << endl;
    decafWithMilk->serveDrink();
    return 0;
}
