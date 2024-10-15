#include <iostream>
#include <cstring>  // For strlen() and other C-style string functions
using namespace std;

int main() {
    // C++ string
    string cppString = "Hello, C++ String!";
    
    // Convert C++ string to C-style string
    const char* cStr = cppString.c_str();  // Returns const char* with '\0' at the end
    
    cout << "C++ string: " << cppString << endl;
    cout << "C-style string: " << cStr << endl;
    cout << "Length of C-style string: " << strlen(cStr) << endl;

    return 0;
}
