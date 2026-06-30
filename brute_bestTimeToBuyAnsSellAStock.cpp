#include<bits/stdc++.h>
using namespace std;

int _brute_buy_sell(vector<int> arr,int n){

    int profit=0,max=0;

    for(int i=0;i<n;i++){
        profit=0;
        for(int j=i+1;j<n;j++){
            profit=arr[j]-arr[i];
            if(max<profit) max=profit;
        }
    }

    return max;

}

int main(){

    vector<int> arr={5,4,3,2,1};
    int profit=_brute_buy_sell(arr,arr.size());

    cout<<"Profit: "<<profit;

}
