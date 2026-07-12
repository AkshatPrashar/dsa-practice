#include<bits/stdc++.h>
using namespace std;

bool linear_search(vector<int> arr,int key){

    for(int i=0;i<arr.size();i++){

        if(arr[i]==key) return true;

    }

    return false;

}

int brute_longestSeq(vector<int> arr,int n){

    int len=1;
    int max=1;

    for(int i=0;i<n;i++){

        len=1;
        int elem=arr[i];

        while(linear_search(arr,elem-1)==true){

            elem=elem-1;
            len++;

        }

        if(len>max) max=len;

    }

    return max;

}

int main(){

    vector<int> arr={3,6,10,20,21,21,22,1,2,4,5,6,7};

    int ans=brute_longestSeq(arr,arr.size());

    cout<<"len="<<ans;

}
