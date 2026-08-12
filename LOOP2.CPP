#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			cout<<i<<" ";
		}
		for(j=i;j<=5-i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	getch();
}