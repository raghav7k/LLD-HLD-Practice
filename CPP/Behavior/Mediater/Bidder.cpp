#include "Bidder.h"
#include "AuctionMediater.h"

#include <iostream>
#include <string>
using namespace std;

    Bidder:: Bidder(AuctionMediater *m, string bidderName) {
                name = bidderName;
                mediater = m;
    }

  

    void Bidder:: placeBid(int amount) {
        mediater->placeBid(this, amount);
    }

    void Bidder:: receiveBid(string name, int amount) {
        cout<<"Bid has been made by "<<name<<" of amount "<<amount<<endl;
    }

    string Bidder::getName()
    {
        return name;
    }
