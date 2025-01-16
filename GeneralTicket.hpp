#ifndef GENERALTICKET_HPP
#define GENERALTICKET_HPP

#include "Ticket.hpp"

// Here, we are calling to the Ticket class to inherit from it
class GeneralTicket : public Ticket {
    bool withSeat;

public:
    // Constructor
    GeneralTicket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, bool withSeat);

    bool getWithSeat() const;
    void setWithSeat(bool withSeat);

};


#endif

