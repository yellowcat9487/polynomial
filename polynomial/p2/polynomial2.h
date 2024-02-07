#include <math.h>

class polynomial2 {
 public:
  const int a, b, c;
  polynomial2(int _a, int _b, int _c);

  int getReturnValue(int x);
  int deg_f();
};

polynomial2::polynomial2(int _a, int _b, int _c): a(_a), b(_b), c(_c) {
}

int polynomial2::getReturnValue(int x) {
  return a*std::pow(x, 2) + b*x + c;
}

int polynomial2::deg_f() {
  if(a != 0) return 2;
  else if(b != 0) return 1;
  else if(c != 0) return 0;
  else return -1;
