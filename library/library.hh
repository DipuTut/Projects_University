#ifndef LIBRARY_HH
#define LIBRARY_HH

#include <string>
#include <vector>

using std::string;
using std::vector;

class Customer;

class Library
{
public:

class Book
{
public:
      Book( string title );
      // something to do here?
      ~Book();
      // write implementation for copy constructor
      Book( const Book& b ); 
      // write implementation for assignment operator also
      Book& operator =( const Book& b ); 

      string title() const{ return title_; }
      bool isLoaned() const{ return loaner_ != 0; }

      // loan the book if it is not already loaned
      bool loanBook( Customer* reader );
 
      // return the book, make it loanable again
      bool releaseBook( const Customer* reader );

      // get the loaner of the book
      bool getLoaner(  Customer*& customer ) const;
      void print() const;

   private:
      string title_;
      Customer* loaner_;
   };
public:

   Library( string name ): name_( name ), books_() {}

   // Write implementation 
   Library( const Library& l ); 

   // write implementation
   Library& operator =( const Library& l ); 

   // write implementation for destructor also
   ~Library();

   // add's a new book to the library
   // write the implementation of this function
   void addBook( Book newBook );

   // returns a pointer to a book with given title
   // if no book is found, returns 0
   Book* getBook( string title );

   // gets the books loaned by the customer
   vector< Book* > loanedBooks( const Customer* customer );

   // loans the book with given title, if any copies are available
   bool loanBook( string title, Customer* loaner );

   // return all the books currently loaned by the loaner
   void returnBooks( const Customer* loaner );

   // prints all the books in the library
   void print() const;

   // prints the books loaned by the given customer
   void printLoaned( const Customer* reader ) const;

private:
   string name_;
   vector< Book* > books_;
};


#endif

