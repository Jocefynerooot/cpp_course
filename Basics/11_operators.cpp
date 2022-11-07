#include <iostream>
using namespace std;

int main()
{
    /*
        0 --> false
        1 --> true
    */

    /*
    1. Arithmatic operators --> +, -, *, /, %
    2. Assignment operators --> =, +=, -=, /=, *=
    3. Relational operators --> ==, >=, <=, > , <
    4. Logical operators --> &&, ||, !          (and, or not)
    5. Bitwise operators --> & , >>, <<
    6. others --> &, <<, >>
    */

    // 1. Arithmatic operators
    int a = 21;
    int b = 2;

    cout << "a + b is " << a + b << endl;
    cout << "a - b is " << a - b << endl;
    cout << "a * b is " << a * b << endl;
    cout << "a / b is " << a / b << endl;
    cout << "a % b is " << a % b << endl;

    // 2. Assignment operators
    int x = 4;
    int y = 2;
    int z = x += y;
    cout << "x is " << x << endl;
    x += y;

    cout << "x += y is " << z << endl;
    cout << "x is " << x << endl;

    // 3. Relational operators
    int j = 2;
    y = 32;

    cout << "j == y: " << (j == y) << endl;
    cout << "j >= y: " << (j >= y) << endl;
    cout << "j < y: " << (j < y) << endl;
    cout << "j <= y: " << (j <= y) << endl;

    // 4. Logical operators
    cout << ((j == y) && (j <= y)) << endl;
    cout << ((j == y) || (j <= y)) << endl;
    cout << ((j != y)) << endl;
    return 0;
}
