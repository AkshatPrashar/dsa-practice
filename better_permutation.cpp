#include<bits/stdc++.h>
using namespace std;

void better_permutation(vector<int> arr,vector<int> ds,vector<int> freq,vector<vector<int>>& ans){

    if(ds.size()==arr.size()){

        ans.push_back(ds);
        return;
    
    }

    for(int i=0;i<arr.size();i++){

        if(freq[i]==0){

            freq[i]=1;
            ds.push_back(arr[i]);
            better_permutation(arr,ds,freq,ans);
            freq[i]=0;
            ds.pop_back();

        }


    }

}

int main(){

    vector<int> arr={3,4,5};

    vector<int> freq(arr.size(),0);
    vector<vector<int>> ans;
    vector<int> ds;

    better_permutation(arr,ds,freq,ans);

    for(int i=0;i<ans.size();i++){

         for(int j=0;j<ans[i].size();j++){

             cout<<ans[i][j]<<" ";

         }

         cout<<"\n";
    }




}
