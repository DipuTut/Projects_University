// GuineaPig.hh - 
#ifndef GUINEAPIG_HH
#define GUINEPIG_HH

#include "mammal.hh"

class GuineaPig: public Mammal
{
public:
   GuineaPig( std::string name, unsigned int age );
   virtual ~GuineaPig();
   std::string getName() const;
protected:
   // Returns the species of the animal in string
   virtual std::string getSpecies() const;
private:
   GuineaPig( const GuineaPig& );
   GuineaPig& operator =( const GuineaPig& );
};

#endif

