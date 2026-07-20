#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &arr,int n,int m){

    for(int i=0;i<n;i++){

        for(int j=i+1;j<m;j++){

            swap(arr[j][i],arr[i][j]);

        }

    }

}

int main(){

    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{10,11,12,13},{14,15,16,17}};

    transpose(arr,4,4);

    for(int i=0;i<4;i++){

        for(int j=0;j<4;j++){

            cout<<arr[i][j]<<" ";

        }

        cout<<"\n";

    }

}
