Given an array nums and an integer k.Return the number of non-empty subsequences of nums such that the sum of all elements in the subsequence is equal to k.


Examples:
Input : nums = [4, 9, 2, 5, 1] , k = 10

Output : 2

Explanation : The possible subsets with sum k are [9, 1] , [4, 5, 1].

Input : nums = [4, 2, 10, 5, 1, 3] , k = 5

Output : 3

Explanation : The possible subsets with sum k are [4, 1] , [2, 3] , [5].



code :-

class Solution{

    public:
    int f(int ind,vector<int> &ds,int s,int k,vector<int>& nums,int n)
    {
        if(ind == n){
            if(s == k) {
                return 1;
            }

            else return 0;
        }

        ds.push_back(nums[ind]);
        s = s + nums[ind];

        int l = f(ind+1,ds,s,k,nums,n);

        s = s - nums[ind];
        ds.pop_back();

        int r = f(ind+1,ds,s,k,nums,n);

        return l + r;
    }
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	
        int n = nums.size();
        vector<int> ds;
        return f(0,ds,0,k,nums,n);

        return 0;
    }
};