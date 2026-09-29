#include<bits/stdc++.h>
using namespace std;

//tell me the smallest rate at which koko eats banana under the given time

int optimal_app(vector<int>& arr,int h){

    long long maxi=*max_element(arr.begin(),arr.end());
    long long low=1,high=maxi;

    while(low<=high){

        long long mid=low+(high-low)/2;
        long long time=timeTaken(arr,mid);

        if(time>h) low=mid+1;
        else high=mid-1;

    }

    return (int)low;

}

int brute_app(vector<int>& arr,int h){

    long long i=1;

    while(true){

        if(timeTaken(arr,i)<=h) return (int)i;

        i++;

    }

    return -1;

}

int main(){

    vector<int> arr={5,6,13,26};
    int h=7;

    cout<<"Optimal rate: "<<ans;
    int ans=optimal_app(arr,h);

    cout<<"Optimal rate: "<<ans;

}
