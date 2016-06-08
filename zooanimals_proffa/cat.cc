#include "cat.hh"
#include <iostream>

Cat::Cat( std::string name ): Mammal( name, 0, MAX_AGE ), lives_( LIVES )
{
}

Cat::~Cat()
{
}

void Cat::resurrect()
{
   setAlive( true );
   std::cout << getName() << " resurrected..." << std::endl;
}

void Cat::ageAYear()
{
   Animal::ageAYear();
   if( !alive() && lives_ > 0 )
   {
      resurrect();
      lives_--;   
   }
}   

void Cat::getInfo() const
{
   Animal::getInfo();
   if( alive() )
   {
      std::cout << "lives left: " << lives_ << std::endl;
   }
}

std::string Cat::getSpecies() const
{ 
   return "cat"; 
}

