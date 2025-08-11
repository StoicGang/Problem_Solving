#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

void removeduplicate(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next != NULL && curr->next->data == curr->data)
        {
            // if two adjacent nodes are equal (duplicate found)
            Node *nodeToDelete = curr->next;
            Node *nextNode = curr->next->next;
            // first delete the node next to current
            delete (nodeToDelete);
            // update the linking to next pointer
            curr->next = nextNode;
        }
        else
        {
            curr = curr->next;
        }
    }
}

int main()
{
    // Create nodes
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(3);

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    // before removing duplicate
    print(head);

    // after removing duplicate
    removeduplicate(head);
    print(head);

    return 0;
}