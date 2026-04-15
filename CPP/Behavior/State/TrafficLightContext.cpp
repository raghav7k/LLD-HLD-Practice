#include "TrafficLightContext.h"

#include "ConcreteState/RedState.h"
#include "TrafficLightState.h"

TrafficLightContext::TrafficLightContext() : currentState(new RedState()) {}

TrafficLightContext::~TrafficLightContext() {
    delete currentState;
}

void TrafficLightContext::setState(TrafficLightState *state) {
    delete currentState;
    currentState = state;
}

void TrafficLightContext::nextLight() {
    currentState->next(this);
}

void TrafficLightContext::getColor() {
    currentState->getColor();
}
