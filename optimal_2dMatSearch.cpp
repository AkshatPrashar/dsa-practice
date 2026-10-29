#include<bits/stdc++.h>
using namespace std;

bool optimal_app(vector<vector<int>>& arr,int target){

    int n=arr.size(),m=arr[0].size();
    int low=0,high=n*m-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        int left=mid/m,right=mid%m;

        if(arr[left][right]>target) high=mid-1;
        else if(arr[left][right]<target) low=mid+1;
        else return true;

    }

    return false;

}

int main(){

    vector<vector<int>> arr={{1,2,4,6},{12,14,28,30},{60,62,124,126},{252,254,508,510}};
    bool ans=optimal_app(arr,4);

    if(ans) cout<<"The number exists!!";
    else cout<<"The number does not exists!!";


}
