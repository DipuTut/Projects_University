#ifndef MAMMAL_HH
#define MAMMAL_HH

#include "animal.hh"

class Mammal: public Animal
{
public:
   // default age of animals
   static const unsigned MAX_AGE = 5;
   Mammal( std::string name, unsigned int age = 0, unsigned int max = MAX_AGE );
   virtual ~Mammal();
protected:
   std::string getSpecies() const;
private:
   Mammal( const Mammal& );
   Mammal& operator =( const Mammal& );
};

#endif


