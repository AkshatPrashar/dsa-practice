#include<bits/stdc++.h>
using namespace std;

vector<int> better_app(vector<int>& arr,int n,int x){

    int f=-1,l=-1;

    for(int i=0;i<n;i++){

        if(arr[i]==x){

            if(f==-1) f=i;
            l=i;

        }
        else if(arr[i]>x) break;

    }

    return {f,l};

}
int main(){

    vector<int> arr={2,4,6,8,10,12,12,12,14,151,171};

    vector<int> ans=better_app(arr,arr.size(),3);


    cout<<"First= "<<ans[0]<<"\n"<<"Last= "<<ans[1];

}
