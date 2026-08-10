#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int> arr,int n,int k){

    int count=0,exor=0;

    for(int i=0;i<n;i++){

        exor=0;
        for(int j=i;j<n;j++){

            exor=exor^arr[j];

            if(exor==k) count++;

        }
            
    }

    return count;

}

int main(){

    vector<int> arr={1,1,2,2,4,4,6};
    int ans=brute_app(arr,arr.size(),0);

    cout<<"count: "<<ans;


}
