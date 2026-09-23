#include<iostream.h>
#include<conio.h>

void add(int n)
{
    int num, sum = 0;

    for(int i = 1; i <= n; i++)
    {
        cin >> num;
        sum = sum + num;
    }

    cout << "Sum = " << sum;
}

void main()
{
    clrscr();

    int n;

    cout << "Enter how many numbers: ";
    cin >> n;

    cout << "Enter numbers: ";
    add(n);

    getch();
}
