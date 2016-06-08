#include "customer.hh"
#include "library.hh"
#include <iostream>

using std::endl;
using std::cout;

Customer::Customer( string aname, Library* library ): name_( aname ), 
homeLibrary_( library )
{
   cout << "Constructor of Customer: " << name_ << endl;
}

Customer::Customer( const Customer& c ): name_( c.name_ ), homeLibrary_( 
c.homeLibrary_ )
{
   cout << "Copy Constructor of Customer: " << name_ << endl;
   // try to loan the same books the orginal had for loan...
   vector< Library::Book* > books = homeLibrary_->loanedBooks( &c );
   for( unsigned i(0); i < books.size(); ++i )
   {
      // try loaning each book
      homeLibrary_->loanBook( books.at( i )->title(), this );
   }
}

Customer::~Customer()
{
   cout << "Destructor of Customer: " << name_ << endl;
   // remove the loaned books before dying. :)
   homeLibrary_->returnBooks( this );
}

Customer& Customer::operator =( const Customer& c)
{
   if( this != &c )
   {
      name_ = c.name_;
      // return the books loaned, get new ones if possible
      homeLibrary_ = c.homeLibrary_;
      homeLibrary_->returnBooks( this );
      vector< Library::Book* > books = homeLibrary_->loanedBooks( &c );
      for( unsigned i(0); i < books.size(); ++i )
      {
      // try loaning each book
         homeLibrary_->loanBook( books.at( i )->title(), this );
      }
   }
   return *this;
}

void Customer::print() const
{
   cout << name_ << endl;
}

string Customer::name() const
{
   return name_;
}
