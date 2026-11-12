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

    for (int i = 1; i <= n; i++)
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
            Node *temp = new Node(val);

            // Link the new node after the current tail, then advance tail.
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    cout << "Enter the 0-based index where you want to insert the new node: ";
    int pos;
    cin >> pos;
    cout << "Enter the value of the new node: ";
    int val;
    cin >> val;

    // Valid insertion indices range from 0 (before the head) through n (after the tail).
    if (pos < 0 || pos > n)
    {
        cout << "Invalid index. The index must be between 0 and " << n << ".";
    }
    else
    {
        Node *newNode = new Node(val);

        if (pos == 0)
        {
            // Insert before the current head; for an empty list, this is also the tail.
            newNode->next = head;
            if (head)
            {
                head->prev = newNode;
            }
            else
            {
                tail = newNode;
            }
            head = newNode;
        }
        else
        {
            // Stop at the node immediately before the requested insertion index.
            Node *prevNode = head;
            for (int i = 1; i < pos; i++)
            {
                prevNode = prevNode->next;
            }

            // Insert after prevNode, reconnecting its successor if there is one.
            newNode->prev = prevNode;
            newNode->next = prevNode->next;
            if (prevNode->next)
            {
                prevNode->next->prev = newNode;
            }
            else
            {
                // There is no successor, so the inserted node becomes the tail.
                tail = newNode;
            }
            prevNode->next = newNode;
        }
    }
    
    cout << "NULL <-> ";  // print the head of the DLL
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << " <-> ";
        curr = curr->next;
    }
    cout << "NULL";

    return 0;
}