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

int brute_app(vector<int>& arr,int cows){

    sort(arr.begin(),arr.end());

    int low=1,high=arr[arr.size()-1]-arr[0];

    for(int i=low;i<=high;i++){

        if(!isPossible(arr,i,cows)) return i-1;

    }

    return -1;

}

int main(){

    vector<int> arr={0,3,4,7,10,9};
    int cows=4;

    int ans1=brute_app(arr,cows);

    cout<<"answer: "<<ans1<<" "<<ans2;

}
