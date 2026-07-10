#include<bits/stdc++.h>
using namespace std;

vector<int> brute_leader(vector<int> arr,int n){

    vector<int> a;
    int flag;

    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[i]) flag=1;
            else{

                flag=0;
                break;

            }
        }
        if(flag) a.push_back(arr[i]);
    }
    a.push_back(arr[n-1]);

    return a;

}

int main(){

    vector<int> arr={3,4,6,3,2,1};
    vector<int> ans=brute_leader(arr,arr.size());

    for(int x:ans) cout<<x<<" ";

}
