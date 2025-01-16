#include <iostream>
#include "VIPTicket.hpp"

VIPTicket::VIPTicket(int ticketID, string concertGroup, int ticketPrice, string timeHour, string ticketColor, string ticketStatus, int seat, string person, bool backStagePass, bool meetAndGreet, bool foodAndDrink) : 
Tickets(ticketID, concertGroup, ticketPrice, timeHour, ticketColor, ticketStatus, seat, person), backStagePass(backStagePass), meetAndGreet(meetAndGreet), foodAndDrink(foodAndDrink) {
}

bool VIPTicket::getBackStagePass() {
    return backStagePass;
}

bool VIPTicket::getMeetAndGreet() {
    return meetAndGreet;
}

bool VIPTicket::getFoodAndDrink() {
    return foodAndDrink;
}

void VIPTicket::setBackStagePass(bool backStagePass) {
    this->backStagePass = backStagePass;
}

void VIPTicket::setMeetAndGreet(bool meetAndGreet) {
    this->meetAndGreet = meetAndGreet;
}

void VIPTicket::setFoodAndDrink(bool foodAndDrink) {
    this->foodAndDrink = foodAndDrink;
}