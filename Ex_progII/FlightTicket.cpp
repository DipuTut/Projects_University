/*
 *  FlightTicket.cpp
 *  
 *
 *  Created by Md. Asadul Haque on 1/18/11.
 *  Copyright 2011 Tampere University of Technology. All rights reserved.
 *
 */

#include <string>
#include "FlightTicket.h"

using namespace std ;

// Constructor
FlightTicket::FlightTicket():ticketNumber(),flightNumber(),carrierName(),
passengerName(),seatNumber(),from(),destination(),date(),timetoFly(),totalFare()
{
}
FlightTicket::FlightTicket(unsigned _ticketNumber, unsigned _flightNumber,
						   string _carrierName, string _passengerName,
						   unsigned _seatNumber, string _from, string _destination,
						   string _date, double _timetoFly, double _totalFare)
{
	ticketNumber = _ticketNumber ;
	flightNumber = _flightNumber ;
	carrierName = _carrierName ;
	passengerName = _passengerName ;
	seatNumber = _seatNumber ;
	from = _from ;
	destination =  _destination ;
	date = _date ; 
	timetoFly = _timetoFly ;
	totalFare = _totalFare ;	
}

// Copy constructor
FlightTicket::FlightTicket(const FlightTicket& flightTicket)
{
	this->ticketNumber = flightTicket.getTicketNumber() ;
	this->flightNumber = flightTicket.getFlightNumber() ;
	this->carrierName = flightTicket.getCarrierName() ;
	this->passengerName = flightTicket.getPassengerName() ;
	this->seatNumber = flightTicket.getSeatNumber() ;
	this->from = flightTicket.getFrom() ;
	this->destination = flightTicket.getDestination() ;
	this->date = flightTicket.getDate() ;
	this->timetoFly = flightTicket.getTimetoFly() ;
	this->totalFare = flightTicket.getTotalFare() ;
}

// Operator = 
FlightTicket FlightTicket::operator=(const FlightTicket& flightTicket)
{
	FlightTicket f ;
	f.ticketNumber = flightTicket.getTicketNumber() ;
	f.flightNumber = flightTicket.getFlightNumber() ;
	f.carrierName = flightTicket.getCarrierName() ;
	f.passengerName = flightTicket.getPassengerName() ;
	f.seatNumber = flightTicket.getSeatNumber() ;
	f.from = flightTicket.getFrom() ;
	f.destination = flightTicket.getDestination() ;
	f.date = flightTicket.getDate() ;
	f.timetoFly = flightTicket.getTimetoFly() ;
	f.totalFare = flightTicket.getTotalFare() ;
	return f ;
}

// Destructor
FlightTicket::~FlightTicket()
{
	// Nothing to do
}

// Getter (Accessors)
unsigned FlightTicket::getTicketNumber() const 
{
	return ticketNumber ;
}
unsigned FlightTicket::getFlightNumber() const 
{
	return flightTicket ; 
}

std::string FlightTicket::getCarrierName() const 
{
	return carrierName ;
}
 
std::string FlightTicket::getPassengerName() const 
{
	return passengerName ;
}

unsigned FlightTicket::getSeatNumber() const 
{
	return seatNumber ;
}

std::string FlightTicket::getFrom() const 
{
	return from ;
}

std::string FlightTicket::getDestination() const 
{
	return destination ;
}

std::string FlightTicket::getDate() const 
{
	return date ;
}

double FlightTicket::getTimetoFly() const 
{
	return timetoFly ;
}

double FlightTicket::getTotalFare() const 
{
	return totalFare ;
}

// Setter (Mutators)
void FlightTicket::setTicketNumber(unsigned _ticketNumber) 
{
	ticketNumber = _ticketNumber 
}

void FlightTicket::setFlightNumber(unsigned _flightNumber) 
{
	flightNumber = _flightNumber ;
}

void FlightTicket::setCarrierName(std::string _carrierName) 
{
	carrierName = _carrierName ;
}

void FlightTicket::setPassengerName(std::string _passengerName) 
{
	passengerName = _passengerName ;
}

void FlightTicket::setSeatNumber(unsigned _seatNumber) 
{
	seatNumber = _seatNumber ;
}

void FlightTicket::setFrom(std::string _from) 
{
	from = _from ;
}

void FlightTicket::setDestination(std::string _destination) 
{
	destination =  _destination ;
}

void FlightTicket::setDate(std::string _date) 
{
	date = _date ; 
}

void FlightTicket::setTimetoFly(double _timetoFly) 
{
	timetoFly = _timetoFly ;
}

void FlightTicket::setTotalFare(double _totalFare)
{
	totalFare = _totalFare ;
}











