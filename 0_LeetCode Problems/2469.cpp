/*
Title: Convert the Temperature

Problem:
- Convert Celsius temperature to Kelvin and Fahrenheit
- Return both conversions in an array
- Handle decimal precision

Input:
- Float celsius (temperature in Celsius)
- Example: celsius = 36.50

Output:
- Vector of two floats [kelvin, fahrenheit]
- Example: [309.65000, 97.70000]

Constraints:
- 0 <= celsius <= 1000
- Answers within 10^-5 of actual answer accepted
- Kelvin = Celsius + 273.15
- Fahrenheit = Celsius * 1.80 + 32.00

Approach:
1. Direct Formula Application
   - Calculate Kelvin: celsius + 273.15
   - Calculate Fahrenheit: celsius * 1.80 + 32.00
   - Return both values in vector
   - Use double for precision

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        vector<double> temp;
        temp.push_back(celsius + 273.15);
        temp.push_back(celsius * 1.8 + 32);
        return temp;
    }
};