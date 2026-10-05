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

int brute_app(vector<int>& arr,int d){

    long long sum=0,maxi=INT_MIN;
    for(long long x:arr){

        sum+=x;
        maxi=max(x,maxi);

    }

    for(long long i=maxi;i<=sum;i++){

        if((int)loadDays(arr,i)<=d) return (int)i;

    }

    return -1;

}

int main(){

    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int days=5;

    int load=brute_app(arr,days);

    cout<<"Load: "<<load;

}
