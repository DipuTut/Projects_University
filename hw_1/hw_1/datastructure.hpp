//
//  datastructure.hpp
//  hw_1
//
//  Created by Dipu on 2/25/16.
//  Copyright © 2016 Dipu. All rights reserved.
//

#ifndef datastructure_hpp
#define datastructure_hpp

#include <string>
#include <vector>


class Datastructure
{
public:
    Datastructure();
    ~Datastructure();
    
    
    
    // Add value to the datastructure
    void add(std::string name, unsigned int brokenNysse,
             unsigned int sufferingPeople);
    
    // Prints leaderboard in descending order
    void printLeaderBoard();
    
    // Prints player data in alphabetical order.
    void printAlphabetically();
    
    // Print person with lowest score
    void worstPlayer();
    
    // Print person with highest score
    void bestPlayer();
    
    void findPerson(std::string searchTerm);
    
    // Empty the datastructure
    void empty();
    
    // Copy constructor is forbidden
    //Datastructre(const Datastructure&) = delete;
    // Assignment operator is forbidden
    //Datastructure& operator=(const Datastructure&) = delete;
    
    
    
private:
    // new implemented functions
    void swapInteger(std::vector<unsigned int> & data, int i, int j);
    void sort_Integers(std::vector<unsigned int> & data);
    void swapChar(std::vector<std::string> & data, int i, int j);
    void sort_plrNames(std::vector<std::string> & data);

    
    

    
};

#endif

