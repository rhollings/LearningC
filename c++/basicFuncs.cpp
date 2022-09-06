/* How to make functions */

#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction();
  return 0;
}

// if 
#include <iostream>
using namespace std;

int main() {
  int x = 20;
  int y = 18;
  if (x > y) {
    cout << "x is greater than y";
  }  
  return 0;
}


// else 
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}

// else if
int time = 22;
if (time < 10) {
  cout << "Good morning.";
} else if (time < 20) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}

// swtich statements 
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

// while
int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}

// for 
for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}

