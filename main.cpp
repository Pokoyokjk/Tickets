#include <iostream>
#include <string>

#include "GeneralTicket.hpp"
#include "VIPTicket.hpp"
#include "DiscountTicket.hpp"

using namespace std;

int main()  {


    cout << "-----------------" << endl;
    // (int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, bool withSeat)
    //for a General ticket, me setting the values
    GeneralTicket gt1(0, "Extremoduro", 100, "20:00, 12/12/2021", "Red", "Available", 1, "Gloria", true);
    gt1.setTicketID();

    cout << "The name of the band is: " << gt1.getConcertGroup() << endl;
    cout << "The ticket includes a seat: " << gt1.getWithSeat() << endl;
    gt1.printTicket();

    
    //now lets create another General ticket in which we ask in the command line to set the values
    cout << "-----------------" << endl;
    GeneralTicket gt2 (0, "", 0, "", "", "", 0, "", false);
    
    gt2.setTicketID();

    string concertGroup;
    cout << "Please enter the concert group: ";
    getline(cin >> ws, concertGroup);
    gt2.setConcertGroup(concertGroup);

    int ticketPrice;
    cout << "Please enter the ticket price: ";
    cin >> ticketPrice;
    gt2.setTicketPrice(ticketPrice);

    string timeHour;
    cout << "Please enter the time and day of the concert: ";
    getline(cin >> ws, timeHour);
    gt2.setTimeHour(timeHour);

    string ticketColor;
    cout << "Please enter the ticket color: ";
    cin >> ticketColor;
    gt2.setTicketColor(ticketColor);

    string ticketStatus;
    cout << "Please enter the ticket status (available, not available): ";
    cin >> ticketStatus;
    gt2.setTicketStatus(ticketStatus);

    string person;
    cout << "Please enter the tickets's purchaser: ";
    getline(cin >> ws, person);
    gt2.setPerson(person);

    bool withSeat;
    cout << "Please enter if the ticket includes a seat (1 for yes, 0 for no): ";
    cin >> withSeat;
    gt2.setWithSeat(withSeat);

    if (gt2.getWithSeat() == 1) {
        int seat;
        cout << "Please enter the seat number: ";
        cin >> seat;
        gt2.setSeat(seat);
    }

    gt2.printTicket();



// Let's create a VIP ticket
    cout << "-----------------" << endl;
    // (int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, string ticketStatus, 
    // int seat, string person, bool backStagePass, bool meetAndGreet, bool foodAndDrink)
    //for a VIP ticket, me setting the values
    VIPTicket vt1(00222, "Extremoduro", 200, "20:00, 12/12/2021", "Pink", "Available", 1, "Rodrigo", true, true, true);
    cout << "The name purchaser's name is: " << vt1.getPerson() << endl;

    //now lets create another VIP ticket in which we ask in the command line to set some values
    cout << "-----------------" << endl;
    VIPTicket vt2 (0, "", 0, "", "", "", 0, "", false, false, false);
    int ticketID;
    cout << "Please enter the ticket ID: ";
    cin >> ticketID;
    vt2.setTicketID();

}


