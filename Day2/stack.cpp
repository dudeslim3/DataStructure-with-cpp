#include <iostream>
using namespace std;

int s[100],tos,size;

void init(int a)
{
	tos=-1;
	size=a;
}

bool isFull()
{
	if(tos==(size-1))
	return true;
	else 
	return false;
}
void push(int e)
{
	tos++;
	s[tos]=e;
}

bool isEmpty()
{
	if(tos==-1)
	return true;
	else 
	return false;
}

int pop()
{
	tos--;
}

int atTop()
{
	return s[tos];
}

void printStack()
{
	for(int i=tos;i>-1;i--)
	{
		cout<<"\t"<<s[i];
	}
	cout<<"\n";
}
int main()
{
	cout<<"Enter size of stack "<<endl;
	int a, choice;
	cin>>a;
	init(a);
	
	cout<<" \n1.push \n2.pop \n3.Top \n4.print \n0.Exit"<<endl;
	do
	{
		cout<< "Enter choice:"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				if(isFull())
				{
					cout<<"Stack is full"<<endl;
				}
					else
				{
					int k;
					cout<<"Enter element to push"<<endl;
					cin>>k;
					push(k);
				}
				break;
				
				case 2:
					if(isEmpty())
					{
						cout<<"Stack in empty"<<endl;
					}
					
					else
					{
						int a=atTop();
						pop();
						cout<<"Deleted Element: "<<a<<endl;
					}
					break;
					
				case 3:
					if(isEmpty())
					{
						cout<<"Stack in empty"<<endl;
					}
					else
					{
						cout<<atTop()<<endl;
					}
					break;
				case 4:
					if(isEmpty())
					{
						cout<<"Stack in empty"<<endl;
					}
					else
					{
						printStack();
					}
					break;
				case 0:
					cout<<"Exit"<<endl;
					break;
					
					default:
						cout<<"Enter Valid Choice"<<endl;
		}
	}while(choice!=0);
}
