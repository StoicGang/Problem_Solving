#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d);
    ~node();
};

node::node(int d)
{
    this->data = d;
    this->next = NULL;
}

node::~node()
{
    int val = this->data;
    if (this->next != NULL)
    {
        delete next;
        next = NULL;
    }
    cout << "Mem free for node with data : " << val << endl;
}

void insertnode(node *&tail, int element, int d)
{
    // assuming that the list is empty
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        temp->next = temp;
    }
    // list is non empty
    else
    {
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found -> curr is representing the element's node
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void printlist(node *&tail)
{
    node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deletenode(node *&tail, int d)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty check again " << endl;
        return;
    }
    else
    {
        // non empty list
        node *prev = tail;
        node *curr = prev->next;
        while (curr->data != d)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // for 1 node linked list
        if (curr == prev)
        {
            tail = NULL;
        }
        // for more than 2 nodes in linked list
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    node *tail = NULL;
    insertnode(tail, 5, 3);
    printlist(tail);
    // insertnode(tail, 3, 5);
    // printlist(tail);
    // insertnode(tail, 5, 7);
    // printlist(tail);
    // insertnode(tail, 7, 9);
    // printlist(tail);
    // insertnode(tail, 9, 10);
    // printlist(tail);
    // insertnode(tail, 5, 6);
    // printlist(tail);
    // insertnode(tail, 3, 4);
    // printlist(tail);

    deletenode(tail, 3);
    printlist(tail);
    return 0;
}