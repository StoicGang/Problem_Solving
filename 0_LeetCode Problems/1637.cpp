/*
Title: 1637 Widest Vertical Area Between Two Points Containing No Points

Problem:
- Given n points on a 2D plane, where each point is represented as [x, y]
- Find the widest vertical area between any two points such that no points lie inside the area
- A vertical area spans infinitely along the y-axis with a fixed width on the x-axis
- Points lying exactly on the edge do not count as being "inside" the area
- Return the maximum width of such a vertical gap

Input:
- A list of points[n][2], where each point = [x, y]
- Example: [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]

Output:
- An integer representing the widest vertical area
- Example: 3

Constraints:
- 2 <= n <= 10^5
- 0 <= x, y <= 10^9
- Each point[i] has exactly two integers [xi, yi]

Approach:

1. Sorting (Current Implementation):
    - Extract all x-coordinates into a separate list
    - Sort the list in ascending order
    - Iterate through adjacent x-coordinates
    - Track and return the maximum gap (x[i] - x[i - 1])
    Time: O(n log n), Space: O(n)

2. Alternative (Coordinate Compression or Sweep Line):
    - Not required here due to the simplicity of 1D gaps on x-axis
    - Problem does not involve overlapping intervals or complex geometry

Space Complexity:
- O(n) for storing x-coordinates
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {
        vector<int> x_coords;
        for (auto &point : points)
        {
            x_coords.push_back(point[0]);
        }

        sort(x_coords.begin(), x_coords.end());

        int max_width = 0;
        for (int i = 1; i < x_coords.size(); ++i)
        {
            max_width = max(max_width, x_coords[i] - x_coords[i - 1]);
        }

        return max_width;
    }
};