#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>& arr,int n,int x){

    int ans=n;
    int low=0,high=n-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]<x) low=mid+1;
        else if(arr[mid]>=x){

            ans=mid;
            high=mid-1;

        }

    }

    return ans;

}

int main(){

    vector<int> arr={1,2,3,4,6,34,36,38};

    int ans=lower_bound(arr,arr.size(),5);

    cout<<"Lower bound= "<<ans;

}
