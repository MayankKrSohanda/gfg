#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int> > solve(int n, vector<int> a)
    {
        // code here
        //Pick any subarray
        //Let x be the least positive integer present in the subarray
        //If x exists then update A[i] = A[i] % x
        //Perform this atmost 40 times
        //Make every element same
        //Return every subarray starting and ending index
        vector<vector<int>> ans;
        int i, start = 0, end = 0, count = 0;
        for (i = 0; i < n - 1; i++) {
            if (a[i] != a[i + 1]) {
                end = i;
                ans.push_back({start, end});
                start = i + 1;
                if(ans.size() == 40) {
                    return ans;
                }
            }
        }
        ans.push_back({start, n - 1});
        return ans;
    }
};