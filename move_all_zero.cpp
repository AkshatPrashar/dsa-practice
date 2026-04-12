#include<bits/stdc++.h>
using namespace std;

void move_all_zero(vector<int>& arr,int n){
    int low=0,high=1;

    while(high<n){
        if(arr[low]!=0 && arr[high]==0){
            low++;
            high++;
        }
        else if(arr[low]==0 && arr[high]!=0){
            swap(arr[low],arr[high]);
            low++;
            high++;
        }
        else if(arr[low]==0 && arr[high]==0){
            high++;
        }
        else{
            low++;
            high++;
        }
    }

}

int main(){
    vector<int> arr={1,0,0,0,1,2,3,2,0};
    move_all_zero(arr,arr.size());

    for(int x:arr) cout<<x<<" ";
}