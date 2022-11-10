#include <iostream>
using namespace std;

int main()
{

    int a = 32;
    int b = 56;

    // if-else
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "a is less than b" << endl;
    }

    // if-else-if-else ladder
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else if (a < b)
    {
        cout << "a is less than b" << endl;
    }
    else if (a >= b)
    {
        cout << "a is less than b" << endl;
    }
    else if (a == b)
    {
        cout << "a is less than b" << endl;
    }
    else if (a != b)
    {
        cout << "a is less than b" << endl;
    }
    else
    {
        cout << "all conditions are failed" << endl;
    }

    // can we use only if --> yes
    int x = 12;
    int y = 43;
    if (x < y)
    {
        cout << " x is less than y" << endl;
    }

    cout << "Checking some conditions" << endl;
    // can we use only else without if --> no
    /*
        else
        {

        }
    */
    // can we use else if without if --> no
    /*
        else if (x < y)
        {
            cout << " x is less than y" << endl;
        }
    */

    cout << "END OF THE PROGRAM" << endl;
    return 0;
}
