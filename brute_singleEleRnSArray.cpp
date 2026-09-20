#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int>& arr,int n){

    int exor=0;

    for(int x:arr) exor=exor^x;

    return exor;

}

int main(){

    vector<int> arr={1,1,6,6,7,7,8,8,9,10,10,11,11};

    int ans=brute_app(arr,arr.size());

    cout<<"Single Element: "<<ans;

}
