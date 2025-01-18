#include <iostream>
#include "GeneralTicket.hpp"




GeneralTicket::GeneralTicket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, int seat, string person, bool withSeat):
Tickets(ticketID, concertGroup, ticketPrice, timeHour, ticketColor, seat, person), withSeat(withSeat) {
}


string GeneralTicket::getWithSeat() {
    if (withSeat) {
        return "Yes";
    } else {
        return "No";
    }
}


void GeneralTicket::setWithSeat(bool withSeat) {
    this->withSeat = withSeat;
    if (!withSeat) {
        // If the ticket does not include a seat, set the seat to 0
        this->seat = 0;
        cout << "This ticket does not include a seat" << endl;
    }
}
