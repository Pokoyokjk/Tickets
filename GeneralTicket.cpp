#include <iostream>
#include "GeneralTicket.hpp"

GeneralTicket::GeneralTicket(int ticketID, string concertGroup, string ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, bool withSeat):
Tickets(int ticketID, string concertGroup, string ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person), withSeat(withSeat) {
}

bool GeneralTicket::getWithSeat() {
    return withSeat;
}

void GeneralTicket::setWithSeat(bool withSeat) {
    this->withSeat = withSeat;
}
