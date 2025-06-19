#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void InsertAtHead(node *&head, int d)
{
    // new node create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(node *&tail, int d)
{
    // new node create
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(node *&tail, node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    node *temp = head;

    // checking if the linked list is empty or position is invalid
    if (head == NULL)
    {
        InsertAtHead(head, d);
        return;
    }

    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at end
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
    //  create node for d
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

node *reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    while (curr != NULL)
    {
        node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    return prev;
}

node *recursive_reverse(node *&head, node *&prev, node *&curr)
{
    // base condition
    if (curr == NULL)
    {
        head = prev;
        return prev;
    }
    node *forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
    return recursive_reverse(head, prev, curr);
}

node *recursive_reverse1(node *&head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *chotahead = recursive_reverse1(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotahead;
}

void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = new node(10);
    node *tail = head;
    InsertAtPosition(tail, head, 1, 23);
    InsertAtPosition(tail, head, 1, 56);
    InsertAtPosition(tail, head, 1, 87);
    InsertAtPosition(tail, head, 1, 42);
    InsertAtPosition(tail, head, 1, 11);

    printList(head);

    // reverse(head);
    head = recursive_reverse1(head);
    // node *prev = nullptr;
    // recursive_reverse(head, prev, head);

    cout << "After reversing " << endl;
    printList(head);
    return 0;
}