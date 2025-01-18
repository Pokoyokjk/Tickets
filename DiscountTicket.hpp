#ifndef DISCOUNTTICKET_HPP
#define DISCOUNTTICKET_HPP

#include "Tickets.hpp"

class DiscountTicket : public Tickets {
    string discountType;
    int isDiscounted;

public:
    DiscountTicket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, int seat, string person, string discountType, int isDiscounted, int finalPrice);

    string getDiscountType();
    void setDiscountType(string discountType);

    int getIsDiscounted();
    void setIsDiscounted();

    void SetFinalPrice();
    void printTicket();


};

#endif // DISCOUNTTICKET_HPP