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

// approach 1 -- length
int getlength(node *head)
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

node *findMiddle(node *head)
{
    int length = getlength(head);
    node *temp = head;
    int count = 0;
    int mid = length / 2;
    while (count < mid)
    {
        head = head->next;
        count++;
    }
    return head;
}

// approach 2
node* fast_mid(node * head){
    node * temp = head;
    while(temp != NULL && temp->next != NULL){
        temp = temp->next->next;
        head = head->next;
    }
    return head;
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
    cout << "Middle element of Linked list : ";
    printList(fast_mid(head));

    return 0;
}