//
//  BoatBookings.h
//  Lokaverkefni C++ 2018
//
//  Created by Stef‡n Freyr Sm‡rason
//  Copyright © 2018 Stef‡n Freyr Sm‡rason. All rights reserved.
//

#ifndef BOATBOOKINGS_H
#define BOATBOOKINGS_H
#include <iostream>
#include "Booking.h"

using namespace std;


class BoatBookings : public Booking // Boat klasi sem erfir fr‡ Booking Klasanum
{
    public:
        string BoatName;
        BoatBookings(){};
        void BoatInput()
        {
            cout << "Boat Name(No spaces): ";
            cin >> BoatName;
            Inputs();
        }
        void print() const
        {
            cout << "BookingNumber: " << BookingNr << endl << "Name: " << Name << endl << "Date: " << BookingDay << "/" << BookingMonth << endl << "Boat Name: " << BoatName << endl<< DepartureStation << " - " << ArrivalStation << endl << "Duration: " << Duration << endl << "Price: " << Price << "$" <<endl;
        }
    protected:

    private:
};

#endif // BOATBOOKINGS_H
