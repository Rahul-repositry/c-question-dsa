#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";

  int a = 124;
  cout << a << "\n";

  char b = 'a';
  cout << b << "\n";

  bool isTrue = true;
  cout << isTrue << endl;

  float decimalNum = 1.22;
  cout << decimalNum << endl;

  double dblDecimal = 112121;
  cout << dblDecimal << endl;

  int size = sizeof(dblDecimal);
  cout << size << endl;

  bool frst = (a > decimalNum) ;
  cout << "frst" << frst << endl;
}