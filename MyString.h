#ifndef MYSTRING_H
#define MYSTRING_H

#include <fstream> 

class MyString 
{
    private:
        std::string mString;

    public:
        MyString();
        std::string cleanString(std::string dirtyString);
        MyString(std::string instring);
        ~MyString();
        void print();
        void clear();
        bool operator!();
        std::string operator+(std::string rhs);
        std::string operator+(const MyString& rhs);
        MyString& operator+=(const MyString& rhs );

        bool operator<(const MyString& rhs);
        bool operator>(const MyString& rhs);
        bool operator==(const MyString& rhs);
        bool operator!=(const MyString& rhs);

        MyString& operator=(const std::string input);
        MyString& operator=(const MyString& rhs);
        MyString& operator=(std::fstream& file);


};
#endif