#ifndef CUSTOMER_HH
#define CUSTOMER_HH

#include <string>
using std::string;

class Library;

class Customer
{
public:
   Customer( string name, Library* homeLibrary );

   // define the behavior of copy constructor
   Customer( const Customer& );

   // implement assigment operator
   Customer& operator =( const Customer& );

   // what to do in destructor?
   ~Customer();

   void print() const;
   string name() const;
private:
   string name_;
   Library* homeLibrary_;
};


#endif
