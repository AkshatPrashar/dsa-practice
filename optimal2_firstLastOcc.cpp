#include<bits/stdc++.h>
using namespace std;

vector<int> optimal2_app(vector<int>& arr,int n,int x){

    int f=-1,l=-1,low=0,high=n-1,ans=n;

    //first occ
    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]<x) low=mid+1;
        else if(arr[mid]>x) high=mid-1;
        else{

            ans=mid;
            high=mid-1;

        }

    }

    if(ans==n) return {-1,-1};
    f=ans;

    ans=n,low=0,high=n-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]<x) low=mid+1;
        else if(arr[mid]>x) high=mid-1;
        else{

            ans=mid;
            low=mid+1;

        }

    }

    l=ans;

    return {f,l};

}

int main(){

    vector<int> arr={2,4,6,8,10,12,12,12,14,151,171};

    vector<int> ans=optimal2_app(arr,arr.size(),12);


    cout<<"First= "<<ans[0]<<"\n"<<"Last= "<<ans[1];

}
