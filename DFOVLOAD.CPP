//Write a C++ code to demonstrate function overloading

#include <iostream.h>
#include <conio.h>

class Demo
{
    public:

    // Function with two integer arguments
    void add(int a, int b)
    {
        cout << "\nAddition of two numbers = " << a + b;
    }

    // Function with three integer arguments
    void add(int a, int b, int c)
    {
        cout << "\nAddition of three numbers = " << a + b + c;
    }
};

void main()
{
    clrscr();

    Demo obj;

    obj.add(10, 20);
    obj.add(10, 20, 30);

    getch();
}