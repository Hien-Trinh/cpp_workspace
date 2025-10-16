// math_puzzle.cpp: David Trinh
// Description: How many ways can you arrange 6 different books,
// left to right, on a shelf?

#include <iostream>
using namespace std;

int main() {
  int perm = 0;
  for (int slot_1 = 0; slot_1 < 6; slot_1++)
    for (int slot_2 = 0; slot_2 < 5; slot_2++)
      for (int slot_3 = 0; slot_3 < 4; slot_3++)
        for (int slot_4 = 0; slot_4 < 3; slot_4++)
          for (int slot_5 = 0; slot_5 < 2; slot_5++)
            perm++;

  cout << "Number of arrangement: " << perm << endl;
  return 0;
}
