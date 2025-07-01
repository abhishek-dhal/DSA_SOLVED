
#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    vector<int> test = {1,2,3,1,1,1,1,3,3};
    int n  = 9;
    int k = 6;
    int maxLen = 0;
    int sum = test[0];
    
    int left =0,right = 0;
    
    while(right<n){
        while(left<=right && sum > k){
            sum = sum - test[left];
            left++;
        }
        
        if(sum == k){
            maxLen = max(maxLen,(right-left+1));
              
        }
         right++;
     
        
        if(right < n) {
            sum = sum + test[right];
        }
    }
    cout << "Maximum length of subarray is:- " << maxLen << endl;
    
    

    return 0;
}