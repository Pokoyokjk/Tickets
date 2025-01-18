// superclass for ticket management system of a concert

#ifndef TICKETS_HPP_INCLUDED
#define TICKETS_HPP_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Tickets{
protected:
    int ticketID;
    string concertGroup;
    int ticketPrice;
    string timeHour;
    string ticketColor;
    int seat;
    string person;
public:
    Tickets(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, int seat, string person);

    void setTicketID();
    void setConcertGroup(string concertGroup);
    void setTicketPrice(int ticketPrice);
    void setTimeHour(string timeHour);
    void setTicketColor(string ticketColor);
    void setSeat(int seat);
    void setPerson(string person);

    int getTicketID();
    string getConcertGroup();
    int getTicketPrice();
    string getTimeHour();
    string getTicketColor();
    int getSeat();
    string getPerson();

    void printTicket();

    

};

#endif // TICKETS_HPP_INCLUDED
