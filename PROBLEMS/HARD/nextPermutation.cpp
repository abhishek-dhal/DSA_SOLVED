#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int> &input,int n){

    int ind = -1;

    for(int i = n-2; i>=0; i--){
        if(input[i] < input[i+1]){
            ind = i;
            break;
        }
    }

    if(ind == -1){
        reverse(input.begin(),input.end());
    }

    for(int i = n-1; i>=ind;i--){
        if(input[i] > input[ind]){
            swap(input[i],input[ind]);
            break;
        }
    }

    reverse(input.begin()+ind+1,input.end());
}


int main(){

    vector<int> input = {2,1,5,4,3,0,0};

    int n = input.size();

    nextPermutation(input,n);

    cout << "The next permuted vector is :- " << endl;

    for(int i=0; i<n; i++){
        cout << input[i] << " " ;
    }

    return 0;
}