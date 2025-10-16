// get_input.cpp: David Trinh
// Description: get input from stdin

#include <iostream>
using namespace std;

int main() {
  int input_var = 0;
  // Enter do while loop until a non-numeric value or -1 is entered
  do {
    cout << "Enter a number (-1 = quit): ";
    // cin >> input_var returns false if stdin is non-numeric,
    // that is something other than an int (type of input_var)
    if (!(cin >> input_var)) {
      cout << "Please enter numbers only." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    } else if (input_var != -1) {
      cout << "You entered: " << input_var << endl;
    }
  } while (input_var != -1);
  cout << "All done!" << endl;
  return 0;
}
