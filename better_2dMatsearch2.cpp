#include<bits/stdc++.h>
using namespace std;

bool better_app(vector<vector<int>>& arr,int target){

    int n=arr.size(),m=arr[0].size();

    for(int i=0;i<n;i++){

        int low=0,high=m-1;

        while(low<=high){

            int mid=low+(high-low)/2;

            if(arr[i][mid]<target) low=mid+1;
            else if(arr[i][mid]>target) high=mid-1;
            else return true;

        }

    }

    return false;

}

int main(){

    vector<vector<int>> arr={{1,2,4,6},{12,14,28,30},{60,62,124,126},{252,254,508,510}};
    bool ans=better_app(arr,1000);

    if(ans) cout<<"The number exists!!";
    else cout<<"The number does not exists!!";


}
