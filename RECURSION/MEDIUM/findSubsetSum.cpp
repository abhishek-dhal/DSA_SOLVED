class Solution {
  public:
  
    void findSubsetSum(int ind,int sum,vector<int>& arr,int n,vector<int>& result){
        if(ind == n){
            result.push_back(sum);
            return;
        }
        
        //Pick the element
        findSubsetSum(ind+1,sum+arr[ind],arr,n,result);
        
        //Not Pick the element
        findSubsetSum(ind+1,sum,arr,n,result);
        
    }
    vector<int> subsetSums(vector<int>& arr) {
      
      
      int n = arr.size();
      vector<int> result;
      
      sort(arr.begin(),arr.end());
      
      findSubsetSum(0,0,arr,n,result);
      
      sort(result.begin(),result.end());
      
      return result;
      
      
        
    }
};