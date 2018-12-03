//
//  Bookings.h
//  Lokaverkefni C++ 2018
//
//  Created by Stefán Freyr Smárason
//  Copyright © 2018 Stefán Freyr Smárason. All rights reserved.
//

#ifndef BOOKING_H
#define BOOKING_H
#include <iostream>
#include <string>
using namespace std;

class Booking // Upprunulegi klasinn sem hinir erfa frá
{
    public:
        int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; // Daga fjöldi í hverjum mánudi fyrir sig
        string BookingNr;
        int BookingDay;
        int BookingMonth;
        string Name;
        int Price;
        string DepartureStation;
        string ArrivalStation;
        string Duration;
    
        Booking(): BookingNr(""), BookingDay(NULL), BookingMonth(NULL), Name(""),Price(NULL),DepartureStation(""),ArrivalStation(""),Duration(""){}//Constructor
    
        void Inputs()//Tekur inn gögn sem notandinn skrifar inn.
        {
            cout << "Booking Number: ";
            cin >> BookingNr;
            Month();
            Day();
            cout << "First Name(no spaces): ";
            cin >> Name;
            cout << "Price: ";
            cin >> Price;
            cout << "Departure Station: ";
            cin >> DepartureStation;
            cout << "Arrival Station: ";
            cin >> ArrivalStation;
            cout << "Duration(#:##): ";
            cin >> Duration;
        }
        void Month()// Spyr notendann um mánud og athugar hvort hann sé til
        {
            cout << "Month of Booking(1-12): ";
            cin >> BookingMonth;
            if(BookingMonth > 12 || BookingMonth < 1)
            {
                cout << "That month does not exist" << endl;
                Month();
            }

        }
        void Day() // Spyr notendann um daginn og athugar hvort hann se til í mánudinum.
        {
            cout << "Day of Booking(1-31): ";
            cin >> BookingDay;
            if(BookingDay > days[BookingMonth-1])
            {
                cout << "That day does not exist in the that month" << endl;
                Day();
            }
        }
        virtual void print() const = 0;// Prentar út allar upplysingarnar sem eru í bókuninni.

    protected:

    private:
};

#endif // BOOKING_H
