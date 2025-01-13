
    #include <iostream>
#include <fstream>
#include "MyString.h"

int main() {
    MyString str1;
    MyString str2("careless");
    MyString str3("whisperss");
    MyString str4("silent");
    MyString str5("whisperss");

    std::cout << "Initial strings:" << std::endl;
    std::cout << "str1: ";
    str1.print();
    std::cout << "str2: ";
    str2.print();
    std::cout << "str3: ";
    str3.print();
    std::cout << "str4: ";
    str4.print();
    std::cout << "str5: ";
    str5.print();

    MyString r = str2 + str3;
    std::cout << "\nConcatenated result: ";
    r.print();

    str1 += str2;
    std::cout << "str1 after concatenation: ";
    str1.print();

    // Test comparisons
    std::cout << "Comparison results:" << std::endl;
    std::cout << "str2 < str3: " << (str2 < str3 ? "Passed" : "Failed") << std::endl;
    std::cout << "str2 > str3: " << (str2 > str3 ? "Passed" : "Failed") << std::endl;
    std::cout << "str2 == str3: " << (str2 == str3 ? "Passed" : "Failed") << std::endl;
    std::cout << "str2 != str3: " << (str2 != str3 ? "Passed" : "Failed") << std::endl;

    // Test additional comparisons
    std::cout << "Additional Comparison results:" << std::endl;
    std::cout << "str3 < str4: " << (str3 < str4 ? "Passed" : "Failed") << std::endl;
    std::cout << "str3 > str4: " << (str3 > str4 ? "Passed" : "Failed") << std::endl;
    std::cout << "str3 == str4: " << (str3 == str4 ? "Passed" : "Failed") << std::endl;
    std::cout << "str3 != str4: " << (str3 != str4 ? "Passed" : "Failed") << std::endl;

    // Test str5 comparison
    std::cout << "str3 == str5: " << (str3 == str5 ? "Passed" : "Failed") << std::endl;

    str1 = "moSCow";
    std::cout << "str1 after assignment: ";
    str1.print();

    std::fstream file("test.txt", std::ios::in);
    str1 = file;
    std::cout << "str1 after file assignment: ";
    str1.print();
    file.close();

    str1.clear();
    std::cout << "Check if str1 is empty: " << (!str1 ? "Empty" : "Not Empty") << std::endl;
    return 0;
}
