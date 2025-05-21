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
};

int main()
{
    Node *node1 = new Node(12);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *node2 = new Node();
    cout << node2->data << endl;
    cout << node2->next << endl;

    return 0;
}