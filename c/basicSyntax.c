// #include <stdio.h> is a header file library that lets us work with input and output functions 
#include <stdio.h>

/* COMMENTS */

int main() {
  // Create variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  char greetings[] = "Hello World!"; // Strings
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  printf("%s", greetings);
  printf("%c", greetings[0]);
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


/* Break Continue */
// jumps out of the loop when i is equal to 4 
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}

//example skips the value of 4 
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}

// stops at 4
int i = 0;

while (i < 10) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
  i++;
}

// skips 4
int i = 0;

while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  printf("%d\n", i);
  i++;
}

// User Input
#include <stdio.h>

int main() {
  // Create a string
  char firstName[30];

  // Ask the user to input some text
  printf("Enter your first name: \n");

  // Get and save the text
  scanf("%s", firstName);

  // Output the text
  printf("Hello %s.", firstName);
  
  return 0;
}
