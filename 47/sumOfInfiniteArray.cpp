#include <bits/stdc++.h>
#define MOD 1000000007

vector<int> sumInRanges(vector<int> &A, int N, vector<vector<long long>> &queries, int Q)
{
    vector<int> res;
    vector<long long> prefixSum(N + 1, 0);

    // Prefix sum
    for (int i = 0; i < N; ++i)
    {
        prefixSum[i + 1] = (prefixSum[i] + A[i]) % MOD;
    }

    long long totalSum = prefixSum[N];

    for (int q = 0; q < Q; ++q)
    {
        long long L = queries[q][0];
        long long R = queries[q][1];

        long long leftCycle = (L - 1) / N;
        long long leftIndex = (L - 1) % N;

        long long rightCycle = R / N;
        long long rightIndex = R % N;

        long long sum = ((rightCycle - leftCycle) * totalSum) % MOD;
        sum = (sum + prefixSum[rightIndex] - prefixSum[leftIndex] + MOD) % MOD;

        res.push_back((int)sum);
    }

    return res;
}
