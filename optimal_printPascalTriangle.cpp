#include<bits/stdc++.h>
using namespace std;

void push_rows(int row,vector<int> &ans){

    ans.push_back(1);
    if(row==1) return;
    int res=row-1;
    ans.push_back(res);

    for(int i=1;i<row-1;i++){

        res=res*(row-1-i);
        res=res/(i+1);
        ans.push_back(res);
    }


}

vector<vector<int>> pascal(int row){

    vector<vector<int>> ans(row);

    for(int i=1;i<=row;i++){

        push_rows(i,ans[i-1]);

    }

    return ans;

}

int main(){

    vector<vector<int>> ans=pascal(5);

    for(int i=0;i<ans.size();i++){

        for(int j=0;j<ans[i].size();j++){

            cout<<ans[i][j]<<" ";

        }

        cout<<"\n";
    }

}
