#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10], n, i, key;
    int low=0, high, mid;

    clrscr();

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter sorted array elements:\n";
    for(i=0; i<n; i++)
        cin>>a[i];

    cout<<"Enter element to search: ";
    cin>>key;

    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            cout<<"Element found at position "<<mid+1;
            break;
        }
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(low > high)
        cout<<"Element not found";

    getch();
}