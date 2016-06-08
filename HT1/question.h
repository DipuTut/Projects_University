/*
 *  question.h
 *  HT1
 *
 *  Created by Md. Asadul Haque on 2/3/11.
 *  Copyright 2011 Tampere University of Technology. All rights reserved.
 *
 */

#ifndef QUESTION_H
#define QUESTION_H

#include <string> 
#include <iostream>

class Question
{
public:
	// Constructor
	Question();
	Question(string question, unsigned level ) ;
	
// Destructor
//	~Question() ;

	// Operator =
	Question operator=(const Question&) ;
	// Copy constructor
	Question (const Question&) ; 	
	
	
	// Getter (Accessors)
	string getQuestion() const ;
	
	
	
	// Setter (Mutators)
	void setQuestion(string question) ;
	void setLevel(unsigned level) ;
	void rwFile(const char *file) ;
	
	//void editQuestion() ;
	//void saveQuestions() ;
	
		
private:
	string _question ;
	unsigned _level ;
	
	
} ;

#endif

