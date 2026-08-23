#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b){

    int start=max(a,b);

    while((start%a!=0) || (start%b!=0)) start++;
    return start;

}

int brute_app(int n){

    int sum=0;
    for(int i=1;i<=n;i++) sum+=lcm(i,n);

    return sum;

}

int main(){

    int n=5;
    int ans=brute_app(n);

    cout<<"LCM: "<<ans;

}
