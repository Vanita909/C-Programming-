#include <iostream.h>
#include <conio.h>

class Demo
{
    public:

        // Constructor
        Demo()
        {
            cout << "\nConstructor is called.";
        }

        // Destructor
        ~Demo()
        {
            cout << "\nDestructor is called.";
        }
};

void main()
{
    clrscr();

    cout << "Creating object...";
    {

    Demo obj;

    cout << "\nInside main function.";
    }

    cout<<"\nobject destroyed.";
    getch();
}