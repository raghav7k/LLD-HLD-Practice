#pragma once

#include "Bidder.h"
#include "AuctionHouse.h"

class ExtendedAuctionHouse : public AuctionHouse {
    int biddingEndTime;
    public:
        ExtendedAuctionHouse(int endTime);
        void placeBid(Bidder *bidder, int amount) override;
};