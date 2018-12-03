//
//  FlightBookings.h
//  Lokaverkefni C++ 2018
//
//  Created by Stef‡n Freyr Sm‡rason
//  Copyright © 2018 Stef‡n Freyr Sm‡rason. All rights reserved.
//

#ifndef FLIGHTBOOKINGS_H
#define FLIGHTBOOKINGS_H
#include "Booking.h"
#include <string>

using namespace std;

class FlightBookings : public Booking // Flight klasi sem erfir fr‡ Booking Klasanum
{
    public:
        string Airline;
        string gate;
        FlightBookings(): Airline(""){}
        void FlightInputs()
        {
            cout << "Airline: ";
            cin >> Airline;
            cout << "Gate: ";
            cin >> gate;
            Inputs();
        }
        void print() const
        {
            cout << "BookingNumber: " << BookingNr << endl << "Name: " << Name << endl << "Date: " << BookingDay << "/" << BookingMonth << endl << "Airline: " << Airline << endl << "Gate: " << gate << endl << DepartureStation << " - " << ArrivalStation << endl << "Duration: " << Duration << endl << "Price: " << Price << "$" <<endl;
        }

    protected:

    private:
};

#endif // FLIGHTBOOKINGS_H
