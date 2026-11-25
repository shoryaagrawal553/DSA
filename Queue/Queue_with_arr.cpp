#include <bits/stdc++.h>
using namespace std;

class Queue
{
    private:
    int* arr;
    int front, rear;
    int size;

    public:
    Queue(int n)
    {
        arr=new int[n];
        size=n;
        front=rear=-1;
    }

    bool isEmpty()
    {
        return (front==-1 && rear==-1);
    }

    bool isFull()
    {
        return (rear==size-1);
    }

    void enqueue(int val)
    {
        if(isEmpty())
        {
            front=rear=0;
            arr[0] = val;
        }
        else if(isFull())
        {
            cout<<"queue is full\n";            
        }
        else
        {
            rear++;
            arr[rear]=val;
        }
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty \n";
        }

        else if(front==rear)
        {
            cout<<"dequeued "<<arr[front]<<"\n";
            front=rear=-1;
        }

        else
        {
            cout<<"dequeued "<<arr[front]<<"\n";
            front++;
        }
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty\n";
        }
        else
        {
            return arr[front];
        }
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty\n";
        }
        else
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }

};

int main()
{
    int n;
    cout<<"Enter the size of queue: ";
    cin>>n;
    Queue q(n);

    // q.enqueue(1);
    // q.enqueue(2);
    // q.enqueue(3);
    // cout<<"peek: "<<q.peek()<<"\n";
    // q.dequeue();
    // cout<<"peek: "<<q.peek()<<"\n";
    // q.enqueue(4);
    // cout<<"peek: "<<q.peek()<<"\n";
    // q.dequeue();
    // cout<<"peek: "<<q.peek()<<"\n";
    // q.enqueue(5);
    // cout<<"peek: "<<q.peek()<<"\n";
    // q.dequeue();
    // cout<<"peek: "<<q.peek()<<"\n";
    // q.enqueue(6);
    // cout<<"peek: "<<q.peek()<<"\n"; 

    cout<<"Enter the elements to be inserted in queue: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.enqueue(x);
    }

    q.display();

    return 0;
}