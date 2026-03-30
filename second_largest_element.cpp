#include<bits/stdc++.h>
using namespace std;

int find_sec_largest(vector<int>& arr,int n){
    int largest=arr[0];
    int slargest=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }

    return slargest;
}

int main(){
    vector<int> arr={6,6,6,6,6,6};

    int s_largest_ele=find_sec_largest(arr,arr.size());

    cout<<"Second largest: "<<s_largest_ele<<"\n";

}
