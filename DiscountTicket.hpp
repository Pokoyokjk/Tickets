#ifndef DISCOUNTTICKET_HPP
#define DISCOUNTTICKET_HPP

#include "Ticket.hpp"

class DiscountTicket : public Ticket {
    string discountType;
    int isDiscounted;

public:
    DiscountTicket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, string discountType, int isDiscounted);

    string getDiscountType();
    void setDiscountType(string discountType);

    bool getIsDiscounted();
    void setIsDiscounted();

    // override method of  Ticket class setTicketPrice
    void setTicketPrice() override;


};

#endif // DISCOUNTTICKET_HPP