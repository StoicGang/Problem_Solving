#include <vector>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

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

int getLength(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(node *&head, node *&tail, int d)
{
    node *temp = new node(d);
    temp->next = head;
    if (head == NULL)
    {
        // If list is empty, set both head and tail
        tail = temp;
    }
    else
    {
        head->prev = temp;
    }
    head = temp;
}

void insertAtTail(node *&head, node *&tail, int d)
{
    node *temp = new node(d);
    if (tail == NULL)
    {
        // If list is empty, set both head and tail
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtPosition(node *&tail, node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, tail, d); // Fix: Add tail parameter
        return;
    }
    node *temp = head;

    // checking if the linked list is empty or position is invalid
    if (head == NULL)
    {
        insertAtHead(head, tail, d); // Fix: Add tail parameter
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
        insertAtTail(head, tail, d); // Fix: Add head parameter
        return;
    }
    //  create node for d
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertAtHead(head, tail, 12);
    printList(head);
    insertAtHead(head, tail, 20);
    printList(head);
    insertAtHead(head, tail, 11);
    printList(head);
    insertAtTail(head, tail, 56);
    printList(head);

    InsertAtPosition(tail, head, 3, 23);
    printList(head);
    return 0;
}