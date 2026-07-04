#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange_the_arrayI(vector<int> & arr,int n){

    vector<int> a(n);
    int negIndex=0,posIndex=1;

    for(int i=0;i<arr.size();i++){

        if(arr[i]>=0){

            a[posIndex]=arr[i];
            posIndex+=2;

        }
        else{

            a[negIndex]=arr[i];
            negIndex+=2;

        }

    }

    return a;

}

int main(){

    vector<int> arr={-1,-2,-3,-5,9,8,6,5};
    
    vector<int> ans=rearrange_the_arrayI(arr,arr.size());
    cout<<"Rearrange array1----\n";
    for(int x: ans) cout<<x<<" ";

}
