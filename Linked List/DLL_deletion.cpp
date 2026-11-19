#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next =nullptr;
    Node* prev=nullptr; 

    Node(int val)
    {
        data = val;
    }
};

int main()
{
    Node* head = nullptr;
    Node* tail = nullptr;
    int n;
    cout<<"enter the size of DLL: ";
    cin>>n;

    cout<<"Enter the values: ";

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        if(!head)
        {
            head= new Node(val);
            tail=head;
        }
        else
        {
            Node* temp= new Node(val);

            temp->prev=tail;
            tail->next=temp;
            tail=temp;
        }
    }

    Node* dis=head;
    while(dis)
    {
        cout<<dis->data<<" <-> ";
        dis=dis->next;
    }
    cout<<"NULL\n";

    //the deletion logic:- 
    int pos;
    cout<<"enter the position to delete:- ";
    cin>>pos;

    Node* trav=head;
    if(pos==0)
    {
        if(head->next==nullptr) 
        {
            delete head;
            head=nullptr;
        }

        else
        {
            head=head->next;
            head->prev=nullptr;
            delete trav;            
        }
    }
    
    else
    {
        while (--pos)
        {
            trav=trav->next;
        }
        if(trav->next == nullptr)
        {
            trav->prev->next=nullptr;
            tail=trav->prev;
            delete trav;
        }
        else
        {
            trav->prev->next = trav->next;
            trav->next->prev = trav->prev;
            delete trav;
        }
    }

    cout<<"After deletion:- \n";
    Node* disp=head;
    cout<<"NULL <-> ";
    while(disp)
    {
        cout<<disp->data<<" <-> ";
        disp=disp->next;
    }
    cout<<"NULL";


    return 0;
}