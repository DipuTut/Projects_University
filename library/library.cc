#include "library.hh"
#include "customer.hh"

#include <iostream>

using std::cout;
using std::endl;

      
Library::Book::Book( string atitle ): title_( atitle ), loaner_( 0 ) 
{
   cout << "Constructor of book: " << title_ << endl;
}
Library::Book::~Book()
{ 
   cout << "Destructor of book: " << title_ << endl; 
}


Library::Book::Book( const Book& b ): title_( b.title_ ), 
                                      loaner_( 0 )
{
   // Should the loaner be copied? (The loaner only has the original...)
   cout << "Copy constructor of book: " << title_ << endl; 
}
      
Library::Book& Library::Book::operator =( const Library::Book& b )
{
  
   if( this != &b )
   {
      title_ = b.title_;
      loaner_ = b.loaner_; // assignment differs from copying
   }
   return *this;
}

bool Library::Book::loanBook( Customer* reader )
{
   if( loaner_ != 0 )
   {
      cout << "already loaned by ";
      loaner_->print();
      return false;
   }
   loaner_ = reader;
   return true;
}

bool Library::Book::releaseBook( const Customer* reader )
{
   if( loaner_ == reader )
   {
      loaner_ = 0;
      return true;
   }
   return false;
}

bool Library::Book::getLoaner( Customer*& reader ) const
{ 
   reader = loaner_;
   if( loaner_ != 0 ){ return true; }
   return false; 
}
  
void Library::Book::print() const
{ 
   cout << "Book: " << title_;
   if( loaner_ != 0 )
   { 
      cout << ", loaned by "; 
      loaner_->print();
   }
   else{ cout << endl; }
}



Library::Library( const Library& l ): name_( l.name_ ), 
                                      books_()
{
   // we need to copy the books, not just the pointers
   // (two separate libraries do not share same books)
   for( unsigned i(0); i < l.books_.size(); ++i )
   {
      Book* book = new Book( *l.books_.at( i ) );
      books_.push_back( book );
   }
}

Library& Library::operator =( const Library& l )
{
   if( this != &l )
   {
      name_ = l.name_;
      while( !books_.empty() )
      {
         delete books_.at( books_.size() - 1 );
         books_.pop_back();
      }
      // create copies or assign existing ?
      books_ = l.books_;
   }
   return *this;
}

Library::~Library()
{
   // remove all the books from the library
   while( !books_.empty() )
   {
      delete books_.at( books_.size() - 1 );
      books_.pop_back();
   }
}

bool Library::loanBook( string title, Customer* loaner )
{
   for( unsigned i(0); i < books_.size(); ++i )
   {
      // library can have several books with a same name, go through everyone
      if( books_.at( i )->title() == title && !books_.at( i )->isLoaned() )
      {
         books_.at( i )->loanBook( loaner );
         return true;
      }
   }
   return false;
}


void Library::addBook( Library::Book newBook )
{
   // create a copy of the given book and add it to library
   Book* libraryBook = new Book( newBook );
   books_.push_back( libraryBook );
}

Library::Book* Library::getBook( string title )
{
   for( unsigned i(0); i < books_.size(); ++i )
   {
      if( books_.at( i )->title() == title )
      {
         return books_.at( i );
      }
   }
   return 0;
}

void Library::print() const
{
   cout << "Library: " << name_ << endl;
   for( unsigned i(0); i < books_.size(); ++i )
   {
      books_.at( i )->print();
   }
   cout << "-----------------" << endl;
}

   // gets the books loaned by the customer
vector< Library::Book* > Library::loanedBooks( const Customer* customer )
{
   vector< Book* > rval;
   for( unsigned i(0); i < books_.size(); ++i )
   {
      Customer* loaner = 0;      
      if( books_.at( i )->getLoaner( loaner ) && loaner == customer )
      {
         rval.push_back( books_.at( i ) );
      }
   }
   return rval;
}


void Library::returnBooks( const Customer* loaner )
{
   vector<Book*> loaned = loanedBooks( loaner );
   for( unsigned i(0); i < loaned.size(); ++i )
   {
      loaned.at(i)->releaseBook( loaner );
   }
}

void Library::printLoaned( const Customer* customer ) const
{
   cout << "Books loaned by: ";
   customer->print();
   for( unsigned i(0); i < books_.size(); ++i )
   {
      Customer* loaner = 0;      
      if( books_.at( i )->getLoaner( loaner ) && loaner == customer )
      {
         books_.at( i )->print();
      }
   }
   cout << "-----------------" << endl;
}


