#include "mammal.hh"

Mammal::Mammal( std::string name, unsigned int age, unsigned int max ):
   Animal( name, age, max )
{
}

Mammal::~Mammal()
{
}

std::string Mammal::getSpecies() const
{
   return "mammal:";
}

