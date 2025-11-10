#include <iostream>
using namespace std;

// here we can use the stack or the array to store the elements then add them if don't have to change the input

// basic structure Node
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

// function that reverses the linked list given head pointer
Node *reverse(Node *head)
{
    // equipments
    Node *prev = NULL;
    Node *curr = head;

    // process
    while (curr != NULL)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// function to add two linked lists using reverse logic
Node *add(Node *head1, Node *head2)
{
    // reverse first
    head1 = reverse(head1); // this changes the input alternate method is LIFO (stack)
    head2 = reverse(head2);

    // equipments
    int carry = 0, sum = 0;
    Node *result = NULL;
    Node *tail = NULL;

    // continue till both lists are empty and carry is 0
    while (head1 != NULL || head2 != NULL || carry)
    {
        // initialize sum with carry from previous iteration
        sum = carry;

        // add first number if available
        if (head1)
        {
            sum += head1->data;
            head1 = head1->next;
        }

        // add second number if available
        if (head2)
        {
            sum += head2->data;
            head2 = head2->next;
        }

        // calculate new carry and sum for current digit
        carry = sum / 10;
        sum = sum % 10;

        // add node to results ll
        Node *newNode = new Node(sum);
        if (result == NULL)
        {
            result = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // reverse back the result
    result = reverse(result);
    return result;
}

// function to print the linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    delete temp;
}

int main()
{
    // linked list 1
    Node *head1 = new Node(2);
    head1->next = new Node(3);
    head1->next->next = new Node(0);

    print(head1);

    // linked list 2
    Node *head2 = new Node(3);
    head2->next = new Node(4);

    print(head2);

    // add them
    Node *ans = add(head1, head2);
    print(ans);

    // memory  management
    Node *current = head1;
    while (current != nullptr)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }

    Node *current1 = head2;
    while (current1 != nullptr)
    {
        Node *next = current1->next;
        delete current1;
        current1 = next;
    }
    return 0;
}