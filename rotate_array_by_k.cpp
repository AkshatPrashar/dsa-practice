#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr,int low,int high){
    while(low<=high){
        swap(arr[low++],arr[high--]);
    }
}

void rotate_array(vector<int>& arr,int n,int k){

    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);

}

int main(){

    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    rotate_array(arr,n,3);
    cout<<"Rotate left: ";
    for(int x: arr) cout<<x<<" ";

    vector<int> arr2={1,2,3,4,5};
    rotate_array(arr2,n,n-3);
    cout<<"\nRotate right: ";
    for(int x: arr2) cout<<x<<" ";

}