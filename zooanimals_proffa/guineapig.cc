#include "guineapig.hh"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

GuineaPig::GuineaPig(string name, unsigned int age ): Mammal( name, age )
{
}

GuineaPig::~GuineaPig(void)
{
   cout << "GuineaPig " << getName() << " destructor." << endl;
}

string GuineaPig::getName() const
{
   return "Cavy -- " + Animal::getName();
}

std::string GuineaPig::getSpecies() const
{ 
   return "guinea pig"; 
}
