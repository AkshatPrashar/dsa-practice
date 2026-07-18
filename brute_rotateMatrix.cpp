#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> brute_r_matrix(vector<vector<int>> arr,int n,int m){

    vector<vector<int>> a(n,vector<int>(m));

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            a[j][n-i-1]=arr[i][j];

        }

    }

    return a;

}

int main(){

    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    vector<vector<int>> a=brute_r_matrix(arr,4,4);

    for(int i=0;i<4;i++){

        for(int j=0;j<4;j++){

            cout<<a[i][j]<<" ";

        }

        cout<<"\n";

    }

}
