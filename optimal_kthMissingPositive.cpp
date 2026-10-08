#include<bits/stdc++.h>
using namespace std;

int optimal_app(vector<int>& arr,int k){

    if(k<arr[0]) return k;

    int low=0,high=n-1;

    while(low<=high){

        int mid=low+(high-low)/2;
        int miss=arr[mid]-(mid+1);

        if(miss<k) low=mid+1;
        else high=mid-1;

    }

    return low+k;

}

int main(){

    vector<int> arr={3,6,8,9,65};
    int k=45;
    int ans=optimal_app(arr,k);

    cout<<"Ans: "<<ans;

}
