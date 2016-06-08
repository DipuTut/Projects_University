/*
 *  question.cpp
 *  HT1
 *
 *  Created by Md. Asadul Haque on 2/3/11.
 *  Copyright 2011 Tampere University of Technology. All rights reserved.
 *
 */

#include "question.h"
//#include <iostream>
//#include <cstdlib>
#include <string>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//#include <sstream>

using namespace std ;




Question::Question(string question,unsigned level)
{
	_question = question ;
	_level = level ;

}

// Operator =
 Question	Question::operator=(const Question& Q)
 { }
       
 // Copy constructor
 	Question::Question(const Question& Q)  	
     { }

// Destructor
//Question::~Question() ;



// Getter (Accessors)
string Question::getQuestion() const 
{
	return _question ;
}


// Setter (Mutators)
void Question::setQuestion(string question) 
{
	_question = question ;
}


void setLevel(unsigned level) 
{
	_level = level ;
}

void rwFile(const char *file) ;




