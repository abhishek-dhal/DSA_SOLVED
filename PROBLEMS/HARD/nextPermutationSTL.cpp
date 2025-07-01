#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    vector<int> arr = {3,1,2};
    int arr1[] = {2,3,1};

    next_permutation(arr.begin(),arr.end());
    next_permutation(begin(arr1),end(arr1));

    cout << "The next permuted array is:- " << endl;

    for(int i = 0; i<3; i++){
        cout << arr1[i] << " ";
    }

    return 0;
}