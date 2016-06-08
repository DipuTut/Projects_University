//
//  question.cpp
//  ProgII_11
//
//  Created by Md. Asadul Haque on 9/12/11.
//  Copyright 2011 Tampere University of Technology. All rights reserved.
//

#include "question.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <iomanip>

using namespace std ;

 Question::Question()
 { 
 }

Question::~Question()
{
 //   cout << "Deleting" << endl ;
}


/*
void Question:: gameLevels() 
{
    
    string Str = "HI" ;
     quesSet(Str) ;
    
    
    
    for (int i = 0; i<=3; i++) {
        cout << "["<< Alphabet[i]<<"] "<< vAnsOptionL1v1[i] << endl ;  
    }
    cout << "*********************" << endl << endl ;
    
    cout << "[t] Take money and end the game" << endl << endl ;
    cout << "Your choice: "  ;
    string ansL1 ;
    cin >> ansL1 ;  
    string ansL1up = convertUpper(ansL1) ;
    
    // When player gives the correct answer 
    if  (ansL1up == vAnsKey[0])
    {
        cout << "Correct!" << endl ;
        cout << "You won €5,00! " << endl ;
    }
    
    
    // Fifty-Fifty implementation
    else if (ansL1up == "F")
    {   
        
        cout << endl << endl ; 
        cout<< "Lifelines" << endl ;
        cout << "1   [F] Fifty-Fifty" << "   2   [P] Audience Poll" << endl << endl ;
        cout << "Level 1" << endl ; 
        cout << "Question 1" << endl ;
        cout << vQuesList[rand1-1] << endl ;  
        for (int i = 0; i<=1; i++) {
            cout << "["<< Alphabet[i]<<"] "<< vAnsOptionL1v1[rand1+i] << endl ; 
        }
        cout << "*********************" << endl << endl ;
        
        cout << "[t] Take money and end the game" << endl << endl ;
        cout << "Your choice: "  ;
        cin >> ansL1 ;  
        ansL1up = convertUpper(ansL1) ;
        
        if  (ansL1up == vAnsKeyFF[0])
        {
            cout << "Correct!" << endl ;
            cout << "You won €5,00! " << endl ;
        }
        
        // When player takes money and end the game
        else if (ansL1up == "T" || ansL1up == "t")
        {
            cout << "You leave the game with €0,0!" << endl ;
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,800,plAttempt) ;
            
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            
            break ;
        }
        
        // When player gives the incorrect answer
        else 
        {   cout << "Incorrect!" << endl ;
            cout << "You leave the game with €0,0!" << endl ; 
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            
            break ;
        }
        
    }  
    
    // When player takes money and end the game
    else if (ansL1up == "T" || ansL1up == "t")
    {
        cout << "You leave the game with €0,0!" << endl ;
        Player *plPrize = NULL ;
        plPrize->updatePrize(file,Name_,0,plAttempt) ;
        Game *M = NULL ;
        M->subMenu(file,Name_) ;
        
        break ;
    }
    
    
    
    // When player chooses Audience Poll
    else if (ansL1up == "P")
    {   
        cout << endl << endl ; 
        cout<< "Lifelines" << endl ;
        cout << "2   [F] Fifty-Fifty" << "   1   [P] Audience Poll" << endl << endl ;
        cout << "Level 1" << endl ; 
        cout << "Question 1" << endl ;
        cout << vQuesList[rand1-1] << endl ;  
        for (int i = 0; i<=3; i++) {   
            cout << "["<< Alphabet[i]<<"] " << vAnsOptionL1v1[i]<<"   "<<
            "Audience Suggestion: "<< vPollPer[i] <<"%" << endl ; 
        }
        cout << "*********************" << endl << endl ;
        
        cout << "[t] Take money and end the game" << endl << endl ;
        cout << "Your choice: "  ;
        cin >> ansL1 ;  
        ansL1up = convertUpper(ansL1) ;
        
        if  (ansL1up == vAnsKey[0])
        {
            cout << "Correct!" << endl ;
            cout << "You won €5,00! " << endl ;
        }
        
        // When player takes money and end the game
        else if (ansL1up == "T" || ansL1up == "t")
        {
            cout << "You leave the game with €0,0!" << endl ;
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,500,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            
            break ;
        }
        
        // When player gives the incorrect answer
        else 
        {   cout << "Incorrect!" << endl ;
            cout << "You leave the game with €0,0!" << endl ; 
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,500,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;
        }
        
        
    }   
    
    
    
    // When player gives the incorrect answer
    else 
    {   cout << "Incorrect!" << endl ;
        cout << "You leave the game with €0,0!" << endl ; 
        Player *plPrize = NULL ;
        plPrize->updatePrize(file,Name_,0,plAttempt) ;
        Game *M = NULL ;
        M->subMenu(file,Name_) ;
        break ;
    }
    
    
}

*/



void Question:: printQuestionSet(const char *file,string Name_) 
{
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
    
    cout << PollPer1 << endl ;
    vector<double> vPollPer ;
    vPollPer.push_back(PollPer1) ;
    vPollPer.push_back(PollPer2) ;
    vPollPer.push_back(PollPer3) ;
    vPollPer.push_back(PollPer4) ;
    
    
    
    cout << rand1<< endl ;
    string Alphabet = "ABCD" ;   
    Game P ;
    
    ifstream inFile ;
    inFile.open(file,ios::in|ios::binary) ;
    
    string Ch ;  
    vector<string> vQuesList ;
    vector<string> vAnsOptionL1v1 ;
    vector<string> vAnsOptionL1v2 ;
    vector<string> vAnsOptionL1v3 ;
    vector<string> vAnsOptionL2v1 ;
    vector<string> vAnsOptionL2v2 ;
    vector<string> vAnsOptionL2v3 ;
    vector<string> vAnsOptionL3v1 ;
    vector<string> vAnsOptionL3v2 ;
    vector<string> vAnsOptionL3v3 ;
    vector<string> vAnsOptionL4v1 ;
    vector<string> vAnsOptionL4v2 ;
    vector<string> vAnsOptionL4v3 ;
    vector<string> vAnsOptionL5v1 ;
    vector<string> vAnsOptionL5v2 ;
    vector<string> vAnsOptionL5v3 ;
    vector<string> vAnsOptionL6v1 ;
    vector<string> vAnsOptionL6v2 ;
    vector<string> vAnsOptionL6v3 ;
    vector<string> vAnsOptionL7v1 ;
    vector<string> vAnsOptionL7v2 ;
    vector<string> vAnsOptionL7v3 ;
    vector<string> vAnsOptionL8v1 ;
    vector<string> vAnsOptionL8v2 ;
    vector<string> vAnsOptionL8v3 ;
    vector<string> vAnsOptionL9v1 ;
    vector<string> vAnsOptionL9v2 ;
    vector<string> vAnsOptionL9v3 ;
    vector<string> vAnsOptionL10v1 ;
    vector<string> vAnsOptionL10v2 ;
    vector<string> vAnsOptionL10v3 ;
    vector<string> vAnsOptionL11v1 ;
    vector<string> vAnsOptionL11v2 ;
    vector<string> vAnsOptionL11v3 ;
    vector<string> vAnsOptionL12v1 ;
    vector<string> vAnsOptionL12v2 ;
    vector<string> vAnsOptionL12v3 ;
    
    
    
    vector<string> vAnsKey ;
    vector<string> vAnsKeyFF ;
    vector<string> vPlayerList ;
    
    
    // Storing Question Level to vector
    while (!inFile.eof() && Ch != "QuesList")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "QuesList")  
        {
            vQuesList.push_back(Ch) ;
        }
        
    }  
   
    
    // Storing Answer option of Level 1 to vector
    while (!inFile.eof() && Ch != "AnsOptionL1v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL1v1")  
        {
            vAnsOptionL1v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL1v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL1v2")  
        {
            vAnsOptionL1v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL1v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL1v3")  
        {
            vAnsOptionL1v3.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer option of Level 2 to vector
    while (!inFile.eof() && Ch != "AnsOptionL2v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL2v1")  
        {
            vAnsOptionL2v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL2v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL2v2")  
        {
            vAnsOptionL2v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL2v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL2v3")  
        {
            vAnsOptionL2v3.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer option of Level 3 to vector
    while (!inFile.eof() && Ch != "AnsOptionL3v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL3v1")  
        {
            vAnsOptionL3v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL3v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL3v2")  
        {
            vAnsOptionL3v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL3v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL3v3")  
        {
            vAnsOptionL3v3.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer option of Level 4 to vector
    while (!inFile.eof() && Ch != "AnsOptionL4v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL4v1")  
        {
            vAnsOptionL4v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL4v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL4v2")  
        {
            vAnsOptionL4v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL4v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL4v3")  
        {
            vAnsOptionL4v3.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer option of Level 5 to vector
    while (!inFile.eof() && Ch != "AnsOptionL5v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL5v1")  
        {
            vAnsOptionL5v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL5v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL5v2")  
        {
            vAnsOptionL5v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL5v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL5v3")  
        {
            vAnsOptionL5v3.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer option of Level 6 to vector
    while (!inFile.eof() && Ch != "AnsOptionL6v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL6v1")  
        {
            vAnsOptionL6v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL6v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL6v2")  
        {
            vAnsOptionL6v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL6v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL6v3")  
        {
            vAnsOptionL6v3.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer option of Level 7 to vector
    while (!inFile.eof() && Ch != "AnsOptionL7v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL7v1")  
        {
            vAnsOptionL7v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL7v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL7v2")  
        {
            vAnsOptionL7v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL7v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL7v3")  
        {
            vAnsOptionL7v3.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer option of Level 8 to vector
    while (!inFile.eof() && Ch != "AnsOptionL8v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL8v1")  
        {
            vAnsOptionL8v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL8v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL8v2")  
        {
            vAnsOptionL8v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL8v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL8v3")  
        {
            vAnsOptionL8v3.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer option of Level 9 to vector
    while (!inFile.eof() && Ch != "AnsOptionL9v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL9v1")  
        {
            vAnsOptionL9v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL9v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL9v2")  
        {
            vAnsOptionL9v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL9v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL9v3")  
        {
            vAnsOptionL9v3.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer option of Level 10 to vector
    while (!inFile.eof() && Ch != "AnsOptionL10v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL10v1")  
        {
            vAnsOptionL10v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL10v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL10v2")  
        {
            vAnsOptionL10v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL10v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL10v3")  
        {
            vAnsOptionL10v3.push_back(Ch) ;
        }
        
    }  
    

    // Storing Answer option of Level 11 to vector
    while (!inFile.eof() && Ch != "AnsOptionL11v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL11v1")  
        {
            vAnsOptionL11v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL11v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL11v2")  
        {
            vAnsOptionL11v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL11v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL11v3")  
        {
            vAnsOptionL11v3.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer option of Level 12 to vector
    while (!inFile.eof() && Ch != "AnsOptionL12v1")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL12v1")  
        {
            vAnsOptionL12v1.push_back(Ch) ;
        }
        
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL12v2")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL12v2")  
        {
            vAnsOptionL12v2.push_back(Ch) ;
        }
        
    }  
    while (!inFile.eof() && Ch != "AnsOptionL12v3")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsOptionL12v3")  
        {
            vAnsOptionL12v3.push_back(Ch) ;
        }
        
    }  
    
 
    // Storing Answer key to vector
    while (!inFile.eof() && Ch != "AnsKey")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsKey")  
        {
            vAnsKey.push_back(Ch) ;
        }
        
    }  
    
    // Storing Answer key to vector
    while (!inFile.eof() && Ch != "AnsKeyFF")
    {
        getline(inFile,Ch);
        
        
        if (Ch != "AnsKeyFF")  
        {
            vAnsKeyFF.push_back(Ch) ;
        }
        
    }  
    
    
    while (!inFile.eof() && Ch != "PlayerList")
    {
        getline(inFile,Ch);
        //   cout << names << endl ;
        
        if (Ch != "PlayerList")  
        {
            vPlayerList.push_back(Ch) ;
          
        }
        
    }  
    
    inFile.close() ;
    
    
   
    unsigned int swCase = 1 ;
    switch (swCase) 
    { 
        case 1:
        {    
             // Initialization of Level 1
            cout << endl ;
            cout << "Level 1" << endl ; 
            cout << "Question 1" << endl ;
            cout << vQuesList[rand1-1] << endl ;   
        
        // For the case of choosing 1st question      
        if (rand1 == 1) {
            
         // copy to gameLevels function    
            
        for (int i = 0; i<=3; i++) {
            cout << "["<< Alphabet[i]<<"] "<< vAnsOptionL1v1[i] << endl ;  
        }
        cout << "*********************" << endl << endl ;
        
        cout << "[t] Take money and end the game" << endl << endl ;
        cout << "Your choice: "  ;
        string ansL1 ;
        cin >> ansL1 ;  
        string ansL1up = convertUpper(ansL1) ;
        
            // When player gives the correct answer 
        if  (ansL1up == vAnsKey[0])
            {
                cout << "Correct!" << endl ;
                cout << "You won €5,00! " << endl ;
            }
            
 
           // Fifty-Fifty implementation
           else if (ansL1up == "F")
           {   
              
               cout << endl << endl ; 
               cout<< "Lifelines" << endl ;
               cout << "1   [F] Fifty-Fifty" << "   2   [P] Audience Poll" << endl << endl ;
               cout << "Level 1" << endl ; 
               cout << "Question 1" << endl ;
               cout << vQuesList[rand1-1] << endl ;  
               for (int i = 0; i<=1; i++) {
                   cout << "["<< Alphabet[i]<<"] "<< vAnsOptionL1v1[rand1+i] << endl ; 
               }
               cout << "*********************" << endl << endl ;
               
               cout << "[t] Take money and end the game" << endl << endl ;
               cout << "Your choice: "  ;
               cin >> ansL1 ;  
               ansL1up = convertUpper(ansL1) ;
               
               if  (ansL1up == vAnsKeyFF[0])
               {
                   cout << "Correct!" << endl ;
                   cout << "You won €5,00! " << endl ;
               }
            
               // When player takes money and end the game
               else if (ansL1up == "T" || ansL1up == "t")
               {
                   cout << "You leave the game with €0,0!" << endl ;
                   Player *plPrize = NULL ;
                   plPrize->updatePrize(file,Name_,0,plAttempt) ;
                   
                   Game *M = NULL ;
                   M->subMenu(file,Name_) ;
                   
                   break ;
               }
               
                // When player gives the incorrect answer
               else 
               {   cout << "Incorrect!" << endl ;
                   cout << "You leave the game with €0,0!" << endl ; 
                   Game *M = NULL ;
                   M->subMenu(file,Name_) ;
                   
                   break ;
               }
           
           }  
         
         // When player takes money and end the game
        else if (ansL1up == "T" || ansL1up == "t")
        {
            cout << "You leave the game with €0,0!" << endl ;
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,0,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            
            break ;
        }

            
            
        // When player chooses Audience Poll
        else if (ansL1up == "P")
        {   
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << "2   [F] Fifty-Fifty" << "   1   [P] Audience Poll" << endl << endl ;
            cout << "Level 1" << endl ; 
            cout << "Question 1" << endl ;
            cout << vQuesList[rand1-1] << endl ;  
            for (int i = 0; i<=3; i++) {   
                cout << "["<< Alphabet[i]<<"] " << vAnsOptionL1v1[i]<<"   "<<
                "Audience Suggestion: "<< vPollPer[i] <<"%" << endl ; 
            }
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL1 ;  
            ansL1up = convertUpper(ansL1) ;
            
            if  (ansL1up == vAnsKey[0])
            {
                cout << "Correct!" << endl ;
                cout << "You won €5,00! " << endl ;
            }
            
            // When player takes money and end the game
            else if (ansL1up == "T" || ansL1up == "t")
            {
                cout << "You leave the game with €0,0!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,0,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €0,0!" << endl ; 
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,0,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
  
            
        }   
            
            
            
        // When player gives the incorrect answer
        else 
        {   cout << "Incorrect!" << endl ;
            cout << "You leave the game with €0,0!" << endl ; 
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,0,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;
          }
            
            // copy to gameLevels function
           
        }
  
            
            
    // For the case of choosing 2nd question in level 1
    else if (rand1 == 2) {
        for (int i = 0; i<=3; i++) {
            cout <<"["<< Alphabet[i]<<"] "<< vAnsOptionL1v2[i] << endl ;  
        }
        cout << "*********************" << endl << endl ;
        
        cout << "[t] Take money and end the game" << endl << endl ;
        cout << "Your choice: "  ;
        string ansL1 ;
        cin >> ansL1 ;
        string ansL1up = convertUpper(ansL1) ;  
        
        // When player gives the correct answer 
        if (ansL1up== vAnsKey[1])
        {
            cout << "Correct!" << endl ;
            cout << "You won €5,00! " << endl ;
            
        }

        
        // Fifty-Fifty implementation
        else if (ansL1up == "F")
        {   
            int lifeLines = 2 ;
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << lifeLines<< "    [f] Fifty-Fifty" << endl << endl ;
            cout << "Level 1" << endl ; 
            cout << "Question 1" << endl ;
            cout << vQuesList[rand1-1] << endl ;  
            for (int i = 0; i<=1; i++) {
                cout <<"["<< Alphabet[i]<<"] "<< vAnsOptionL1v2[rand1+i] << endl ; 
            }
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL1 ;  
            ansL1up = convertUpper(ansL1) ;
            if  (ansL1up == vAnsKeyFF[1])
            {
                cout << "Correct!" << endl ;
                cout << "You won €5,00! " << endl ;
            }
            
            // When player takes money and end the game
            else if (ansL1up == "T" || ansL1up == "t")
            {
                cout << "You leave the game with €0,0!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,0,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €0,0!" << endl ; 
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,0,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
        }  
        
        // When player takes money and end the game
        else if (ansL1up == "T" || ansL1up == "t")
        {
            cout << "You leave the game with €0,0!" << endl ;
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,0,plAttempt) ;
            Game *M = NULL;
            M->subMenu(file,Name_) ;
            break ;
        }
      
        
        // When player chooses Audience Poll
        else if (ansL1up == "P")
        {   
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << "2   [F] Fifty-Fifty" << "   1   [P] Audience Poll" << endl << endl ;
            cout << "Level 1" << endl ; 
            cout << "Question 1" << endl ;
            cout << vQuesList[rand1-1] << endl ;  
            for (int i = 0; i<=3; i++) {   
                cout << "["<< Alphabet[i]<<"] " << vAnsOptionL1v2[i]<<"   "<<
                "Audience Suggestion: "<< vPollPer[i] <<"%" << endl ; 
            }
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL1 ;  
            ansL1up = convertUpper(ansL1) ;
            
            if  (ansL1up == vAnsKey[0])
            {
                cout << "Correct!" << endl ;
                cout << "You won €5,00! " << endl ;
            }
            
            // When player takes money and end the game
            else if (ansL1up == "T" || ansL1up == "t")
            {
                cout << "You leave the game with €0,0!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,0,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €0,0!" << endl ; 
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,0,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
            
        }   

        
        
        
        // When player gives the incorrect answer
        else 
        {   cout << "Incorrect!" << endl ;
            cout << "You leave the game with €0,0!" << endl ; 
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,0,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;
        
        }
            
    }
    
            
            
     // For the case of choosing 3nd question in Level 1    
    else if (rand1 == 3) {
        for (int i = 0; i<=3; i++) {
            cout <<"["<< Alphabet[i]<<"] "<< vAnsOptionL1v3[i] << endl ;  
        }
        
        cout << "*********************" << endl << endl ;
        
        cout << "[t] Take money and end the game" << endl << endl ;
        cout << "Your choice: "  ;
        string ansL1 ;
        cin >> ansL1 ; 
        string ansL1up = convertUpper(ansL1) ;    
        
        // When player gives the correct answer 
         if (ansL1up == vAnsKey[2])
        {
            cout << "Correct!" << endl ;
            cout << "You won €5,00! " << endl ;
        }

        // Fifty-Fifty implementation
        else if (ansL1up == "F")
        {   
            int lifeLines = 2 ;
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << lifeLines<< "    [f] Fifty-Fifty" << endl << endl ;
            cout << "Level 1" << endl ; 
            cout << "Question 1" << endl ;
            cout << vQuesList[rand1-1] << endl ;  
            for (int i = 0; i<=1; i++) {
                cout <<"["<< Alphabet[i]<<"] "<< vAnsOptionL1v3[(rand1-1)+i] << endl ; 
            }
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL1 ;  
            ansL1up = convertUpper(ansL1) ;
            
            if  (ansL1up == vAnsKeyFF[2])
            {
                cout << "Correct!" << endl ;
                cout << "You won €5,00! " << endl ;
            }
            
            // When player takes money and end the game
            else if (ansL1up == "T" || ansL1up == "t")
            {
                cout << "You leave the game with €0,0!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,0,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €0,0!" << endl ; 
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,0,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
        }  
        
        // When player takes money and end the game
        else if (ansL1up == "T" || ansL1up == "t")
        {
            cout << "You leave the game with €0,0!" << endl ;
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,0,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;
        }
 
        
        
        // When player chooses Audience Poll
        else if (ansL1up == "P")
        {   
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << "2   [F] Fifty-Fifty" << "   1   [P] Audience Poll" << endl << endl ;
            cout << "Level 1" << endl ; 
            cout << "Question 1" << endl ;
            cout << vQuesList[rand1-1] << endl ;  
            for (int i = 0; i<=3; i++) {   
                cout << "["<< Alphabet[i]<<"] " << vAnsOptionL1v3[i]<<"   "<<
                "Audience Suggestion: "<< vPollPer[i] <<"%" << endl ; 
            }
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL1 ;  
            ansL1up = convertUpper(ansL1) ;
            
            if  (ansL1up == vAnsKey[0])
            {
                cout << "Correct!" << endl ;
                cout << "You won €5,00! " << endl ;
            }
            
            // When player takes money and end the game
            else if (ansL1up == "T" || ansL1up == "t")
            {
                cout << "You leave the game with €0,0!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,0,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €0,0!" << endl ; 
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,0,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
            
        }           
        
                
        // When player gives the incorrect answer
        else 
        {   cout << "Incorrect!" << endl ;
            cout << "You leave the game with €0,0!" << endl ; 
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,0,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;
        }
   
    }
    
} // end of case 1

    case 2 :
        {
    // Initialization of Level 2
    cout << endl ;
    cout << "Level 2" << endl ; 
    cout << "Question 2" << endl ;
    cout << vQuesList[2+rand1] << endl ;
    
    
     // For the case of choosing 1st question in level 2
    if (rand1 == 1) 
       {       
           for (int i = 0; i<=3; i++) {
            cout << "["<< Alphabet[i]<<"] "<< vAnsOptionL2v1[i] << endl ;  
        }
        cout << "*********************" << endl << endl ;
        
        cout << "[t] Take money and end the game" << endl << endl ;
        cout << "Your choice: "  ;
        string ansL2 ;
        cin >> ansL2 ;  
        string ansL2up = convertUpper(ansL2) ;       
        
           
           // When player gives the correct answer
            if (ansL2up == vAnsKey[3])
             {
               cout << "Correct!" << endl ;
               cout << "You won €1,000! " << endl ;
             }   
           
           
        // Fifty-Fifty implementation
        else if (ansL2up == "F")
        {   
            int lifeLines = 2 ;
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << lifeLines<< "    [f] Fifty-Fifty" << endl << endl ;
            cout << "Level 2" << endl ; 
            cout << "Question 2" << endl ;
            cout << vQuesList[2+rand1] << endl ;  
            for (int i = 0; i<=1; i++) {
                cout << "["<< Alphabet[i]<<"] "<< vAnsOptionL2v1[rand1+i] << endl ; 
            }
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL2 ;  
            ansL2up = convertUpper(ansL2) ;  
            
            if  (ansL2up == vAnsKeyFF[3])
            {
                cout << "Correct!" << endl ;
                cout << "You won €1,000! " << endl ;
            }
            
            // When player takes money and end the game
            else if (ansL2up == "T" || ansL2up == "t")
            {
                cout << "You leave the game with €5,00!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €5,00!" << endl ; 
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
        }  
        
        // When player takes money and end the game
        else if (ansL2up == "T" || ansL2up == "t")
        {
            cout << "You leave the game with €5,00!" << endl ;
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,500,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;
        }

           // When player chooses Audience Poll
        else if (ansL2up == "P")
        {   
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << "2   [F] Fifty-Fifty" << "   1   [P] Audience Poll" << endl << endl ;
            cout << "Level 2" << endl ; 
            cout << "Question 2" << endl ;
            cout << vQuesList[2+rand1] << endl ;  
            for (int i = 0; i<=3; i++) {   
                cout << "["<< Alphabet[i]<<"] " << vAnsOptionL2v1[i]<<"   "<<
                "Audience Suggestion: "<< vPollPer[i] <<"%" << endl ; 
            }
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL2 ;  
            ansL2up = convertUpper(ansL2) ;
            
            if  (ansL2up == vAnsKey[0])
            {
                cout << "Correct!" << endl ;
                cout << "You won €1,000! " << endl ;
            }
            
            // When player takes money and end the game
            else if (ansL2up == "T" || ansL2up == "t")
            {
                cout << "You leave the game with €0,0!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €5,00!" << endl ; 
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
            
        }           
           
           
         // When player gives the incorrect answer
        else 
        {   cout << "Incorrect!" << endl ;
            cout << "You leave the game with €5,00!" << endl ; 
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,500,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;
        } 
    }
    
     // For the case of choosing 2nd question in level 2
    else if (rand1 == 2) {
        for (int i = 0; i<=3; i++) {
            cout << "["<< Alphabet[i]<<"] "<< vAnsOptionL2v2[i] << endl ;  
        }
        cout << "*********************" << endl << endl ;
        
        cout << "[t] Take money and end the game" << endl << endl ;
        cout << "Your choice: "  ;
        string ansL2 ;
        cin >> ansL2 ;  
        string ansL2up = convertUpper(ansL2) ;            
         cout << ansL2up << endl ;
       
        
        // When player gives the correct answer 
        if (ansL2up == vAnsKey[4])
        {
            cout << "Correct!" << endl ;
            cout << "You won €1,000! " << endl ;
        }
                
        
        // Fifty-Fifty implementation
        else if (ansL2up == "F")
           {   
            int lifeLines = 2 ;
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << lifeLines<< "    [f] Fifty-Fifty" << endl << endl ;
            cout << "Level 2" << endl ; 
            cout << "Question 2" << endl ;
            cout << vQuesList[2+rand1] << endl ;  
            for (int i = 0; i<=1; i++) {
                cout << "["<< Alphabet[i]<<"] "<< vAnsOptionL2v2[rand1+i] << endl ; }
            
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL2 ;
            ansL2up = convertUpper(ansL2) ;   
           
            if  (ansL2up == vAnsKeyFF[4])
            {
                cout << "Correct!" << endl ;
                cout << "You won €1,000! " << endl ; }
            
            
            // When player takes money and end the game
            else if (ansL2up == "T" || ansL2up == "t")
            {
                cout << "You leave the game with €5,00!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL;
                M->subMenu(file,Name_) ;
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €5,00!" << endl ; 
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL;
                M->subMenu(file,Name_) ;
                break ;
            }
            
        }  
        
        // When player takes money and end the game
        else if (ansL2up == "T" || ansL2up == "t")
        {
            cout << "You leave the game with €5,00!" << endl ;
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,500,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;
        }
        
        
        // When player chooses Audience Poll
        else if (ansL2up == "P")
        {   
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << "2   [F] Fifty-Fifty" << "   1   [P] Audience Poll" << endl << endl ;
            cout << "Level 2" << endl ; 
            cout << "Question 2" << endl ;
            cout << vQuesList[2+rand1] << endl ;  
            for (int i = 0; i<=3; i++) {   
                cout << "["<< Alphabet[i]<<"] " << vAnsOptionL2v2[i]<<"   "<<
                "Audience Suggestion: "<< vPollPer[i] <<"%" << endl ; 
            }
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL2 ;  
            ansL2up = convertUpper(ansL2) ;
            
            if  (ansL2up == vAnsKey[0])
            {
                cout << "Correct!" << endl ;
                cout << "You won €1,000! " << endl ;
            }
            
            // When player takes money and end the game
            else if (ansL2up == "T" || ansL2up == "t")
            {
                cout << "You leave the game with €5,00!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €5,00!" << endl ; 
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
            
        }           

        
        
        
        // When player gives the incorrect answer
        else 
        {   cout << "Incorrect!" << endl ;
            cout << "You leave the game with €5,00!" << endl ; 
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,500,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;
        }
   
    }
    
            
      // For the case of choosing 3rd question in level 2       
    else if (rand1 == 3) {
        for (int i = 0; i<=3; i++) {
            cout << "["<< Alphabet[i]<<"] "<<vAnsOptionL2v3[i] << endl ;  
        }
        
        cout << "*********************" << endl << endl ;
        
        cout << "[t] Take money and end the game" << endl << endl ;
        cout << "Your choice: "  ;
        string ansL2 ;
        cin >> ansL2 ;  
        string ansL2up = convertUpper(ansL2) ;    
        
        // When player gives the correct answer 
        if (ansL2up == vAnsKey[5])
        {
            cout << "Correct!" << endl ;
            cout << "You won €1,000! " << endl ;
        }
        
        // Fifty-Fifty implementation
        else if (ansL2up == "F")
        {   
            int lifeLines = 2 ;
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << lifeLines<< "    [f] Fifty-Fifty" << endl << endl ;
            cout << "Level 2" << endl ; 
            cout << "Question 2" << endl ;
            cout << vQuesList[2+rand1] << endl ;  
            for (int i = 0; i<=1; i++) {
                cout << "["<< Alphabet[i]<<"] "<< vAnsOptionL2v3[(rand1-1)+i] << endl ; 
            }
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL2 ;  
            ansL2up = convertUpper(ansL2) ;   
            
            if  (ansL2up == vAnsKeyFF[5])
            {
                cout << "Correct!" << endl ;
                cout << "You won €1,000! " << endl ;
            }
            
            // When player takes money and end the game
            else if (ansL2up == "T" || ansL2up == "t")
            {
                cout << "You leave the game with €5,00!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €5,00!" << endl ; 
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL;
                M->subMenu(file,Name_) ;
                break ;
            }
            
        }  
        
        // When player takes money and end the game
        else if (ansL2up == "T" || ansL2up == "t")
        {
            cout << "You leave the game with €5,00!" << endl ;
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,500,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;
        }
        
        
        // When player chooses Audience Poll
        else if (ansL2up == "P")
        {   
            cout << endl << endl ; 
            cout<< "Lifelines" << endl ;
            cout << "2   [F] Fifty-Fifty" << "   1   [P] Audience Poll" << endl << endl ;
            cout << "Level 2" << endl ; 
            cout << "Question 2" << endl ;
            cout << vQuesList[2+rand1] << endl ;  
            for (int i = 0; i<=3; i++) {   
                cout << "["<< Alphabet[i]<<"] " << vAnsOptionL2v3[i]<<"   "<<
                "Audience Suggestion: "<< vPollPer[i] <<"%" << endl ; 
            }
            cout << "*********************" << endl << endl ;
            
            cout << "[t] Take money and end the game" << endl << endl ;
            cout << "Your choice: "  ;
            cin >> ansL2 ;  
            ansL2up = convertUpper(ansL2) ;
            
            if  (ansL2up == vAnsKey[0])
            {
                cout << "Correct!" << endl ;
                cout << "You won €5,00! " << endl ;
            }
            
            // When player takes money and end the game
            else if (ansL2up == "T" || ansL2up == "t")
            {
                cout << "You leave the game with €5,00!" << endl ;
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                
                break ;
            }
            
            // When player gives the incorrect answer
            else 
            {   cout << "Incorrect!" << endl ;
                cout << "You leave the game with €5,00!" << endl ; 
                Player *plPrize = NULL ;
                plPrize->updatePrize(file,Name_,500,plAttempt) ;
                Game *M = NULL ;
                M->subMenu(file,Name_) ;
                break ;
            }
            
            
        }           

        
        // When player gives the incorrect answer
        else 
        {   cout << "Incorrect!" << endl ;
            cout << "You leave the game with €5,00!" << endl ; 
            Player *plPrize = NULL ;
            plPrize->updatePrize(file,Name_,500,plAttempt) ;
            Game *M = NULL ;
            M->subMenu(file,Name_) ;
            break ;

            
        }
        
    }
  
       } // end of case 2
   
  
           
} // end of switch block    
   
    
}


