#include <iostream>
#include <string>
using namespace std;

struct Node
{
    char data;
    Node *next;
    Node(char val) : data(val), next(nullptr) {}
};

bool checkPalindrome(Node *head)
{
    // edge cases
    if (head == NULL || head->next == NULL)
        return true;
    // equipments
    Node *temp = head;
    string str;
    // traversing and storing
    while (temp != NULL)
    {
        str.push_back(temp->data);
        temp = temp->next;
    }
    // check the string
    int right = 0, left = str.length() - 1;
    while (right <= left)
    {
        if (str[right++] != str[left--])
        {
            return false;
        }
    }
    return true;
}

// function to check if list is palindromic or not
bool Palindrome(Node *head)
{
    // edge cases
    if (head == NULL || head->next == NULL)
        return true;

    // equipments
    Node *slow = head;
    Node *fast = head->next;

    // iterate and find mid and end
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    Node *prev = NULL;
    Node *curr = slow;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Compare the first and second half
    Node *first = head;
    Node *second = prev;
    while (second != NULL)
    {
        if (first->data != second->data)
            return false;
        first = first->next;
        second = second->next;
    }
    return true;
}

int main()
{
    Node *head = new Node('a');
    head->next = new Node('b');
    head->next->next = new Node('a');

    cout << Palindrome(head);
    delete head;
    return 0;
}