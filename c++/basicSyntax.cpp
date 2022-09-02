// The main difference between C and C++ is that C++ support classes and objects, while C does not.

#include <iostream> //  is a header file library that lets us work with input and output objects
using namespace std; // means that we can use names for objects and variables from the standard library

int main() {
  cout << "Hello World!"; // (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text
  return 0;
}

int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)


// Taking Input 
#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x;
  return 0;
}

// Simple Calculator 
#include <iostream>
using namespace std;

int main() {
  int x, y;
  int sum;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum;
}

// Strings
#include <iostream>
#include <string> // To use strings, must include an additional header file in the source code, the <string> library
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting;
  return 0;
}

