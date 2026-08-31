#include<bits/stdc++.h>
using namespace std;

vector<int> brute_app(vector<int>& arr,int n,int x){

    int f=-1,l=-1;

    for(int i=0;i<n;i++){

        if(arr[i]==x){

            f=i;
            break;

        }
        else if(arr[i]>x) break;

    }

    if(f==-1) return {-1,-1};

    for(int i=n-1;i>=0;i--){

        if(arr[i]==x){

            l=i;
            break;

        }

    }

    return {f,l};

}

int main(){

    vector<int> arr={2,4,6,8,10,12,12,12,14,151,171};

    //vector<int> ans=brute_app(arr,arr.size(),3);

    cout<<"First= "<<ans[0]<<"\n"<<"Last= "<<ans[1];

}
