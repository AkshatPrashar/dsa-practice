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
        
        if(ans!=x || ind==n) return -1;

        return ind;

    }

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

vector<int> optimal_app(vector<int>& arr,int n,int x){

    int f=lb(arr,n,x);
    int l=-1;

    if(f!=-1) l=ub(arr,n,x);

    return {f,l};

}


int main(){

    vector<int> arr={2,4,6,8,10,12,12,12,14,151,171};

    //vector<int> ans=optimal_app(arr,arr.size(),3);

    cout<<"First= "<<ans[0]<<"\n"<<"Last= "<<ans[1];

}
