#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> brute_permutation(vector<int> arr,int n){

    vector<vector<int>> a;

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            if(i==j) continue;

            for(int k=0;k<n;k++){

                if(k==i || k==j) continue;
                
                a.push_back({arr[i],arr[j],arr[k]});

            }
        }
    }

    return a;

}

int main(){

    vector<int> arr={3,4,5};

    vector<vector<int>> a=brute_permutation(arr,arr.size());

    for(int i=0;i<a.size();i++){

         for(int j=0;j<a[i].size();j++){

              cout<<a[i][j]<<" ";
         }

         cout<<"\n";
    }

    


}
