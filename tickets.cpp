#include "Tickets.hpp"

// this will be used to create a ticket object
Tickets::Tickets(int ticketID, string concertGroup, string ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person) :
    ticketID(ticketID), concertGroup(concertGroup), ticketPrice(ticketPrice), timeHour(timeHour), ticketColor(ticketColor), ticketStatus(ticketStatus), seat(seat), person(person) {
    }

void Tickets::setTicketID(int ticketID) {
    this->ticketID = ticketID;
}

int Tickets::getTicketID() {
    return ticketID;
}

void Tickets::setConcertGroup(string concertGroup) {
    this->concertGroup = concertGroup;
}

string Tickets::getConcertGroup() {
    return concertGroup;
}

void Tickets::setTicketPrice(string ticketPrice) {
    this->ticketPrice = ticketPrice;
}

string Tickets::getTicketPrice() {
    return ticketPrice;
}

void Tickets::setTimeHour(string timeHour) {
    this->timeHour = timeHour;
}

string Tickets::getTimeHour() {
    return timeHour;
}

void Tickets::setTicketColor(string ticketColor) {
    this->ticketColor = ticketColor;
}

string Tickets::getTicketColor() {
    return ticketColor;
}

void Tickets::setTicketStatus(string ticketStatus) {
    this->ticketStatus = ticketStatus;
}

string Tickets::getTicketStatus() {
    return ticketStatus;
}

void Tickets::setSeat(int seat) {
    this->seat = seat;
}

int Tickets::getSeat() {
    return seat;
}

string Tickets::getPerson() {
    return person;
}

void Tickets::setPerson(string person) {
    this->person = person;
}

void Tickets::printTicket() {
    cout << "Ticket ID: " << ticketID << endl;
    cout << "Concert Group: " << concertGroup << endl;
    cout << "Ticket Price: " << ticketPrice << endl;
    cout << "Time Hour: " << timeHour << endl;
    cout << "Ticket Color: " << ticketColor << endl;
    cout << "Ticket Status: " << ticketStatus << endl;
    cout << "Seat: " << seat << endl;
    cout << "Person: " << person << endl;
}








