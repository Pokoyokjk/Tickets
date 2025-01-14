// superclass for ticket management system of a concert

#ifndef TICKETS_HPP_INCLUDED
#define TICKETS_HPP_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Tickets{
protected:
    int ticketID;
    string ticketType;
    string ticketPrice;
    string ticketStatus;
    string ticketColor;
public:
    Tickets(int ticketID, string ticketType, string ticketPrice, string ticketStatus, string ticketColor);
    
    void setTicketID(int ticketID);
    void setTicketType(string ticketType);
    void setTicketPrice(string ticketPrice);
    void setTicketStatus(string ticketStatus);
    void setTicketColor(string ticketColor);

    int getTicketID() const;
    string getTicketType() const;
    string getTicketPrice() const;
    string getTicketStatus() const;
    string getTicketColor() const;

    void print() const;

    

};

#endif // TICKETS_HPP_INCLUDED
