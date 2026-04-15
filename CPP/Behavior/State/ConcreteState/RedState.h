#pragma once

#include "../TrafficLightState.h"

class RedState : public TrafficLightState {
public:
    string getColor() override;
    void next(TrafficLightContext *context) override;
};
