// #include <stdio.h> is a header file library that lets us work with input and output functions 
#include <stdio.h>

/* COMMENTS */

int main() {
  // Create variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}


/* If, Else If, Else */
int main() {
  int time = 22;
  if (time < 10) {
    printf("Good morning.");
  } else if (time < 20) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}


/* Switch Statements */
int day = 4;

switch (day) {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
}

/* LOOPS */
// While
int i = 0;

while (i < 5) {
  printf("%d\n", i);
  i++;
}

// DO While 
int i = 0;

do {
  printf("%d\n", i);
  i++;
}
while (i < 5);

// For
for (i = 0; i <= 10; i = i + 2) {
  printf("%d\n", i);
}

