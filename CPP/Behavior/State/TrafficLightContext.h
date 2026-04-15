#pragma once

#include "TrafficLightState.h"
//class TrafficLightState;

class TrafficLightContext {
    TrafficLightState *currentState;

public:
    TrafficLightContext();
    ~TrafficLightContext();

    void setState(TrafficLightState *state);
    void nextLight();
    void getColor();
};
