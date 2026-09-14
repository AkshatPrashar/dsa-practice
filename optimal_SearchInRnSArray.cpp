#include<bits/stdc++.h>
using namespace std;

int optimal_app(vector<int>& arr,int n,int x){

    int low=0,high=n-1;

    while(low<=high){

        int mid=(low+high)>>1;

        if(arr[mid]==x) return mid;

        if(arr[low]<=arr[mid]){

            if(arr[low]<=x && x<arr[mid]) high=mid-1;
            else low=mid+1;

        }
        else{

            if(arr[mid]<x && x<=arr[high]) low=mid+1;
            else high=mid-1;

        }

    }

    return -1;

}

int main(){

    vector<int> arr={2,2,3,1,1,};
    int ans=optimal_app(arr,arr.size(),3);

    cout<<"Count= "<<ans;

}
