#include<bits/stdc++.h>
using namespace std;

int optimal_app(vector<int> arr,int n,int k){//logic is same as count of subarrays with sum k

    int count=0,exor=0,rem=0;
    map<int,int> mp;

    mp[0]=1;//there is phi subarray which has xor 1 one: 
    for(int i=0;i<n;i++){

        exor^=arr[i];
        rem=exor^k;//if till now my xor is exor and if there exists k xor there has to be an element x for it

        if(mp.find(rem)!=mp.end()) count+=mp[rem];

        mp[exor]++;

    }

    return count;

}

int main(){

    vector<int> arr={1,1,2,2,4,4,6};
    int ans=optimal_app(arr,arr.size(),0);

    cout<<"count: "<<ans;


}
