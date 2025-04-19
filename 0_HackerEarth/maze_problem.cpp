/*
Problem: Maze Path Finding
Given a NxN maze matrix, find if there exists a path from source (0,0) to destination (N-1,N-1).

Constraints:
- Matrix size N <= 50
- Cells contain either 0 (blocked) or 1 (path)
- Source and destination cells are always 1
- Movement allowed: Down or Right only

Solution Approach:
1. Use recursive backtracking to explore all possible paths
2. For each position (x,y):
    - Mark current cell as visited
    - Try moving in all 4 directions (U,D,R,L)
    - For each valid move:
      a. Add direction to current path
      b. Recursively explore next position
      c. Backtrack by removing last direction
3. Valid move conditions:
    - Within matrix bounds
    - Cell is unvisited
    - Cell value is 1 (path exists)
4. Base case: Reached destination (N-1,N-1)
    - Add current path to solutions

Input format:
- First line: Number of test cases
- For each test case:
  - First line: Size of maze N
  - Next N lines: N space-separated integers (0/1)

Output:
- "POSSIBLE" if path exists
- "NOT POSSIBLE" if no path exists

Time Complexity:
- Overall: O(4^(N*N)) - Since at each cell we try 4 directions recursively
- Space Complexity: O(N*N) for visited array + O(N*N) for recursion stack
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void input(int size, vector<vector<int>> &m)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> m[i][j];
        }
    }
}

bool isSafe(int size, int x, int y, vector<vector<int>> &m, vector<vector<int>> &visited)
{
    return ((x >= 0 && x < size) && (y >= 0 && y < size) && visited[x][y] == 0 && m[x][y] == 1);
}
void solve(vector<vector<int>> &m, int size, int x, int y, vector<vector<int>> &visited, string path, vector<string> &ans)
{
    // base case
    if (x == size - 1 && y == size - 1)
    {
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1; // set path as visited
    // choices U,D,R,L

    // choice 1 - U
    int newx = x - 1;
    int newy = y;
    if (isSafe(size, newx, newy, m, visited))
    {
        path.push_back('U');
        solve(m, size, newx, newy, visited, path, ans);
        path.pop_back();
    }

    // choice 2 - D
    newx = x + 1;
    newy = y;
    if (isSafe(size, newx, newy, m, visited))
    {
        path.push_back('D');
        solve(m, size, newx, newy, visited, path, ans);
        path.pop_back();
    }

    // choice 3 - R
    newx = x;
    newy = y + 1;
    if (isSafe(size, newx, newy, m, visited))
    {
        path.push_back('R');
        solve(m, size, newx, newy, visited, path, ans);
        path.pop_back();
    }

    // choice 4 - L
    newx = x;
    newy = y - 1;
    if (isSafe(size, newx, newy, m, visited))
    {
        path.push_back('L');
        solve(m, size, newx, newy, visited, path, ans);
        path.pop_back();
    }
}

vector<string> findpath(vector<vector<int>> &m, int size)
{
    vector<string> ans;
    int x = 0, y = 0;
    string path;
    vector<vector<int>> visited(size, vector<int>(size, 0));
    solve(m, size, x, y, visited, path, ans);
    return ans;
}

int main()
{
    int number, size;
    cin >> number; // number of test cases

    while (number--)
    {
        cin >> size;
        vector<vector<int>> m(size, vector<int>(size, 0));
        input(size, m);
        vector<string> result = findpath(m, size);
        if (result.empty())
        {
            cout << "NOT POSSIBLE" << endl;
        }
        else
        {
            cout << "POSSIBLE" << endl;
        }
    }

    return 0;
}