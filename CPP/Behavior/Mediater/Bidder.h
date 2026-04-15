#pragma once

#include <string>

class AuctionMediater;
using namespace std;

class Bidder{
    string name;
    AuctionMediater *mediater;
    public:
        Bidder(AuctionMediater *mediater, string name);
        void placeBid(int amount);
        void receiveBid(string name, int amount);
        string getName();

};
