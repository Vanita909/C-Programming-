#include <iostream.h>
#include <conio.h>

class Number
{
    int value;

    public:

    void getData()
    {
        cout << "Enter value: ";
        cin >> value;
    }

    Number operator +(Number n)
    {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }

    void display()
    {
        cout << "\nResult = " << value;
    }
};

void main()
{
    clrscr();

    Number n1, n2, n3;

    cout << "Enter first number:\n";
    n1.getData();

    cout << "Enter second number:\n";
    n2.getData();

    n3 = n1 + n2;

    cout << "\nAfter operator overloading:";
    n3.display();

    getch();
}