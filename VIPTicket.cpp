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

void VIPTicket::printTicket() {
    cout << "Ticket ID: " << ticketID << endl;
    cout << "Concert Group: " << concertGroup << endl;
    cout << "Ticket Price: " << ticketPrice << endl;
    cout << "Time Hour: " << timeHour << endl;
    cout << "Ticket Color: " << ticketColor << endl;
    cout << "Ticket Status: " << ticketStatus << endl;
    cout << "Seat: " << seat << endl;
    cout << "Person: " << person << endl;
    cout << "Back Stage Pass: " << backStagePass << endl;
    cout << "Meet And Greet: " << meetAndGreet << endl;
    cout << "Food And Drink: " << foodAndDrink << endl;
}