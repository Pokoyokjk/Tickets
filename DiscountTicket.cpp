#include <iostream>
#include "DiscountTicket.hpp"

DiscountTicket::DiscountTicket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person,string discountType, int isDiscounted) : 
Ticket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person), discountType(discountType), isDiscounted(isDiscounted) {
}

string DiscountTicket::getDiscountType() {
    return discountType;
}

void DiscountTicket::setDiscountType(string discountType) {
    this->discountType = discountType;
}

int DiscountTicket::getIsDiscounted() {
    return isDiscounted;
}

void DiscountTicket::setIsDiscounted() {
    if (discountType == "Big family") {
        this->isDiscounted = 40;
    } else if (discountType == "Student") {
        this->isDiscounted = 30;
    } else if (discountType == "Handycapped") {
        this->isDiscounted = 60;
    } else {
        this->isDiscounted = 0;
    }
}

// now I want to override the method setTicketPrice() from the parent class Ticket, if isDiscounted is greater than 0, the ticketPrice will be discounted
// if not, it will be the same as the parent class Ticket
void DiscountTicket::setTicketPrice() {
    if (isDiscounted > 0) {
        this->ticketPrice = ticketPrice - (ticketPrice * isDiscounted / 100);
    } else {
        this->ticketPrice = ticketPrice;
    }
    return ticketPrice;
}


