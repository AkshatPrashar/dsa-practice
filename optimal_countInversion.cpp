#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>& arr,int low,int mid,int high){

    int cnt=0;
    vector<int> a;
    int sa=low,ea=mid,sb=mid+1,eb=high;

    while(sa<=ea && sb<=eb){

        if(arr[sa]<=arr[sb]) a.push_back(arr[sa++]);
        else{

            cnt+=mid-sa+1;
            a.push_back(arr[sb++]);

        }
    }

    for(;sa<=ea;sa++) a.push_back(arr[sa]);
    for(;sb<=eb;sb++) a.push_back(arr[sb]);

    for(int i=low;i<=high;i++) arr[i]=a[i-low];

    return cnt;

}

int ms(vector<int>& arr,int low,int high){

    int cnt=0;
    if(low<high){

        int mid=low+(high-low)/2;
        cnt+=ms(arr,low,mid);
        cnt+=ms(arr,mid+1,high);
        cnt+=merge(arr,low,mid,high);
        
    }
    return cnt;

}

int optimal_app(vector<int>& arr,int n){

    return ms(arr,0,n-1);

}

int main(){

    vector<int> arr={8,4,3,2};
    int ans=optimal_app(arr,arr.size());

    cout<<"Inversions: "<<ans;

}
