// string.cpp: David Trinh
// Description: various string methods
#include <iostream>
using namespace std;

int main() {
  string str1 = "To be or not to be, that is the question";
  string str2 = "only ";
  // create a substring of 12 characters from index 6
  string str3 = str1.substr(6, 12);
  // insert str2 into the index 32
  str1.insert(32, str2);
  // replace the first instance, counting off index 0,
  // of "to be" with "to jump"
  str1.replace(str1.find("to be", 0), 5, "to jump");
  // erase 4 characters from index 9 onwards
  str1.erase(9, 4);
  cout << str1 << endl;
  for (int i = 0; i < str3.length(); i++)
    cout << str3[i];
  cout << endl;
}
