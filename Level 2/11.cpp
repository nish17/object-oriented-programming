
#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class String
{
	char s[100];
	int size;
	public:
	void get()
	{
	    cout<<"Enter string : ";
		cin>>s;
	}
	void show()
	{
		cout<<"You entered: "<<s;
	
	}
	String operator +(String obj)
    {
	
	String str;
    strcat(s,obj.s);
    strcpy(str.s,s);
    return(str);
    }
	int operator ==(String obj)
	{
		if(strcmp(s,obj.s)==0)
		return 1;
		else
		return 0;
	}
};

int main()
{
	String S1,S2,S3,S4;
	char mg1[10],mg2[10];
		
		S1.get();
		S2.get();
		if(S1==S2)
		cout<<"\nEqual";
		else
		cout<<"\nNot equal";
		S1+S2;
		
return 0;
}

