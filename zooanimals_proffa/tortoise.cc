#include "tortoise.hh"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Tortoise::Tortoise( string name, unsigned int age, unsigned int max ): 
   Animal( name, age, max )
{
}

Tortoise::~Tortoise()
{
   cout << "Tortoise " << getName() << " destructor." << endl;
}

std::string Tortoise::getSpecies() const
{
   return "tortoise"; 
}
