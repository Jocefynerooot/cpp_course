#include <iostream>
using namespace std;

int main()
{

    // && --> and
    // || --> or
    // !  --> not

    int var = 8;
    int var2 = 4;
    int var3 = var - var2;

    // || --> or operator
    if ((var == var2) || (var > var2))
    {
        cout << var << " is greater than or equals to " << var2 << ": " << var + var2 << endl;
    }

    // && --> and operator
    if ((var2 == var3) && (var > var2))
    {
        cout << var << " is greater than and equals to " << var2 << ": " << var + var2 << endl;
    }

    // ! --> not operator
    if (!((var2 == var3) && (var > var2)))
    {
        cout << var << " is not greater than and equals to " << var2 << ": " << var + var2 << endl;
    }
    else
    {
        cout << "Condition failed" << endl;
    }

    return 0;
}
