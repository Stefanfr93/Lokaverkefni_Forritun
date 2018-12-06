//
//  List.h
//  Lokaverkefni C++ 2018
//
//  Created by Stef�n Freyr Sm�rason
//  Copyright � 2018 Stef�n Freyr Sm�rason. All rights reserved.
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
        List() // Constructor for list of bookings
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

        void add(Booking *Book) // Tek inn nýja bókun sem notandinn bjó til
        {
            Bookings *temp = new Bookings; // Temp Listi Booking sem er notað til að setja inní listann
            temp->data = Book; // Hér setjum við inní temp inntakið frá notendanum
            temp->next = NULL; // Inntakið endar aftast í temp og því verður ekkert next (Ef þetta er ekki þá kemur villa við prentum, fann þetta á netinu sem lausn á prentunar vandamáli)
            if(head == NULL) // Ef listinn er tómur þá er nýja inntakið bæði fremst og aftast í listanum
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp; // Þetta er gamla aftasta stakið í listanum, látum það benda á nýja aftasta stakið
                tail = tail->next; // setjum nýja stakið sem við vorum að búa til aftast í listann
            }
        }

        void add(FlightBookings *Book) // B�ti b�kun vid listann
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
        void add(BoatBookings *Book)//Bæti bókun vid listann
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
        void print()//Prentar út allan listann
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
