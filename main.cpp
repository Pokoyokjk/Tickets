#include <iostream>
#include <string>

#include "GeneralTicket.hpp"
#include "VIPTicket.hpp"
#include "DiscountTicket.hpp"

using namespace std;

int main()  {

    cout << "-----------------" << endl;
    // (int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, bool withSeat)
    GeneralTicket gt1(00001, "Extremoduro", 100, "20:00, 12/12/2021", "Red", "Available", 1, "Gloria", true);
    cout << gt1.toString() << endl;
}