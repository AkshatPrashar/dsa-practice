#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<vector<int>>& arr,int n,int m){

    int maxi=0,ind=-1;

    for(int i=0;i<n;i++){

        int cnt=0;

        for(int j=0;j<m;j++){

            if(arr[i][j]) cnt++;

        }

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
    int ans=brute_app(arr,arr.size(),arr[0].size());

    cout<<"Index: "<<ans;

}
