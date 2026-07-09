#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr,int low,int high){

    while(low<high){
        swap(arr[low++],arr[high--]);
    }

}

vector<int> optimal_nextPermutation(vector<int>arr,int n){

    int index=-1;

    for(int i=n-2;i>=0;i--){

        if(arr[i]<arr[i+1]){

            index=i;
            break;

        }

    }

    if(index==-1){

        reverse(arr,0,n-1);
        return arr;

    }

    for(int i=n-1;i>=0;i++){

        if(arr[i]>arr[index]){

            swap(arr[i],arr[index]);
            break;

        }

    }

    reverse(arr,index+1,n-1);
    return arr;

}

int main(){

    vector<int> arr={5,4,3};

    vector<int> ans=optimal_nextPermutation(arr,arr.size());

    for(int x: ans) cout<<x<<" ";

}
