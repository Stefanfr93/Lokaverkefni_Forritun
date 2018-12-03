//
//  Bookings.h
//  Lokaverkefni
//
//  Created by Stefán Freyr Smárason
//  Copyright © 2018 Stefán Freyr Smárason. All rights reserved.
//

#ifndef BOOKINGS_H
#define BOOKINGS_H
#include "Booking.h"


struct Bookings
{
    public:
        Bookings(): next(NULL){}
        Booking *data;
        Bookings *next;

    protected:

    private:
};

#endif // BOOKINGS_H
