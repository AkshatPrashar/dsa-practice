#include<bits/stdc++.h>
using namespace std;

vector<int> better_app(vector<int>& arr,int n){

    map<int,int> mp;
    vector<int> ans;
    int target=n/3;

    for(int x: arr){

        mp[x]++;
        if(mp[x]==target) ans.push_back(x);

    }

    return ans;


}

int main(){

    vector<int> arr={1,1,1,1,2,2,2,2,3,4};
    vector<int> ans=better_app(arr,10);

    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";


}
