#include <iostream>
#include <string.h>
#include <vector>
#include "polynomial.h"

using namespace std;

void text(polynomial p, string name, int x){
  string line1, line2, line3;
  vector<int> tempArray = p.getArray();

  //Line 1

  line1 = name + "(x) = ";
  if(p.deg_f() == -1) line1 += "0";
  for(int i = p.deg_f(); i >= 0; i--){
    if(tempArray[i] != 0){
      if(i < p.deg_f()){
        line1 += " + ";
      }

      if(i == 1){
        if(tempArray[i] == 1) line1 += "x";
        else line1 += to_string(tempArray[i]) + "x";
      }
      else if(i == 0){
        line1 += to_string(tempArray[i]);
      }
      else{
        if(tempArray[i] == 1) line1 += "x^" + to_string(i);
        else line1 += to_string(tempArray[i]) + "x^" + to_string(i);
      }
      
    }
  }

  //Line 2

  line2 = name + "(" + to_string(x) + ") = " + to_string(p.getReturnValue(x));

  //Line 3

  line3 = "deg " + name + " = " + to_string(p.deg_f());

  //output

  cout << line1 << "\n" << line2 << "\n" << line3 << "\n";
}

int main(){
  vector<int>array1 = {3, 2, 6, 1};
  int array2[]      = {28, 7, 1, 14, 2, 4};
  vector<int>array3 = {0, 0, 1, 0, 0};
  vector<int>array4 = {8, 2, 1, -7, 0, 0, 3, 2};
  int array5[]      = {0, 0, 0, 0, 0, 0};
  int array6[]      = {0, 3, 0, 0, -2, 0};

  polynomial f1(array1);
  polynomial f2(array2, 1, 3);
  polynomial f3(array3);
  polynomial f4(array4, 0, 5);
  polynomial f5(array5, 0, 5);
  polynomial f6(array6, 0, 5);

  cout << "\n\n****************************\n\n";
  
  text(f1, "f1", 11);

  cout << "\n\n****************************\n\n";

  text(f2, "f2", 7);

  cout << "\n\n****************************\n\n";

  text(f3, "f3", 23);

  cout << "\n\n****************************\n\n";

  text(f4, "f4", 5);

  cout << "\n\n****************************\n\n";

  text(f5, "f5", 29);

  cout << "\n\n****************************\n\n";

  text(f6, "f6", -8);

  return 0;
}
