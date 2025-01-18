#include "Tickets.hpp"

// this will be used to create a ticket object
Tickets::Tickets(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, int seat, string person) :
    ticketID(ticketID), concertGroup(concertGroup), ticketPrice(ticketPrice), timeHour(timeHour), ticketColor(ticketColor), seat(seat), person(person) {
    }

// this method will just give a ticket ID to the ticket, it will be like a couter. The first ID=1, the second ID=2, and so on.
int i = 0;
void Tickets::setTicketID() {
    this->ticketID = i++;
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

void Tickets::setTicketPrice(int ticketPrice) {
    this->ticketPrice = ticketPrice;
}

int Tickets::getTicketPrice() {
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
    cout << "Time and Date: " << timeHour << endl;
    cout << "Ticket Color: " << ticketColor << endl;
    cout << "Seat: " << seat << endl;
    cout << "Person: " << person << endl;
}








