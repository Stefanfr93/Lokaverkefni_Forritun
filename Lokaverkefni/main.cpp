//
//  main.cpp
//  Lokaverkefni
//
//  Created by Stefán Freyr Smárason
//  Copyright © 2018 Stefán Freyr Smárason. All rights reserved.
//

#include <iostream>
#include "../include/List.h"
#include "../include/BusBooking.h"
#include "../include/FlightBookings.h"
#include "../include/BoatBookings.h"

using namespace std;

int main()
{
    List listinn;
    bool KeepRunning = true;
    int action = 0;
    char answer;
    bool ActionType = false;
    while(KeepRunning)
    {
        while(!ActionType)
        {
            cout << "What would you like to do" << endl << "1. View Bookings" << endl << "2. Add Bookings" << endl;// Spyr notandann hvort hann vilji bæta við eða skoða bókanirnar.
            cin >> action;
            if(action == 1 || action == 2)
            {
                ActionType = true;
            }
            else
            {
                cout << "incorrect Choice!" << endl;
            }
        }
        if(action == 2)
        {
            int Type = 0; // breaks?
            bool TypeTrue = false;
            while(!TypeTrue)
            {
                cout << "What type of booking would you like to book? Please pick 1.Bus, 2.Flight, 3.Boat" << endl; // Spyr notandann um hvernig týpu af bókun þetta mun vera.
                cin >> Type;
                if(Type == 1 || Type == 2 || Type == 3)// Ef hann velur eitt af 3 týpum fer hann úr while lykkjunni.
                {
                    TypeTrue = true;
                }
                else
                {
                    cout << "Incorrect Choice!" << endl;
                }
            }
            if(Type == 1)// Bus
            {
                BusBooking *busBooking = new BusBooking;
                busBooking->BusInput();
                listinn.add(busBooking);
            }
            else if(Type == 2) // Flight
            {
                FlightBookings *flightbooking = new FlightBookings;
                flightbooking->FlightInputs();
                listinn.add(flightbooking);
            }
            else // Boat
            {
                BoatBookings *boatbookings = new BoatBookings;
                boatbookings->BoatInput();
                listinn.add(boatbookings);
            }
        }
        else
        {
            listinn.print();
        }
        cout << "Would you like to do another action(y/n)?";
        cin >> answer;
        if(answer == 'n' || answer == 'N')
        {
            KeepRunning = false;
        }
        ActionType = false;
    }
    return 0;
}

