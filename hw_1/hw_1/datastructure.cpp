//
//  datastructure.cpp
//  hw_1
//
//  Created by Dipu on 2/25/16.
//  Copyright © 2016 Dipu. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "datastructure.hpp"


std::string plrName;
int brokenNysse;
int sufferingPeople;





struct Player
{
  
    std::string name;
    unsigned int bus;
    unsigned int passenger;
};

std::vector<Player> vPlrData;
std::vector<std::string> vPlrName;
std::vector<unsigned int> vBuses;
std::vector<unsigned int> vSufferingPeople;


Datastructure::Datastructure()
{
}

Datastructure::~Datastructure()
{
}

// Placeholders for functions


// Adds new player
void Datastructure::add(std::string name_, unsigned int brokenNysse_,
                        unsigned int sufferingPeople_)
{
    Player plrData;
    
    plrData.name = name_;
    plrData.bus = brokenNysse_;
    plrData.passenger = sufferingPeople_;
    
    vPlrName.push_back(name_);
    vBuses.push_back(brokenNysse_);
    vSufferingPeople.push_back(sufferingPeople_);
    vPlrData.push_back(Player());
    
    for ( int i = 0; i < vPlrData.size(); i++) {
        std::cout << vPlrData[i].name << std::endl;
    }
    
    
    
}

void Datastructure::printAlphabetically()
{
}


// Finds player with key stored in term
void Datastructure::findPerson(std::string term)
{
}

// Print leaderboard. Sorts only if necessary
void Datastructure::printLeaderBoard()
{
   
    
    // Storing player data to vector
    
        
        
        Player plrData;
        plrData.name = plrName;
        plrData.bus = brokenNysse;
        plrData.passenger = sufferingPeople;
        
        vPlrData.push_back(plrData);
        
        for ( int i = 0; i < vPlrData.size(); i++) {
            std::cout << vPlrData[i].name << std::endl;
        }

    
    
    
    
}

// Prints worst player stats
void Datastructure::worstPlayer()
{
}

// Prints best player stats
void Datastructure::bestPlayer()
{
}

// Empties the datastructure
void Datastructure::empty()
{
}



// new implemented functions

void Datastructure::swapInteger(std::vector<unsigned int> & data,int i,int j)
{
    unsigned int tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
}

void Datastructure::sort_Integers(std::vector<unsigned int> & data)
{
     unsigned long length = data.size();
    
    for (unsigned int i = 0; i < length; ++i)
    {   unsigned int min = i;
        for (unsigned int j = i+1; j < length; ++j)
        {
            if (data[j] < data[min])
            { min = j;  }
        }
        if (min != i)
        {
            swapInteger(data, i, min);
        }
    }
    // printing
    for(unsigned long i = data.size()-1; i < data.size(); i--)
    {  std::cout << data[i] << "\n"; }
}


void Datastructure::swapChar(std::vector<std::string> & data, int i, int j)
{
    std::string tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
}

void Datastructure::sort_plrNames(std::vector<std::string> & data)
{
     unsigned long length = data.size();
    
    for (unsigned int i = 0; i < length; ++i)
    {   unsigned int min = i;
        for (unsigned int j = i+1; j < length; ++j)
        {
            if (data[j] < data[min])
            { min = j;  }
        }
        if (min != i)
        {
            swapChar(data, i, min);
        }
    }
}





