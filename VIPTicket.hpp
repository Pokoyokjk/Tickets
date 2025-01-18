#ifndef VIPTICKET_HPP
#define VIPTICKET_HPP

#include "Tickets.hpp"

class VIPTicket : public Tickets {
    bool backStagePass;
    bool meetAndGreet;
    bool foodAndDrink;

public:
    VIPTicket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, bool backStagePass, bool meetAndGreet, bool foodAndDrink);

    void setBackStagePass(bool backStagePass);
    void setMeetAndGreet(bool meetAndGreet);
    void setFoodAndDrink(bool foodAndDrink);

    bool getBackStagePass();
    bool getMeetAndGreet();
    bool getFoodAndDrink();

    // we want to override the printTicket function from the Tickets class
    // so that it prints the extra information that is specific to the VIP ticket
    void printTicket();
};

#endif // VIPTICKET_HPP