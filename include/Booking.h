//
//  Bookings.h
//  Lokaverkefni C++ 2018
//
//  Created by Stef�n Freyr Sm�rason
//  Copyright � 2018 Stef�n Freyr Sm�rason. All rights reserved.
//

#ifndef BOOKING_H
#define BOOKING_H
#include <iostream>
#include <string>
using namespace std;

class Booking // Upprunulegi klasinn sem hinir erfa fr�
{
    public:
        int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; // Daga fj�ldi � hverjum m�nudi fyrir sig
        string BookingNr;
        int BookingDay;
        int BookingMonth;
        string Name;
        int Price;
        string DepartureStation;
        string ArrivalStation;
        string Duration;
    
        Booking(): BookingNr(""), BookingDay(NULL), BookingMonth(NULL), Name(""),Price(NULL),DepartureStation(""),ArrivalStation(""),Duration(""){}//Constructor
    
        void Inputs()//Tekur inn g�gn sem notandinn skrifar inn.
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
        void Month()// Spyr notendann um m�nud og athugar hvort hann s� til
        {
            cout << "Month of Booking(1-12): ";
            cin >> BookingMonth;
            if(BookingMonth > 12 || BookingMonth < 1)
            {
                cout << "That month does not exist" << endl;
                Month();
            }

        }
        void Day() // Spyr notendann um daginn og athugar hvort hann se til � m�nudinum.
        {
            cout << "Day of Booking(1-31): ";
            cin >> BookingDay;
            if(BookingDay > days[BookingMonth-1])
            {
                cout << "That day does not exist in the that month" << endl;
                Day();
            }
        }
        virtual void print() const = 0;// Prentar �t allar upplysingarnar sem eru � b�kuninni.

    protected:

    private:
};

#endif // BOOKING_H
