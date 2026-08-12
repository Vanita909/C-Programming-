#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10], n, i, max;

    clrscr();

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter array elements:\n";
    for(i=0; i<n; i++)
        cin>>a[i];

    max = a[0];

    for(i=1; i<n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    cout<<"Maximum element = "<<max;

    getch();
}