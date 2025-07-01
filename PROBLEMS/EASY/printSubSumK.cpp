// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void printSubSumK(int ind,vector<int> &result,int sum,int k,int arr[],int n){
    if(ind == n){
        if(sum == k){
            for(auto it : result){
                cout << it << " ";
            }
            cout << endl;
           
        }
         return;
    }
    
    // Take part
    result.push_back(arr[ind]);
    sum = sum + arr[ind];
    printSubSumK(ind+1,result,sum,k,arr,n);
    result.pop_back();
    sum = sum - arr[ind];
    
    //Not Take Part
    printSubSumK(ind+1,result,sum,k,arr,n);
    
    
}

int main() {
   int arr[] = {1,2,1};
   int k = 2;
  int sum = 0;
   
   vector<int> result;
   
   int n = sizeof(arr) / sizeof(arr[0]);
   
   printSubSumK(0,result,0,k,arr,n);

    return 0;
}