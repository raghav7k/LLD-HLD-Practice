#pragma once

#include "AuctionMediater.h"
#include<vector>
#include "Bidder.h"
using namespace std;

class AuctionHouse : public AuctionMediater {
    vector<Bidder *> bidders;

    public:
    void registerBidder(Bidder *bidder) override;

    void placeBid(Bidder *bidder, int amount) override;
};
