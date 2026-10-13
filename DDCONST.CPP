//Dynamic constructor

#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	int len;
	char *nm;
	public :
		string() //Default cons
		{
			cout<<"\n Default Dynamic constructor";
			len=0;
			nm=new char[len+1];
		}
		string(char*s)  //parameterized constructor
		{
			cout<<"\n Parameterized Dynamic constructor";
			len=strlen(s);
			nm=new char[len+1];
			//nm=s;
			strcpy(nm,s);
		}
		void put()
		{
			cout<<"\n Name="<<nm;
		}
		friend string concat(string s1,string s2);
};
string concat(string s1,string s2)
{
	string s3;
	s3.len=s1.len+s2.len;
	s3.nm=new char[s3.len+1];
	strcpy(s3.nm,s1.nm);
	strcat(s3.nm,s2.nm);
	return(s3);
}
void main()
{
	clrscr();
	string s1("Vaghela"),s2("Vanita"),s3;

	s3=concat(s1,s2);

	s1.put();
	s2.put();
	s3.put();
	getch();
}