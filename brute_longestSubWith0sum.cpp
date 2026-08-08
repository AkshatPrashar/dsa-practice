#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int> arr,int n){

    int maxlen=0,sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){

            sum+=arr[j];
            if(sum==0){

                maxlen=max(maxlen,j-i+1);

            }

        }
    }

    return maxlen;

}

int main(){

    vector<int> arr={0,0,0,1,-1,2,2,2,-1,-1,-1,-1};

    int ans=brute_app(arr,arr.size());
    cout<<"\nLength: "<<ans;


}
