#include <iostream>
#include <string>

#include "GeneralTicket.hpp"
#include "VIPTicket.hpp"
#include "DiscountTicket.hpp"

using namespace std;

int main()  {


    cout << "----------------- General ticket 1 ----------------" << endl;
    // (int ticketID, string concertGroup, int ticketPrice, string timeDate, string ticketColor, int seat, string person, bool withSeat)
    //for a General ticket, me setting the values
    GeneralTicket gt1(0, "Extremoduro", 100, "20:00, 12/12/2021", "Red", 0, "Gloria", true);
    gt1.setTicketID();
    gt1.setSeat();

    cout << "The name of the band is: " << gt1.getConcertGroup() << endl;
    cout << "The ticket includes a seat: " << gt1.getWithSeat() << endl;
    gt1.printTicket();

    
    //now lets create another General ticket in which we ask in the command line to set the values
    cout << "----------------- General ticket 2 ----------------" << endl;
    GeneralTicket gt2 (0, "", 0, "", "", 0, "", false);
    
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
    cout << "Please enter the time and date of the concert: ";
    getline(cin >> ws, timeHour);
    gt2.setTimeHour(timeHour);

    string ticketColor;
    cout << "Please enter the ticket color (Red, Blue, Green, Yellow or Purple): ";
    cin >> ticketColor;
    gt2.setTicketColor(ticketColor);

    string person;
    cout << "Please enter the tickets's purchaser: ";
    getline(cin >> ws, person);
    gt2.setPerson(person);

    bool withSeat;
    cout << "Please enter if the ticket includes a seat (1 for yes, 0 for no): ";
    cin >> withSeat;
    gt2.setWithSeat(withSeat);


    if (gt2.getWithSeat() == "Yes") {
        gt2.setSeat();
    }

    gt2.printTicket();



// Let's create a VIP ticket
    cout << "----------------- VIP 1 ----------------" << endl;
    // (int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor,
    // int seat, string person, bool backStagePass, bool meetAndGreet, bool foodAndDrink)
    //for a VIP ticket, me setting the values
    VIPTicket vt1(0, "Extremoduro", 300, "20:00, 12/12/2021", "Blue", 2, "Rodrigo", true, true, true);
    vt1.setTicketID();
    cout << "The name purchaser's name is: " << vt1.getPerson() << endl;
    cout << "The ticket includes a meet and greet: " << vt1.getMeetAndGreet() << endl;

    //now lets create another VIP ticket in which we ask in the command line to set some values
    cout << "----------------- VIP ticket 2 ----------------" << endl;
    VIPTicket vt2 (0, "", 0, "", "", 0, "", false, false, false);
    vt2.setTicketID();
    cout << "Please enter the concert group: ";
    getline(cin >> ws, concertGroup);
    vt2.setConcertGroup(concertGroup);

    vt2.setSeat();

    cout << "Please enter the ticket price: ";
    cin >> ticketPrice;
    vt2.setTicketPrice(ticketPrice);

    cout << "Please enter the time and date of the concert: ";
    getline(cin >> ws, timeHour);
    vt2.setTimeHour(timeHour);

    cout << "Please enter the ticket color (Red, Blue, Green, Yellow or Purple): ";
    cin >> ticketColor;
    vt2.setTicketColor(ticketColor);


    cout << "Please enter the tickets's purchaser: ";
    getline(cin >> ws, person);
    vt2.setPerson(person);

    cout << "Please enter if the ticket includes backstage Pass (1 for yes, 0 for no): ";
    bool backStagePass;
    cin >> backStagePass;
    vt2.setBackStagePass(backStagePass);

    cout << "Please enter if the ticket includes meet and greet (1 for yes, 0 for no): ";
    bool meetAndGreet;
    cin >> meetAndGreet;
    vt2.setMeetAndGreet(meetAndGreet);

    cout << "Please enter if the ticket includes food and drink (1 for yes, 0 for no): ";
    bool foodAndDrink;
    cin >> foodAndDrink;
    vt2.setFoodAndDrink(foodAndDrink);

    vt2.printTicket();

// Let's create a DiscountTicket
    cout << "----------------- Discount ticket 1 ----------------" << endl;
    // (int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor,
    // int seat, string person, string discountType, int isDiscounted, int finalPrice)
    //for a Discount ticket, me setting the values
    DiscountTicket dt1(0, "Extremoduro", 200, "20:00, 12/12/2021", "Yellow", 6, "Gloria", "Student", 0, 0);
    dt1.setTicketID();
    dt1.setIsDiscounted();
    dt1.setFinalPrice();
    cout << "The discount type is: " << dt1.getDiscountType() << endl;
    cout << "The ticket is discounted: " << dt1.getIsDiscounted() << endl;
    cout << "The final price is: " << dt1.getFinalPrice() << endl;

    //now lets create another Discount ticket in which we ask in the command line to set some values
    cout << "----------------- Discount ticket 2 ----------------" << endl;
    DiscountTicket dt2 (0, "", 0, "", "", 0, "", "", 0, 0);
    dt2.setTicketID();

    cout << "Please enter the concert group: ";
    getline(cin >> ws, concertGroup);
    dt2.setConcertGroup(concertGroup);

    dt2.setSeat();

    cout << "Please enter the ticket price: ";
    cin >> ticketPrice;
    dt2.setTicketPrice(ticketPrice);

    cout << "Please enter the time and date of the concert: ";
    getline(cin >> ws, timeHour);
    dt2.setTimeHour(timeHour);

    cout << "Please enter the ticket color (Red, Blue, Green, Yellow or Purple): ";
    cin >> ticketColor;
    dt2.setTicketColor(ticketColor);

    cout << "Please enter the tickets's purchaser: ";
    getline(cin >> ws, person);
    dt2.setPerson(person);

    cout << "Please enter the discount type (Big family, Student or Handicapped): ";
    string discountType;
    getline(cin >> ws, discountType);
    dt2.setDiscountType(discountType);

    dt2.setIsDiscounted();
    dt2.setFinalPrice();

    dt2.printTicket();

}
