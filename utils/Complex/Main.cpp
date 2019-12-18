#include <iostream>
#include "Complex.h"

int main() {

 Rational r(1,2);
 r.Print();

 Complex a(1,5);
 a.Print();
   //double aRe = a; // Jesli odkomentowane ma generowac error: cannot convert ‘Complex’ to ‘double’ in initialization
   double aRe = double(a); // przypisanie czesci rzeczywistej
   std::cout << "Re(a) = " << aRe <<std::endl;
   std::cout << "Im(a) = " << a.Im() <<std::endl;
   std::cout << "  |a| = " << Complex::Modulo(a) <<std::endl;

   Complex b(4);
   b.Print();

   Complex c = a + b;
   c.Print();
  
   Complex d((a+6.0)*r);
   d.Print();

   return 0;
}
/** Wynik dzialania programu:
1/2
1+i5
Re(a) = 1
Im(a) = 5
  |a| = 5.09902
4
5+i5
3.5+i2.5
*/