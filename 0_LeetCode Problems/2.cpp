/*
Title: 02 Add Two Numbers

Problem:
- Given two non-empty linked lists representing two non-negative integers
- Digits are stored in reverse order, each node contains a single digit
- Add the two numbers and return the sum as a linked list

Input:
- Two linked lists l1 and l2 in reverse order
- Examples:
    l1 = [2,4,3], l2 = [5,6,4]
    l1 = [0], l2 = [0]
    l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]

Output:
- Linked list representing the sum in reverse order
- Examples:
    Output: [7,0,8] (342 + 465 = 807)
    Output: [0]
    Output: [8,9,9,9,0,0,0,1]

Constraints:
- 1 <= number of nodes in each list <= 100
- 0 <= Node.val <= 9
- It is guaranteed that the list does not have a leading zero (except for zero itself)

Approaches:
1. Single Pass Iteration (Optimal)
   - Traverse both lists simultaneously
   - Calculate sum of corresponding digits and carry
   - Create new node with digit value (sum % 10)
   - Propagate carry to next iteration
   Time: O(max(m, n)) where m, n are lengths of l1 and l2
   Space: O(max(m, n)) for result list

2. Convert to Integer (Not recommended for large numbers)
   - Convert both lists to integers
   - Add the integers
   - Convert result back to linked list
   Time: O(m + n)
   Space: O(1) excluding result

Time Complexity: O(max(m, n))
Space Complexity: O(max(m, n))
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // equipments
        int sum = 0, carry = 0;
        ListNode *result = NULL;
        ListNode *tail = NULL;

        // iterate till both the LL are not covered
        while (l1 != NULL || l2 != NULL || carry)
        {
            sum = carry;
            // if L1 has element
            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            // if L2 has element
            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            // calculate the carry
            carry = sum / 10;
            sum = sum % 10;
            // New node to insert into the results
            ListNode *newNode = new ListNode(sum);
            // If result is empty
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
        return result;
    }
};