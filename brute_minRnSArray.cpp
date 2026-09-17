#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int>& arr,int n){

    int mini=INT_MAX;

    for(int x:arr) mini=min(mini,x);

    return mini;

}

int main(){

    vector<int> arr={7,8,9,1,2,4,5,6};

    int ans=brute_app(arr,arr.size());
    int ans=optimal_app(arr,arr.size());

    cout<<"Minimum: "<<ans;

}
