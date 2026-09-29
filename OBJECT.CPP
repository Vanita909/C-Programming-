#include <iostream.h>
#include <conio.h>
#include<string.h>

class Student
{
    public:
        int rollNo;
        char name[20];

        void display()
        {
            cout << "\nRoll No: " << rollNo;
            cout << "\nName: " << name;
        }
};

void main()
{
    clrscr();

    Student s1, s2;

    s1.rollNo = 101;
    strcpy(s1.name, "Vanita");

    s2.rollNo = 102;
    strcpy(s2.name, "Riya");

    cout << "Student 1:";
    s1.display();

    cout << "\n\nStudent 2:";
    s2.display();

    getch();
}