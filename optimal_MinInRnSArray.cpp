#include<bits/stdc++.h>
using namespace std;

int optimal_app(vector<int>& arr,int n){

    int low=0,high=n-1,mini=INT_MAX;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[low]<=arr[mid]){

            mini=min(mini,arr[low]);
            low=mid+1;

        }
        else{

            mini=min(mini,arr[mid]);
            high=mid-1;

        }

    }

    return mini;

}

int main(){

    vector<int> arr={7,8,9,1,2,4,5,6};
    int ans=optimal_app(arr,arr.size());

    cout<<"Minimum: "<<ans;

}
