#include<bits/stdc++.h>
using namespace std;

int optimal_buy_sell(vector<int> arr,int n){

    int max=0,minIndex=0;
    int profit;

    for(int i=0;i<n;i++){

        profit=arr[i]-arr[minIndex];

        if(profit>max) max=profit;
        if(arr[i]>arr[minIndex]) minIndex=i;

    }

    return max;

}

int main(){

    vector<int> arr={5,4,3,2,1};
    int profit=optimal_buy_sell(arr,arr.size());

    cout<<"Profit: "<<profit;

}
