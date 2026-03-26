#include<bits/stdc++.h>
using namespace std;

void sortm(vector<int>& arr,int low,int mid,int high){
    int sA=low,fA=mid,sB=mid+1,fB=high;
    vector<int> a;

    while(sA<=fA && sB<=fB){
        if(arr[sA]>=arr[sB]){
            a.push_back(arr[sB]);
            sB++;
        }
        else if(arr[sA]<=arr[sB]){
            a.push_back(arr[sA]);
            sA++;
        }
    }

    for(;sA<=fA;sA++){
        a.push_back(arr[sA]);
        }
    for(;sB<=fB;sB++){
        a.push_back(arr[sB]);
    }

    for(int i=low;i<=high;i++) arr[i]=a[i-low];
}

void ms(vector<int>& arr,int low,int high){
    if(low==high) return;
    int mid=low+(high-low)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    sortm(arr,low,mid,high);
}

int main(){
    vector<int> arr={4,7,2,3,3,9,5};
    ms(arr,0,6);
    for(int i=0;i<7;i++) cout<<arr[i]<<" ";

}