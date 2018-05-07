#include<iostream>
#include<stdio.h>
#include<string.h>>
using namespace std;
class node
{
	static int id;
	char name[50];
	int count;
	public:
		node()
		{
			cout<<"Name of node: ";
			cin>>name;
			cout<<"Node created with name: "<<name;
			id=id+1;
			cout<<" and id "<<id;
			count=0;
		}
		int get_index()
		{
			return id;
		}
		
		void print_s(char *mg)
		{
			cout<<"\nMesaage sent: "<<mg<<"\nFrom node "<<name<<" and id "<<id;
			count=count+1;
		}
		void print_d(char *mg)
		{
			cout<<" to node "<<name<<" and id "<<id;
		}
		void show()
		{
			cout<<"Node name: "<<name;
			cout<<"Node id : "<<id;
			cout<<"Total msg sent: "<<count;
		}
		int get_count()
		{
			return count;
		}
		
};
int node::id=1000;

int main()
{
	int choice,num,i,s,d,temp,src,des,max,ind;
	char *msg;
	char *nm;
	node *n[10];
	/*	cout<<"\nEnter number of nodes: ";
		cin>>num;
		for(i=0;i<num;i++)
		{
			
			 n[i]=new node;
		}*/
				
		cout<<"\n\n\nMessenger begins......\n\n\n";
		do
		{
		cout<<"To continue sending msg press 1 else press 2 to exit";
		cin>>choice;
		switch(choice)
		do
		{
			cout<<"Enter source node id : ";
			cin>>src;
			cout<<"Enter the destination node id : ";
			cin>>des;
			cout<<"\nEnter message to be sent: ";
			cin>>msg;
			for(i=0;i<num;i++)
			{
				if(src==n[i]->get_index())
				s=src;
				if(des==n[i]->get_index())
				d=des;
			}
			n[s]->print_s(msg);
			n[d]->print_d(msg);
		}while(strcmp(msg,"stop")!=0);
		}while(choice!=2);
		// for max count......
		for(i=0;i<num;i++)
		{
			temp=n[i]->get_count();
			if(temp>max)
			{
				max=temp;
				ind=i;
			}	
		}
		cout<<"Maximum number of messages sent by: ";
		n[ind]->show();
	return 0;
}

