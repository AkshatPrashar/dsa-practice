#include<bits/stdc++.h>
using namespace std;

int better_longestSeq(vector<int> arr,int n){

    sort(arr.begin(),arr.end());

    int i=0,j=1;
    int len=1;
    int max=0;
    while(j<n){

        if((arr[j]-arr[i])==1) len++;
        else if((arr[j]-arr[i])>1){
            len=1;
        }

        if(len>max) max=len;

        i++;
        j++;

    }

    return max;

}

int main(){

    vector<int> arr={3,6,10,20,21,21,22,1,2,4,5,6,7};

    int ans=better_longestSeq(arr,arr.size());

    cout<<"len="<<ans;
    out<<"len="<<ans;

}
