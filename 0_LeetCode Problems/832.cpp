/*
 Title: 832. Flipping an Image

 Problem:
 Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.
 - Flipping horizontally: Reverse each row of the image.
 - Inverting: Replace each 0 with 1 and each 1 with 0.

 Input:
 - image: A 2D vector (n x n) of integers, where each element is either 0 or 1.

 Output:
 - A 2D vector (n x n) representing the flipped and inverted image.

 Constraints:
 - n == image.length
 - n == image[i].length
 - 1 <= n <= 20
 - image[i][j] is either 0 or 1

 Approaches:

 1. Brute Force Approach:
    - For each row, reverse the row.
    - For each element in the row, invert the value (0 -> 1, 1 -> 0).
    - Time Complexity: O(n^2)
    - Space Complexity: O(1) if done in-place, O(n^2) if creating a new matrix.

 2. Optimized In-Place Approach:
    - For each row, use two pointers (start and end) to swap and invert elements simultaneously.
    - If start == end (odd length), invert the middle element.
    - Time Complexity: O(n^2)
    - Space Complexity: O(1) (in-place)

 3. Using STL (C++ specific):
    - Use std::reverse to flip each row.
    - Use std::transform or a loop to invert each element.
    - Time Complexity: O(n^2)
    - Space Complexity: O(1) (in-place)
 */
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        // reverse each row
        int n = image.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                swap(image[i][j], image[i][n - j - 1]);
            }
            for (int j = 0; j < n; j++)
            {
                if (image[i][j] == 0)
                {
                    image[i][j] = 1;
                }
                else
                {
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
};