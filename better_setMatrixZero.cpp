#include<bits/stdc++.h>
using namespace std;

void better_set_matrix(vector<vector<int>>& arr,int n,int m){

    vector<int> row(n,0);
    vector<int> col(m,0);

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(arr[i][j]==0){

                row[i]=1;
                col[j]=1;

            }

        }

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(arr[i][j]==1 && (row[i]==1 || col[j]==1)){

                arr[i][j]=0;

            }

        }

    }

}

int main(){

    vector<vector<int>> arr={{1,0,1,1},
                            {1,1,1,1},
                            {1,1,0,1},
                            {1,1,1,1}};

    int n=4,m=4;
    better_set_matrix(arr,n,m);

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cout<<arr[i][j]<<" ";

        }

        cout<<"\n";

    }

}
