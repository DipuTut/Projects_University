#include "guineapig.hh"
#include "tortoise.hh"
#include "zoo.hh"
#include "cat.hh"
#include <cstdlib>

int main()
{
   Tortoise* t1 = new Tortoise( "Raphael", 1 );
   Tortoise* t2 = new Tortoise( "Donatello", 2 );
   GuineaPig* gp1 = new GuineaPig( "Andean Lunch", 0 );
   GuineaPig* gp2 = new GuineaPig( "Andean Dinner", 0 );
   Cat* cat1 = new Cat( "Misse" );
   Cat* cat2 = new Cat( "Nekku" );
   Zoo zoo;
   zoo.addAnimal( gp1 );
   zoo.addAnimal( gp2 );
   zoo.addAnimal( t1 );
   zoo.addAnimal( t2 );
   zoo.addAnimal( cat1 );
   zoo.addAnimal( cat2 );
   zoo.printNames();
   zoo.animalInfo();

   while( !zoo.allDead() )
   {
      zoo.ageAnimals();
   }

   return EXIT_SUCCESS;
}

