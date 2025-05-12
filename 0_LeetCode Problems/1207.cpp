/*
Title: Unique Number of Occurrences

Problem:
- Given array of integers
- Check if frequency of each value is unique
- Return true if no two values have same frequency

Input:
- Integer array arr
- Example: [1,2,2,1,1,3]

Output:
- Boolean indicating if frequencies are unique
- Example: true (1 appears 3x, 2 appears 2x, 3 appears 1x)

Constraints:
- 1 <= arr.length <= 1000
- -1000 <= arr[i] <= 1000
- All frequencies must be unique

Approaches:
1. HashMap + HashSet
   - Count frequencies using map
   - Check uniqueness using set
   Time: O(n)
   Space: O(n)

2. Sort and Count
   - Sort array
   - Count consecutive elements
   - Check uniqueness of counts
   Time: O(n log n)
   Space: O(n)

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

bool uniqueOccurrences(std::vector<int> &arr)
{
    std::unordered_map<int, int> freq;
    for (int num : arr)
    {
        freq[num]++;
    }

    std::unordered_set<int> uniqueFreq;
    for (const auto &pair : freq)
    {
        if (!uniqueFreq.insert(pair.second).second)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::vector<int> arr = {1, 2, 2, 1, 1, 3};
    std::cout << std::boolalpha << uniqueOccurrences(arr) << std::endl;
    return 0;
}