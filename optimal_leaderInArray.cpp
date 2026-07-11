#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr,int low,int high){

    while(low<high){
        swap(arr[low++],arr[high--]);
    }

}

vector<int> optimal_leader(vector<int> arr,int n){

    vector<int> a;
    a.push_back(arr[n-1]);
    int max=arr[n-1];

    for(int i=n-2;i>=0;i--){

        if(arr[i]>max){

            max=arr[i];
            a.push_back(arr[i]);

        }

    }

    reverse(a,0,a.size()-1);
    return a;

    

}

int main(){

    vector<int> arr={3,4,6,3,2,1};
    vector<int> ans=optimal_leader(arr,arr.size());

    for(int x:ans) cout<<x<<" ";

}
