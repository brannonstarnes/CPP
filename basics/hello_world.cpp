#include <iostream>  //angle brackets will include a library
// #include "filename"   quotations are used for headers and files not provided by the implementation
using namespace std;


// EVERY C++ program has to have a main function
int main(){       //int refers to the return type

    int num;

    std::cout << "Hello World!\n";  // std not needed since namespace is being used

    cout << "Please enter a number: ";

    cin >> num;

    cout << "Your number doubled is " << num*2 << endl;

    return 0;    // 0 indicates success
}                //curly braces for code blocks in C++

/* Notes: 
- Everything in c++ must have a type declaration
- Must have int main() -> return 0
*/