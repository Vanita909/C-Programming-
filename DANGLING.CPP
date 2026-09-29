#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int *ptr;

    {
        int num = 25;
        ptr = &num;

        cout << "Value before leaving block = " << *ptr;
    }

    // num is destroyed here.
    // ptr is now a dangling pointer.

    cout << "\nPointer is now dangling.";

    getch();
}