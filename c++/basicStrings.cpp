#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName + lastName;
  cout << fullName;
  return 0;
}


// Using Append
#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}

// Length
#include <iostream>
#include <string>
using namespace std;

int main() {
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length(); // OR << txt.size();
  return 0;
}

// Modify Strings
string myString = "Hello";
myString[0] = 'J';
cout << myString;
// Outputs Jello instead of Hello

// User Input 
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;
// Type your first name: John
// Your name is: John



