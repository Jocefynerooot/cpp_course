#include <iostream>

int main()
{
    // cout
    std::cout << "Hello i am cout "
              << "hi there "
              << 1232 << true << "\n";

    std::cout << "Hello everyone"
              << "\n";

    std::cout << "Please Comment" << std::endl;

    // cin
    int a;
    std::cout << "Enter a Number: ";
    std::cin >> a;

    std::cout << "Value of a is: " << a << std::endl;
    // << ---> Insertion Operator
    // >> ---> Extraction Operator
    return 0;
}