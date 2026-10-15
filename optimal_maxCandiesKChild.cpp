#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr,int candies,int s){

    int boys=0;

    for(int x:arr){

        boys+=x/candies;

        if(boys>=s) return true;

    }

    return false;

}

int optimal_app(vector<int>& arr,int s){

    int maxi=INT_MIN,sum=0;

    for(int x:arr){

        maxi=max(x,maxi);
        sum+=x;

    }

    if(sum<s) return 0;

    int low=1,high=maxi;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(isPossible(arr,mid,s)) low=mid+1;
        else high=mid-1;

    }

    return high;

}

int main(){

    vector<int> arr={5,8,6};
    int s=3;

    int ans=optimal_app(arr,s);
    cout<<"Answer: "<<ans;

}
