#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int>& arr,int n){
    if(arr.size()==1) return {arr[0]};
    int i=0,j=1;

    while(j<n){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
            j++;
        }
        else j++;
    }

    return arr;
}

int main(){
    vector<int> arr={1,1,2,3,3};
    removeDuplicate(arr,arr.size());

    for(int x:arr) cout<<x<<" ";
}