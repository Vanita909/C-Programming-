#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	cout<<endl<<"Enter number :";
	cin>>no;
	if(no%2==0)
	{
		cout<<"no is even"<<endl;
	}
	else
	{
		cout<<"no is odd";
	}
	getch();
}