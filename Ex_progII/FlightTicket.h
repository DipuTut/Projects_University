/*
 *  FlightTicket.h
 *  
 *
 *  Created by Md. Asadul Haque on 1/18/11.
 *  Copyright 2011 Tampere University of Technology. All rights reserved.
 *
 */

#ifndef FlightTicket_HH
#define FlightTicket_HH

#include <string>

using namespace std ;

class FlightTicket
{
public:
	//Constructor
	FlightTicket();
	FlightTicket(unsigned _ticketNumber, unsigned _flightNumber,
				 string _carrierName, string _passengerName,
				 unsigned _seatNumber, string _from, string _destination,
				 string _date, double _timetoFly, double _totalFare);

// Destructor
	~FlightTicket() ;

// Operator = 
	FlightTicket operator=(const FlightTicket&) ;
// Copy constructor
	FlightTicket(const FlightTicket&) ;
	
// Getter (Accessors)
	unsigned getTicketNumber() const ;
	unsigned getFlightNumber() const ;
	std::string getCarrierName() const ;
	std::string getPassengerName() const ;
	unsigned getSeatNumber() const ;
	std::string getFrom() const ;
	std::string getDestination() const ;
	std::string getDate() const ;
	double getTimetoFly() const ;
	double getTotalFare() const ;
	
// Setter (Mutators)
	void setTicketNumber(unsigned _ticketNumber) ;
	void setFlightNumber(unsigned _flightNumber) ;
	void setCarrierName(std::string _carrierName) ;
	void setPassengerName(std::string _passengerName) ;
	void setSeatNumber(unsigned _seatNumber) ;
	void setFrom(std::string _from) ;
	void setDestination(std::string _destination) ;
	void setDate(std::string _date) ;
	void setTimetoFly(double _timetoFly) ;
	void setTotalFare(double _totalFare);
	
private:
	
	// Private data members
	unsigned ticketNumber ;
	unsigned flightNumber ;
	string carrierName ;
	string passengerName ;
	unsigned seatNumber ;
	string from ;
	string destination ;
	string date ; 
	double timetoFly ;
	double totalFare ;	

} ;

#endif