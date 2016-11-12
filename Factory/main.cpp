#include <iostream>
#include "PizzaFactory.h"
using namespace std;

int main(){
    cout << "*NY PIZZA" << endl;

    Factory *nyPizza = new NYFactory;
    nyPizza->choosePizza()->createPizza();

    cout << endl;
    
    cout << "*CHICAGO PIZZA" << endl;

    Factory *chicagoPizza = new ChicagoFactory;
    chicagoPizza->choosePizza()->createPizza();

    cout << endl;

    return 0;
}
