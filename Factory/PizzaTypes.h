#ifndef PIZZA_TYPES_H
#define PIZZA_TYPES_H
#include "Pizza.h"
#include <iostream>
using namespace std;

class NewYorkPizza : public Pizza{
    public:
        void createPizza();
};

void NewYorkPizza::createPizza(){
    cout << "[NEW YORK PIZZA]" << endl;
    cout << "   Creating New York Style Pizza..." << endl;
    cout << "   Adding thin crust..." << endl;
    cout << "   Adding tasty sauce..." << endl;
    cout << "   Adding just a little cheese..." << endl;
}


class ChicagoPizza : public Pizza{
    public:
        void createPizza();
};

void ChicagoPizza::createPizza(){
    cout << "[CHICAGO PIZZA]" << endl;
    cout << "   Creating Chicago Style Pizza..." << endl;
    cout << "   Adding thick crust..." << endl;
    cout << "   Adding rich sauce..." << endl;
    cout << "   Adding a lot of cheese..." << endl;
}

#endif