#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node()
    {
        this->data = data;
        this->next = next;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void InsertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    Node *temp = head;

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
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node *&head)
{
    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any node other than first node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int searchInLinkedList(Node *&head, int k)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
int main()
{
    // create a new node
    Node *node1 = new Node(12);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to new node
    Node *head = node1;
    print(head);

    // insert at head
    InsertAtHead(head, 10);
    cout << "After inserting at head" << endl;
    print(head);
    InsertAtHead(head, 8);
    InsertAtHead(head, 6);
    print(head);

    // insert at the tail
    Node *tail = node1;
    InsertAtTail(tail, 14);
    cout << "After inserting at tail" << endl;
    print(head);
    InsertAtTail(tail, 16);
    InsertAtTail(tail, 18);
    print(head);

    // insert at specific position
    InsertAtPosition(tail, head, 3, 9);
    cout << "After inserting at a position" << endl;
    print(head);

    // search in linked list
    cout << "9 is present :" << searchInLinkedList(head, 9) << endl;
    cout << "Deleting nodes " << endl;
    deleteNode(3, head);
    print(head);
    deleteNode(1, head);
    print(head);
    deleteNode(6, head);
    print(head);
    deleteNode(3, head);
    print(head);

    return 0;
}