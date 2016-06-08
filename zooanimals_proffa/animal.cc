#include "animal.hh"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Animal::Animal( string name, unsigned int age, unsigned int max ): 
   name_( name ), age_( age ), alive_( true ), max_age_( max )
{
}

Animal::~Animal(void)
{
   cout << "Animal \"" << name_ << "\" destructor. " << endl;
}

void Animal::ageAYear()
{
   if( alive_ ){ age_++; }
   // animal dies when the max age is reached
   if( alive_ && age_ >= max_age_ )
   { 
      alive_ = false; 
      cout << name_ << " dies at age of " << age_ << endl;
   }
   else if( alive_ )
   { 
      cout << name_ << " is now " << age_ << " years old." << endl;
   }
   // if dead, do nothing
}

void Animal::getInfo() const
{
   string live = alive_ ? " alive" : " dead";
   cout << getSpecies() << " : " << getName() << ", age: " << age_ 
        << live << endl;
}

void Animal::setAlive( bool isAlive )
{
   alive_ = isAlive;
}
