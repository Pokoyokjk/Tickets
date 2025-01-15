#ifndef DISCOUNTTICKET_HPP
#define DISCOUNTTICKET_HPP

#include "Ticket.hpp"

class DiscountTicket : public Ticket {
    string discountType;
    bool isDiscounted;

public:
    DiscountTicket(int ticketID, string concertGroup, string ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, string discountType, bool isDiscounted);

    string getDiscountType();
    void setDiscountType(string discountType);

    bool getIsDiscounted();
    void setIsDiscounted(bool isDiscounted);

};

#endif // DISCOUNTTICKET_HPP