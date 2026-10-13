#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr,int pages,int s){

    int sum=0;
    int boys=1;

    for(int x:arr){

        if(sum+x<=pages) sum+=x;
        else{

            boys++;
            sum=x;

        }

    }

    if(boys<=s) return true;

    return false;

}

int optimal_app(vector<int>& arr,int s){

    int mini=INT_MIN,sum=0;
    for(int x:arr){

        sum+=x;
        mini=max(x,mini);

    }

    int low=mini,high=sum;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(isPossible(arr,mid,s)) high=mid-1;
        else low=mid+1;

    }

    return low;

}

int main(){

    vector<int> arr={12,34,67,90};
    int s=2;

    int ans=optimal_app(arr,s);
    cout<<"Answer: "<<ans;

}
