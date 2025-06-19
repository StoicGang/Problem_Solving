/*
 Title: 206. Reverse Linked List

 Problem: Given the head of a singly linked list, reverse the list and return
 the reversed list.

 Input: head - Head pointer of a singly linked list

 Output: Head pointer of the reversed linked list

 Constraints:
 - Number of nodes: [0, 5000]
 - Node values: [-5000, 5000]

 Approaches:

 1. Iterative Approach (Three Pointers):
    - Use prev, curr and next pointers
    - Store next node
    - Reverse current node's pointer
    - Move pointers ahead
    Time: O(n), Space: O(1)

 2. Recursive Approach:
    - Recursively traverse to end of list
    - Start reversing links from end
    - Fix head's next pointer
    Time: O(n), Space: O(n) for recursive stack

 3. Stack-based Approach:
    - Push all nodes onto stack
    - Pop and relink nodes
    Time: O(n), Space: O(n)
*/

#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *chotahead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return chotahead;
    }
};