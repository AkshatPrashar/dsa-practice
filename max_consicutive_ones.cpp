#include<bits/stdc++.h>
using namespace std;

int max_consicutive(vector<int> arr){

    int i=0;
    int n=arr.size(),count=0,max=-1;

    if(n==1){
        if(arr[0]==1) return 1;
        else return 0;
    }

    while(i<n){

        if(arr[i]==1) count++;
        else{
            count=0;
        }

        i++;

        if(max<count){
            max=count;
        }
    }

    return max;

}

int main(){

    vector<int> arr={1,0};
    int max=max_consicutive(arr);

    cout<<"Max 1's: "<<max;

}