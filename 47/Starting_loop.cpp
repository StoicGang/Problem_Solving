#include <iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

Node *FloydDetector(Node *head)
{
    if (head == NULL)
    {
        return NULL;
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
            return slow;
        }
    }
    return NULL;
}

Node *getStarting(Node *head)
{
    // function to find the starting of the loop
    if (head == NULL)
    {
        return NULL;
    }

    Node *startingPt = FloydDetector(head);
    Node *slow = head;
    while (startingPt != slow)
    {
        slow = slow->next;
        startingPt = startingPt->next;
    }
    return slow;
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

    Node *loopNode = FloydDetector(head);
    cout << boolalpha << (loopNode != nullptr) << endl;

    Node *startNode = getStarting(head);
    if (startNode != nullptr)
    {
        cout << startNode->data << endl;
    }
    else
    {
        cout << "No loop detected" << endl;
    }
    return 0;
}