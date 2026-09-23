#include<iostream.h>
#include<conio.h>
void main()
{
    int n, original, digit, sum = 0;
    clrscr();
    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
	digit = n % 10;
	sum = sum + digit * digit * digit;
	n = n / 10;
    }

    if (original == sum)
	cout << "Armstrong";
    else
	cout << "Not Armstrong";

    getch();
}
