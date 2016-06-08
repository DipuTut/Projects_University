//
//  question.h
//  ProgII_11
//
//  Created by Md. Asadul Haque on 9/12/11.
//  Copyright 2011 Tampere University of Technology. All rights reserved.
//

#ifndef QUESTION_H
#define QUESTION_H

#include <string> 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype>
#include <locale>
#include <cmath>
#include <vector>
#include "player.h"
#include "game.h"


using namespace std ;

template <typename T> 
void quesSet(T& Text)
{
    vector<string> vQues  ;
    vQues.push_back(Text) ;
    cout << vQues[0] << endl ;
    

}


class Question 
{
public:
    Question() ;
    Question(string question,string answerKey,string level) ;
    ~Question() ;
    
    
    
   void printQuestionSet(const char *file,string Name_) ;
    void gameLevels() ; 

    string convertUpper(string Ch)
    { locale loc ;
      for (size_t i=0; i<Ch.length(); ++i)
            Ch[i] = toupper(Ch[i],loc);
        return Ch ;
    }
  
    double Round(double num) {
      return (num > 0.0) ? floor(num + 0.5) : ceil(num - 0.5);
    }
    
    
 // string Str = "HI" ;
  
    
    
private:
  //  vector<T> vQues ;
    string question_ ;
    string answerKey_ ;
    string level_ ;    
    
    
} ;


#endif

