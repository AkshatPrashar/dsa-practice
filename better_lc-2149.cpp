#include<bits/stdc++.h>
using namespace std;

void rearrange_the_arrayII(vector<int>& arr,int N){

    vector<int> pos;
    vector<int> neg;

    for(int x: arr){

        if(x>=0) pos.push_back(x);
        else neg.push_back(x);

    }

    int n=pos.size();
    int m=neg.size();
    int i=0,j=0,k=0;

    while(i<n && j<m){

        arr[k++]=neg[j++];
        arr[k++]=pos[i++];

    }

    for(;i<n;i++) arr[k++]=pos[i];
    for(;j<m;j++) arr[k++]=neg[j];

}


int main(){

    vector<int> arr={-1,-2,-3,-5,9,8,6,5};
    
    rearrange_the_arrayII(arr,arr.size());
    cout<<"\nRearrange array2----\n";
    for(int x: arr) cout<<x<<" ";

}
