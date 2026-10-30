#include<bits/stdc++.h>
using namespace std;

bool brute_app(vector<vector<int>>& arr,int target){

    int n=arr.size(),m=arr[0].size();

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(arr[i][j]==target) return true;

        }

    }

    return false;

}


int main(){

    vector<vector<int>> arr={{1,2,4,6},{12,14,28,30},{60,62,124,126},{252,254,508,510}};

    //bool ans=brute_app(arr,252);

    if(ans) cout<<"The number exists!!";
    else cout<<"The number does not exists!!";


}
