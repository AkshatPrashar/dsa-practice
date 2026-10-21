#include<bits/stdc++.h>
using namespace std;

int brute_app(vector<int>& a,int n,vector<int>& b,int m){

    int x=-1,y=-1;

    if((n+m)%2==0){

        x=(n+m-1)/2,y=(n+m)/2;

    }else x=(n+m-1)/2,y=(n+m-1)/2;

    int i=0,j=0,ans1=-1,ans2=-1;

    while(i<n && j<m){

        if(a[i]<=b[j]){

            if((i+j)==x) ans1=a[i];
            if((i+j)==y) ans2=a[i];

            i++;

        }
        else{

            if((i+j)==x) ans1=b[j];
            if((i+j)==y) ans2=b[j];

            j++;
        }

    }

    for(;i<n;i++){

        if((i+j)==x) ans1=a[i];
        if((i+j)==y) ans2=a[i];

    }

    for(;j<m;j++){

        if((i+j)==x) ans1=b[j];
        if((i+j)==y) ans2=b[j];

    }

    return (ans1+ans2)/2;

}

int main(){

    vector<int> a={1,2,2,4,6};
    vector<int> b={3,8,9,10,15};

    int ans=brute_app(a,a.size(),b,b.size());

    cout<<"Median: "<<ans;

}
