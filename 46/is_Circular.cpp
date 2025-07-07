#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printCircularList(Node *head)
{
    if (!head)
        return;
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

bool isCircular(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return true;
    }
    // normal list
    Node *temp = head->next;
    while (temp->next != NULL && temp->next != head)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
        return false;
    else
        return true;
}

int main()
{
    // Create nodes
    Node *head = new Node{1, nullptr};
    Node *second = new Node{2, nullptr};
    Node *third = new Node{3, nullptr};
    Node *fourth = new Node{4, nullptr};

    // Link nodes to form a circular linked list: 1->2->3->4->1
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;

    // Print the circular linked list
    printCircularList(head);

    cout << boolalpha << isCircular(head) << endl;

    // Free memory (optional for demonstration)
    // Proper deletion in circular list requires care to avoid infinite loop
    Node *temp = head->next;
    while (temp != head)
    {
        Node *next = temp->next;
        delete temp;
        temp = next;
    }
    delete head;

    return 0;
}