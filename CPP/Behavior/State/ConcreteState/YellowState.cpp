#include <iostream>
#include <string>

#include "../TrafficLightContext.h"
#include "GreenState.h"
#include "YellowState.h"
using namespace std;

string YellowState::getColor() {
    return "Yellow";
}

void YellowState::next(TrafficLightContext *context) {
    cout << "Yellow light" << endl;
    context->setState(new GreenState());
}
