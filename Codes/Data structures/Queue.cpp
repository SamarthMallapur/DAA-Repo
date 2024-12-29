#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 5
class queue
{
    int arr[MAX];
    int front=-1;
    int rear=-1;
    public:
    bool isempty();
    bool isfull();
    void enqueue();
    void dequeue();
    void display();
};
queue::queue()
{
    int i;
    for(i=0;i<MAX;i++)
    {
        arr[i]=0;
    }
}
bool queue::isempty()
{
    if(front==-1)
        return(1);
    else
        return(0);
}
bool queue::isfull()
{
    if(front==(rear+1)%MAX)
    return(1);
    else
    return(0);
}
void queue::enqueue()
{
    if(isfull())
    {
        cout<<"queue is at max capacity"<<endl;
    }
    else
    {
        int x;
        cout<<"eneter value to be added"<<endl;
        cin>>x;
        if(front==-1)
        {
            front=0;
            rear=0;
            arr[front]=x;
        }
        else
        {
            rear=(rear+1)%MAX;
            arr[rear]=x;
        }
    }
}
void queue::dequeue()
{
    if(isempty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        if(rear==front)
        {
            cout<<"Removed value: "<<arr[rear]<<endl;
            front=-1;
            rear=-1;
        }
        else
        {
            cout<<"Removed value: "<<arr[rear]<<endl;
            front=(front+1)%MAX;
        }
    }
}
void queue::display()
{
    int i=front;
    if(front==-1 && rear==-1)
    cout<<"Queue is empty\n";
    else
    {
        cout<<"The elements are:\n";
        while(i!=rear)
        {
            cout<<arr[i]<<endl;
            i=(i+1)%MAX;
        }
        cout<<arr[rear]<<endl;
        cout<<"\n";
    }
} 
int main()
{
    queue x;
    int n;
    while(1)
    {
        cout<<"enter function to perform:\n";
        cout<<"1-enqueue\n";
        cout<<"2-dequeue\n";
        cout<<"3-display\n";
        cout<<"Any other number to exit\n";
        cin>>n;
        if(n==1)
            x.enqueue();
        else if(n==2)
            x.dequeue();
        else if(n==3)
            x.display();
        else
            exit(0);
    }
}
