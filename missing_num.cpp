#include<bits/stdc++.h>
using namespace std;

int missing_number(vector<int> arr,int N){

    int i=0;
    int exor1=0;
    int exor2=0;
    for(i=0;i<arr.size();i++){
        exor2=exor2^arr[i];
        exor1=exor1^(i+1);
    }

    int ans=exor1^exor2^(i+1);

    return ans;
}

int main(){
    int N=5;
    vector<int> arr={1,2,3,5};

    int miss=missing_number(arr,N);

    cout<<"Missing number: "<<miss;

}