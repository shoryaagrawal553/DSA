#include <iostream>
using namespace std;

class Node  // blueprint/structure/skeleton for a node of LL
{
    public:
    int data;
    Node* next; // a next pointer

    Node(int val)
    {
        data = val;
        next = NULL;
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