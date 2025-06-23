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

int getlength(node *&head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    return 1 + getlength(temp->next);
}

int middleEleRe(node *curr, int count, int mid)
{
    if (count == mid)
        return curr->data;
    return middleEleRe(curr->next, count + 1, mid);
}

int middleEle(node *&head)
{
    node *temp = head;
    int len = getlength(head);
    int mid = len / 2;
    return middleEleRe(temp, 0, mid);
}

void input(node *&head, node *&tail, int count, int num)
{
    if (count == num)
        return;
    int n;
    cin >> n;
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
    input(head, tail, count + 1, num);
}

int main()
{
    int num;
    cin >> num;
    node *head = NULL;
    node *tail = head;
    input(head, tail, 0, num);
    cout << middleEle(head);
    return 0;
}