/* 
To declare an array, define the variable type, specify the name of the array followed by square brackets and
specify the number of elements it should store: 
*/

string cars[4];
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
int myNum[3] = {10, 20, 30};

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];
// Outputs Volvo

// Loop thru Array
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for (int i = 0; i < 4; i++) {
  cout << cars[i] << "\n";
}

string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3
string cars[5] = {"Volvo", "BMW", "Ford"}; // size of array is 5, even though it's only three elements inside it
cars[3] = "Mazda";
cars[4] = "Tesla"; // Add 4th and 5th element after declaration 

// sizeff
int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);
// outputs 20
/*
Why did the result show 20 instead of 5, when the array contains 5 elements?

It is because the sizeof() operator returns the size of a type in bytes.

You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
*/


// To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;
// outputs 5

/*
A multi-dimensional array is an array of arrays.

To declare a multi-dimensional array, define the variable type, 
specify the name of the array followed by square brackets which specify how many elements the main array has,
followed by another set of square brackets which indicates how many elements the sub-arrays have:
*/
string letters[2][4];
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
cout << letters[0][2];  // Outputs "C"

