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
