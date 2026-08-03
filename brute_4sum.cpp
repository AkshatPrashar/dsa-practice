#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> brute_app(vector<int>& arr,int n){

    set<vector<int>> st;

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            for(int k=j+1;k<n;k++){

                for(int l=k+1;l<n;l++){

                    int sum=arr[i]+arr[j];
                    sum+=arr[k];
                    sum+=arr[l];
                    if(sum==0){

                        vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);

                    }

                }

            }

        }

    }

    vector<vector<int>> ans(st.begin(),st.end());
    return ans;

}

int main(){

    vector<int> arr={1,1,1,1,-1,1,-1,-2,-3,3,2};
    vector<vector<int>> ans=brute_app(arr,arr.size());

    for(int i=0;i<ans.size();i++){

        for(int j=0;j<ans[i].size();j++){

            cout<<ans[i][j]<<" ";

        }

    cout<<"\n";

    }

}
