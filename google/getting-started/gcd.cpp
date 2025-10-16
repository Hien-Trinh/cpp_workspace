// gcd.cpp: David Trinh
// Description: implements Euclidean algorithm to find the
// greatest common divisor of two integers

#include <iostream>
using namespace std;

// recursive gcd using Euclidean algorithm
int gcd_recursion(int a, int b) {
  // If a % b == 0 (a is divisible by b), then b is the gcd
  // then b is the gcd
  // Base case: b = a % b == 0, then a = b = gcd
  if (b == 0) {
    return a;
  }

  // recursion: a = b, b = a % b
  return gcd_recursion(b, a % b);
}

// iterative gcd using Euclidean algorithm
int gcd_iterative(int a, int b) {
  // If a % b == 0 (a is divisible by b), then b is the gcd
  // Base case: b = a % b == 0, then a = b = gcd
  int temp;
  while (b) {
    temp = a;
    a = b;
    b = temp % b;
  }

  return a;
}

int main() {
  int first_val, second_val;

  // select recursion or iterative
  // initialize a ptr to a function with two int arguments that returns an int
  // to either gcd_recursion or gcd_iterative
  // int (*gcd)(int, int) = gcd_recursion;
  int (*gcd)(int, int) = gcd_iterative;

  cout << "Greatest common divisor of two integers." << endl;

  do {
    cout << "Enter 2 integers: ";
    if (!(cin >> first_val >> second_val)) {
      cout << "Not a number." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
  } while (!(first_val && second_val));

  cout << "GCD is " << gcd(first_val, second_val) << endl;

  return 0;
}
