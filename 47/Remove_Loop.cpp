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

void RemoveLoop(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *start = getStarting(head);
    Node *temp = start->next;
    while (temp->next != start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

void Printer(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
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

    // Printer(head); //This will burst

    Node *loopNode = FloydDetector(head);
    cout << boolalpha << (loopNode != nullptr) << endl;

    Node *startNode = getStarting(head);
    if (startNode != nullptr)
    {
        cout << "Loop Detected at the Node " << startNode->data << endl;
        cout << "Removing the Loop ...\n";
        RemoveLoop(head);
        Printer(head);
    }
    else
    {
        cout << "No loop detected" << endl;
    }
    return 0;
}