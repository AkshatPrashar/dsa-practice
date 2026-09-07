#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int>& arr,int n,int x){

    int f=-1,l=-1;

    for(int i=0;i<n;i++){

        if(arr[i]==x){

            f=i;
            break;

        }
        else if(arr[i]>x) return 0;

    }
    
    if(f==-1) return 0;

    for(int i=n-1;i>=0;i--){

        if(arr[i]==x){

            l=i;
            break;

        }

    }

    return l-f+1;

}

int main(){

    vector<int> arr={1,1,2,2,2,2,2,3};

    int ans=brute_app(arr,arr.size(),2);

    cout<<"Count= "<<ans;

}
