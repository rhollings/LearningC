// Create a variable of type string and assign it a value:
string greeting = "Hello";

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
Console.WriteLine("The length of the txt string is: " + txt.Length);

string myString = "Hello";
Console.WriteLine(myString[0]);  // Outputs "H"

string myString = "Hello";
Console.WriteLine(myString.IndexOf("e"));  // Outputs "1"

// The + operator can be used between strings to combine them. This is called concatenation:
string firstName = "John ";
string lastName = "Doe";
string name = firstName + lastName;
Console.WriteLine(name);

// You can also use the string.Concat() method to concatenate two strings:
string firstName = "John ";
string lastName = "Doe";
string name = string.Concat(firstName, lastName);
Console.WriteLine(name);

// Full name
string name = "John Doe";

// Location of the letter D
int charPos = name.IndexOf("D");

// Get last name
string lastName = name.Substring(charPos);

// Print the result
Console.WriteLine(lastName);

