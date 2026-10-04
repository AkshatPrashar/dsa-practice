#include<bits/stdc++.h>
using namespace std;

long long sumDiv(vector<int>& arr,int div,int n){

    long long sum=0;

    for(int x:arr) sum+=ceil((double)x/div);

    return sum;

}

int optimal_app(vector<int>& arr,int n,int h){

    long long maxi=*max_element(arr.begin(),arr.end());

    long long low=1,high=maxi;

    while(low<=high){

        long long mid=low+(high-low)/2;
        long long sum=sumDiv(arr,mid,n);

        if(sum>h) low=mid+1;
        else high=mid-1;
    }

    return (int)low;

}

int main(){

    vector<int> arr={1,2,5,9};
    int threshold=6;

    int ans=optimal_app(arr,arr.size(),threshold);

    cout<<"answer: "<<ans;

}
