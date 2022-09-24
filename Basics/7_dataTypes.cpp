#include <iostream>
using namespace std;

int main()
{
    // DataTypes in cpp
    // int, float, double , long int, short int, signed etc

    // int --> 1,2,4,5,6,7,3,8,9,0  (whole numbers)
    // float , double --> 1.43, 54.23, 654.23 (decimal Values )
    // bool --> true , false

    std::string strvar = "This is DataType Tutorial of cpp";
    char c = 'A';

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;

    cout << c << endl;
    cout << strvar[0] << endl;
    cout << strvar[1] << endl;
    cout << sizeof(strvar) << endl;

    return 0;
}