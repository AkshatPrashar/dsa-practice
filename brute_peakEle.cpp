#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int>& arr,int n){

    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;

    for(int i=1;i<=n-2;i++){

        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]) return i;

    }

    return -1;

}

int main(){

    vector<int> arr={6,3,5,3,6,3,6,3,5,3,2};

    int ans=brute_app(arr,arr.size());

    cout<<"Peak element: "<<ans;


}
