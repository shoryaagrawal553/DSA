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

    int pos;
    cout<<"Enter the position to delete: ";
    cin>>pos;

    if(pos == 1) // if the first node is to be deleted
    {
        Node* temp = head;
        head = head->next;  // move head to the next node
        delete temp;  // delete the old head node
    }

    else{
        pos--;  // decrement pos to reach the node just before the one to be deleted
        Node* curr = head;
        Node*prev=NULL;
        while(pos--)
        {
            prev=curr;
            curr=curr->next;
            
        }

       prev->next=curr->next;  // bypass the node to be deleted
       delete curr;  // delete the node at the specified position
    }

    Node *curr2 = head;  // printing the LL
    while(curr2 != NULL)
    {
        cout<<curr2->data<<"->";
        curr2=curr2->next;
    }
cout<<"NULL";
    return 0;
}