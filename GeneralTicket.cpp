#include <iostream>
#include "GeneralTicket.hpp"

GeneralTicket::GeneralTicket(int ticketID, string concertGroup, string ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, bool isGeneral, bool withSeat):
Tickets(int ticketID, string concertGroup, string ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person), isGeneral(isGeneral), withSeat(withSeat) {
}

bool GeneralTicket::getIsGeneral() {
    return isGeneral;
}

bool GeneralTicket::getWithSeat() {
    return withSeat;
}

void GeneralTicket::setIsGeneral(bool isGeneral) {
    this->isGeneral = isGeneral;
}

void GeneralTicket::setWithSeat(bool withSeat) {
    this->withSeat = withSeat;
}
