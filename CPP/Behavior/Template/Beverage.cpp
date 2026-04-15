
#include<iostream>
#include "Beverage.h"
using namespace std;


    void Beverage::prepare() {
        boil();
        brew();
        addCondiments();
        pour();
    }
    void Beverage::boil(){
        cout<<"Boiling the water"<<endl;
    }
    void Beverage:: pour() {
        cout<<"Pouring the beverage to glass"<<endl;
    }
