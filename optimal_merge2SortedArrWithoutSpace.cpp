#include<bits/stdc++.h>
using namespace std;

void optimal_app(vector<int>& a,int n,vector<int> b,int m){

    int i=n-1,j=0;

    while(i>=0 && j<m){

        if(a[i]>=b[j]) swap(a[i--],b[j++]);
        else break;

    }

    sort(a.begin(),a.end()-b.size());
    sort(b.begin(),b.end());

    int k=0;
    for(int i=n;i<n+m;i++) a[i]=b[k++];

}

int main(){

    vector<int> a={2,4,6,8,0,0};
    vector<int> b={3,5};

    optimal_app(a,a.size()-b.size(),b,b.size());

    for(int x: a) cout<<x<<" ";

}
