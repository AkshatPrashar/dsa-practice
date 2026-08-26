#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& arr,int n,int target){

    int low=0,high=n-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]<target) low=mid+1;
        else if(arr[mid]>target) high=mid-1;
        else return mid;

    }

    return -1;

}

int main(){

    vector<int> arr={3,4,5,5,5,5,7,8,9,11,89,90};

    int ans=binary_search(arr,arr.size(),1);

    if(ans==-1){

        cout<<"Element not found!";

    }
    else cout<<"Element found at index: "<<ans;



}
