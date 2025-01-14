#include "Tickets.hpp"
rttt

// this will be used to create a ticket object
Tickets::Tickets(int ticketID, string ticketType, string ticketPrice, string ticketStatus, string ticketColor) : ticketID(ticketID), ticketType(ticketType), ticketPrice(ticketPrice), ticketStatus(ticketStatus), ticketColor(ticketColor) {
}

void Tickets::setTicketID(int ticketID){
    this->ticketID = ticketID;
}

void Tickets::setTicketType(string ticketType){
    this->ticketType = ticketType;
}

void Tickets::setTicketPrice(string ticketPrice){
    this->ticketPrice = ticketPrice;
}

void Tickets::setTicketStatus(string ticketStatus){
    this->ticketStatus = ticketStatus;
}

void Tickets::setTicketColor(string ticketColor){
    this->ticketColor = ticketColor;
}

int Tickets::getTicketID() const{
    return this->ticketID;
}

string Tickets::getTicketType() const{
    return this->ticketType;
}

string Tickets::getTicketPrice() const{
    return this->ticketPrice;
}

string Tickets::getTicketStatus() const{
    return this->ticketStatus;
}

string Tickets::getTicketColor() const{
    return this->ticketColor;
}

void Tickets::print() const{
    cout << "Problem! Cannot describe ticket :(" << endl;
}



