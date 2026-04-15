#include "AuctionHouse.h"
#include<algorithm>
#include<vector>
#include "Bidder.h"
using namespace std;

void AuctionHouse :: registerBidder(Bidder *bidder) {
        bidders.push_back(bidder);
    }

    void AuctionHouse :: placeBid(Bidder *bidder, int amount)  {
        for ( Bidder *x: bidders) {
            if ( x != bidder) {
                x->receiveBid(bidder->getName(), amount);
            }
        }
    }
