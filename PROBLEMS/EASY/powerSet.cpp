// Given an array of integers nums of unique elements. Return all possible subsets (power set) of the array.



// Do not include the duplicates in the answer.


// Examples:
// Input : nums = [1, 2, 3]

// Output : [ [ ] , [1] , [2] , [1, 2] , [3] , [1, 3] , [2, 3] , [1, 2 ,3] ]

// Input : nums = [1, 2]

// Output : [ [ ] , [1] , [2] , [1,2] ]


// code: - 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:	
    void f(int ind,vector<int>& ds,vector<int>& nums,vector<vector<int> >& ans) {
        if(ind >= nums.size()){
            ans.push_back(ds);
            return;
        }

        ds.push_back(nums[ind]);
        f(ind+1,ds,nums,ans);
        ds.pop_back();
        f(ind+1,ds,nums,ans);
    }
    
    
    vector<vector<int> > powerSet(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> ans;
        vector<int> ds;
        f(0,ds,nums,ans);

        return ans;
    }
};