#pragma once

#include <string>
using namespace std;

class TrafficLightContext;

class TrafficLightState {
public:
    virtual ~TrafficLightState() = default;

    virtual void next(TrafficLightContext *context) = 0;
    virtual string getColor() = 0;
};
