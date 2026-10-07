#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int>& arr,int k){

    for(int x:arr){

        if(x<=k) k++;
        else break;

    }

    return k;

}

int main(){

    vector<int> arr={3,6,8,9,65};
    int k=45;

    int ans=brute_app(arr,k);

    cout<<"Ans: "<<ans;

}
