#ifndef ANIMAL_HH
#define ANIMAL_HH

#include <string>

class Animal
{
public:
   // default age of animals 
   static const unsigned MAX_AGE = 4;
   Animal( std::string name, unsigned int age = 0, unsigned int max = MAX_AGE );
   virtual ~Animal();
   virtual std::string getName() const{ return name_; }
   virtual void ageAYear();
   virtual bool alive() const{ return alive_; }
   virtual void getInfo() const;
protected:
   // Returns the species of the animal in string
   virtual std::string getSpecies() const = 0;
   void setAlive( bool isAlive = true );
private:
   Animal( const Animal& );
   Animal& operator =( const Animal& );
   std::string name_;
   unsigned int age_;
   bool alive_;
   const unsigned int max_age_;
};

#endif

