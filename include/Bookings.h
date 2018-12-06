//
//  Bookings.h
//  Lokaverkefni C++ 2018
//
//  Created by Stefán Freyr Smárason
//  Copyright © 2018 Stefán Freyr Smárason. All rights reserved.
//

#ifndef BOOKINGS_H
#define BOOKINGS_H
#include "Booking.h"


class Bookings
{
    public:
        Bookings(): next(NULL){}
        Booking *data; // gögn í núverandi nóðu í listanum
        Bookings *next; // Næsta nóðan í listanum sem þessi nóða bendir á

    protected:

    private:
};

#endif // BOOKINGS_H
