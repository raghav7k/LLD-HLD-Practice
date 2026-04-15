#include "Bidder.h"
#include "ExtendedAuctionHouse.h"
int main() {
    AuctionMediater *mediater = new ExtendedAuctionHouse(1000);
    Bidder *bidder1 = new Bidder(mediater, "Raghav");
    Bidder *bidder2 = new Bidder(mediater, "Pragya");
    mediater->registerBidder(bidder1);
    mediater->registerBidder(bidder2);
    bidder1->placeBid(20);
}