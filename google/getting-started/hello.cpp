// hello.cpp: David Trinh
// Description: program prints "hello world" many times

// need setw to set width
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // set cout to be left-aligned
  cout << setiosflags(ios::left);
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 4; j++) {
      cout << setw(17) << "Hello World!";
    }
    cout << endl;
  }
  return 0;
}
