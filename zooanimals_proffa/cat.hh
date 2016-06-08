#ifndef CAT_HH
#define CAT_HH

#include "mammal.hh"
#include <string>

class Cat: public Mammal
{
public:

   static const unsigned int MAX_AGE = 1;
   static const unsigned int LIVES = 9;

   Cat( std::string name );
   virtual ~Cat();

   virtual void resurrect();
   virtual void ageAYear();
   virtual void getInfo() const;
protected:
  std::string getSpecies() const;

private:
   Cat( const Cat& );
   Cat& operator =( const Cat& );
   int lives_;

};

#endif

