#include <iostream>
using namespace std;

// Each node stores one integer value and a pointer to the next node.
// This is the basic building block of a singly linked list.
class Node
{
    public:
    int data;      // Data stored in this node
    Node* next;    // Pointer to the next node in the list

    Node(int val)
    {
        data = val;
        next = NULL;  // New nodes initially do not point to any next node
    }
};

int main()
{
    // head points to the first node and tail points to the last node.
    Node *head, *tail;
    tail = head = NULL;

    int n;
    cout << "Enter the LL length: ";
    cin >> n;

    cout << "Enter the values: ";

    // Build the linked list by creating a new node for each value.
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;

        if (head == NULL)
        {
            head = new Node(val); // First node becomes the head
            tail = head;          // Tail also points to the first node
        }
        else
        {
            tail->next = new Node(val); // Attach the new node at the end
            tail = tail->next;          // Move tail forward to the newly added node
        }
    }

    int pos;
    cout << "Enter the position where you want to insert the node: ";
    cin >> pos;

    int val;
    cout << "Enter the value of the node you want to insert: ";
    cin >> val;

    // Create the new node that will be inserted in the list.
    Node *temp = new Node(val);
    Node *curr1 = head;

    // Move curr1 to the node just before the insertion position.
    // For example, if pos = 2, we stop at the first node and insert after it.
    for (int i = 1; i < pos; i++)
    {
        curr1 = curr1->next;
    }

    // Save the original next pointer so the list remains connected.
    Node *fut = curr1->next;

    // Insert temp between curr1 and the original next node.
    curr1->next = temp;
    temp->next = fut;

    // Traverse and print the list after insertion.
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL";

    return 0;
}