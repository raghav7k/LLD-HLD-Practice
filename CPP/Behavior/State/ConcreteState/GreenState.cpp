#include <iostream>
#include <string>

#include "../TrafficLightContext.h"
#include "GreenState.h"
#include "RedState.h"
using namespace std;

string GreenState::getColor() {
    return "Green";
}

void GreenState::next(TrafficLightContext *context) {
    cout << "Green light" <<endl;
    context->setState(new RedState());
}
