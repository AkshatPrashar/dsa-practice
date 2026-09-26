#include<bits/stdc++.h>
using namespace std;

double multiply(int n,double mid){

    double ans=1.0;

    for(int i=1;i<=n;i++) ans*=mid;

    return ans;

}

double optimal_app(int n,int m){

    double low=1,high=m;
    double eps=1e-6;

    while((high-low)>eps){

        double mid=low+(high-low)/2.0;

        if(multiply(n,mid)<m) low=mid;
        else high=mid;

    }

    return low;

}

int main(){

    int n=5,m=7567;
    double ans=optimal_app(5,7567);

    cout<<n<<"th root of "<<m<<" is: "<<ans;

}
