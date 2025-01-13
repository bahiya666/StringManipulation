Overview
This C++ program defines a custom string class MyString, which provides enhanced functionality for string manipulation. The MyString class supports common string operations such as concatenation, comparison, assignment, and file reading. Additionally, it provides the ability to clean non-alphanumeric characters from a string and supports case-insensitive comparisons. This program demonstrates the usage of the MyString class, including basic string operations, file reading, and comparison tests.

Files Included:
main.cpp - The main program that demonstrates the functionality of the MyString class.
MyString.h - Header file that defines the MyString class and its methods.
MyString.cpp - Implementation of the MyString class and its member functions.
Features of the MyString Class
Constructors:
Default Constructor: Initializes an empty string ("").
Parameterized Constructor: Initializes the string with a cleaned version of the provided input string, removing any non-alphanumeric characters.
Destructor:
Destructor: Does not require any specific action as the string is managed by C++'s standard string class.
Member Functions:
print(): Prints the content of the string.
cleanString(): Helper function that removes non-alphanumeric characters from the input string.
clear(): Clears the string, setting it to an empty string.
operator!(): Checks if the string is empty.
Operators:
Concatenation (operator+): Allows the concatenation of MyString and standard std::string, as well as two MyString objects.
Compound Concatenation (operator+=): Appends a MyString object to another.
Comparison (operator<, operator>, operator==, operator!=): Supports case-insensitive string comparisons for less than, greater than, equality, and inequality.
Assignment (operator=): Supports assignment from a std::string, another MyString, and reading from a file (std::fstream).
File Reading:
operator=(std::fstream& file): Reads a file and assigns its cleaned content (only alphanumeric characters) to the string.
How to Compile and Run
Step 1: Set up the files
Ensure that all the files (main.cpp, MyString.h, MyString.cpp) are in the same directory.

Step 2: Compile the program
Use the following command to compile the program using a C++ compiler (e.g., g++):
g++ -o mystring_program main.cpp MyString.cpp

Step 3: Run the program
After compilation, run the program with the following command:
./mystring_program
