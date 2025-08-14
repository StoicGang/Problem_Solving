
/*
Title: 2181. Merge Nodes in Between Zeros

Problem:
Given the head of a linked list containing integers separated by 0's, where the first and last nodes have value 0, merge all nodes between every two consecutive 0's into a single node whose value is the sum of those nodes. The resulting list should not contain any 0's.

Input:
- head: ListNode* (head of a singly linked list)
    - The list starts and ends with a node of value 0.
    - No two consecutive nodes have value 0.

Output:
- ListNode* (head of the modified linked list with merged nodes)

Example 1:
Input:  head = [0,3,1,0,4,5,2,0]
Output: [4,11]
Explanation:
- Nodes between the first pair of 0's: 3 + 1 = 4
- Nodes between the second pair of 0's: 4 + 5 + 2 = 11

Example 2:
Input:  head = [0,1,0,3,0,2,2,0]
Output: [1,3,4]
Explanation:
- Nodes between the first pair of 0's: 1 = 1
- Nodes between the second pair of 0's: 3 = 3
- Nodes between the third pair of 0's: 2 + 2 = 4

Constraints:
- 3 <= Number of nodes <= 2 * 10^5
- 0 <= Node.val <= 1000
- No two consecutive nodes have Node.val == 0
- The first and last nodes have Node.val == 0

Approach:
1. Initialize two pointers:
     - 'read' to traverse the list starting from head->next.
     - 'write' to build the new list, starting from head.
2. Use a variable 'sum' to accumulate values between zeros.
3. Iterate through the list:
     - If read->val != 0, add its value to 'sum'.
     - If read->val == 0:
         - Assign 'sum' to the next node of 'write'.
         - Move 'write' forward.
         - Link 'write->next' to skip the zero node.
         - Reset 'sum' to 0.
4. Continue until the end of the list.
5. Set 'write->next' to NULL to terminate the new list.
6. Return head->next as the new head (skipping the initial zero).

Time Complexity: O(N), where N is the number of nodes in the list (single pass).
Space Complexity: O(1), in-place modification without extra data structures.
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
    ListNode *mergeNodes(ListNode *head)
    {
        // edge cases
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        // equipments
        ListNode *read = head->next;
        ListNode *write = head;
        int sum = 0;

        // iteration
        while (read != NULL)
        {
            if (read->val != 0)
            {
                sum += read->val;
            }
            else
            {
                write->next->val = sum;
                write = write->next;
                write->next = read->next;
                sum = 0;
            }
            read = read->next;
        }
        write->next = NULL;
        return head->next;
    }
};