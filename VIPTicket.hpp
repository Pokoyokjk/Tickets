#ifndef VIPTICKET_HPP
#define VIPTICKET_HPP

#include "Ticket.hpp"

class VIPTicket : public Ticket {
    bool backStagePass;
    bool meetAndGreet;
    bool foodAndDrink;

public:
    VIPTicket(int ticketID, string concertGroup, string ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, bool backStagePass, bool meetAndGreet, bool foodAndDrink);

    void setBackStagePass(bool backStagePass);
    void setMeetAndGreet(bool meetAndGreet);
    void setFoodAndDrink(bool foodAndDrink);

    bool getBackStagePass();
    bool getMeetAndGreet();
    bool getFoodAndDrink();
};

#endif // VIPTICKET_HPP