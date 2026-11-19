#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next=nullptr;

    Node(int val)
    {
        data=val;
    }
};

class Stack
{
    Node* top;
    int size;

    public:
    Stack(){
        top = nullptr;
        size = 0;
    }

    bool isEmpty()
    {
        return top==nullptr;
    }

    void isSize()
    {
        cout<<size;
    }

    void push(int val)
    {
        Node* temp = new Node(val);
        temp->next = top;
        top=temp;
        size++;
    }

    void pop()
    {
        if(isEmpty()) cout<<"Stack underflow\n";

        else{
            Node* temp = top;
            cout<<"Popped "<<top->data<<endl;
            top=top->next;
            delete temp;
            size--;
        }
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"Stack underflow\n";
            return -1;
        }
        return top->data;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);                  
    cout<<"Top element is: "<<s.peek()<<endl;
    s.pop();
    cout<<"Top element is: "<<s.peek()<<endl;
    s.pop();
    cout<<"Top element is: "<<s.peek()<<endl;
    s.pop();
    
    return 0;
}