#include<bits/stdc++.h>
using namespace std;

void brute_app(vector<int>& a,int n,vector<int> b,int m){

    vector<int> c;

    int i=0,j=0;
    while(i<n-m && j<m){

        if(a[i]<=b[j]) c.push_back(a[i++]);
        else c.push_back(b[j++]);

    }

    for(;i<n;i++) c.push_back(a[i]);
    for(;j<m;j++) c.push_back(b[j]);

    for(int x=0;x<c.size();x++) a[x]=c[x];

}

int main(){

    vector<int> a={2,4,6,8,0,0};
    vector<int> b={3,5};

    brute_app(a,a.size(),b,b.size());

    for(int x: a) cout<<x<<" ";

}
