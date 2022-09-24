#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string var = "Jocefyneroot";
    cout << var << endl;

    cout << var.size() << endl;

    var.append("m");

    cout << var << endl;
    cout << var.size() << endl;
    cout << var.find("n") << endl;
    cout << var.at(3) << endl;

    var.insert(0, "c");
    cout << var << endl;

    // index
    cout << var[4] << endl;
    cout << var[5] << endl;
    cout << var[6] << endl;

    // var[0] = "M"; # not working

    return 0;
}
