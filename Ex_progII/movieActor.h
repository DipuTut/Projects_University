/*
 *  movieActor.h
 *  
 *
 *  Created by Md. Asadul Haque on 1/19/11.
 *  Copyright 2011 Tampere University of Technology. All rights reserved.
 *
 */

#ifndef movieActor_HH
#define movieActor_HH

#include <string>

using namespace std ;

class MovieActor 
{
public:
	//Constructor
	MovieActor();
	MovieActor(string _name, string _gender, string _age, string _address,
			unsigned _telephoneNumber, string _movieTypeActing, string 
			_roleType, unsigned _actingSince, string _successfulFilms,
			double _salary, string _awardReceived)
	
	// Destructor
	~MovieActor() ;
	
	// Operator = 
	MovieActor operator=(const MovieActor&) ;
	// Copy constructor
	MovieActor(const MovieActor&) ;
	
	// Getter (Accessors)
	std::string getName() const ;
	std::string getGender() const ;
	std::string getAge() const ;
	std::string getAddress() const ;
	unsigned getTelephoneNumber() const ;
	std::string getMovieTypeActing() const ;
	std::string getRoleType() const ;
	unsigned getActingSince() const ;
	std::string getSuccessfulFilms() const ;
	double getSalary() const ;
	std::string getAwardReceived() const ;
	
	// Setter (Mutators)
	void setName(std::string _name) ;
	void setGender(std::string _gender) ;
	void setAge(std::string _age) ;
	void setAddress(std::string _address) ;
	void setTelephoneNumber(unsigned _telephoneNumber) ;
	void setMovieTypeActing(std::string _movieTypeActing) ;
	void setRoleType(std::string _roleType) ;
	void setActingSince(unsigned _actingSince) ;
	void setSuccessfulFilms(std::string _successfulFilms) ;
	void setSalary(double _salary);
	void setAwardReceived(std::string _awardReceived)

private:
	
	// Private data members
	string name ;
	string gender ;
	string age ;
	string address ;
	unsigned telephoneNumber ;
	string movieTypeActing ;
	string roleType ;
	unsigned actingSince ;
	string successfulFilms ; 
	double salary ;
	string awardReceived ;	
	
} ;

#endif