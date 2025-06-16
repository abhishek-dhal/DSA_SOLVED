// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int SubsCountSum(int ind,vector<int> &result,int nums[],int n,int target){

        //Base Case
        if(ind == n){
            if(target == 0){
                return 1;
            }
             return 0;
        }
        int left = 0;
        if(nums[ind] <= target){
            result.push_back(nums[ind]);
            left = SubsCountSum(ind+1,result,nums,n,target-nums[ind]);
            result.pop_back();

        }

        int right = SubsCountSum(ind+1,result,nums,n,target);



        return left+right;
       


    }


int main() {
   
   int nums[] = {3,5,6,7};
   vector<int> result;
   
   int n = sizeof(nums) / sizeof(nums[0]);
   
   cout <<  SubsCountSum(0,result,nums,n,9) ;
   
   

    return 0;
}

