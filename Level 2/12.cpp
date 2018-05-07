#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;
class triangle
{
	float b,h,l;
	public:
	float area(float b,float h)
	{
		return (0.5*b*h);
	}
	float area(float l)
	{
		return ((sqrt(3)/4)*pow(l,2));
	}
	float area(float x,float y,float z)
	{
		if(x-y==x-z)
		{
			b=x;
			l=y;
		}
		else if(y-x==y-z)
		{
			b=y;
			l=x;
		}
		else if (z-x==z-y)
		{
			b=z;
			l=x;
		}
		else
		{
			cout<<"Not an isosceles triangle!"<<endl;
		}
		h=sqrt(pow(b/2,2)+pow(l,2));
		return (0.5*b*h);
	}
};

int main()
{
	float a;
	triangle T;
	a=T.area(6,4,4);
	cout<<a;
return 0;

}

