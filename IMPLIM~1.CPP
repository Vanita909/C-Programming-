#include <iostream.h>
#include <conio.h>

class Student
{
    int rollNo;

    public:

    // Parameterized constructor
    Student(int r)
    {
        rollNo = r;
    }

    // Copy constructor
    Student(Student &s)
    {
        rollNo = s.rollNo;
    }

    void display()
    {
        cout << "\nRoll No: " << rollNo;
    }
};

void main()
{
    clrscr();

    Student s1(101);

    // Copy constructor is called
    Student s2(s1);

    cout << "Original Object:";
    s1.display();

    cout << "\n\nCopied Object:";
    s2.display();

    getch();
}