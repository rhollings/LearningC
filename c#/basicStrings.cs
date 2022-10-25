// Create a variable of type string and assign it a value:
string greeting = "Hello";

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
Console.WriteLine("The length of the txt string is: " + txt.Length);

string myString = "Hello";
Console.WriteLine(myString[0]);  // Outputs "H"

string myString = "Hello";
Console.WriteLine(myString.IndexOf("e"));  // Outputs "1"

// Full name
string name = "John Doe";

// Location of the letter D
int charPos = name.IndexOf("D");

// Get last name
string lastName = name.Substring(charPos);

// Print the result
Console.WriteLine(lastName);

