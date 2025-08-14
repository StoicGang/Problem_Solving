
/*
Title:
    21. Merge Two Sorted Lists

Problem:
    You are given the heads of two sorted linked lists list1 and list2.
    Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
    Return the head of the merged linked list.

Input:
    - ListNode* list1: The head of the first sorted linked list.
    - ListNode* list2: The head of the second sorted linked list.

Output:
    - ListNode*: The head of the merged sorted linked list.

Constraints:
    - The number of nodes in both lists is in the range [0, 50].
    - -100 <= Node.val <= 100
    - Both list1 and list2 are sorted in non-decreasing order.

Examples:
    Example 1:
        Input:  list1 = [1,2,4], list2 = [1,3,4]
        Output: [1,1,2,3,4,4]

    Example 2:
        Input:  list1 = [], list2 = []
        Output: []

    Example 3:
        Input:  list1 = [], list2 = [0]
        Output: [0]

Approach (Iterative, Dummy Node):
    1. Handle edge cases:
        - If either list1 or list2 is null, return the other list.
    2. Create a dummy node to simplify the merging process.
    3. Use a tail pointer to build the merged list.
    4. Traverse both lists:
        - Compare the current nodes of list1 and list2.
        - Attach the smaller node to the merged list and move the corresponding pointer forward.
        - Move the tail pointer forward.
    5. After the loop, attach any remaining nodes from either list.
    6. Return the merged list starting from dummy->next.
    7. Clean up the dummy node to avoid memory leaks.

    Time Complexity: O(m + n), where m and n are the lengths of list1 and list2.
    Space Complexity: O(1), as the merge is done in-place (excluding the output list).

Alternative Approaches:
    - Recursive Approach:
        - Recursively compare the heads of both lists and build the merged list.
        - Time Complexity: O(m + n)
        - Space Complexity: O(m + n) due to recursion stack.
*/
#include <bits/stdc++.h>
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // edge cases
        if (!list1)
            return list2;
        if (!list2)
            return list1;

        // equipments
        ListNode *dummy = new ListNode(0); // dummy node to start with
        ListNode *tail = dummy;            // to track last node of the current linked list

        // traversing and iterating
        while (list1 != NULL && list2 != 0)
        {
            if (list1->val <= list2->val)
            {
                tail->next = list1;  // add node to new linked list
                list1 = list1->next; // move list1 pointer
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        // edge cases = remaining elements
        if (!list2)
        {
            tail->next = list1;
        }
        else
        {
            tail->next = list2;
        }
        // new head
        ListNode *head = dummy->next;

        // memory cleanup
        dummy->next = NULL;
        delete dummy;

        return head;
    }
};