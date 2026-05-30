#include<bits/stdc++.h>
using namespace std;

int optimal_max_subArray(vector<int> arr,int k){
    int left=0,right=0;
    int maxlen=0,sum=arr[0],n=arr.size();

    while(right<n){

        while(left<right && sum>k){
            sum-=arr[left];
            left++;
        }
        
        if(sum==k){
            maxlen=max(maxlen,(right-left+1));
        }

        right++;
        sum+=arr[right];


    }


}

int main(){
    vector<int> arr={1,2,0,0};
    int k=3;
    int len=optimal_max_subArray(arr,k);

    cout<<"Max length of Array: "<<len;
}
