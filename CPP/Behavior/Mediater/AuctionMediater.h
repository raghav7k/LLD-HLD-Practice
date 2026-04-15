#pragma once

class Bidder;

class AuctionMediater {
    public:
        AuctionMediater() = default;
        ~AuctionMediater() = default;
        virtual void registerBidder(Bidder *bidder)=0;
        virtual void placeBid(Bidder *bidder, int amount) = 0;
};
