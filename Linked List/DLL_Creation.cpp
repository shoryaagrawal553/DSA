#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    cout << "Enter size of DLL: ";
    cin >> n;

    cout << "Enter the values: ";

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (!head)
        {
            head = new Node(val);
            tail = head;
        }

        else
        {
            Node *temp = new Node(val); // a new stray node

            temp->prev = tail; // connect the stray's prev pointer to the node pointed by "tail" pointer
            tail->next = temp; // now connect the previous NODE (which is being pointed by tail) to the new stray node
            tail = temp;       // finally move tail to that new node, whose next pointer is already NULL
        }
    }

    cout << "NULL <-> ";
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << " <-> ";
        curr = curr->next;
    }
    cout << "NULL";

    return 0;
}