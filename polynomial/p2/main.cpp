#include <iostream>
#include "polynomial2.h"

using namespace std;

int main(){
  polynomial2 f1(2, 3, 19);
  polynomial2 f2(0, 7, 13);
  polynomial2 f3(0, 0, 0);

  int x1 = 5, x2 = 11, x3 = 17;

  cout << "f1(x) = " << f1.a << "x^2 + " << f1.b << "x + " << f1.c << " :\n";
  cout << "f1(5) = " << f1.getReturnValue(x1) << "\n";
  cout << "deg f1 = " << f1.deg_f() << "\n\n";

  cout << "f2(x) = " << f2.a << "x^2 + " << f2.b << "x + " << f2.c << " :\n";
  cout << "f2(11) = " << f2.getReturnValue(x2) << "\n";
  cout << "deg f2 = " << f2.deg_f() << "\n\n";

  cout << "f3(x) = " << f3.a << "x^2 + " << f3.b << "x + " << f3.c << " :\n";
  cout << "f3(17) = " << f3.getReturnValue(x3) << "\n";
  cout << "deg f3 = " << f3.deg_f() << "\n\n";
}