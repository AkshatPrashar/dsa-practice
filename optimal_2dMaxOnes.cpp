#include<bits/stdc++.h>
using namespace std;

int lbound(vector<int>& arr,int k){

    int low=0,high=arr.size()-1;
    
    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]>=k) high=mid-1;
        else low=mid+1;

    }

    return low;

}

int optimal_app(vector<vector<int>>& arr,int n,int m){

    int maxi=0,ind=-1;

    for(int i=0;i<n;i++){

        int lb=lbound(arr[i],1);
        int cnt=m-lb;

        if(cnt>maxi){

            maxi=cnt;
            ind=i;

        }

    }

    if(!maxi) return -1;
    return ind;

}

int main(){

    vector<vector<int>> arr={{0,0,0,1},{0,0,1,1},{0,1,1,1},{1,1,1,1}};
    int ans=optimal_app(arr,arr.size(),arr[0].size());

    cout<<"Index: "<<ans;

}
