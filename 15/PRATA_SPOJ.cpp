/* PRATA SPOJ
IEEE is having its AGM next week, and the president want to serve cheese Prata after the meeting.
The subcommittee members are asked to go to food connection and get P Pratas packed for the function.
The stall has L cooks and each cook has rank R. A cook with rank R can cook one prata in first R minutes.
One more paratha in next 2R minutes. One more prata in 3R Minutes, and so on(He can only cook a complete prata) (for
example if a cook is ranked 2, he will cook one prata in 2 minutes one more prata in the next 4 mins and one more
in the next 6 mins hence in total 12 minutes he cooks 3 pratas in 13 minutes also he can cook only 3 pratas as he
does not have enough time for the 4th prata). The webmaster wants to know the minimum time to get the order done. Please
write a program to help him out.

Input
The first line tells the number of test cases. Each test case consist of 2 lines . In the first line of the test case we
have P the number of prata ordered. In the next line the first integer denotes the number of cooks L
and L integers follow in the same line each denoting the rank of cook.

Output
Print an integer which tells the number of minutes needed to get the order done.

Example 1
Input:
3                //no of test cases
10               //No. of Prata ordered
4 1 2 3 4        //No. of cooks followed by rank of each cook
8
1 1
8
8 1 1 1 1 1 1 1 1

Output:
12
36
1
*/

#include <iostream>
using namespace std;

int maxTimeFinder(int ranks[], int n, int m)
{
}

int main()
{
    int No_prata{10};
    int No_cook{4};
    int ranks[No_cook]{1, 2, 3, 4};

    cout << maxTimeFinder(ranks, No_prata, No_cook);

    return 0;
}