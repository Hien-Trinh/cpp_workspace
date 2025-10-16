// number_guess: David Trinh
// Description: guess a random number from 1 to 100,
// given hints (higher or lower after every guess)

#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int input_val = 0;
  // set seed
  srand(time(0));
  // random number 1-100
  int random_val = rand() % 100 + 1;
  do {
    cout << "Guess a number 1-100 (-1 = quit): ";
    if (!(cin >> input_val)) {
      cout << "Not a number." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    } else if (input_val == random_val) {
      cout << "You guessed it!" << endl;
      break;
    } else if (input_val < random_val) {
      cout << "Higher" << endl;
    } else if (input_val > random_val) {
      cout << "Lower" << endl;
    }
  } while (input_val != -1);

  return 0;
}
