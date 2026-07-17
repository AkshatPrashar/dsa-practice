#include<bits/stdc++.h>
using namespace std;

void optimal_set_matrix(vector<vector<int>>& arr,int n,int m){

    int colZero=1;
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(arr[i][j]==0){

                arr[i][0]=0;

                if(j!=0) arr[0][j]=0;
                else colZero=0;

            }

        }

    }

    for(int i=1;i<n;i++){

        for(int j=1;j<m;j++){

            if(arr[i][j]!=0 && (arr[i][0]==0 || arr[0][j]==0)){

                arr[i][j]=0;

            }

        }

    }

    if(arr[0][0]==0){

        for(int j=0;j<m;j++) arr[0][j]=0;

    }

    if(colZero==0){

        for(int i=0;i<n;i++) arr[i][0]=0;

    }

}

int main(){

    vector<vector<int>> arr={{1,0,1,1},
                            {1,1,1,1},
                            {1,1,0,1},
                            {1,1,1,1}};

    int n=4,m=4;
    optimal_set_matrix(arr,n,m);

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cout<<arr[i][j]<<" ";

        }

        cout<<"\n";

    }

}
