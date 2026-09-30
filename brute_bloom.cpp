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

int brute_app(vector<int>& arr,int m,int k){

    int s=arr.size();

    if(m*k>s) return -1;
    int mini=*min_element(arr.begin(),arr.end());
    int maxi=*max_element(arr.begin(),arr.end());

    for(int i=mini;i<maxi;i++){

        if(checkBloom(arr,m,k,i)){

            return i;

        }

    }

    return -1;

}

int main(){

    vector<int> arr={1,10,3,10,2};
    int m=3,k=1;

    int ans=brute_app(arr,m,k);

    cout<<"answer: "<<ans;

}
