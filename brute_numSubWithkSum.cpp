#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int> &arr,int n,int k){

    int count=0,sum=0;

    for(int i=0;i<n;i++){

        sum=0;

        for(int j=i;j<n;j++){

            sum=sum+arr[j];
            if(sum==k) count++;

        }

    }

    return count;


}

int main(){

    vector<int> arr={1,1,1,2,3,4,-1,-1,-3};

    int ans=brute_app(arr,9,3);

    cout<<"NUm: "<<ans;


}
