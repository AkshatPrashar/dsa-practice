#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> better_app(vector<int>& arr,int n){

    set<vector<int>> st;

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            set<int> tst;
            for(int k=j+1;k<n;k++){

                int fourth=-(arr[i]+arr[j]+arr[k]);
                if(tst.find(fourth)!=tst.end()){

                    vector<int> temp={arr[i],arr[j],arr[k],fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

                }
                tst.insert(arr[k]);

            }

        }

    }

    vector<vector<int>> ans(st.begin(),st.end());
    return ans;

}


int main(){

    vector<int> arr={1,1,1,1,-1,1,-1,-2,-3,3,2};
    vector<vector<int>> ans=better_app(arr,arr.size());

    for(int i=0;i<ans.size();i++){

        for(int j=0;j<ans[i].size();j++){

            cout<<ans[i][j]<<" ";

        }

    cout<<"\n";

    }

}
