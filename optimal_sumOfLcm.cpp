#include<bits/stdc++.h>
using namespace std;

int lcm2(int a,int b){

    return (a*b)/__gcd(a,b);

}

int optimal_app(int n){

    int sum=0;
    for(int i=1;i<=n;i++) sum+=lcm2(i,n);

    return sum;

}

int main(){

    int n=5;
    int ans=optimal_app(n);

    cout<<"LCM: "<<ans;

}
