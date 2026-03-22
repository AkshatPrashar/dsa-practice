#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7]={1,4,5,6,6,6,4};
    map<int,int> mp;

    for(int i=0;i<6;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<" appears "<<it.second<<" times";
        cout<<"\n";
    }
}