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
    string ticketPrice;
    string timeHour;
    string ticketColor;
    string ticketStatus;
    int seat;
    string person;
public:
    Tickets(int ticketID, string concertGroup, string ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person);

    void setTicketID(int ticketID);
    void setConcertGroup(string concertGroup);
    void setTicketPrice(string ticketPrice);
    void setTimeHour(string timeHour);
    void setTicketColor(string ticketColor);
    void setTicketStatus(string ticketStatus);
    void setSeat(int seat);
    void setPerson(string person);

    int getTicketID() const;
    string getConcertGroup() const;
    string getTicketPrice() const;
    string getTimeHour() const;
    string getTicketColor() const;
    string getTicketStatus() const;
    int getSeat() const;
    string getPerson() const;

    void printTicket() const;

    

};

#endif // TICKETS_HPP_INCLUDED
