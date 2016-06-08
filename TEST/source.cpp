//
//  source.cpp
//  TEST
//
//  Created by Md. Asadul Haque on 4/30/12.
//  Copyright (c) 2012 Tampere University of Technology. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <fstream>
#include  <cstring>
#include  <map>
#include  <algorithm>
#include "source.h"
using namespace std;


Source::Source(string name,int prize):_name(name),_prize(prize)
{ 
}
    


Source::~Source()
{
}


void Source::gameLevels(unsigned LevelDef, vector<string>& vAnsOption) 
{

    string ABCD = "ABCD" ; 
    int MAX = 3 ;
    int plAttempt = 1 ;
    srand(time(NULL)) ;
    int rand1 = rand()%MAX + 1 ;
    int rand2 = rand()%MAX + 1 ;
    int rand3 = rand()%MAX + 1 ;
    int rand4 = rand()%MAX + 1 ;
    double sumRand = (rand1+rand2+rand3+rand4) ;
    double PollPer1 = Round((rand1/sumRand)*100) ;
    double PollPer2 = Round((rand2/sumRand)*100) ;
    double PollPer3 = Round((rand3/sumRand)*100) ;
    double PollPer4 = Round((rand4/sumRand)*100) ;
    
    vector<double> vPollPer ;
    vPollPer.push_back(PollPer1) ;
    vPollPer.push_back(PollPer2) ;
    vPollPer.push_back(PollPer3) ;
    vPollPer.push_back(PollPer4) ;
    
    
    switch (LevelDef) {
        case 1:
            for (unsigned i = 0; i<ABCD.size(); i++) {
                cout << "["<< ABCD[i]<<"] "<< vAnsOption[i]<< endl  ; //vAnsOptionL1v1[i] << endl ;  
            }
            cout << "*********************" << endl << endl ;
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            break;
        case 2 :
            for (int i = 0; i<=1; i++) {
                cout <<"["<< ABCD[i]<<"] "<< vAnsOption[2+i] << endl ; 
            }
            cout << "*********************" << endl << endl ;
            cout << "Your choice: "  ;
            break ;

        case 3 :
                  for (int i = 0; i<=3; i++) {   
                cout << "["<< ABCD[i]<<"] " << vAnsOption[i]<<"   "<<
                "Audience Suggestion: "<< vPollPer[i] <<"%" << endl ; 
            }
            cout << "*********************" << endl << endl ;
            cout << "Your choice: "  ; 
            break ;
            
        default:
            break;
    } 
 
}

void Source::LevelView(vector<string>&vQuesList,vector<string>& vAnsOption,vector<string>& vAnsKey,vector<string>& vAnsKeyFF,unsigned LevelNum)
{
   
    string arrPrize [13] = {"€0,0","€500","€1,000","€2,000","€4,000","€8,000","€16,000","€32,000","€64,000","€125,000","€250,000","€500,000","€1,000,000"} ;
 
    //unsigned VarNum = 1 ;
    // Initialization of Level 1
    cout << endl ;
    cout << "Level " << LevelNum << endl ; 
    cout << "Question "<< LevelNum << endl ;
    cout << vQuesList[LevelNum-1] << endl ; 
    
    
    
    Source* S = NULL ;
    S->gameLevels(1,vAnsOption) ;
    
    string ansL1 ;
    cin >> ansL1 ;  
    string ansL1up = convertUpper(ansL1) ;
    
    // When player gives the correct answer 
    if  (ansL1up == vAnsKey[LevelNum-1])
    {
        cout << "Correct!" << endl ;
        cout << "You won " << arrPrize[LevelNum] << endl ;
    }
    
    
    else if  (ansL1up == "F")
    {
        int lifeLines = 2 ;
        cout << endl << endl ; 
        cout<< "Lifelines" << endl ;
        cout << lifeLines<< "    [f] Fifty-Fifty" << endl << endl ;
        cout << "Level " << LevelNum << endl ; 
        cout << "Question "<< LevelNum << endl ;
        cout << vQuesList[LevelNum-1] << endl ; 
        
        S->gameLevels(2,vAnsOption) ;
        
        cin >> ansL1 ;  
        ansL1up = convertUpper(ansL1) ;
        
        if  (ansL1up == vAnsKeyFF[LevelNum-1])
        {
            cout << "Correct!" << endl ;
            cout << "You won " << arrPrize[LevelNum] << endl ;
        }
        
        else 
        {   cout << "Incorrect!" << endl ;
            cout << "You leave the game with " << arrPrize[LevelNum-1]<< "!" << endl ;  
        }
        
        
        
    }
    
    else if (ansL1up == "P")
    {   
        cout << endl << endl ; 
        cout<< "Lifelines" << endl ;
        cout << "2   [F] Fifty-Fifty" << "   1   [P] Audience Poll" << endl << endl ;
        cout << "Level " << LevelNum << endl ; 
        cout << "Question "<< LevelNum << endl ;
        cout << vQuesList[LevelNum-1] << endl ; 
        
        S->gameLevels(3,vAnsOption) ;
        
        cin >> ansL1 ;  
        ansL1up = convertUpper(ansL1) ;
        
        if  (ansL1up == vAnsKey[LevelNum-1])
        {
            cout << "Correct!" << endl ;
            cout << "You won " << arrPrize[LevelNum] << endl ;
        }
        else 
        {   cout << "Incorrect!" << endl ;
           cout << "You leave the game with " << arrPrize[LevelNum-1]<< "!" << endl ;  
        }
        
    }    
    
    
    // When player takes money and end the game
    else if (ansL1up == "T" || ansL1up == "t")
    {
        cout << "You leave the game with " << arrPrize[LevelNum-1]<< "!" << endl ;  
    }
    
    // When player gives the incorrect answer
    else 
    {   cout << "Incorrect!" << endl ;
        cout << "You leave the game with " << arrPrize[LevelNum-1]<< "!" << endl ;  
    }


}




    
/*

    switch (LevelNum) {  
        case 1 :
             {
        switch (VarNum) {
               case 1:
                  for (unsigned i = 0; i<ABCD.size(); i++) {
                      cout << "["<< ABCD[i]<<"] "<< vAnsOption[i]<< endl  ; //vAnsOptionL1v1[i] << endl ;  
                 }
                 cout << "*********************" << endl << endl ;
                 break ;  
            
               case 2:
                  for (unsigned i = 0; i<ABCD.size(); i++) {
                  cout << "["<< ABCD[i]<<"] "<< vAnsOptionL1v2[i] << endl ;  
                 }
                 cout << "*********************" << endl << endl ;
                       
                 break ;
           
                case 3:
                   for (unsigned i = 0; i<ABCD.size(); i++) {
                cout << "["<< ABCD[i]<<"] "<< vAnsOptionL1v3[i] << endl ;  
                 }
                cout << "*********************" << endl << endl ;
                   break ;

                   default:
                      break;
               }
            }        
            break ; 
            
        case 2 :
            
        {     // Initialization of Level 2
            cout << endl ;
            cout << "Level 2" << endl ; 
            cout << "Question 2" << endl ;
            cout << vQuesList[(3+VarNum)-1] << endl ;  
                switch (VarNum) {
                    case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL2v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                    case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL2v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    
                    break ;
                    
                    case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL2v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                        break ;
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
            break ;   
            
        case 3 :
            
        {     // Initialization of Level 3
            cout << endl ;
            cout << "Level 3" << endl ; 
            cout << "Question 3" << endl ;
            cout << vQuesList[(6+VarNum)-1] << endl ;  
            switch (VarNum) {
                case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL3v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL3v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    
                    break ;
                    
                case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL3v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;   
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
            break ;
            
            
        case 4 :
            
        {     // Initialization of Level 4
            cout << endl ;
            cout << "Level 4" << endl ; 
            cout << "Question 4" << endl ;
            cout << vQuesList[(9+VarNum)-1] << endl ;  
            switch (VarNum) {
                case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL4v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL4v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    
                    break ;
                    
                case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL4v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
            break ;
            
            
        case 5 :
            
        {     // Initialization of Level 5
            cout << endl ;
            cout << "Level 5" << endl ; 
            cout << "Question 5" << endl ;
            cout << vQuesList[(12+VarNum)-1] << endl ;  
            switch (VarNum) {
                case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL5v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL5v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    
                    break ;
                    
                case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL5v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
            break ;
            
            
        case 6 :
            
        {     // Initialization of Level 6
            cout << endl ;
            cout << "Level 6" << endl ; 
            cout << "Question 6" << endl ;
            cout << vQuesList[(15+VarNum)-1] << endl ;  
            switch (VarNum) {
                case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL6v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL6v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    
                    break ;
                    
                case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL6v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
            break ;
            
            
        case 7 :
            
        {     // Initialization of Level 7
            cout << endl ;
            cout << "Level 7" << endl ; 
            cout << "Question 7" << endl ;
            cout << vQuesList[(18+VarNum)-1] << endl ;  
            switch (VarNum) {
                case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL7v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL7v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    
                    break ;
                    
                case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL7v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ; 
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
            break ;
            
            
        case 8 :
            
        {     // Initialization of Level 8
            cout << endl ;
            cout << "Level 8" << endl ; 
            cout << "Question 8" << endl ;
            cout << vQuesList[(21+VarNum)-1] << endl ;  
            switch (VarNum) {
                case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL8v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL8v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;
                    
                case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL8v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
            break ;
            
            
        case 9 :
            
        {     // Initialization of Level 9
            cout << endl ;
            cout << "Level 9" << endl ; 
            cout << "Question 9" << endl ;
            cout << vQuesList[(24+VarNum)-1] << endl ;  
            switch (VarNum) {
                case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL9v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL9v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;
                    
                case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL9v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ; 
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
            break ;
            
            
        case 10 :
            
        {     // Initialization of Level 10
            cout << endl ;
            cout << "Level 10" << endl ; 
            cout << "Question 10" << endl ;
            cout << vQuesList[(27+VarNum)-1] << endl ;  
            switch (VarNum) {
                case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL10v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL10v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    
                    break ;
                    
                case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL10v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ; 
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
            break ;
            
        case 11 :
            
        {     // Initialization of Level 11
            cout << endl ;
            cout << "Level 11" << endl ; 
            cout << "Question 11" << endl ;
            cout << vQuesList[(30+VarNum)-1] << endl ;  
            switch (VarNum) {
                case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL11v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL11v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    
                    break ;
                    
                case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL11v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ; 
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
            break ;
            
            
        case 12 :
            
        {     // Initialization of Level 12
            cout << endl ;
            cout << "Level 12" << endl ; 
            cout << "Question 12" << endl ;
            cout << vQuesList[(33+VarNum)-1] << endl ;  
            switch (VarNum) {
                case 1:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL12v1[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ;  
                    
                case 2:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL12v2[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    
                    break ;
                    
                case 3:
                    for (unsigned i = 0; i<ABCD.size(); i++) {
                        cout << "["<< ABCD[i]<<"] "<< vAnsOptionL12v3[i] << endl ;  
                    }
                    cout << "*********************" << endl << endl ;
                    break ; 
                    
                default: cout <<"Not a Valid choice" << endl ;
                    break;
            }
            
        }   
        break ;
            
            
    

            
            
        default: cout <<"Not a Valid choice" << endl ;
            break; 
            
            
    }          
   */
 








