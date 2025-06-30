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

void printL(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void InsertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    temp = head;
}

void InsertAtTail(node *&tail, int d)
{
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

node *K_reverse(node *head, int k)
{
    // base case
    if (head == NULL)
        return head;
    // step 1 : reverse till k is reached
    node *curr = head;
    node *prev = NULL;
    node *next = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // step 2 : recursion
    if (next != NULL)
    {
        head->next = K_reverse(next, k);
    }

    // step 3 : return
    return prev;
}

int main()
{
    node *head = new node(2);
    node *tail = head;
    InsertAtTail(tail, 3);
    InsertAtPosition(tail, head, 2, 4);
    InsertAtPosition(tail, head, 2, 5);
    printL(head);
    cout << endl;
    printL(K_reverse(head, 3));
    return 0;
}