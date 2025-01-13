#include "MyString.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>

MyString::MyString() 
{
    mString = ""; // Initialize mString to the empty string
}

std::string MyString::cleanString(std::string dirtyString) 
{
    std::string string = "";

    for (int i = 0; i < dirtyString.length(); ++i) 
    {
        char current = dirtyString.at(i);

        // Check if the character is a letter or a number
        if ((current >= 'A' && current <= 'Z') ||
            (current >= 'a' && current <= 'z') ||
            (current >= '0' && current <= '9')) 
            {
                string += current;
            }
    }
    return string;
}

// Constructor: Sets mString to the cleaned version of instring
MyString::MyString(std::string instring) 
{
    mString = cleanString(instring);
}

// Empty Destructor: No specific action needed here
MyString::~MyString() 
{
    // Leave empty
}

// Print the contents of mString followed by an endline
void MyString::print() 
{
    std::cout << mString << std::endl;
}

// Concatenation operator for MyString and string
std::string MyString::operator+(std::string rhs) 
{
    return cleanString(mString + rhs);
}

// Concatenation operator for MyString and MyString
std::string MyString::operator+(const MyString& rhs) 
{
    return cleanString(mString + rhs.mString);
}

// Compound concatenation operator for MyString and MyString
MyString& MyString::operator+=(const MyString& rhs) 
{
    mString += rhs.mString;
    return *this;
}

// Comparison operators
bool MyString::operator<(const MyString& rhs) 
{
    return mString < rhs.mString; 
}

bool MyString::operator>(const MyString& rhs) 
{
    MyString lowTHIS = *this;
    MyString lowRHS =  rhs;

    for (int i = 0; lowTHIS.mString[i] != '\0'; ++i) 
    {
        lowTHIS.mString[i] = std::tolower(lowTHIS.mString[i]);
    }
    for (int i = 0; lowRHS.mString[i] != '\0' ; ++i) 
    {
        lowRHS.mString[i] = std::tolower(lowRHS.mString[i]);
    }

    return lowTHIS.mString > lowRHS.mString;
}

bool MyString::operator==(const MyString& rhs)
{
    MyString lowTHIS = *this;
    MyString lowRHS =  rhs;

    for (int i = 0; lowTHIS.mString[i] != '\0'; ++i) 
    {
    
        lowTHIS.mString[i] = std::tolower(lowTHIS.mString[i]);
    }
    for (int i = 0; lowRHS.mString[i] != '\0' ; ++i) 
    {
        lowRHS.mString[i] = std::tolower(lowRHS.mString[i]);
    }
    return lowTHIS.mString == lowRHS.mString; 
}

bool MyString::operator!=(const MyString& rhs) 
{
    MyString lowTHIS = *this;
    MyString lowRHS =  rhs;

    for (int i = 0; lowTHIS.mString[i] != '\0'; ++i) 
    {
        lowTHIS.mString[i] = std::tolower(lowTHIS.mString[i]);
    }
    for (int i = 0; lowRHS.mString[i] != '\0' ; ++i) 
    {
        lowRHS.mString[i] = std::tolower(lowRHS.mString[i]);
    }

    return lowTHIS.mString != lowRHS.mString; 
}

// Assignment operator for string: Sets mString to cleaned input
MyString& MyString::operator=(const std::string input) 
{
    mString = cleanString(input);
    return *this;
}

// Assignment operator for MyString: Sets mString to rhs's mString
MyString& MyString::operator=(const MyString& rhs) 
{
    mString = rhs.mString;
    return *this;
}

// Assignment operator for file: Reads file contents into mString
MyString& MyString::operator=(std::fstream& file) 
{
    if (file.is_open()) {
        char c;
        mString = "";
        while (file.get(c)) {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                mString += c;
            }
        }
    }
    return *this;
}

// Clear mString by setting it to an empty string
void MyString::clear() 
{
    mString = "";
}

// Negation operator to check if mString is empty
bool MyString::operator!() 
{
    return mString.empty();
}


