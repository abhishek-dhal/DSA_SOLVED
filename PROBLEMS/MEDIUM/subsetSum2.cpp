// User function Template for C++

class Solution {
    

  public:
  
    void findSumSubset(int ind,int n,vector<int> nums,vector<int> &result,vector<vector<int>>& ans){
        ans.push_back(result);
        
        for(int i=ind; i<n;i++){
            
            if(i != ind && nums[i] == nums[i-1]) continue;
            
            result.push_back(nums[i]);
            
            findSumSubset(i+1,n,nums,result,ans);
            
            result.pop_back();
            
            
            
        }
    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        int n = nums.size();
        vector<int> result;
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        
        findSumSubset(0,n,nums,result,ans);
        
        return ans;
    }
};