#include <iostream>
#include "DiscountTicket.hpp"

DiscountTicket::DiscountTicket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, int seat, string person,string discountType, int isDiscounted, int finalPrice) : 
Tickets(ticketID, concertGroup, ticketPrice, timeHour, ticketColor, seat, person), discountType(discountType), isDiscounted(isDiscounted), finalPrice(finalPrice) {
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
        cout << "No discount available for this ticket" << endl;
    }
}

// If isDiscounted is greater than 0, the ticketPrice will be discounted
// if not, it will be the same as the parent class Ticket
void DiscountTicket::setFinalPrice() {
    if (isDiscounted > 0) {
        this->finalPrice = ticketPrice - (ticketPrice * isDiscounted / 100);
    } else {
        this->finalPrice = ticketPrice;
    }
}

void DiscountTicket::printTicket() {
    cout << "Ticket ID: " << ticketID << endl;
    cout << "Concert Group: " << concertGroup << endl;
    cout << "Ticket Price: " << ticketPrice << endl;
    cout << "Time Hour: " << timeHour << endl;
    cout << "Ticket Color: " << ticketColor << endl;
    cout << "Seat: " << seat << endl;
    cout << "Person: " << person << endl;
    cout << "Discount Type: " << discountType << endl;
    cout << "Is Discounted: " << isDiscounted << "%" << endl;
    cout << "Final Price: " << finalPrice << endl;
}


