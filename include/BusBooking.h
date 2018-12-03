//
//  BusBooking.h
//  Lokaverkefni C++ 2018
//
//  Created by Stef‡n Freyr Sm‡rason
//  Copyright © 2018 Stef‡n Freyr Sm‡rason. All rights reserved.
//

#ifndef BUSBOOKING_H
#define BUSBOOKING_H
#include "Booking.h"
#include <string>
using namespace std;


class BusBooking : public Booking // Bus klasi sem erfir fr‡ Booking Klasanum
{
    public:
        string BusNumber;
        BusBooking():BusNumber(""){}
        void BusInput()
        {
            cout << "Bus Number: ";
            cin >> BusNumber;
            Inputs();
        }
        void print() const
        {
            cout << "BookingNumber: " << BookingNr << endl << "Name: " << Name << endl << "Date: " << BookingDay << "/" << BookingMonth << endl << "Bus Number: " << BusNumber << endl<< DepartureStation << " - " << ArrivalStation << endl << "Duration: " << Duration << endl << "Price: " << Price << "$" <<endl;
        }
    protected:

    private:
};

#endif // BUSBOOKING_H
