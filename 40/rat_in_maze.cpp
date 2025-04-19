/*
Problem: Rat in a Maze
Description:
    Given a maze (NxN binary matrix) where 1 represents paths that can be traveled and 0 represents blocked paths,
    find all possible paths from source (0,0) to destination (N-1,N-1). The rat can move in four directions:
    Up (U), Down (D), Left (L), and Right (R).

Input:
    - m: NxN binary matrix representing the maze where:
        1 = path can be traveled
        0 = blocked path
    - n: Size of the maze (NxN)

Output:
    - Vector of strings where each string represents a valid path from source to destination
    - Each character in path string represents direction of movement (U/D/L/R)
    - Empty vector if no path exists

Functions:
    isSafe() - Checks if the next move is valid within maze boundaries and rules
    solve() - Recursive function implementing backtracking to find all possible paths
    findPath() - Driver function that initializes and starts path finding process

Example:
    Input maze:
    1 0 0 0
    1 1 0 1
    0 1 1 0
    0 1 1 1

    Possible paths:
    DDRDRR
    DRDDRR

Time Complexity: O(4^(n*n)) - as we have 4 possible movements at each cell
Space Complexity: O(n*n) - for visited array and recursion stack
*/

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> m)
{
    return ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1);
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
{
    // base case - destination (n-1,n-1)
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    // four choice U(Up), D(Down), L(Left), R(Right)
    // choice 1 - Down
    int newx = x + 1;
    int newy = y;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // choice 2- Up
    newx = x - 1;
    newy = y;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // choice 3- right
    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // choice 4- left
    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    if (m[0][0] == 0)
    { // if first position is zero itself then we can move ahead
        return ans;
    }
    int srcx = 0;
    int srcy = 0;
    string path = "";
    // visited vector
    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }
    solve(m, n, ans, srcx, srcy, visited, path);
    return ans;
}

int main()
{
    int n = 4; // Size of the maze
    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 1, 0},
        {0, 1, 1, 1}};

    vector<string> result = findPath(m, n);

    if (result.empty())
    {
        cout << "No path found" << endl;
    }
    else
    {
        cout << "Found paths:" << endl;
        for (string path : result)
        {
            cout << path << endl;
        }
    }

    return 0;
}
