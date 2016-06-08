//
//  source.h
//  TEST
//
//  Created by Md. Asadul Haque on 4/30/12.
//  Copyright (c) 2012 Tampere University of Technology. All rights reserved.
//

#ifndef source_h
#define source_h
#include <vector>
#include  <cstring>
#include <iostream>
#include <locale>
#include <cmath>

using namespace std ;


template <typename T1,typename T2> 


void quesSet(T1& Data, vector<T2>& vQues)
{
    vQues.push_back(Data) ;
    
}




class Source 
{
    
public:
    Source() ;
    ~Source() ;
    Source(string name, int prize) ;
  
    
    void gameLevels(unsigned LevelDef,vector<string>& vQuesLevel) ; 
    void LevelView(vector<string>& vQuesList,vector<string>& vAnsOption,vector<string>& vAnsKey,vector<string>& vAnsKeyFF, unsigned LevelNum) ; 
    
    string convertUpper(string Ch)
    { locale loc ;
        for (size_t i=0; i<Ch.length(); ++i)
            Ch[i] = toupper(Ch[i],loc);
        return Ch ;
    }
    
    double Round(double num) {
        return (num > 0.0) ? floor(num + 0.5) : ceil(num - 0.5);
    }
  
    
    
    
   

private:
    std::string _name ;
    int _prize ;
    
    
};
#endif 


