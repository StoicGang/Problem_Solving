#include <iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

bool isLooped(Node *head)
{
    unordered_map<Node *, bool> isVisited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (isVisited[temp] != false)
        {
            return true;
        }
        isVisited[temp] = true;
        temp = temp->next;
    }
    return false;
}

bool FloydDetector(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // Create nodes
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    // Create a loop: fourth node points back to second
    fourth->next = second;

    cout << boolalpha << FloydDetector(head);

    return 0;
}