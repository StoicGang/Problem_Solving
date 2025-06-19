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

void printlist(node *&head)
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
    int num;
    cin >> num;
    while (num != 0)
    {
        int data;
        cin >> data;
        node *head = new node(data);
        printlist(head);
        num--;
    }
}