#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int a[3] = {10, 20, 30};
    int *ptr;

    ptr = a;

    cout << "Value at ptr       = " << *ptr << endl;

    ptr++;
    cout << "Value after ptr++  = " << *ptr << endl;

    ptr++;
    cout << "Value after ptr++  = " << *ptr << endl;

    ptr--;
    cout << "Value after ptr--  = " << *ptr << endl;

    getch();
}