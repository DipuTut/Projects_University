/*
 *  book.h
 *  
 *
 *  Created by Md. Asadul Haque on 1/19/11.
 *  Copyright 2011 Tampere University of Technology. All rights reserved.
 *
 */

#ifndef book_HH
#define book_HH

#include <string>

using namespace std ;

class Book
{
public:
	//Constructor
	Book();
	Book(string _bookTitle, string _author, string _coAuthor, unsigned 
		 _bookNumber, string _edition, unsigned _yearPublication, string 
		 _publisher, unsigned _barCode, unsigned _copyNumber, string _category)
		         
	
	// Destructor
	~Book() ;
	
	// Operator = 
	Book operator=(const Book&) ;
	// Copy constructor
	Book(const Book&) ;
	
	// Getter (Accessors)
	std::string getBookTitle() const ;
	std::string getAuthor() const ;
	std::string getCoAuthor() const ;
	unsigned getBookNumber() const ;
	std::string getEdition() const ;
	unsigned getYearPublication() const ;
	std::string getPublisher() const ;
	unsigned getBarCode() const ;
	unsigned getCopyNumber() const ;
	std::string getCategory() const ;
	
	// Setter (Mutators)
	void setBookTitle(std::string _bookTitle) ;
	void setAuthor(std::string _author) ;
	void setCoAuthor(std::string _coAuthor) ;
	void setBookNumber(unsigned _bookNumber) ;
	void setEdition(std::string _edition) ;
	void setYearPublication(unsigned _yearPublication) ;
	void setPublisher(std::string _publisher) ;
	void setBarCode(unsigned _barCode) ;
	void setCopyNumber(unsigned _copyNumber) ;
	void setCategory(std::string _category);
	
private:
	
	// Private data members
	string bookTitle ;
	string author ;
	string coAuthor ;
	unsigned bookNumber ;
	unsigned edition ;
	unsigned yearPublication ;
	string publisher ;
	unsigned barCode ; 
	unsigned copyNumber ;
	string category ;	
	
} ;

#endif