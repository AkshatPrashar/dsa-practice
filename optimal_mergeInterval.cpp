#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> optimal_app(vector<vector<int>> arr,int n){

    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;

    int el1=arr[0][0];
    int el2=arr[0][1];

    for(int i=1;i<n;i++){

        if(arr[i][0]<=el2) el2=max(el2,arr[i][1]);
        else{

            ans.push_back({el1,el2});
            el1=arr[i][0];
            el2=arr[i][1];

        }

    }

    ans.push_back({el1,el2});
    return ans;

}

int main(){

    vector<vector<int>> arr={{1,3},{2,5},{7,9},{8,8},{0,1}};

    vector<vector<int>> ans=optimal_app(arr,arr.size());

    for(int i=0;i<arr.size();i++){

        cout<<ans[i][0]<<","<<ans[i][1];
        cout<<"\n";

    }



}
