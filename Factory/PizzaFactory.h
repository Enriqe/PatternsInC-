#ifndef PIZZA_FACTORY_H
#define PIZZA_FACTORY_H
#include "Pizza.h"
#include "PizzaTypes.h"

class Factory{
    public:
        virtual Pizza* choosePizza() = 0;
};

class NYFactory : public Factory{
    public:
        Pizza* choosePizza(){ return new NewYorkPizza; }
};

class ChicagoFactory : public Factory{
    public:
        Pizza* choosePizza(){ return new ChicagoPizza; }
};

#endif