#include <iostream>
using namespace std;
int que[10],rear=-1,front=0,size=10;

bool isfull()
{
	if(size-1==rear)
        {
		return true;
		}
		else
		{
		
		return false;
	}
}
void enque(int e)
{
	if(isfull())
	{
		cout<<"enque element";
	}
	else
	{
		rear++;
		que[rear]=e;
	}
	
}
bool isempty()
{
	if(front>rear)
	{
		return true;
	}
	else
	{
	return false;
   }
}
int deque()
{
	if(isempty())
	{
		cout<<"nthing to deque";
	}
	else
	{
		int temp=que[front];
		front++;
		return(temp);
	}
}


void printque()
{
	for(int i=front;i<=rear;i++)
	{
	  cout<<que[i];
	}
}

int main()
{
 int choice,e;
   do
    {
        cout<<"\n1.enque: \n2.deque \n3.printque";
        cin>>choice;
        switch(choice)
        {
            case 1:
            
               {
				cout<<"Enter data to be pushed:";
                cin>>e;
                enque(e);
               }
        break;
        case 2:
        {
		
            e=deque();
            cout<<"popped"<<e;
        }
        break;
       
        case 3:
          printque();
        break;
  }
    
    }
        while(choice!=0);   
	}


