/*
Title: 234. Palindrome Linked List

Problem:
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

Input:
- head: The head node of a singly linked list.

Output:
- true if the linked list is a palindrome, false otherwise.

Example:
Input: head = [1,2,2,1]
Output: true

Input: head = [1,2]
Output: false

Constraints:
- The number of nodes in the list is in the range [1, 10^5].
- 0 <= Node.val <= 9

Approaches:

1. Convert to String/Array (Current Approach)
    - Step 1: Traverse the linked list and store values in a string or array.
    - Step 2: Use two pointers to check if the string/array is a palindrome.
    - Time Complexity: O(n)
    - Space Complexity: O(n)

2. Reverse Second Half (Optimal Approach)
    - Step 1: Use slow and fast pointers to find the middle of the list.
    - Step 2: Reverse the second half of the list.
    - Step 3: Compare the first and second halves node by node.
    - Step 4: (Optional) Restore the list to its original state.
    - Time Complexity: O(n)
    - Space Complexity: O(1)

3. Recursive Approach
    - Step 1: Use recursion to reach the end of the list.
    - Step 2: Compare nodes while unwinding the recursion.
    - Time Complexity: O(n)
    - Space Complexity: O(n) (due to recursion stack)
*/
#include <string>
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
    bool isPalindrome(ListNode *head)
    {
        // edge cases
        if (head == NULL || head->next == NULL)
        {
            return true;
        }

        // equipments
        ListNode *temp = head;
        string str;

        // iterate and store
        while (temp != NULL)
        {
            str.push_back(temp->val);
            temp = temp->next;
        }

        // check palindrome
        int left = 0, right = str.length() - 1;
        while (left <= right)
        {
            if (str[left++] != str[right--])
            {
                return false;
            }
        }
        return true;
    }
};