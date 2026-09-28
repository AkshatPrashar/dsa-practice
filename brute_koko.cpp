#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int>& arr,int h){

    long long i=1;

    while(true){

        if(timeTaken(arr,i)<=h) return (int)i;

        i++;

    }

    return -1;

}

int main(){

    vector<int> arr={5,6,13,26};
    int h=7;

    int ans=brute_app(arr,h);

    cout<<"Optimal rate: "<<ans;

}
