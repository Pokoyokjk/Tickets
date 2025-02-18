#ifndef GENERALTICKET_HPP
#define GENERALTICKET_HPP

#include "Tickets.hpp"

// Here, we are calling to the Ticket class to inherit from it
class GeneralTicket : public Tickets {
    bool withSeat;

public:
    // Constructor
    GeneralTicket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, int seat, string person, bool withSeat);

    string getWithSeat();
    void setWithSeat(bool withSeat);

};


#endif

