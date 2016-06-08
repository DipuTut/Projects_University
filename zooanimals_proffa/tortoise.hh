// Tortoise.hh
#ifndef TORTOISE_HH
#define TORTOISE_HH

#include "mammal.hh"

class Tortoise : public Animal
{
public:
   static const int MAX_AGE = 140;

   Tortoise( std::string name, unsigned int age = 0, 
             unsigned int max = MAX_AGE );
   virtual ~Tortoise(void);
protected:
   // Returns the species of the animal in string
   virtual std::string getSpecies() const;
private:
   Tortoise( const Tortoise& );
   Tortoise& operator =( const Tortoise );
};

#endif

