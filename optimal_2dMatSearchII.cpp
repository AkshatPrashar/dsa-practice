#include<bits/stdc++.h>
using namespace std;

bool optimal_app(vector<vector<int>>& arr,int target){

    int n=arr.size(),m=arr[0].size();
    int r=0,c=m-1;

    while(r<n && c>=0){

        if(arr[r][c]==target) return true;
        else if(arr[r][c]<target) r++;
        else c--;

    }

    return false;

}

int main(){

    vector<vector<int>> arr={{1,2,4,6},{12,14,28,30},{60,62,124,126},{252,254,508,510}};
    bool ans=optimal_app(arr,4);

    if(ans) cout<<"The number exists!!";
    else cout<<"The number does not exists!!";


}
