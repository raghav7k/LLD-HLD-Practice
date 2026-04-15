#pragma once

#include "../TrafficLightState.h"
using namespace std;

class GreenState : public TrafficLightState {
public:
    string getColor() override;
    void next(TrafficLightContext *context) override;
};
