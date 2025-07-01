#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

bool isFound(vector<int> arr,int x,int n){
    for(int i =0;i<n;i++){
        if(arr[i] == x) return true;
    }
    return false;
}

int longestConsSeq(vector<int> arr,int n){
    int longest = 1;

    for(int i=0;i<n;i++){
        int x = arr[i];
        int cnt =1;
        while(isFound(arr,x+1,n) == true){
            x = x+1;
            cnt = cnt+1;
        }
        longest = max(longest,cnt);
    }

    return longest;
}


int main(){

    vector<int> arr = {102,4,100,1,101,3,2,1,1};
    vector<int> arr1 = {0,3,7,2,5,8,4,6,0,1};
    int n = arr1.size();
    

    int len = longestConsSeq(arr1,n);

    cout << "The longest consecutive length is:- " << len << endl;

    return 0;
}