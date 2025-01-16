#include <iostream>
#include "GeneralTicket.hpp"




GeneralTicket::GeneralTicket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, bool withSeat):
Tickets(ticketID, concertGroup, ticketPrice, timeHour, ticketColor, ticketStatus, seat, person), withSeat(withSeat) {
}


bool GeneralTicket::getWithSeat() {
    return withSeat;
}

void GeneralTicket::setWithSeat(bool withSeat) {
    this->withSeat = withSeat;
    if (!withSeat) {
        this->setSeat(0);
        cout << "This ticket does not include a seat" << endl;
    }
}
