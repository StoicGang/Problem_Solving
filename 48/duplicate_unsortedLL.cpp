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
    cout << endl;
}

void removeduplicate(Node *&head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    while (curr != NULL)
    {
        // for each node check if duplicate is present or not
        for (Node *temp = curr; temp != NULL; temp = temp->next)
        {
            if (temp->next != NULL && curr->data == temp->next->data)
            {
                // duplicate present
                Node *nodeToDelete = temp->next;
                Node *nextNode = temp->next->next;
                // delete the node
                delete nodeToDelete;
                temp->next = nextNode;
            }
            // duplicate not present carry on guys
        }
        curr = curr->next;
    }
}

int main()
{
    // Create nodes
    Node *head = new Node(1);
    Node *second = new Node(3);
    Node *third = new Node(2);
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