#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> foundLeaders(vector<int> &a,int n){
    vector<int> ans;
    int maxi = INT32_MIN;

    for(int i = n-1;i>=0;i--){
        if(a[i]> maxi){
            ans.push_back(a[i]);
        }
        maxi = max(maxi,a[i]);
    }

    sort(ans.begin(),ans.end());

    return ans;

}


int main(){
    vector<int> arr = {10,22,12,3,0,6};
    int n = arr.size();
    vector<int> ans;

    ans = foundLeaders(arr,n);

    cout << "The leaders are :- " << endl;

    int x = ans.size();

    for(int i =0;i<x;i++){
        cout << ans[i] << " ";
    }


    return 0;
}