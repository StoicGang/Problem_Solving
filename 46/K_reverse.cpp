#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node *kReverse(Node *head, int k)
{
    if (head == NULL)
        return head;

    int len = getLength(head);
    if (len < k)
        return head; // don't reverse if nodes are fewer than k

    Node *curr = head;
    Node *prev = NULL;
    Node *Next = NULL;
    int count = 0;

    // reverse first k nodes
    while (count < k && curr != NULL)
    {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
        count++;
    }

    // recursive call on the rest
    if (Next != NULL)
    {
        head->next = kReverse(Next, k);
    }

    return prev;
}
int main()
{
    // Create linked list: 1->2->3->4->5->6->7->8->NULL
    Node *head = new Node(1);
    Node *curr = head;
    for (int i = 2; i <= 8; ++i)
    {
        curr->next = new Node(i);
        curr = curr->next;
    }

    int k = 3;
    cout << "Original list: ";
    curr = head;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;

    head = kReverse(head, k);

    cout << "Reversed in " << k << ": ";
    curr = head;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;

    // Free memory
    curr = head;
    while (curr)
    {
        Node *temp = curr;
        curr = curr->next;
        delete temp;
    }

    return 0;
}