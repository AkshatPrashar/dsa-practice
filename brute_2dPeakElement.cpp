#include<bits/stdc++.h>
using namespace std;

vector<int> brute_app(vector<vector<int>>& arr){

    int n=arr.size(),m=arr[0].size();
    int maxi=-1,indi=-1,indj=-1;

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(arr[i][j]>maxi){

                maxi=arr[i][j];
                indi=i,indj=j;

            }

        }

    }

    return {indi,indj};

}

int main(){

    vector<vector<int>> arr={{10,20,15},{21,30,14},{7,16,32}};
    vector<int> ans=brute_app(arr);

    cout<<"["<<ans[0]<<", "<<ans[1]<<"]";


}
