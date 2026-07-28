#include<bits/stdc++.h>
using namespace std;

vector<int> brute_app(vector<int>& arr,int n){

    int target=n/3;
    vector<int> ans;
    int k=-1;
    int count=0;
    for(int i=0;i<n;i++){

        count=0;
        for(int j=0;j<n;j++){

            if(arr[j]==arr[i]) count++;

        }

        if(count>target){

            if(ans.size()==0 || ans[k]!=arr[i]){

                ans.push_back(arr[i]);
                k++;

            }

        }

    }

    return ans;

}

int main(){

    vector<int> arr={1,1,1,1,2,2,2,2,3,4};
    vector<int> ans=brute_app(arr,10);

    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";


}
