#include<vector>
#include<fstream>
#include<iostream>
#include<stdio.h>

using namespace std;
class product
{
	int pro_id;
	char name[50];
	public:
		void set()
		{
			cout<<"Enter product name: ";
			cin>>name;
			cout<<"\nEnter product id: ";
			cin>>pro_id;
		}
		void print()
		{
			cout<<"\nProduct name is: "<<name;
			cout<<"\nProduct id is: "<<pro_id;
		}	
		void write()
		{
			ofstream fout;
			fout.open("17.txt",ios::app);
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void read()
		{
			ifstream fin;
			fin.open("17.txt",ios::app);
			while(fin.read((char*)this,sizeof(*this)))
			{
				print();
			}
			fin.close();
		}
};

int main()
{
	int i;
	product k;
	vector<product> p;
	vector<product>::iterator j;
	product A;
	product B;
	product C;
	A.set();
	B.set();
	C.set();	
	p.push_back(A);
	p.push_back(B);
	p.push_back(C);
//	for(i=0;i<3;i++)
//	p[i].print();
	
	for(i=0;i<3;i++)
	{
		p[i].write();
	}
//	A.read();

	for(j=p.begin();j!=p.end();j++)
	{
		k=*j;
		k.print();
	}
	return 0;
}
