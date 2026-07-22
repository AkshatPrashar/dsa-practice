#include<bits/stdc++.h>
using namespace std;

int optimal_app(vector<int> &arr,int n,int k){

    map<int,int> mp;
    mp[0]=1;//this says that there are no elements that can be removed its count is one (it counts the number it self)
    int count=0,rem,sum=0;

    for(int i=0;i<n;i++){

        sum=sum+arr[i];
        rem=sum-k;


        if(mp.find(rem)!=mp.end()){

            count+=mp[rem];
        

        }

        mp[sum]++;//incerease the count of the sum

    }

    return count;

}

int main(){

    vector<int> arr={1,1,1,2,3,4,-1,-1,-3};

    int ans=optimal_app(arr,9,3);

    cout<<"NUm: "<<ans;
    


}
