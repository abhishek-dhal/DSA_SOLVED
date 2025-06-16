
#include <iostream>
#include <vector>
using namespace std;

void printAllSubsequence(int ind,vector<int> &result,int arr[],int n){
    if(ind >= n){
       for(auto it : result){
           cout << it << " ";
       }
       cout << endl;
       
       return;
    }
    
    
    result.push_back(arr[ind]);
    printAllSubsequence(ind+1,result,arr,3);
    result.pop_back();
    
    printAllSubsequence(ind+1,result,arr,3);
    
    
    
}

int main() {
    int arr[] = {3,1,2};
    vector<int> result;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printAllSubsequence(0,result,arr,n);
    
   
   

    return 0;
}