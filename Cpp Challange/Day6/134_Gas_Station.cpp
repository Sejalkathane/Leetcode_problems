// There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].
// You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.
// Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique

// Example 1:

// Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
// Output: 3
// Explanation:
// Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
// Travel to station 4. Your tank = 4 - 1 + 5 = 8
// Travel to station 0. Your tank = 8 - 2 + 1 = 7
// Travel to station 1. Your tank = 7 - 3 + 2 = 6
// Travel to station 2. Your tank = 6 - 4 + 3 = 5
// Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.
// Therefore, return 3 as the starting index.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    int n = gas.size();
    int total = 0;
    int start_pl = 0;
    int start = 0;

    //total contain all diff;
    //startpl= contain i diff
    //if(startpl <0) move to next step till we get >=0 diff
    for (int i = 0; i < n; i++)
    {
        total += gas[i] - cost[i];
        start_pl += gas[i] - cost[i];
        if (start_pl < 0)
        {
            start_pl = 0;
            start = i + 1;
        }
    }
    
    //if total is 0 means no start return -1 else start return;s
    if (total < 0)
    {
        cout << -1;
    }
    else
    {
        cout << start;
    }
    return 0;
}