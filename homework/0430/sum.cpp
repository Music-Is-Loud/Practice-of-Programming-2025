#include <iostream>
using namespace std;
class C {
public:
  static int num;
  int curr_value;
  friend ostream& operator << (ostream& o, const C& c) = delete;
  friend ostream& operator << (ostream& o, C& c) {
    o << "() called " << num << " times, sum is " << c.curr_value;
    return o;
  }
  C(int n=0):curr_value(n){}
  C& operator()(int a, int b=0) 
  {
        num++;
        C* ret = new C(curr_value+a+b);
        return *ret;
  }
};
int C::num = 0;

int main() {
  C c1;
  cout << c1(1)(2) << endl;
  cout << c1(3, 4) << endl;
  cout << c1(5, 6)(7) << endl;
  C c2;
  cout << c2(7)(8, 9) << endl;
  return 0;
}