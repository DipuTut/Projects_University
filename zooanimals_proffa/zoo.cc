#include "zoo.hh"

#include <iostream>

using std::string;
using std::cout;
using std::endl;

Zoo::Zoo(void)
{
}

Zoo::~Zoo(void)
{
   while( !zoo_.empty() )
   {
      delete zoo_.at( zoo_.size() -1 );
      zoo_.pop_back();
   }
}

void Zoo::addAnimal( Animal* animal )
{
   zoo_.push_back( animal );
}

void  Zoo::ageAnimals()
{
   for( unsigned i(0); i < zoo_.size(); ++i )
   {
      zoo_.at( i )->ageAYear();
   }
}

void Zoo::animalInfo() const
{
   for( unsigned i(0); i < zoo_.size(); ++i )
   {
      zoo_.at( i )->getInfo();
   }
}

bool Zoo::allDead() const
{
   for( unsigned i(0); i < zoo_.size(); ++i )
   {
      if( zoo_.at( i )->alive() ){ return false; }
   }
   return true;
}

void Zoo::printNames() const
{
   for( unsigned i(0); i < zoo_.size(); ++i )
   {
      cout << zoo_.at( i )->getName() << endl;
   }
}
