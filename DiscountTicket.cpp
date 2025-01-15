#include <iostream>
#include "DiscountTicket.h"

DiscountTicket::DiscountTicket(int ticketID, string concertGroup, string ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person,string discountType, string isDiscounted) : 
Ticket(int ticketID, string concertGroup, string ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person), discountType(discountType), isDiscounted(isDiscounted) {
}

string DiscountTicket::getDiscountType() {
    return discountType;
}

void DiscountTicket::setDiscountType(string discountType) {
    this->discountType = discountType;
}

string DiscountTicket::getIsDiscounted() {
    return isDiscounted;
}

void DiscountTicket::setIsDiscounted(string isDiscounted) {
    this->isDiscounted = isDiscounted;
}

