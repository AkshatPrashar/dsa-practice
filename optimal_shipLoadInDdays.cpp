#include<bits/stdc++.h>
using namespace std;

long long loadDays(vector<int>& arr,int w){

    long long days=1,sum=0;

    for(int x:arr){

        if(sum+x<=w) sum+=x;
        else{

            days++;
            sum=x;

        }

    }

    return days;

}

int optimal_app(vector<int>& arr,int d){

    long long sum=0,maxi=INT_MIN;
    for(long long x:arr){

        sum+=x;
        maxi=max(x,maxi);

    }

    long long low=maxi,high=sum;

    while(low<=high){

        long long mid=low+(high-low)/2;
        long long days=loadDays(arr,mid);

        if(days>d) low=mid+1;
        else high=mid-1;

    }

    return (int)low;

}

int main(){

    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int days=5;

    int load=optimal_app(arr,days);

    cout<<"Load: "<<load;

}
