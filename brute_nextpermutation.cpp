#include<bits/stdc++.h>
using namespace std;

void brute_pur(int index,vector<int> &arr,vector<vector<int>>& ans){

    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i=index;i<arr.size();i++){

        swap(arr[i],arr[index]);
        brute_pur(index+1,arr,ans);
        swap(arr[i],arr[index]);

    }

}

vector<int> brute_next_permutation(vector<int> arr,int n,vector<int> a){

    vector<vector<int>> ans;
    brute_pur(0,arr,ans);
    int index=-1,k;
    sort(ans.begin(),ans.end());

    for(int i = 0; i < ans.size() ; i++){
        if(ans[i] == a){
            index = i;
            if(index==ans.size()-1) return ans[0];
            break;
        }
    }

    
    return ans[index+1];


}

int main(){

    vector<int> arr={5,4,3};
    vector<int> ans=brute_next_permutation(arr,arr.size(),arr);

    for(int x: ans) cout<<x<<" ";
  

}
