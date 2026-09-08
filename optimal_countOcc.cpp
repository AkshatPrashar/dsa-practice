#include<bits/stdc++.h>
using namespace std;

int lb(vector<int>& arr,int n,int x){

    int ans=-1,ind=n,low=0,high=n-1;

    while(low<=high){

        int mid=low+(high-low)/2;
        
        if(arr[mid]<x) low=mid+1;
        else{

            ans=arr[mid];
            ind=mid;
            high=mid-1;

        }

    }

    if(ans!=x || ind==n) return -1;

    return ind;

}

int ub(vector<int>& arr,int n,int x){

    int ans=n,low=0,high=n-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]<=x) low=mid+1;
        else{

            ans=mid;
            high=mid-1;

        }

    }

    return ans-1;

}

int optimal_app(vector<int>& arr,int n,int x){

    int f=lb(arr,n,x);
    if(f==-1) return 0;

    int l=ub(arr,n,x);

    return l-f+1;

}

int main(){

    vector<int> arr={1,1,2,2,2,2,2,3};

    int ans=optimal_app(arr,arr.size(),2);

    cout<<"Count= "<<ans;

}
