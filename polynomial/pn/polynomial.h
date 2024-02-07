#include <math.h>
#include <vector>

using namespace std;

class polynomial
{
 private:
  vector<int> array;
  int deg;
 public:
  polynomial(int _array[], int begin, int end);
  polynomial(vector<int> _array);
  polynomial(vector<int> _array, int begin, int end);

  int getReturnValue(int x);
  int deg_f();
  vector<int> getArray();

 private:
  void calculate(vector<int> _array);
};

//public

polynomial::polynomial(vector<int> _array){
  calculate(_array);
}

polynomial::polynomial(vector<int> _array, int begin, int end){
  calculate(vector<int>(_array.begin() + begin, _array.begin() + end + 1));
}

polynomial::polynomial(int _array[], int begin, int end){
  calculate(vector<int>(_array + begin, _array + end + 1));
}

int polynomial::getReturnValue(int x){
  int value = 0;
  for(int i = deg; i >= 0; i--){
    value += array[i] * pow(x, i);
  }
  return value;
}

int polynomial::deg_f(){
  return deg;
}

vector<int> polynomial::getArray(){
  return array;
}

//private

void polynomial::calculate(vector<int> _array){
  for(int i = _array.size() - 1;; i--){
    if(_array[i] == 0) _array.pop_back();
    else{
      deg = _array.size() - 1;
      break;
    }

    if(i == 0){
      deg = -1;//f(x) = 0
      break;
    }
  }
  array = _array;
}