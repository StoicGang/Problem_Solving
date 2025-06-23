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

void insertattail(node *&head, node *&tail, int n)
{
    if (head == NULL)
    {
        node *newnode = new node(n);
        head = tail = newnode;
    }
    else
    {
        node *temp = new node(n);
        tail->next = temp;
        tail = temp;
    }
}

int getlength(node *&head)
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

int middleEle(node *head)
{
    int length = getlength(head);
    int mid = length / 2;
    int count = 0;
    node *temp = head;
    while (count < mid)
    {
        temp = temp->next;
        count++;
    }
    return temp->data;
}

void print(node *&head)
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
    node *head = NULL;
    node *tail = head;
    while (num != 0)
    {
        int n;
        cin >> n;
        insertattail(head, tail, n);
        num--;
    }
    cout << middleEle(head);
    return 0;
}