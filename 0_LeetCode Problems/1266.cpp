/*
Title: 1266 Minimum Time Visiting All Points

Problem:
- You are given a sequence of n points on a 2D plane (integer coordinates).
- You must visit all points in the given order.
- Movement allowed per second:
    • 1 unit vertically
    • 1 unit horizontally
    • Or 1 unit diagonally (1 vertical + 1 horizontal = sqrt(2) units)
- Return the minimum time (in seconds) required to visit all points.

Input:
- vector<vector<int>> points
  • 1 <= points.length <= 100
  • -1000 <= points[i][0], points[i][1] <= 1000

Output:
- An integer representing the minimum time in seconds to visit all points in order.

Example:
Input: points = [[1,1],[3,4],[-1,0]]
Output: 7

Explanation:
- Time from (1,1) → (3,4) = max(2,3) = 3
- Time from (3,4) → (-1,0) = max(4,4) = 4
- Total time = 3 + 4 = 7 seconds

Constraints:
- Must follow the exact order of points
- Can pass through future points but cannot mark them as visited until their turn

Approaches:

1. Greedy Diagonal Movement (Chebyshev Distance)
   - For each consecutive point pair:
     • dx = abs(x2 − x1), dy = abs(y2 − y1)
     • Time = max(dx, dy) since diagonal covers both axes
   - Accumulate total time
   Time: O(n)
   Space: O(1)

2. Verbose Simulation (Less efficient)
   - Simulate movement step-by-step using dx and dy
   - Apply diagonal moves first, then finish with horizontal/vertical
   Time: O(n)
   Space: O(1)

Complexity:
- Time Complexity: O(n), where n = number of points
- Space Complexity: O(1) – only accumulators used

*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points)
    {
        int totalTime = 0;
        for (int i = 1; i < points.size(); i++)
        {
            int x = abs(points[i][0] - points[i - 1][0]);
            int y = abs(points[i][1] - points[i - 1][1]);
            totalTime += max(x, y);
        }
        return totalTime;
    }
};