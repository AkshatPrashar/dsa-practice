#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> optimal_app(vector<int>& arr,int n){
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;

    for(int i=0;i<n;i++){

        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j=i+1;j<n;j++){

            if(j>i+1 && arr[j]==arr[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l){

                int sum=arr[i]+arr[j];
                sum+=arr[k];
                sum+=arr[l];
                if(sum<0) k++;
                else if(sum>0) l--;
                else{

                    vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1]) k++;
                    while(k<l && arr[l]==arr[l+1]) l--;

                }

            }

        }

    }
    return ans;

}

int main(){

    vector<int> arr={1,1,1,1,-1,1,-1,-2,-3,3,2};
    vector<vector<int>> ans=optimal_app(arr,arr.size());

    for(int i=0;i<ans.size();i++){

        for(int j=0;j<ans[i].size();j++){

            cout<<ans[i][j]<<" ";

        }

    cout<<"\n";

    }

}
