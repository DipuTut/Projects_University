#include "customer.hh"
#include "library.hh"


int main()
{
   Library hervanta( "Hervannan Kirjasto" );
   Customer* matti = new Customer( "Matti", &hervanta );   
   Customer* gunther = new Customer( "Gunther", &hervanta );
   Library::Book easyReading( "Fyodor Dostoyevsky: Crime and Punishment" );
   hervanta.addBook( easyReading );
   hervanta.addBook( easyReading );
   hervanta.addBook( easyReading );
   hervanta.addBook( Library::Book( "Jane Austen: Sense and Sensibility" ) );
   hervanta.addBook( Library::Book( "Victor Hugo: Les Miserables" ) );
   hervanta.loanBook( "Victor Hugo: Les Miserables", matti );
   hervanta.loanBook( "Fyodor Dostoyevsky: Crime and Punishment", matti );
   Customer* mattiWannabe = new Customer( *matti );
   hervanta.printLoaned( mattiWannabe );
   hervanta.loanBook( "Jane Austen: Sense and Sensibility", gunther );
   hervanta.print();
   delete matti; matti = 0;
   hervanta.print();
   Library hervanta2( hervanta );
   hervanta2.print();
   delete mattiWannabe; mattiWannabe = 0;
   delete gunther; gunther = 0;
}
