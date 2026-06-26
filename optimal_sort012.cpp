#include<bits/stdc++.h>
using namespace std;

void optimal_sort012(vector<int>& arr){

    int low=0,mid=0,high=arr.size()-1;

    while(mid<=high){

        if(arr[mid]==0){

            swap(arr[mid++],arr[low++]);

        }
        else if(arr[mid]==1){

            mid++;

        }
        else if(arr[mid]==2){

            swap(arr[mid],arr[high--]);

        }


    }


}


int main(){

    vector<int> arr={1,2,0,0,1,1,2,1};
    
    optimal_sort012(arr);

    for(int x: arr) cout<<x<<" ";

}
