#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr,int d,int cows){

    int cnt=0,last=0;
    int n=arr.size();

    for(int i=1;i<n;i++){

        int dis=arr[i]-arr[last];
        if(dis>=d) cnt++;

        if(cnt==cows) return true;

    }

    return false;

}

int optimal_app(vector<int>& arr,int cows){

    sort(arr.begin(),arr.end());

    int low=1,high=arr[arr.size()-1]-arr[0];

    while(low<=high){

        int mid=low+(high-low)/2;

        if(isPossible(arr,mid,cows)) low=mid+1;
        else high=mid-1;

    }

    return high;

}

int main(){

    vector<int> arr={0,3,4,7,10,9};
    int cows=4;
    int ans2=optimal_app(arr,cows);

    cout<<"answer: "<<ans1<<" "<<ans2;

}
