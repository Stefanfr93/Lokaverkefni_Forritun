//
//  List.h
//  Lokaverkefni C++ 2018
//
//  Created by Stef‡n Freyr Sm‡rason
//  Copyright © 2018 Stef‡n Freyr Sm‡rason. All rights reserved.
//

#ifndef LIST_H
#define LIST_H
#include "Bookings.h"
#include "FlightBookings.h"
#include "BusBooking.h"
#include "BoatBookings.h"


class List
{
    public:
        List() // Constructor
        {
        head = NULL;
        }
    
        virtual ~List() // Destructor
        {
            clear();
        }

        void clear() // clears the linked list.
        {
            Bookings *temp = head;
            while(head != NULL)
            {
                head = head->next;
                delete temp;
                temp = head;
            }
        }
    
        void add(Booking *Book) // B¾ti b—kun vid listann
        {
            Bookings *temp = new Bookings;
            temp->data = Book;
            temp->next = NULL;
            if(head == NULL)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = tail->next;
            }
        }
    
        void add(FlightBookings *Book) // B¾ti b—kun vid listann
        {
            Bookings *temp = new Bookings;
            temp->data = Book;
            temp->next = NULL;
            if(head == NULL)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = tail->next;
            }
        }
        void add(BoatBookings *Book)//B¾ti b—kun vid listann
        {
            Bookings *temp = new Bookings;
            temp->data = Book;
            temp->next = NULL;
            if(head == NULL)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = tail->next;
            }
        }
        void print()//Prentar œt allan listann
        {
            if(head == NULL)
            {
                cout << "List is empty" << endl;
            }
            else
            {
                Bookings *temp;
                temp = head;
                while(temp != NULL)
                {
                    temp->data->print();
                    temp = temp->next;
                }
            }
        }
    protected:

    private:
        Bookings *head;
        Bookings *tail;
};

#endif // LIST_H
