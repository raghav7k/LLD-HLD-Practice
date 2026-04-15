#include "ExtendedAuctionHouse.h"
#include<iostream>
using namespace std;

ExtendedAuctionHouse::ExtendedAuctionHouse(int endTime){
    biddingEndTime = endTime;
}

void ExtendedAuctionHouse::placeBid(Bidder *bidder, int amount){
    int currentTime = 500;
    if ( biddingEndTime < currentTime) {
        cout<<"Bidding cant be done at this time"<<endl;
        return;
    }

    AuctionHouse:: placeBid(bidder, amount);
}