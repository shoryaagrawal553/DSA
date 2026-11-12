#include <iostream>
using namespace std;

class Node  // blueprint/structure/skeleton for a node of LL
{
    public:
    int data;
    //Node* next = NULL; // a next pointer
    Node* next = nullptr; // from C++11 onwards, we can use nullptr instead of NULL (which is a macro) to represent a null pointer. It is type-safe and avoids some issues that can arise with NULL.

    Node(int val)
    {
        data = val;
        //next = NULL; // instead of explicitly declaring next as NULL in the constructor, we can also do it in the class definition itself (as done in the DLL_insertion_at_any.cpp file)
    }
};

int main()
{
    Node *head,*tail;
    tail = head=NULL;

    int n;
    cout<<"Enter the LL length: ";
    cin>>n;
    
    cout<<"Enter the values: ";

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;

        if(head == NULL)
        {
            head = new Node(val);
            tail=head;
        }
        else
        {
            tail->next = new Node(val);
            tail=tail->next;  // which will be NULL (as defined in the Node class)
        }
    }

    Node *curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<"->";
        curr=curr->next;
    }
cout<<"NULL";
    return 0;
}