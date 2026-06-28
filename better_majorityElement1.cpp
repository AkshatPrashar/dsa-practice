#include<bits/stdc++.h>
using namespace std;

int better_maj(vector<int> arr){

    map<int,int> mp;

    for(int i=0;i<arr.size();i++){

        mp[arr[i]]++;

    }

    for(auto it: mp){

        if(it.second>(arr.size()/2)) return it.first;

    }

    return -1;

}

int main(){

    vector<int> arr={2,2,2,2,1,1,1};
    int maj=better_maj(arr);
    cout<<"Majiorty element= "<<maj;

}
