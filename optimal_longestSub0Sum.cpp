#include<bits/stdc++.h>
using namespace std;

int optimal_app(vector<int> arr,int n){

    map<int,int> mp;
    int maxlen=0,sum=0;

    for(int i=0;i<n;i++){

        sum+=arr[i];
        if(sum==0) maxlen=max(maxlen,i+1);

        if(mp.find(sum)!=mp.end()){

            maxlen=max(maxlen,i-mp[sum]);

        }
        else mp[sum]=i;

    }

    return maxlen;

}

int main(){

    vector<int> arr={0,0,0,1,-1,2,2,2,-1,-1,-1,-1};

    int ans=optimal_app(arr,arr.size());
    cout<<"\nLength: "<<ans;


}
