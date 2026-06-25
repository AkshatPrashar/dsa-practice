#include<bits/stdc++.h>
using namespace std;

void mysol_sort012(vector<int>& arr){

    int c0=0;
    int c1=0;
    int c2=0;
    for(int x: arr){

        if(x==0){
            c0++;
        }
        else if(x==1){
            c1++;
        }
        else if(x==2){
            c2++;
        }

    }

    int k=0;
    for(int i=0;i<c0;i++){

        arr[k++]=0;

    }
    for(int i=0;i<c1;i++){

        arr[k++]=1;

    }
    for(int i=0;i<c2;i++){

        arr[k++]=2;

    }

}

int main(){

    vector<int> arr={1,2,0,0,1,1,2,1};
    mysol_sort012(arr);
    for(int x: arr) cout<<x<<" ";

}
