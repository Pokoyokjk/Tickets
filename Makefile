#make file for the project

all: main.o Tickets.o GeneralTicket.o VIPTicket.o DiscountTicket.o 
	g++ main.o Tickets.o GeneralTicket.o VIPTicket.o DiscountTicket.o -o main

main.o: main.cpp
	g++ -c main.cpp

Tickets.o: Tickets.cpp
	g++ -c Tickets.cpp

GeneralTicket.o: GeneralTicket.cpp
	g++ -c GeneralTicket.cpp

VIPTicket.o: VIPTicket.cpp
	g++ -c VIPTicket.cpp

DiscountTicket.o: DiscountTicket.cpp
	g++ -c DiscountTicket.cpp

clean:
	rm main.o Tickets.o GeneralTicket.o VIPTicket.o DiscountTicket.o 

