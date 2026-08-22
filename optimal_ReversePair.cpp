#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int low,int mid,int high){

    vector<int> a;
    int sa=low,ea=mid,sb=mid+1,eb=high;

    while(sa<=ea && sb<=eb){

        if(arr[sa]<=arr[sb]) a.push_back(arr[sa++]);
        else a.push_back(arr[sb++]);

    }

    for(;sa<=ea;sa++) a.push_back(arr[sa]);
    for(;sb<=eb;sb++) a.push_back(arr[sb]);

    for(int i=low;i<=high;i++) arr[i]=a[i-low];

}

int countPairs(vector<int>& arr,int low,int mid,int high){

    int cnt=0;
    int right=mid+1;

    for(int i=low;i<=mid;i++){

        while(right<=high && arr[i]>2LL*arr[right]) right++;
        cnt+=right-(mid+1);

    }

    return cnt;

}

int ms(vector<int>& arr,int low,int high){

    int cnt=0;
    if(low<high){

        int mid=low+(high-low)/2;
        cnt+=ms(arr,low,mid);
        cnt+=ms(arr,mid+1,high);
        cnt+=countPairs(arr,low,mid,high);
        merge(arr,low,mid,high);

    }
    return cnt;

}

int optimal_app(vector<int>& arr,int n){

    return ms(arr,0,n-1);

}

int brute_app(vector<int>& arr,int n){

    int cnt=0;

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(arr[i]>2*arr[j]) cnt++;

        }

    }

    return cnt;

}

int main(){

    vector<int> arr={40,30,20,5,6,3};

    //int ans=brute_app(arr,arr.size());
    int ans=optimal_app(arr,arr.size());

    cout<<"Pairs: "<<ans;

}
