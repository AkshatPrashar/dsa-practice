#include<bits/stdc++.h>
using namespace std;

int floor(vector<int>& arr,int n,int x){//largest element smaller than a particular element

    int ans=-1;
    int low=0,high=n-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]<=x){

            ans=arr[mid];
            low=mid+1;

        }
        else{

            high=mid-1;

        }

    }

    return ans;

}

int ceil(vector<int>& arr,int n,int x){//smallest element larger than a particular element

    int ans=-1;
    int low=0,high=n-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]<x){

            
            low=mid+1;

        }
        else{

            ans=arr[mid];
            high=mid-1;

        }

    }

    return ans;

}

pair<int,int> fnc(vector<int>& arr,int n,int x){

    int f=floor(arr,n,x);
    int c=ceil(arr,n,x);

    return {f,c};

}

int main(){

    vector<int> arr={2,4,5,6,9,13,14,16,18,67};

    pair<int,int> ans=fnc(arr,arr.size(),15);

    cout<<"Floor is: "<<ans.first<<"\n"<<"ceil is: "<<ans.second;

    
}

