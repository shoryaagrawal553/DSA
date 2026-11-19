#include <iostream>
using namespace std;

class Stack
{
    public:
    int *arr;
    int top;
    int size;

    public:
    bool flag;
    Stack(int s)
    {
        top=-1;
        size=s;
        arr = new int[s];
        flag =1;
    }

    bool isEmpty()
    {
        return top==-1;
    }

    bool isFull()
    {
        return size == top+1;
    }

    void push(int val)
    {
        if(isFull()) 
        {
            cout<<"Stack overflow";
        }

        else{
            top++;
            arr[top] = val;
            flag=0;
            cout<<"Pushed "<<val<<endl;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack underflow";
        }
        else
        {
            cout<<"Popped "<<arr[top]<<endl;
            top=top-1;
            if(top==-1) flag=1;
        }
    }

    int peek(){
        if(isEmpty())
        {
            cout<<"Stack underflow\n";
        }
        else{
            return arr[top];
        }
    }
};

int main()
{
    // Stack st(5);

    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);

    // cout<<st.peek()<<endl;
    // st.pop();
    // cout<<st.peek()<<endl;
    // st.pop();
    // cout<<st.peek()<<endl;

    cout<<"Enter the size of stack: ";
    int n;
    cin>>n;
    Stack st(n);   

    cout<<"Enter the values: ";
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        st.pop();
    }

    return 0;
}