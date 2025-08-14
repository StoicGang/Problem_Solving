#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T data)
    {
        next = NULL;
        this->data = data;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};
/*
Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    if (!first)
        return second;
    if (!second)
        return first;

    Node<int> *head = (first->data <= second->data) ? first : second;
    Node<int> *curr1 = head;
    Node<int> *curr2 = (head == first) ? second : first;

    while (curr1->next && curr2)
    {
        if (curr2->data >= curr1->data && curr2->data <= curr1->next->data)
        {
            Node<int> *temp = curr2->next;
            curr2->next = curr1->next;
            curr1->next = curr2;
            curr2 = temp;
        }
        else
        {
            curr1 = curr1->next;
        }
    }

    if (!curr1->next)
    {
        curr1->next = curr2;
    }

    return head;
}
*/
Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    // If one list is empty, the other sorted list is the result.
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }

    // equipments
    Node<int> *dummy = new Node<int>(0);
    // 'tail' will always point to the last node of our merged list.
    Node<int> *tail = dummy;

    // merging logic
    // Loop as long as we have nodes in BOTH lists to compare.
    while (first != NULL && second != NULL)
    {

        if (first->data <= second->data)
        {
            // If 'first' node is smaller or equal, it comes next.
            tail->next = first;  // Link it to the tail.
            first = first->next; // Advance the 'first' pointer.
        }
        else
        {
            // Otherwise, the 'second' node is smaller.
            tail->next = second;   // Link it to the tail.
            second = second->next; // Advance the 'second' pointer.
        }

        // The node we just added is now the new tail.
        tail = tail->next;
    }
    // After the loop, one list is exhausted, but the other might have nodes left.
    // We can just append the entire remaining portion of the non-empty list.
    if (first != NULL)
    {
        tail->next = first;
    }
    else
    {
        tail->next = second;
    }

    // The merged list starts AFTER our dummy node, so we return dummy->next.
    Node<int> *head = dummy->next;

    // Prevent recursive deletion of the merged list when deleting dummy.
    dummy->next = nullptr;
    delete dummy;

    return head;
}
int main()
{
    // Helper lambda to create a linked list from a vector
    auto createList = [](const vector<int> &vals) -> Node<int> *
    {
        if (vals.empty())
            return nullptr;
        Node<int> *head = new Node<int>(vals[0]);
        Node<int> *curr = head;
        for (size_t i = 1; i < vals.size(); ++i)
        {
            curr->next = new Node<int>(vals[i]);
            curr = curr->next;
        }
        return head;
    };

    // Helper lambda to print a linked list
    auto printList = [](Node<int> *head)
    {
        while (head)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    };

    vector<int> list1 = {1, 3, 5, 7};
    vector<int> list2 = {2, 4, 6, 8};

    Node<int> *first = createList(list1);
    Node<int> *second = createList(list2);

    cout << "First List: ";
    printList(first);
    cout << "Second List: ";
    printList(second);

    Node<int> *merged = sortTwoLists(first, second);

    cout << "Merged List: ";
    printList(merged);

    delete merged; // This will recursively delete all nodes

    return 0;
}