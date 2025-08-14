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

Node *sort012(Node *head)
{
    // equipments
    int zeroC = 0, oneC = 0, twoC = 0;
    Node *temp = head;
    // counting
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroC++;
        }
        else if (temp->data == 1)
        {
            oneC++;
        }
        else
        {
            twoC++;
        }
        temp = temp->next;
    }
    // temp linked list
    temp = head;
    while (temp != NULL)
    {
        if (zeroC != 0)
        {
            temp->data = 0;
            zeroC--;
        }
        else if (oneC != 0)
        {
            temp->data = 1;
            oneC--;
        }
        else
        {
            temp->data = 2;
            twoC--;
        }
        temp = temp->next;
    }
    return head;
}

void insertAtTail(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}

Node *approach2(Node *head)
{
    // Dummy heads and tails for 0s, 1s, and 2s
    Node *zerohead = new Node(0);
    Node *zerotail = zerohead;
    Node *onehead = new Node(0);
    Node *onetail = onehead;
    Node *twohead = new Node(0);
    Node *twotail = twohead;

    // Traverse original list
    Node *curr = head;
    while (curr != NULL)
    {
        Node *nextNode = curr->next; // Save next
        curr->next = NULL;           // Break old link

        if (curr->data == 0)
        {
            insertAtTail(zerotail, curr);
        }
        else if (curr->data == 1)
        {
            insertAtTail(onetail, curr);
        }
        else
        {
            insertAtTail(twotail, curr);
        }

        curr = nextNode;
    }

    // Merge the three lists
    if (onehead->next != NULL)
        zerotail->next = onehead->next;
    else
        zerotail->next = twohead->next;

    onetail->next = twohead->next;
    twotail->next = NULL;

    // Final head
    Node *newHead = zerohead->next;

    // Clean up dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return newHead;
}

int main()
{
    // Create nodes
    Node *head = new Node(1);
    Node *second = new Node(0);
    Node *third = new Node(2);
    Node *fourth = new Node(1);

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    // before sorting
    print(head);

    // Node *ans = sort012(head);
    Node *ans = approach2(head);
    print(ans);

    return 0;
}