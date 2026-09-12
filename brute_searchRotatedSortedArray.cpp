#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int>& arr,int n,int x){


    for(int i=0;i<n;i++){

        if(arr[i]==x) return i;

    }

    return -1;

}

int main(){

    vector<int> arr={2,2,3,1,1,};

    int ans=brute_app(arr,arr.size(),2);

    cout<<"Count= "<<ans;

}
