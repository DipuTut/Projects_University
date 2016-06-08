#ifndef ZOO_HH
#define ZOO_HH
#include <vector>
#include "animal.hh"

class Zoo
{
public:
   Zoo();
   ~Zoo();
   void addAnimal( Animal* animal );
   void ageAnimals(); // Ages animals by a year
   void animalInfo() const; // ask info of each animal
   bool allDead() const; // true if all the animals are dead
   void printNames() const; // prints the names of animals
private:
   std::vector< Animal* > zoo_;
   Zoo( const Zoo& );
   Zoo& operator =( const Zoo& );
};
#endif
