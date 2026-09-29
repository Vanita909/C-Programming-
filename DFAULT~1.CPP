#include <iostream.h>
#include <conio.h>
#include<string.h>
class Student
{
    int rollNo;
    char name[20];

    public:

    // Constructor with default values
    Student(int r = 101, char n[] = "Vanita")
    {
        rollNo = r;
        strcpy(name, n);
    }

    void display()
    {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
    }
};

void main()
{
    clrscr();

    Student s1;              // Uses default values
    Student s2(102, "Riya"); // Uses given values

    cout << "Student 1:";
    s1.display();

    cout << "\n\nStudent 2:";
    s2.display();

    getch();
}