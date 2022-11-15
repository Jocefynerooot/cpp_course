#include <iostream>
using namespace std;
int main()
{

    int time = 20;

    if (time < 18)
    {
        cout << "Good Day!!!" << endl;
    }
    else
    {
        cout << "Good evening!!!" << endl;
    }

    (time < 18) ? (cout << "Good Day!!!" << endl) : (cout << "Good evening!!!" << endl);

    return 0;
}
