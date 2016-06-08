//
//  main.cpp
//  TEST
//
//  Created by Md. Asadul Haque on 11/3/11.
//  Copyright 2011 Tampere University of Technology. All rights reserved.
//

#include "source.h"
#include <iostream>
#include <fstream>
#include  <vector>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std ;

// I will use numeric Key to get data  





int main()
{    const char *File = "/Users/Dipu/ProTasks/TEST/TEST/textFile.txt" ;  
    
    vector<string> vQuesListV1 ;
    vector<string> vQuesListV2 ;
    vector<string> vQuesListV3 ;
    vector<string> vAnsKeyV1 ;
    vector<string> vAnsKeyV2 ;
    vector<string> vAnsKeyV3 ;
    vector<string> vAnsKeyFFV1 ;
    vector<string> vAnsKeyFFV2 ;
    vector<string> vAnsKeyFFV3 ;
    
        
    
    //storing answer options to vector
   
    vector<string> vAnsOptionL1v1 ;
    vector<string> vAnsOptionL2v1 ;
    vector<string> vAnsOptionL3v1 ;
    vector<string> vAnsOptionL4v1 ;
    vector<string> vAnsOptionL5v1 ;
    vector<string> vAnsOptionL6v1 ;
    vector<string> vAnsOptionL7v1 ;
    vector<string> vAnsOptionL8v1 ;
    vector<string> vAnsOptionL9v1 ;
    vector<string> vAnsOptionL10v1 ;
    vector<string> vAnsOptionL11v1 ;
    vector<string> vAnsOptionL12v1 ;
    vector<string> vAnsOptionL1v2 ;
    vector<string> vAnsOptionL2v2 ;
    vector<string> vAnsOptionL3v2 ;
    vector<string> vAnsOptionL4v2 ;
    vector<string> vAnsOptionL5v2 ;
    vector<string> vAnsOptionL6v2 ;
    vector<string> vAnsOptionL7v2 ;
    vector<string> vAnsOptionL8v2 ;
    vector<string> vAnsOptionL9v2 ;
    vector<string> vAnsOptionL10v2 ;
    vector<string> vAnsOptionL11v2 ;
    vector<string> vAnsOptionL12v2 ;
    vector<string> vAnsOptionL1v3 ;
    vector<string> vAnsOptionL2v3 ;
    vector<string> vAnsOptionL3v3 ;
    vector<string> vAnsOptionL4v3 ;
    vector<string> vAnsOptionL5v3 ;
    vector<string> vAnsOptionL6v3 ;
    vector<string> vAnsOptionL7v3 ;
    vector<string> vAnsOptionL8v3 ;
    vector<string> vAnsOptionL9v3 ;
    vector<string> vAnsOptionL10v3 ;
    vector<string> vAnsOptionL11v3 ;
    vector<string> vAnsOptionL12v3 ;
    
    
    ifstream inFile ;
    inFile.open(File,ios::in|ios::binary) ;
    
    string Ch ;
    while (!inFile.eof() && Ch != "QuesListV1")
    {  getline(inFile,Ch);
        if (Ch != "QuesListV1")  
        {vQuesListV1.push_back(Ch) ; }
    }  
    
    while (!inFile.eof() && Ch != "QuesListV2")
    {  getline(inFile,Ch);
        if (Ch != "QuesListV2")  
        {vQuesListV2.push_back(Ch) ; }
    }  
    
    while (!inFile.eof() && Ch != "QuesListV3")
    {  getline(inFile,Ch);
        if (Ch != "QuesListV3")  
        {vQuesListV3.push_back(Ch) ; }
    }  
    
    
    while (!inFile.eof() && Ch != "AnsOptionL1v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL1v1")  
        {  
            vAnsOptionL1v1.push_back(Ch) ;
        }
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL2v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL2v1")  
        {  
            vAnsOptionL2v1.push_back(Ch) ;
        }
    } 
    
    
    while (!inFile.eof() && Ch != "AnsOptionL3v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL3v1")  
        {  
            vAnsOptionL3v1.push_back(Ch) ;
        }
    } 
    
    
    while (!inFile.eof() && Ch != "AnsOptionL4v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL4v1")  
        {  
            vAnsOptionL4v1.push_back(Ch) ;
        }
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL5v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL5v1")  
        {  
            vAnsOptionL5v1.push_back(Ch) ;
        }
    } 
    
    
    while (!inFile.eof() && Ch != "AnsOptionL6v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL6v1")  
        {  
            vAnsOptionL6v1.push_back(Ch) ;
        }
    } 
    
    
    while (!inFile.eof() && Ch != "AnsOptionL7v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL7v1")  
        {  
            vAnsOptionL7v1.push_back(Ch) ;
        }
    } 
    
    
    while (!inFile.eof() && Ch != "AnsOptionL8v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL8v1")  
        {  
            vAnsOptionL8v1.push_back(Ch) ;
        }
    } 
    
    
    while (!inFile.eof() && Ch != "AnsOptionL9v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL9v1")  
        {  
            vAnsOptionL9v1.push_back(Ch) ;
        }
    } 
    
    
    while (!inFile.eof() && Ch != "AnsOptionL10v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL10v1")  
        {  
            vAnsOptionL10v1.push_back(Ch) ;
        }
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL11v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL11v1")  
        {  
            vAnsOptionL11v1.push_back(Ch) ;
        }
    } 
    
    while (!inFile.eof() && Ch != "AnsOptionL12v1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL12v1")  
        {  
            vAnsOptionL12v1.push_back(Ch) ;
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
    
    while (!inFile.eof() && Ch != "AnsOptionL2v2")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL2v2")  
        {  
            vAnsOptionL2v2.push_back(Ch) ;
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
    
    while (!inFile.eof() && Ch != "AnsOptionL4v2")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL4v2")  
        {  
            vAnsOptionL4v2.push_back(Ch) ;
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
    
    
    while (!inFile.eof() && Ch != "AnsOptionL6v2")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL6v2")  
        {  
            vAnsOptionL6v2.push_back(Ch) ;
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
    
    while (!inFile.eof() && Ch != "AnsOptionL8v2")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL8v2")  
        {  
            vAnsOptionL8v2.push_back(Ch) ;
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
    
    while (!inFile.eof() && Ch != "AnsOptionL10v2")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL10v2")  
        {  
            vAnsOptionL10v2.push_back(Ch) ;
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
    
    while (!inFile.eof() && Ch != "AnsOptionL12v2")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL12v2")  
        {  
            vAnsOptionL12v2.push_back(Ch) ;
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
    
    while (!inFile.eof() && Ch != "AnsOptionL2v3")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL2v3")  
        {  
            vAnsOptionL2v3.push_back(Ch) ;
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
    
    while (!inFile.eof() && Ch != "AnsOptionL4v3")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL4v3")  
        {  
            vAnsOptionL4v3.push_back(Ch) ;
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
    
    
    while (!inFile.eof() && Ch != "AnsOptionL6v3")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL6v3")  
        {  
            vAnsOptionL6v3.push_back(Ch) ;
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
    
    while (!inFile.eof() && Ch != "AnsOptionL8v3")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL8v3")  
        {  
            vAnsOptionL8v3.push_back(Ch) ;
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
    
    while (!inFile.eof() && Ch != "AnsOptionL10v3")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL10v3")  
        {  
            vAnsOptionL10v3.push_back(Ch) ;
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
    
    while (!inFile.eof() && Ch != "AnsOptionL12v3")
    {
        getline(inFile,Ch);
        if (Ch != "AnsOptionL12v3")  
        {  
            vAnsOptionL12v3.push_back(Ch) ;
        }
    } 
    
    
       while (!inFile.eof() && Ch != "AnsKeyV1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsKeyV1")  
        { vAnsKeyV1.push_back(Ch) ;}
    }  
    
    while (!inFile.eof() && Ch != "AnsKeyV2")
    {
        getline(inFile,Ch);
        if (Ch != "AnsKeyV2")  
        { vAnsKeyV2.push_back(Ch) ;}
    }  
    
    while (!inFile.eof() && Ch != "AnsKeyV3")
    {
        getline(inFile,Ch);
        if (Ch != "AnsKeyV3")  
        { vAnsKeyV3.push_back(Ch) ;}
    }  
    
    
    while (!inFile.eof() && Ch != "AnsKeyFFV1")
    {
        getline(inFile,Ch);
        if (Ch != "AnsKeyFFV1")  
        {     vAnsKeyFFV1.push_back(Ch) ;}
    }  
    
    
    while (!inFile.eof() && Ch != "AnsKeyFFV2")
    {
        getline(inFile,Ch);
        if (Ch != "AnsKeyFFV2")  
        {     vAnsKeyFFV2.push_back(Ch) ;}
    }  
    
    
    while (!inFile.eof() && Ch != "AnsKeyFFV3")
    {
        getline(inFile,Ch);
        if (Ch != "AnsKeyFFV3")  
        {     vAnsKeyFFV3.push_back(Ch) ;}
    }  
    
    
    int MAX = 3 ;
    srand(time(NULL)) ;
    int Rand = rand()%MAX + 1 ;
    cout << "Question Variant No.: " << Rand << endl ;

   // unsigned VarNum = 1 ;
       cout << endl ;

    
    if (Rand == 1) {
        
    Source* LevelDes = NULL ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL1v1,vAnsKeyV1,vAnsKeyFFV1,1) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL2v1,vAnsKeyV1,vAnsKeyFFV1,2) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL3v1,vAnsKeyV1,vAnsKeyFFV1,3) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL4v1,vAnsKeyV1,vAnsKeyFFV1,4) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL5v1,vAnsKeyV1,vAnsKeyFFV1,5) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL6v1,vAnsKeyV1,vAnsKeyFFV1,6) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL7v1,vAnsKeyV1,vAnsKeyFFV1,7) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL8v1,vAnsKeyV1,vAnsKeyFFV1,8) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL9v1,vAnsKeyV1,vAnsKeyFFV1,9) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL10v1,vAnsKeyV1,vAnsKeyFFV1,10) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL11v1,vAnsKeyV1,vAnsKeyFFV1,11) ;
    LevelDes->LevelView(vQuesListV1,vAnsOptionL12v1,vAnsKeyV1,vAnsKeyFFV1,12) ;
     }     
        
    else if (Rand == 2) {
        Source* LevelDes = NULL ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL1v2,vAnsKeyV2,vAnsKeyFFV2,1) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL2v2,vAnsKeyV2,vAnsKeyFFV2,2) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL3v2,vAnsKeyV2,vAnsKeyFFV2,3) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL4v2,vAnsKeyV2,vAnsKeyFFV2,4) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL5v2,vAnsKeyV2,vAnsKeyFFV2,5) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL6v2,vAnsKeyV2,vAnsKeyFFV2,6) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL7v2,vAnsKeyV2,vAnsKeyFFV2,7) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL8v2,vAnsKeyV2,vAnsKeyFFV2,8) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL9v2,vAnsKeyV2,vAnsKeyFFV2,9) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL10v2,vAnsKeyV2,vAnsKeyFFV2,10) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL11v2,vAnsKeyV2,vAnsKeyFFV2,11) ;
        LevelDes->LevelView(vQuesListV2,vAnsOptionL12v2,vAnsKeyV2,vAnsKeyFFV2,12) ;
    }     
           
    else if (Rand == 3) {
        Source* LevelDes = NULL ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL1v3,vAnsKeyV3,vAnsKeyFFV3,1) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL2v3,vAnsKeyV3,vAnsKeyFFV3,2) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL3v3,vAnsKeyV3,vAnsKeyFFV3,3) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL4v3,vAnsKeyV3,vAnsKeyFFV3,4) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL5v3,vAnsKeyV3,vAnsKeyFFV3,5) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL6v3,vAnsKeyV3,vAnsKeyFFV3,6) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL7v3,vAnsKeyV3,vAnsKeyFFV3,7) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL8v3,vAnsKeyV3,vAnsKeyFFV3,8) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL9v3,vAnsKeyV3,vAnsKeyFFV3,9) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL10v3,vAnsKeyV3,vAnsKeyFFV3,10) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL11v3,vAnsKeyV3,vAnsKeyFFV3,11) ;
        LevelDes->LevelView(vQuesListV3,vAnsOptionL12v3,vAnsKeyV3,vAnsKeyFFV3,12) ;
        
    }     
    
    
    cout << "it Runs" << endl ;
    return EXIT_SUCCESS ;

}




