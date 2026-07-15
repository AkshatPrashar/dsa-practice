#include<bits/stdc++.h>
using namespace std;

void setRow(vector<vector<int>>& arr,int i,int n){

    for(int j=0;j<n;j++){

        if(arr[i][j]!=0) arr[i][j]=-1;

    }

}

void setCol(vector<vector<int>>& arr,int j,int m){

    for(int i=0;i<m;i++){

        if(arr[i][j]!=0) arr[i][j]=-1;

    }

}

void brute_set_matrix(vector<vector<int>> &arr,int n,int m){

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(arr[i][j]==0){

                setRow(arr,i,n);
                setCol(arr,j,m);

            }

        }

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(arr[i][j]==-1) arr[i][j]=0;

        }

    }

}

int main(){

    vector<vector<int>> arr={{1,0,1,1},
                            {1,1,1,1},
                            {1,1,0,1},
                            {1,1,1,1}};

    int n=4,m=4;
    brute_set_matrix(arr,n,m);
    

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cout<<arr[i][j]<<" ";

        }

        cout<<"\n";

    }

}
