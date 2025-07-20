/*
Title: 1184. Distance Between Bus Stops

Problem:
- A bus has 'n' stops numbered from 0 to n−1 arranged in a circular route.
- distance[i] is the distance from stop i to (i + 1) % n.
- You're given a starting stop and a destination stop.
- The bus can move in **either direction**—clockwise or counterclockwise.
- Return the **minimum distance** between the two stops.

Input:
- vector<int> distance:
    • 1 ≤ distance.length ≤ 10⁴
    • 0 ≤ distance[i] ≤ 10⁴
- int start, destination:
    • 0 ≤ start, destination < distance.length

Output:
- Integer representing the shortest travel distance between the stops.

Example:
Input: distance = [1,2,3,4], start = 0, destination = 3
Output: 4

Explanation:
- Clockwise: distance = 1 + 2 + 3 = 6
- Counterclockwise: total = 10, so 10 - 6 = 4
- Minimum distance = min(6, 4) = 4

Approaches:

1. Prefix Sum Technique
   - Precompute prefix sums of the distance array.
   - For clockwise traversal: prefix[destination] - prefix[start]
   - For counterclockwise: total_distance - clockwise_distance
   Time: O(n)
   Space: O(n)

2. Two-Pass Traversal (Brute Force Accumulation)
   - First pass: Accumulate clockwise distance from `start` to `destination`
   - Second pass: Accumulate counterclockwise distance by subtracting above from total
   - Compare and return minimum
   Time: O(n)
   Space: O(1)

3. Circular Modulo Traversal
   - Use modular arithmetic to wrap indices from `start` to `destination`
   - Traverse both clockwise and counterclockwise using explicit loops
   - Useful when start > destination (normalize direction)
   Time: O(n)
   Space: O(1)

4. Simulated Graph Traversal (Overkill)
   - Treat each stop as a node with weighted edges (like a circular graph)
   - Run BFS or DFS to find shortest path (not needed but theoretically valid)
   Time: O(n)
   Space: O(n) – for visited tracking

5. Mathematical Shortcut (If Total & Direct Distance Known)
   - total = sum of all distances
   - clockwise = accumulate from start to destination
   - counterclockwise = total - clockwise
   - Just return min(clockwise, counterclockwise)
   Time: O(n)
   Space: O(1)

Complexity:
- Time: O(n) for all practical approaches
- Space: Varies:
    • O(1) for optimized loop-based solution
    • O(n) for prefix sum or graph-style traversal

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int clockwise(vector<int> &distance, int start, int destination)
    {
        int sum = 0;
        int n = distance.size();
        // Normalize: make sure we go from start to destination in forward (clockwise) direction
        int i = start;
        while (i != destination)
        {
            sum += distance[i];
            i = (i + 1) % n;
        }
        return sum;
    }

    int anticlockwise(vector<int> &distance, int start, int destination)
    {
        int total = accumulate(distance.begin(), distance.end(), 0);
        return total - clockwise(distance, start, destination);
    }

public:
    int distanceBetweenBusStops(vector<int> &distance, int start, int destination)
    {
        // Ensure consistent direction comparison (start < destination)
        if (start > destination)
            swap(start, destination);
        return min(anticlockwise(distance, start, destination), clockwise(distance, start, destination));
    }
};
