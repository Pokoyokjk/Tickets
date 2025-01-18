This project is an Object-Oriented implementation of a Ticket Management System for concerts. It features a base class Tickets and three derived classes for specific ticket types.

# How to Use
Include the header files (Tickets.hpp, GeneralTicket.hpp, etc.).

Instantiate objects for each ticket type, providing appropriate attributes.

Use printTicket() to display ticket details.


## Example
 GeneralTicket gt1(0, "Extremoduro", 100, "20:00, 12/12/2021", "Red", 0, "Gloria", true);
 
 gt1.setTicketID();
 
 gt1.setSeat();
 
 gTicket.printTicket();
