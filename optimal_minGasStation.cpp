#include<bits/stdc++.h>
using namespace std;

bool ispossible(vector<int>& arr,long double dis,int k){

    int cnt=0,n=arr.size();

    for(int i=1;i<n;i++){

        int no_stations=ceil((double)(arr[i]-arr[i-1])/dis)-1;//if exact division then gives one lesser

        cnt+=no_stations;

        if(cnt>k) return false;

    }

    return true;

}

double optimal_app(vector<int>& arr,int n,int k){

    long double maxi=-1;
    for(long double x:arr) maxi=max(maxi,x);

    long double low=0,high=maxi;
    long double eps=1e-6;

    while((high-low)>eps){

        long double mid=low+(high-low)/2.0;

        if(ispossible(arr,mid,k)) high=mid;
        else low=mid;

    }

    return (double)high;

}

int main(){

    vector<int> arr={1,13,17,23};
    int k=4;
    double ans=optimal_app(arr,arr.size(),k);


    cout<<"Minimum of the maximum distances is: "<<ans;
}
