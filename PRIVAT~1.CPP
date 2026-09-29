//Write a C++ code to access private members using a friend function.
#include <iostream.h>
#include <conio.h>

class Student
{
    private:
        int marks;

    public:
        Student()
        {
            marks = 85;
        }

        friend void display(Student s);
};

// Friend function
void display(Student s)
{
    cout << "\nMarks = " << s.marks;
}

void main()
{
    clrscr();

    Student s;

    display(s);

    getch();
}