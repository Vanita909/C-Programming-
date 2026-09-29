#include <iostream.h>
#include <conio.h>

int* getPointer(int *num)
{
    return num;
}

void main()
{
    clrscr();

    int n;
    int *ptr;

    cout << "Enter a number: ";
    cin >> n;

    ptr = getPointer(&n);

    cout << "\nValue = " << *ptr;
    cout << "\nAddress = " << ptr;

    getch();
}