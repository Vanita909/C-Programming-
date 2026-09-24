//parameterrized constructor(constructor with argument)

#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public :
		A(int x,int y) //parameterized constructor
		{
			cout<<"\n parameterized constructor";
			a=x;
			b=y;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
void main()
{
	int x,y;
	clrscr();
	cout<<"\n Enter two numbers :";
	cin>>x>>y;
	//A a2;
	A a1(x,y);
	a1.put();
	getch();
}