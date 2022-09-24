## CPP Basic Topics

#### Basic Startup code
```cpp
#include <iostream>

int main()
{

    // code here

    return 0;
}
```

#### Operators Name [<< , >>]
```cpp
/*
    << ---> Insertion Operator
    >> ---> Extraction Operator
*/
```

#### cout
>The "c" in cout refers to "character" and "out" means "output". Hence cout means "character output". The cout object is used along with the insertion operator << in order to display a stream of characters.
```cpp
#include <iostream>

int main()
{
    std::cout << "Hello i am cout "
              << "hi there "
              << 1232 << true << "\n";

    std::cout << "Hello everyone"
              << "\n";

    std::cout << "Please Comment" << std::endl;
}
```
```terminal
Hello i am cout hi there 12321
Hello everyone
Please Comment
```
#### cin
>The "c" in cin refers to "character" and "in" means "input". Hence cin means "character input". The cin object is used along with the extraction operator >> in order to take a stream of characters from console.
```cpp
#include <iostream>

int main()
{

    int a; // don't worry about variables we'll learn it in next video
    std::cout << "Enter a Number: ";
    std::cin >> a;

    std::cout << "Value of a is: " << a << std::endl;

    return 0;
}
```
```
Enter a Number: 12
Value of a is: 12
```

#### endl --> for new line
```cpp
#include <iostream>

int main()
{

    // without endl;
    std::cout << "Hello everyone";
    std::cout << "Please Comment";

    // with endl;
    std::cout << "Hello everyone"
              << std::endl;
    std::cout << "Please Comment" << std::endl;

    // you can also use \n escape sequence character we'll look into it in later videos
    std::cout << "Hello everyone"
              << "\n";
    std::cout << "Please Comment" << "\n";

    return 0;
}
```
### Output
without endl
```terminal
Hello everyonePlease Comment ...
```

with endl
```terminal
Hello everyone 
Please Comment
```


## Variables
#### What are Variables ?
>Variables are containers to store data values. there are different types of variables in cpp.(defined with different keywords) ex:- int, double, bool
int --> for storing integers (whole Numbers). ex.- 1,4,6,2,6,43,-43 etc
double -->for storing floating point numbers with decimal. ex.- 1.4, 43.5 or -43.2 etc
bool --> for storing boolean values. ex.- true, false

simple code example
```cpp
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Variables Tutorial" << endl;

    int var = 12;

    cout << 12 << endl;
    cout << var << endl;
    
    var = 14;

    int var2 = var;

    cout<< var2 << endl;

    return 0;
}
```
```output
Variables Tutorial
12
12
14
```
## DataTypes
```cpp
/* 
    DataTypes in cpp
        int
        float
        double 
        bool
        signed etc
*/
```
code example
```cpp
#include <iostream>
using namespace std;

int main()
{
    /* DataTypes in cpp
      int
      float
      double 
      bool
      signed etc
    */

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
```
```
Size of int: 4
Size of float: 4
Size of double: 8
Size of long double: 16
Size of long int: 8
A
T
h
32
```
### More On Variables
```cpp
#include <iostream>
using namespace std;

int main()
{
    // more on variables

    // what is variable ?
    // int a = 12;

    // cout << 15 << endl;
    // cout << 15 << endl;
    // cout << 15 << endl;
    // cout << 15 << endl;
    // cout << 15 << endl;

    // cout << "With Variable" << endl;
    // a = 15;
    // cout << a << endl;
    // cout << a << endl;
    // cout << a << endl;
    // cout << a << endl;
    // cout << a << endl;

    // int , float, bool, char, double

    int a = 11;
    float b = 12.43f;
    char c = 'C';
    double d = 12.43;

    // 43.43f;

    cout << "Value of a is: " << a + b << endl;
    cout << "Value of b is: " << b << endl;
    cout << "Value of c is: " << c << endl;
    cout << "Value of d is: " << d << endl;

    int e, f, g, h, i;

    e = 1;
    f = 32;
    cout << "Value of e is: " << e << endl;
    cout << "Value of f is: " << f << endl;
    cout << "Value of g is: " << g << endl;

    return 0;
}
```

## Strings
```cpp
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // creating variable
    string var = "Jocefyneroot";

    // printing
    cout << var << endl;

    cout << var.size() << endl; // printing size

    // string functions
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

    // var[0] = "M"; # not allow

    return 0;
}
```
```
Jocefyneroot
12
Jocefynerootm
13
6
e
cJocefynerootm
e
f
y
```