#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10], n, i, key;

    clrscr();

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter array elements:\n";
    for(i=0; i<n; i++)
        cin>>a[i];

    cout<<"Enter element to search: ";
    cin>>key;

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            cout<<"Element found at position "<<i+1;
            break;
        }
    }

    if(i==n)
        cout<<"Element not found";

    getch();
}