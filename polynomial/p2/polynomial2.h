class polynomial2 {
 public:
  const int a, b, c;

  polynomial2(int _a, int _b, int _c);
  int getReturnValue(int x);
  int deg_f();
};

polynomial2::polynomial2(int _a, int _b, int _c): a(_a), b(_b), c(_c) {}

int polynomial2::getReturnValue(int x) {
  return a*x*x + b*x + c;
}

int polynomial2::deg_f() {
  if(a != 0) return 2;
  if(b != 0) return 1;
  if(c != 0) return 0;
  return -1;
}
