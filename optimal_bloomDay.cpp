#include<bits/stdc++.h>
using namespace std;

bool checkBloom(vector<int>& arr, int m, int k, int day)
{
    int flowers = 0;
    int bouquets = 0;

    for(int x : arr)
    {
        if(x <= day)
        {
            flowers++;

            if(flowers == k)
            {
                bouquets++;
                flowers = 0;
            }
        }
        else
        {
            flowers = 0;
        }
    }

    return bouquets >= m;
}

int optimal_app(vector<int>& arr,int m,int k){

    int n=arr.size();

    int mini=*min_element(arr.begin(),arr.end());
    int maxi=*max_element(arr.begin(),arr.end());

    int low=mini,high=maxi;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(checkBloom(arr,m,k,mid)) high=mid-1;
        else low=mid+1;

    }

    return low;

}

int main(){

    vector<int> arr={1,10,3,10,2};
    int m=3,k=1;

    int ans=optimal_app(arr,m,k);

    cout<<"answer: "<<ans;

}
