#include<bits/stdc++.h>
using namespace std;

int upper_b(vector<int>& arr,int n,int x){

    int ans=n;
    int low=0,high=n-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]<=x) low=mid+1;
        else if(arr[mid]>x){

            ans=mid;
            high=mid-1;

        }

    }

    return ans;

}

int main(){

    vector<int> arr={2,4,5,6,9,13,14,16,18,67};

    int ans=upper_b(arr,arr.size(),5);

    cout<<"upper bound= "<<ans;

}
