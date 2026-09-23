#include<iostream.h>
#include<conio.h>
void main()
{
    int m1, m2, m3;
    int fail = 0;
    clrscr();

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    if (m1 < 40)
	fail++;

    if (m2 < 40)
	fail++;

    if (m3 < 40)
	fail++;

    if (fail == 0)
	cout << "Result: PASS";

    if (fail == 1)
	cout << "Result: ATKT";

    if (fail >= 2)
	cout << "Result: FAIL";
    getch();
}
