#include <iostream>
#include <string>
#include "../TrafficLightContext.h"
#include "RedState.h"
#include "YellowState.h"

void RedState::next(TrafficLightContext *context) {
    cout << "Red light" << endl;
    context->setState(new YellowState());
}

string RedState::getColor()
{
    return "red";
}
