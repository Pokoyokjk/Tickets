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
    cout << "The name of the band is: " << gt1.getConcertGroup() << endl;
    cout << "The ticket includes a seat: " << gt1.getWithSeat() << endl;
    
    //now lets create another General icket in which we ask in the command line to set the values
    cout << "-----------------" << endl;
    GeneralTicket gt2 (0, "", 0, "", "", "", 0, "", false);
    int ticketID;
    cout << "Please enter the ticket ID: ";
    cin >> ticketID;
    gt2.setTicketID(ticketID);

    string concertGroup;
    cout << "Please enter the concert group: ";
    cin >> concertGroup;
    gt2.setConcertGroup(concertGroup);

    int ticketPrice;
    cout << "Please enter the ticket price: ";
    cin >> ticketPrice;
    gt2.setTicketPrice(ticketPrice);

    string timeHour;
    cout << "Please enter the time of the concert: ";
    cin >> timeHour;
    gt2.setTimeHour(timeHour);

    string ticketColor;
    cout << "Please enter the ticket color: ";
    cin >> ticketColor;
    gt2.setTicketColor(ticketColor);

    string ticketStatus;
    cout << "Please enter the ticket status: ";
    cin >> ticketStatus;
    gt2.setTicketStatus(ticketStatus);

    string person;
    cout << "Please enter the tickets's purchaser: ";
    cin >> person;
    gt2.setPerson(person);

    bool withSeat;
    cout << "Please enter if the ticket includes a seat (1 for yes, 0 for no): ";
    cin >> withSeat;
    gt2.setWithSeat(withSeat);
    gt2.printTicket();

}