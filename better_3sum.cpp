#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> better_app(vector<int>& arr,int n){

    set<vector<int>> st;

    for(int i=0;i<n;i++){

        set<int> tst;
        for(int j=i+1;j<n;j++){

            int third=-(arr[i]+arr[j]);
            if(tst.find(third)!=tst.end()){

                vector<int> temp={arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);

            }
            tst.insert(arr[j]);

        }

    }

    vector<vector<int>> ans(st.begin(),st.end());
    return ans;

}

int main(){

    vector<int> arr={1,1,1,0,0,-1,3,-3,2,-2};

    vector<vector<int>> ans=better_app(arr,10);

    for(int i=0;i<ans.size();i++){

        for(int j=0;j<ans[i].size();j++){

            cout<<ans[i][j]<<" ";

        }

        cout<<"\n";

    }

}
