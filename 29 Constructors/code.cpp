#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructer
    // Constructor is a special member function with same name as of the class.
    // It is used to initialize thr objects of its class.
    // It is automatically invoked whenever an object is created.

    Complex(void); // Constructor declaration.

    void printNumber()
    {
        cout << "Your Number is : " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // --> This is a default constructor, as it takes no parameters.
{
    // a = 10;
    // b = 5;

    a = 0;
    b = 0;

    // cout << "Hello from constructor" << endl;
}

int main()
{
    Complex c;
    c.printNumber();

    // Complex c, c1, c2, c3;
    // c.printNumber();
    // c1.printNumber();
    // c2.printNumber();
    // c3.printNumber();
    return 0;
}

/* Characteristics of Constructors:

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.

*/