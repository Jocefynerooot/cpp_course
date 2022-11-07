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

## Keywords
Keywords (also known as reserved words) have special meaning to the C++ compiler and are always written or typed in short(lower) cases. Keywords are words that the language uses for a special purpose, such as void, int, public, etc. It can't be used for a variable name or function name.

### C++ (84 reserved keywords)
| | | | |
|---|---|---|---|
|  alignas | alignof | asm | auto |
|  bool | break | case | catch |
|  char | char16_t | char32_t | class |
|  const | constexpr | const_cast | continue |
|  decltype | default | delete | do |
|  double | dynamic_cast | else | enum |
|  explicit | export | extern | false |
|  float | for | friend | goto |
|  if | inline | int | long |
|  mutable | namespace | new | noexcept |
|  nullptr | operator | private | protected |
|  public | register | reinterpret_cast | return |
|  short | signed | sizeof | static |
|  static_assert | static_cast | struct | switch |
|  template | this | thread_local | throw |
|  true | try | typedef | typeid |
|  typename | union | unsigned | using |
|  virtual | void | volatile | wchar_t |
|  while | and | and_eq | bitand |
|  bitor | compl | not | not_eq |
|  or | or_eq | xor | xor_eq |

## Operators
an operator is a symbol that operates on a value or a variable.

#### Type of Operators in cpp
1. Arithmatic operators --> +, -, *, /, %
2. Assignment operators --> =, +=, -=, /=, *=
3. Relational operators --> ==, >=, <=, > , <
4. Logical operators --> &&, ||, !          (and, or not)
5. Bitwise operators --> & , >>, <<
6. others --> &, <<, >>

### 1. Arithmatic operators 
Arithmetic Operators in C++ are used to perform arithmetic or mathematical operations on the operands.
##### example 
```cpp
// 1. Arithmatic operators
int a = 21;
int b = 2;

cout << "a + b is " << a + b << endl;
cout << "a - b is " << a - b << endl;
cout << "a * b is " << a * b << endl;
cout << "a / b is " << a / b << endl;
cout << "a % b is " << a % b << endl;
```

### 2. Assignment operators 
assignment operators are used to assign values to variables.
##### example 
```cpp
// 2. Assignment operators
int x = 4;
int y = 2;
int z = x += y;
cout << "x is " << x << endl;
x += y;

cout << "x += y is " << z << endl;
cout << "x is " << x << endl;
```

### 3. Relational operators
A relational operator is used to check the relationship between two operands.
##### example 
```cpp
// 3. Relational operators
int j = 2;
y = 32;

cout << "j == y: " << (j == y) << endl;
cout << "j >= y: " << (j >= y) << endl;
cout << "j < y: " << (j < y) << endl;
cout << "j <= y: " << (j <= y) << endl;
```

### 4. Logical operators 
Logical operators are used to check whether an expression is true or false. If the expression is true, it returns 1 whereas if the expression is false, it returns 0.
##### example 
```cpp
// 4. Logical operators
cout << ((j == y) && (j <= y)) << endl;
cout << ((j == y) || (j <= y)) << endl;
cout << ((j != y)) << endl;
```

### 5. Bitwise operators 
bitwise operators perform operations on integer data at the individual bit-level.
##### example 
```cpp
a & b;
a | b;
```

### 6. others
some other common operators available in C++. 
##### example 
```cpp
// << --> prints the output value	
cout << 5;
// >> --> gets the input value	
cin >> num;

/// sizeof --> returns the size of data type	
sizeof(int); // 4

// ?: --> returns value based on the condition	
std::string result = (5 > 0) ? "even" : "odd"; // "even"

// . --> accesses members of struct variables or class objects	
s1.marks = 92;

// we are going to learn pointers in up comming videos so don't worry about these operators
// & --> represents memory address of the operand	
&num; // address of num


// ->	--> used with pointers to access the class or struct variables	
ptr->marks = 92;
```

