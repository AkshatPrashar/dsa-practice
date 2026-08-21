#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int>& arr,int n){

    int cnt=0;

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(arr[i]>2*arr[j]) cnt++;

        }

    }

    return cnt;

}

int main(){

    vector<int> arr={40,30,20,5,6,3};

    int ans=brute_app(arr,arr.size());

    cout<<"Pairs: "<<ans;

}
