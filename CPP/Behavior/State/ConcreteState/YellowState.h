#pragma once

#include "../TrafficLightState.h"

class YellowState : public TrafficLightState {
public:
    std::string getColor() override;
    void next(TrafficLightContext *context) override;
};
