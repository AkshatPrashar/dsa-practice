#include<bits/stdc++.h>
using namespace std;

int findIndex(vector<int>& arr,int low,int high){

    int pivot=low;
    int i=low,j=high;

    while(i<j){

        while(i>=low && arr[pivot]>=arr[i]) i++;

        while(j<=high && arr[pivot]<arr[j]) j--;

        if(i<j) swap(arr[i],arr[j]);

    }

    swap(arr[pivot],arr[j]);
    return j;

}

void brute_sort012(vector<int>& arr,int low,int high){

    if(low<high){

        int pi=findIndex(arr,low,high);
        brute_sort012(arr,low,pi-1);
        brute_sort012(arr,pi,high-1);

    }


}



int main(){

    vector<int> arr={1,2,0,0,1,1,2,1};
    //brute_sort012(arr,0,arr.size());

    for(int x: arr) cout<<x<<" ";

}
