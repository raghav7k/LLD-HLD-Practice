
#include<iostream>
#pragma once
class Beverage {
    public:
    void prepare();
    void boil();
    void pour();
    virtual void brew() = 0;
    virtual void addCondiments() =0;
};