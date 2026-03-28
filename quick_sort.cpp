#include<bits/stdc++.h>
using namespace std;

int findIndex(vector<int>& arr,int low, int high){
    int i=low,j=high;
    int pivot=low;

    while(i<j){

        while(i<=high && arr[i]<=arr[pivot]) i++;//strictly
        while(j>=low && arr[j]>arr[pivot]) j--;//not strict

        if(i<j) swap(arr[i],arr[j]);
    }

    swap(arr[pivot],arr[j]);
    return j;
}

void qs(vector<int>& arr,int low,int high){
    if(low<high){
        int pi=findIndex(arr,low,high);
        qs(arr,low,pi-1);
        qs(arr,pi+1,high);
    }

}

int main(){
    vector<int> arr={6,5,4,3,2,2,1};
    int low=0,high=arr.size()-1;
    qs(arr,low,high);

    for(int x:arr) cout<<x<<" ";
    return 0;
}