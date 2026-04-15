#include "Beverage.h"

class Tea : public Beverage {
    void brew() override ;

    void addCondiments() override;
};